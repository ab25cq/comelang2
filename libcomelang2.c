#include "common.h"
#include <libgen.h>
//#include <gc.h>

//////////////////////////////
/// exception
//////////////////////////////

char* gComeStackFrameSName[COME_STACKFRAME_MAX];
int gComeStackFrameSLine[COME_STACKFRAME_MAX];
int gNumComeStackFrame = 0;

buffer* gComeStackFrameBuffer = NULL;

void come_push_stackframe(char* sname, int sline)
{
    if(gNumComeStackFrame == COME_STACKFRAME_MAX) {
        int i;
        for(i=0; i<COME_STACKFRAME_MAX-1; i++) {
            gComeStackFrameSName[i] = gComeStackFrameSName[i+1];
            gComeStackFrameSLine[i] = gComeStackFrameSLine[i+1];
        }
        gComeStackFrameSName[i] = sname;
        gComeStackFrameSLine[i] = sline;
    }
    else {
        gComeStackFrameSName[gNumComeStackFrame] = sname;  // const string
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
    
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline)
{
    if(gComeStackFrameBuffer) {
        gComeStackFrameBuffer.reset();
        gComeStackFrameBuffer.append_str(xsprintf("%s %d\n", sname, sline));
        for(int i=gNumComeStackFrame-2; i>=0; i--) {
            gComeStackFrameBuffer.append_str(xsprintf("%s %d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i]));
        }
    }
}

void exception_stackframe()
{
    printf("%s", gComeStackFrameBuffer.to_string());
}

void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i]);
    }
}

string come_get_stackframe()
{
    return gComeStackFrameBuffer.to_string();
}

void* come_null_check(void* mem, char* sname, int sline)
{
    if(mem == null) {
        printf("%s %d: null check error\n", sname, sline);
        stackframe();
        exit(2);
    }
    
    return mem;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline)
{
    if(mem == null) {
        printf("%s %d: null check error\n", sname, sline);
        stackframe();
        exit(2);
    }
    
    if(mem < begin) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }
    
    if(mem >= end) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }
    
    return mem;
}

bool bool::expect(bool self, void* parent, void (*block)(void* parent)) 
{
    if(!self) {
        block(parent);
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
        stackframe();
        exit(1);
    }
    
    return self;
}

bool bool::value(bool self)
{
    return self;
}

int int::catch(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
        
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
    }
    
    return self;
}

int int::expect(int self, void* parent, void (*block)(void* parent)) 
{
    if(self < 0) {
        block(parent);
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
        stackframe();
        exit(1);
    }
    
    return self;
}

int int::value(int self)
{
    return self;
}

int int::except(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
    }

    return self;
}

bool bool::except(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
    }

    return self;
}

bool bool::catch(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
        
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return self;
        }
    }
   
    return self;
}

void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

//////////////////////////////
/// heap
//////////////////////////////
#define HEAP_POOL_PAGE_SIZE 4048

static bool gComeMallocLib = false;
static bool gComeDebugLib = false;

#define DUMMY_SIZE 1024

struct sMemHeader
{
    void* mem;
    char* caller_sname[COME_STACKFRAME_MAX];
    int caller_sline[COME_STACKFRAME_MAX];
};

sMemHeader* gMemHeaderTable;

size_t gSizeMemHeaders = 0;
size_t gNumMemHeaders = 0;

void come_heap_init(int come_malloc, int come_debug)
{
    gComeStackFrameBuffer = borrow gc_inc(new buffer());
    
    gComeMallocLib = come_malloc;
    gComeDebugLib = come_debug
    
    if(gComeMallocLib) {
        gSizeMemHeaders = 1024;
        
        gMemHeaderTable = calloc(1, sizeof(sMemHeader)*gSizeMemHeaders);
        gNumMemHeaders = 0;
    }
}

void come_heap_final()
{
    delete borrow gComeStackFrameBuffer;
    
    if(gComeMallocLib) {
        FILE* f = fopen(s"memleak.log", "w") and die("fopen");
        
        sMemHeader* it = gMemHeaderTable;
        while(it < gMemHeaderTable + gSizeMemHeaders) {
            if(it->mem) {
                for(int i=0; i<COME_STACKFRAME_MAX ; i++) {
                    if(it->caller_sname[i]) {
                        fprintf(f, "%s %d", it->caller_sname[i], it->caller_sline[i]);
                        if(i == COME_STACKFRAME_MAX-1) {
                        }
                        else {
                            fprintf(f, ", ");
                        }
                    }
                }
                fprintf(f, ": detecting memory leak(%p)\n", (char*)it->mem);
            }
            
            it++;
        }
        
        fclose(f);
    }
}

static void come_mem_header_rehash()
{
    size_t new_size = gSizeMemHeaders * 3;
    sMemHeader* new_table = calloc(1, sizeof(sMemHeader)*new_size);
    
    sMemHeader* it = gMemHeaderTable;
    while(it < gMemHeaderTable + gSizeMemHeaders) {
        if(it->mem) {
            size_t key = (size_t)it->mem % (size_t)new_size;
            
            sMemHeader* it2 = new_table + key;
            
            while(true) {
                if(it2->mem == null) {
                    break;
                }
                else {
                    it2++;
                    
                    if(it2 == new_table + new_size) {
                        it2 = new_table;
                    }
                    else if(it2 == new_table + key) {
                        puts("mem header unexpected error");
                        stackframe();
                        exit(2);
                    }
                }
            }
            
            *it2 = *it;
        }
        
        it++;
    }
    
    free(gMemHeaderTable);
    
    gMemHeaderTable = new_table;
    gSizeMemHeaders = new_size;
}

static void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0)
{
    if(!gComeMallocLib) {
        return calloc(1, size);
    }
    else {
        void* result = calloc(1, size);
        
        if(gNumMemHeaders >= gSizeMemHeaders / 3) {
            come_mem_header_rehash();
        }
        
        size_t key = (size_t)result % gSizeMemHeaders;
        
        sMemHeader* it = gMemHeaderTable + key;
        
        while(true) {
            if(it->mem == null) {
                break;
            }
            else {
                it++;
                
                if(it == gMemHeaderTable + gSizeMemHeaders) {
                    it = gMemHeaderTable;
                }
                else if(it == gMemHeaderTable + key) {
                    puts("mem header unexpected error");
                    stackframe();
                    exit(2);
                }
            }
        }
        
        it.mem = result;
        
        come_push_stackframe(sname, sline);
        
        memcpy(it.caller_sname, gComeStackFrameSName, sizeof(char*)*COME_STACKFRAME_MAX);
        memcpy(it.caller_sline, gComeStackFrameSLine, sizeof(int)*COME_STACKFRAME_MAX);
        
        come_pop_stackframe();
        
        gNumMemHeaders++;
        
        return result;
    }
}

static void come_free_mem_of_heap_pool(char* mem)
{
    if(mem) {
        if(!gComeMallocLib) {
            free(mem);
        }
        else {
            size_t key = (size_t)mem % gSizeMemHeaders;
            
            sMemHeader* it = gMemHeaderTable + key;
            
            while(true) {
                if(it->mem == null) {
                    return;
                }
                else if(it->mem == mem) {
                    break;
                }
                else {
                    it++;
                    
                    if(it == gMemHeaderTable + gSizeMemHeaders) {
                        it = gMemHeaderTable;
                    }
                    else if(it == gMemHeaderTable + key) {
                        return;
                    }
                }
            }
            
            memset(it, 0, sizeof(sMemHeader));
            
            free(mem);
            
            gNumMemHeaders--;
        }
    }
}

static bool is_valid_object(char* mem) 
{
    if(mem) {
        if(!gComeMallocLib) {
            return true;
        }
        else {
            char* mem2 = mem - sizeof(size_t) - sizeof(size_t);
            
            size_t key = (size_t)mem2 % gSizeMemHeaders;
            
            sMemHeader* it = gMemHeaderTable + key;
            
            while(true) {
                if(it->mem == null) {
                    return false;
                }
                else if(it->mem == mem2) {
                    return true;
                }
                else {
                    it++;
                    
                    if(it == gMemHeaderTable + gSizeMemHeaders) {
                        it = gMemHeaderTable;
                    }
                    else if(it == gMemHeaderTable + key) {
                        return false;
                    }
                }
            }
        }
    }
    
    return false;
}

void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0)
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline);
    
    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;
    
    size_t* size2 = (size_t*)(mem + sizeof(size_t));
    
    *size2 = size*count + sizeof(size_t) + sizeof(size_t);

    return mem + sizeof(size_t) + sizeof(size_t);
}

void come_free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return;
        }
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    come_free_mem_of_heap_pool((char*)ref_count);
}

void* come_memdup(void* block, char* sname=null, int sline=0)
{
    if(!block) {
        return null;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(block)) {
            return null;
        }
    }

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);
    
    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);

    void* result = come_calloc(1, size, sname, sline);

    memcpy(result, block, size);
    
    return result;
}

void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return null;
        }
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    (*ref_count)++;
    
    return mem;
}

void* come_print_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return mem;
        }
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    printf("ref_count %ld\n", *ref_count);
    
    return mem;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_)
{
    if(mem == NULL) {
        return NULL;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return NULL;
        }
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    if(!no_decrement) {
        (*ref_count)--;
    }
    
    size_t count = *ref_count;
    if(!no_free && (count <= 0 || force_delete_)) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);
            
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return NULL;
    }
    
    return mem;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_)
{
    if(mem == NULL) {
        return;
    }
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return;
        }
    }
    
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

bool come_is_contained_element(void** array, int len, void* element)
{
    bool found = false;
    for(int i=0; i<len; i++) {
        if(array[i] == element) {
            found = true;
            break;
        }
    }
    return found;
}

//////////////////////////////
// buffer
//////////////////////////////
buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}
void buffer*::force_finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    var result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

int buffer*::length(buffer* self) 
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;
    
    return self;
}

buffer* buffer*::append_int(buffer* self, int value) 
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_long(buffer* self, long value) 
{
    long* mem = &value;
    int size = sizeof(long);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_short(buffer* self, short value) 
{
    if(self == null) {
        return null;
    }
    
    short* mem = &value;
    int size = sizeof(short);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::alignment(buffer* self) 
{
    if(self == null) {
        return null;
    }
    
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
    
    return self;
}

exception int buffer*::compare(buffer* left, buffer* right) 
{
    if(left == null && right == null) {
        return none(0);
    }
    else if(left == null) {
        return none(-1);
    }
    else if(right == null) {
        return none(1);
    }
    
    return strcmp(left.buf, right.buf);
}

buffer*% string::to_buffer(char* self) 
{
    var result = new buffer.initialize();
    
    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

buffer*% char*::to_buffer(char* self) 
{
    var result = new buffer.initialize();
    
    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }
    
    return string(self.buf);
}

//////////////////////////////
/// base library(equals)
//////////////////////////////
bool bool::equals(bool self, bool right) 
{
    return self == right;
}

bool int::equals(int self, int right) 
{
    return self == right;
}

bool char::equals(char self, char right) 
{
    return self == right;
}

bool short::equals(short self, short right) 
{
    return self == right;
}

bool long::equals(long self, long right) 
{
    return self == right;
}

bool size_t::equals(size_t self, size_t right) 
{
    return self == right;
}

bool float::equals(float self, float right) 
{
    return self == right;
}

bool double::equals(double self, double right) 
{
    return self == right;
}

exception bool string::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return none(true);
    }
    else if(self == null) {
        return none(false);
    }
    else if(right == null) {
        return none(false);
    }
    
    return strcmp(self, right) == 0;
}

exception bool char*::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return none(true);
    }
    else if(self == null) {
        return none(false);
    }
    else if(right == null) {
        return none(false);
    }
    
    return strcmp(self, right) == 0;
}

bool string::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

bool char*::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

bool string::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}

bool char*::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}


string char*::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

string string::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

string char*::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

string string::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

//////////////////////////////
/// base library(get_hash key)
//////////////////////////////
unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

unsigned int char::get_hash_key(char value)
{
    return value;
}

unsigned int short::get_hash_key(short int value)
{
    return value;
}

unsigned int int::get_hash_key(int value)
{
    return value;
}

unsigned int long::get_hash_key(long value)
{
    return value;
}

unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

//////////////////////////////
/// base library(clone)
//////////////////////////////
bool bool::clone(bool self)
{
    return self;
}

char char::clone(char self)
{
    return self;
}

short int short::clone(short self)
{
    return self;
}

int int::clone(int self)
{
    return self;
}

long int long::clone(long self)
{
    return self;
}

size_t size_t::clone(size_t self)
{
    return self;
}

double double::clone(double self)
{
    return self;
}

float float::clone(float self)
{
    return self;
}

string char*::clone(char* self)
{
    if(self == null) { return null; }
    return string(self);
}

string string::clone(char* self)
{
    if(self == null) { return null; }
    
    return string(self);
}

//////////////////////////////
/// base library(character code)
//////////////////////////////
bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

string string::reverse(char* str) 
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

string char*::reverse(char* str) 
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}
string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

string string::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);
    
    if(len < 0) {
        return string("");
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

string char*::delete(char* str, int head, int tail) 
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

string string::delete(char* str, int head, int tail) 
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

list<string>*% char*::split_char(char* self, char c) 
{
    if(self == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

list<string>*% string::split_char(char* self, char c) 
{
    if(self == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

//////////////////////////////
/// base library(path library)
//////////////////////////////
string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

string xdirname(char* path)
{
    if(path == null) {
        return string("");
    }
    return string(dirname(string(path)));
}

string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);
    
    char* p = path2 + strlen(path2);
    
    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }
    
    return string("");
}

string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

string xrealpath(char* path)
{
    if(path == null) {
        return string("");
    }
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

//////////////////////////////
/// base library(to_string)
//////////////////////////////
string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

string char::to_string(char self)
{
    return xsprintf("%c", self);
}

string short::to_string(short self)
{
    return xsprintf("%d", self);
}

string int::to_string(int self)
{
    return xsprintf("%d", self);
}

string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

string float::to_string(float self)
{
    return xsprintf("%f", self);
}

string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

//////////////////////////////
/// base library(compare)
//////////////////////////////
int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

int char::compare(char left, char right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int short::compare(short left, short right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int int::compare(int left, int right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int long::compare(long left, long right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int size_t::compare(size_t left, size_t right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int float::compare(float left, float right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int double::compare(double left, double right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int string::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

int char*::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

//////////////////////////////
// base library(IO-FILE)
//////////////////////////////
exception string FILE*::read(FILE* f)
{
    if(f == null) {
        return none(string(""));
    }
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

exception int FILE*::write(FILE* f, char* str)
{
    if(f == null || str == null) {
        return none(-1);
    }
    
    return fwrite(str, strlen(str), 1, f);
}

exception int FILE*::fclose(FILE* f) 
{
    if(f == null) {
        return none(-1); 
    }
    
    int result = fclose(f);
    
    if(result < 0) {
        return none(result);
    }
    
    return result;
}

exception FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    if(f == null || msg == null) {
        return none(f);
    }
    char msg2[1024*2*2*2];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024*2*2*2, msg, args);
    va_end(args);

    int result = fprintf(f, "%s", msg2);
    
    if(result < 0) {
        return none(result);
    }
    
    return f;
}

exception int string::write(char* self, char* file_name, bool append=false) 
{
    if(self == null || file_name == null) {
        return none(-1);
    }
    
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    if(f == NULL) {
        return none(-1);
    }
    
    int result = fwrite(self, strlen(self), 1, f);
    
    if(result < 0) {
        return none(result);
    }
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return none(result2);
    }
    
    return result;
}

exception int char*::write(char* self, char* file_name, bool append=false) 
{
    if(self == null || file_name == null) {
        return none(-1);
    }
    
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    if(f == NULL) {
        return none(-1);
    }
    
    int result = fwrite(self, strlen(self), 1, f);
    
    if(result < 0) {
        return none(result);
    }
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return none(result2);
    }
    
    return result;
}

exception string string::read(char* file_name) 
{
    if(file_name == null) {
        return none(string(""));
    }
    
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return none(string(""));
    }
    
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    string result = buf.to_string();
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return none(string(""));
    }
    
    return result;
}

exception string char*::read(char* file_name) 
{
    if(file_name == null) {
        return none(string(""));
    }
    
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return none(string(""));
    }
    
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    string result = buf.to_string();
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return none(string(""));
    }
    
    return result;
}

exception list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();
    
    if(f == null) {
        return none(result);
    }
    
    while(1) {
        char buf[BUFSIZ];
        
        if(fgets(buf, BUFSIZ, f) == NULL) {
            break;
        }
        
        result.push_back(string(buf));
    }
    
    return result;
}

exception int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f))
{
    if(path == null || mode == null) {
        return none(-1);
    }
    FILE* f = fopen(path, mode);
    
    if(f) {
        block(parent, f);
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            fclose(f);
            return 0;
        }
        
        fclose(f);
        
        return 0;
    }
    
    return none(-1);
}

//////////////////////////////
// base library(STDOUT, STDIN)
//////////////////////////////
exception string char*::puts(char* self)
{
    if(self == null) {
        return none(-1);
    }
    puts(self);
    
    return string(self);
}

exception string char*::print(char* self)
{
    if(self == null) {
        return none(-1);
    }
    printf("%s", self);
    
    return string(self);
}


exception string string::printf(char* self, ...)
{
    if(self == null) {
        return none(string(""));
    }
    char* msg2;

    va_list args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);
    
    printf("%s", msg2);

    free(msg2);
    
    return string(self);
}

exception string char*::printf(char* self, ...)
{
    if(self == null) {
        return none(string(""));
    }
    char* msg2;

    va_list args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);
    
    printf("%s", msg2);

    free(msg2);
    
    return string(self);
}

int int::printf(int self, char* msg)
{
    printf(msg, self);
    
    return self;
}

exception string string::puts(char* self) 
{
    if(self == null) {
        return none(string(""));
    }
    puts(self);
    
    return string(self);
}

//////////////////////////////
/// loop
//////////////////////////////
void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
        
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return;
        }
    }
}
