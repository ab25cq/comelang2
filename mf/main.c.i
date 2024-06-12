# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "./common.h" 1


# 1 "/usr/local/include/neo-c.h" 1 3






# 6 "/usr/local/include/neo-c.h" 3
using C
{
# 1 "/usr/include/fortify/stdio.h" 1 3 4
# 21 "/usr/include/fortify/stdio.h" 3 4
__extension__

# 1 "/usr/include/stdio.h" 1 3 4







# 1 "/usr/include/features.h" 1 3 4
# 9 "/usr/include/stdio.h" 2 3 4
# 26 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 58 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long size_t;
# 73 "/usr/include/bits/alltypes.h" 3 4
typedef long ssize_t;
# 170 "/usr/include/bits/alltypes.h" 3 4
typedef long off_t;
# 328 "/usr/include/bits/alltypes.h" 3 4
typedef struct _IO_FILE FILE;





typedef __builtin_va_list va_list;




typedef __builtin_va_list __isoc_va_list;
# 27 "/usr/include/stdio.h" 2 3 4
# 56 "/usr/include/stdio.h" 3 4
typedef union _G_fpos64_t {
 char __opaque[16];
 long long __lldata;
 double __align;
} fpos_t;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;





FILE *fopen(const char *restrict, const char *restrict);
FILE *freopen(const char *restrict, const char *restrict, FILE *restrict);
int fclose(FILE *);

int remove(const char *);
int rename(const char *, const char *);

int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
void clearerr(FILE *);

int fseek(FILE *, long, int);
long ftell(FILE *);
void rewind(FILE *);

int fgetpos(FILE *restrict, fpos_t *restrict);
int fsetpos(FILE *, const fpos_t *);

size_t fread(void *restrict, size_t, size_t, FILE *restrict);
size_t fwrite(const void *restrict, size_t, size_t, FILE *restrict);

int fgetc(FILE *);
int getc(FILE *);
int getchar(void);
int ungetc(int, FILE *);

int fputc(int, FILE *);
int putc(int, FILE *);
int putchar(int);

char *fgets(char *restrict, int, FILE *restrict);




int fputs(const char *restrict, FILE *restrict);
int puts(const char *);

int printf(const char *restrict, ...);
int fprintf(FILE *restrict, const char *restrict, ...);
int sprintf(char *restrict, const char *restrict, ...);
int snprintf(char *restrict, size_t, const char *restrict, ...);

int vprintf(const char *restrict, __isoc_va_list);
int vfprintf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsprintf(char *restrict, const char *restrict, __isoc_va_list);
int vsnprintf(char *restrict, size_t, const char *restrict, __isoc_va_list);

int scanf(const char *restrict, ...);
int fscanf(FILE *restrict, const char *restrict, ...);
int sscanf(const char *restrict, const char *restrict, ...);
int vscanf(const char *restrict, __isoc_va_list);
int vfscanf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsscanf(const char *restrict, const char *restrict, __isoc_va_list);

void perror(const char *);

int setvbuf(FILE *restrict, char *restrict, int, size_t);
void setbuf(FILE *restrict, char *restrict);

char *tmpnam(char *);
FILE *tmpfile(void);




FILE *fmemopen(void *restrict, size_t, const char *restrict);
FILE *open_memstream(char **, size_t *);
FILE *fdopen(int, const char *);
FILE *popen(const char *, const char *);
int pclose(FILE *);
int fileno(FILE *);
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
int dprintf(int, const char *restrict, ...);
int vdprintf(int, const char *restrict, __isoc_va_list);
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);
ssize_t getdelim(char **restrict, size_t *restrict, int, FILE *restrict);
ssize_t getline(char **restrict, size_t *restrict, FILE *restrict);
int renameat(int, const char *, int, const char *);
char *ctermid(char *);







char *tempnam(const char *, const char *);




char *cuserid(char *);
void setlinebuf(FILE *);
void setbuffer(FILE *, char *, size_t);
int fgetc_unlocked(FILE *);
int fputc_unlocked(int, FILE *);
int fflush_unlocked(FILE *);
size_t fread_unlocked(void *, size_t, size_t, FILE *);
size_t fwrite_unlocked(const void *, size_t, size_t, FILE *);
void clearerr_unlocked(FILE *);
int feof_unlocked(FILE *);
int ferror_unlocked(FILE *);
int fileno_unlocked(FILE *);
int getw(FILE *);
int putw(int, FILE *);
char *fgetln(FILE *, size_t *);
int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, __isoc_va_list);



char *fgets_unlocked(char *, int, FILE *);
int fputs_unlocked(const char *, FILE *);

typedef ssize_t (cookie_read_function_t)(void *, char *, size_t);
typedef ssize_t (cookie_write_function_t)(void *, const char *, size_t);
typedef int (cookie_seek_function_t)(void *, off_t *, int);
typedef int (cookie_close_function_t)(void *);

typedef struct _IO_cookie_io_functions_t {
 cookie_read_function_t *read;
 cookie_write_function_t *write;
 cookie_seek_function_t *seek;
 cookie_close_function_t *close;
} cookie_io_functions_t;

FILE *fopencookie(void *, const char *, cookie_io_functions_t);
# 24 "/usr/include/fortify/stdio.h" 2 3 4
# 9 "/usr/local/include/neo-c.h" 2 3
# 1 "/usr/include/fortify/stdlib.h" 1 3 4
# 21 "/usr/include/fortify/stdlib.h" 3 4
__extension__

# 1 "/usr/include/stdlib.h" 1 3 4
# 21 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 15 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned wchar_t;
# 22 "/usr/include/stdlib.h" 2 3 4

int atoi (const char *);
long atol (const char *);
long long atoll (const char *);
double atof (const char *);

float strtof (const char *restrict, char **restrict);
double strtod (const char *restrict, char **restrict);
long double strtold (const char *restrict, char **restrict);

long strtol (const char *restrict, char **restrict, int);
unsigned long strtoul (const char *restrict, char **restrict, int);
long long strtoll (const char *restrict, char **restrict, int);
unsigned long long strtoull (const char *restrict, char **restrict, int);

int rand (void);
void srand (unsigned);

void *malloc (size_t);
void *calloc (size_t, size_t);
void *realloc (void *, size_t);
void free (void *);
void *aligned_alloc(size_t, size_t);

_Noreturn void abort (void);
int atexit (void (*) (void));
_Noreturn void exit (int);
_Noreturn void _Exit (int);
int at_quick_exit (void (*) (void));
_Noreturn void quick_exit (int);

char *getenv (const char *);

int system (const char *);

void *bsearch (const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void qsort (void *, size_t, size_t, int (*)(const void *, const void *));

int abs (int);
long labs (long);
long long llabs (long long);

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
typedef struct { long long quot, rem; } lldiv_t;

div_t div (int, int);
ldiv_t ldiv (long, long);
lldiv_t lldiv (long long, long long);

int mblen (const char *, size_t);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int wctomb (char *, wchar_t);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);




size_t __ctype_get_mb_cur_max(void);
# 101 "/usr/include/stdlib.h" 3 4
int posix_memalign (void **, size_t, size_t);
int setenv (const char *, const char *, int);
int unsetenv (const char *);
int mkstemp (char *);
int mkostemp (char *, int);
char *mkdtemp (char *);
int getsubopt (char **, char *const *, char **);
int rand_r (unsigned *);






char *realpath (const char *restrict, char *restrict);
long int random (void);
void srandom (unsigned int);
char *initstate (unsigned int, char *, size_t);
char *setstate (char *);
int putenv (char *);
int posix_openpt (int);
int grantpt (int);
int unlockpt (int);
char *ptsname (int);
char *l64a (long);
long a64l (const char *);
void setkey (const char *);
double drand48 (void);
double erand48 (unsigned short [3]);
long int lrand48 (void);
long int nrand48 (unsigned short [3]);
long mrand48 (void);
long jrand48 (unsigned short [3]);
void srand48 (long);
unsigned short *seed48 (unsigned short [3]);
void lcong48 (unsigned short [7]);



# 1 "/usr/include/alloca.h" 1 3 4
# 9 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 10 "/usr/include/alloca.h" 2 3 4

void *alloca(size_t);
# 141 "/usr/include/stdlib.h" 2 3 4
char *mktemp (char *);
int mkstemps (char *, int);
int mkostemps (char *, int, int);
void *valloc (size_t);
void *memalign(size_t, size_t);
int getloadavg(double *, int);
int clearenv(void);


void *reallocarray (void *, size_t, size_t);
void qsort_r (void *, size_t, size_t, int (*)(const void *, const void *, void *), void *);



int ptsname_r(int, char *, size_t);
char *ecvt(double, int, int *, int *);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
char *secure_getenv(const char *);
struct __locale_struct;
float strtof_l(const char *restrict, char **restrict, struct __locale_struct *);
double strtod_l(const char *restrict, char **restrict, struct __locale_struct *);
long double strtold_l(const char *restrict, char **restrict, struct __locale_struct *);
# 24 "/usr/include/fortify/stdlib.h" 2 3 4
# 10 "/usr/local/include/neo-c.h" 2 3
# 1 "/usr/include/fortify/string.h" 1 3 4
# 21 "/usr/include/fortify/string.h" 3 4
__extension__

# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 351 "/usr/include/bits/alltypes.h" 3 4
typedef struct __locale_struct * locale_t;
# 26 "/usr/include/string.h" 2 3 4

void *memcpy (void *restrict, const void *restrict, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memchr (const void *, int, size_t);

char *strcpy (char *restrict, const char *restrict);
char *strncpy (char *restrict, const char *restrict, size_t);

char *strcat (char *restrict, const char *restrict);
char *strncat (char *restrict, const char *restrict, size_t);

int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);

int strcoll (const char *, const char *);
size_t strxfrm (char *restrict, const char *restrict, size_t);

char *strchr (const char *, int);
char *strrchr (const char *, int);

size_t strcspn (const char *, const char *);
size_t strspn (const char *, const char *);
char *strpbrk (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *restrict, const char *restrict);

size_t strlen (const char *);

char *strerror (int);


# 1 "/usr/include/fortify/strings.h" 1 3 4
# 20 "/usr/include/fortify/strings.h" 3 4
# 1 "/usr/include/strings.h" 1 3 4
# 12 "/usr/include/strings.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 13 "/usr/include/strings.h" 2 3 4




int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
char *index (const char *, int);
char *rindex (const char *, int);



int ffs (int);
int ffsl (long);
int ffsll (long long);


int strcasecmp (const char *, const char *);
int strncasecmp (const char *, const char *, size_t);

int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
# 21 "/usr/include/fortify/strings.h" 2 3 4
# 60 "/usr/include/string.h" 2 3 4





char *strtok_r (char *restrict, const char *restrict, char **restrict);
int strerror_r (int, char *, size_t);
char *stpcpy(char *restrict, const char *restrict);
char *stpncpy(char *restrict, const char *restrict, size_t);
size_t strnlen (const char *, size_t);
char *strdup (const char *);
char *strndup (const char *, size_t);
char *strsignal(int);
char *strerror_l (int, locale_t);
int strcoll_l (const char *, const char *, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);
void *memmem(const void *, size_t, const void *, size_t);




void *memccpy (void *restrict, const void *restrict, int, size_t);



char *strsep(char **, const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
void explicit_bzero (void *, size_t);




int strverscmp (const char *, const char *);
char *strchrnul(const char *, int);
char *strcasestr(const char *, const char *);
void *memrchr(const void *, int, size_t);
void *mempcpy(void *, const void *, size_t);

char *basename();
# 24 "/usr/include/fortify/string.h" 2 3 4
# 11 "/usr/local/include/neo-c.h" 2 3
# 1 "/usr/include/stdarg.h" 1 3 4
# 10 "/usr/include/stdarg.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 11 "/usr/include/stdarg.h" 2 3 4
# 12 "/usr/local/include/neo-c.h" 2 3
}

typedef void* any;
typedef char*% string;

void __builtin_va_start(char*);
void __builtin_va_end(char*);






struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};

void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

bool bool::expect(bool self, void* parent, void (*block)(void* parent)) ;
bool bool::catch(bool self, void* parent, void (*block)(void* parent));
bool bool::value(bool self, void* parent, void (*block)(void* parent));
int int::expect(int self, void* parent, void (*block)(void* parent)) ;
int int::catch(int self, void* parent, void (*block)(void* parent));
int int::value(int self, void* parent, void (*block)(void* parent));

int int::except(int self, void* parent, void (*block)(void* parent));
bool bool::except(bool self, void* parent, void (*block)(void* parent));

record static inline bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);

    return false;
}

void xassert(char* msg, bool test);




extern any gComeResultObject;
extern bool gComeGCLib;


void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name=null);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);

void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null);
string __builtin_string(char* str);

bool come_is_contained_element(void** array, int len, void* element);




struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values)
    {
        self.head = null;
        self.tail = null;
        self.len = 0;

        for(int i=0; i<num_value; i++) {
            self.push_back(values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    void force_finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            force_delete prev_it;
        }
    }
    list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.add(clone it.item);

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }
    void pop_front(list<T>* self) {
        if(self.len == 1) {
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;

            delete borrow litem;

            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;

            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;

            delete borrow litem;

            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;

            self.head = litem.next;
            self.head.prev = null;

            delete borrow litem;

            self.len--;
        }
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }

    string to_string(list<T>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;

            i++;

            if(i != self.length()) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }

        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*))
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return self;
            }

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }
    T& item(list<T>* self, int position, T default_value)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }

    int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }

    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len)
        {
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;

            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;

            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }

        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;

        return self;
    }
    list<T>* remove(list<T>* self, T item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;

            it = it.next;
        }

        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }

        if(head == 0 && tail == self.len)
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail)
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }

        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }

        if(position >= self.len) {
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    T& operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);

        return item;
    }
    T&?? operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* self, list<T>* right)
    {
        return self.equals(right);
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.equals(right);
    }
    bool contained(list<T>* self, T item) {
        for(var it = self.begin(); !self.end(); it = self.next())
        {
            if(it === item) {
                return true;
            }
        }

        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0)
                {
                    result.push_back(dupe it.item);

                    it = it.next;
                }
                else {
                    result.push_back(dupe it2.item);


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        result.push_back(dupe it2.item);

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        result.push_back(dupe it.item);

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                list1.push_back(dupe it.item);
                break;
            }
        }

        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);

        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% merge_list(list<T>* left, list<T>* right) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(it.item.compare(it2.item) <= 0)
                {
                    result.push_back(dupe it.item);

                    it = it.next;
                }
                else {
                    result.push_back(dupe it2.item);

                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        result.push_back(dupe it2.item);

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        result.push_back(dupe it.item);

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort(list<T>* self) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                list1.push_back(dupe it.item);
                break;
            }
        }

        auto left_list = list1.merge_sort();
        auto right_list = list2.merge_sort();

        return left_list.merge_list(right_list);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort();
    }
    list<any>*% map(list<T>* self, void* parent, any (*block)(void*, T&))
    {
        auto result = new list<any>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.push_back(block(parent, it.item));

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }

            it = it.next;
        }

        return result;
    }
    template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.push_back(block(parent, it.item));

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }

            it = it.next;
        }

        return result;
    }
    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;

                it = it.next;
            }
        }

        return result;
    }
    list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }

            it = it.next;
        }

        return result;
    }

    list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);

                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();

        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);

            if(n < self.length()-1) {
                buf.append_str(sep);
            }

            n++;
        }

        return buf.to_string();
    }
}






struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;

    list<T&>*% key_list;

    int it;
};



impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[1024]);
        self.items = borrow gc_inc(new T2[1024]);
        self.item_existance = borrow gc_inc(new bool[1024]);

        for(int i=0; i<1024; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 1024;
        self.len = 0;

        self.key_list = new list<T&>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values)
    {
        self.keys = borrow gc_inc(new T[1024]);
        self.items = borrow gc_inc(new T2[1024]);
        self.item_existance = borrow gc_inc(new bool[1024]);

        for(int i=0; i<1024; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 1024;
        self.len = 0;

        self.it = 0;

        self.key_list = new list<T&>();

        for(int i=0; i<num_keys; i++) {
            self.insert(keys\[i], values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);

        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    void force_finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    force_delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    force_delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);

        force_delete borrow self.key_list;

        force_delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }

        var result = new map<T,T2>();

        result.key_list = new list<T&>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            result.insert2(dupe it, dupe it2);
        }

        return result;
    }

    string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");

        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);

            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());

            it = it.next;

            if(it != null) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    T2& at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);

                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    self.items\[it] = null;

                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }

        return self;
    }
    int length(map<T, T2>* self) {
        return self.len;
    }

    T& begin(map<T, T2>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }

    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = it.get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2& default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    map<T,T2>* insert2(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    T2&?? operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));

        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }

    T2 operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);

        return item;
    }

    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T& it2 = right.key_list.item(n, default_value);

            if(it.equals(it2)) {
                T2&` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = left.at(it2, default_value2);

                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        return left.equals(right);
    }

    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !left.equals(right);
    }

    bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            result.insert(dupe it, dupe it2);
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            result.insert(dupe it, dupe it2);
            n++;
        }

        return result;
    }
    map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
            {
                T2&` default_value;
                memset(&default_value, 0, sizeof(T2));

                T2& it2 = left.at(it, default_value);

                result.insert(dupe it, dupe it2);
                n++;
            }
        }

        return result;
    }
    list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            result.push_back(dupe it);
        }

        return result;
    }

    list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            result.push_back(dupe it2);
        }

        return result;
    }
}




struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;

        return self;
    }

    void catch(tuple1<T>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v1) {
            block(parent);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return;
            }
        }
    }

    string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;

        return self;
    }

    T catch(tuple2<T, T2>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v2) {
            block(parent);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return clone self.v1;
            }
        }

        return clone self.v1;
    }

    string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;

        return self;
    }

    tuple2<T,T2>*% catch(tuple3<T, T2, T3>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v3) {
            block(parent);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return new tuple2<T, T2>.initialize(self.v1, self.v2);
            }
        }

        return new tuple2<T, T2>.initialize(self.v1, self.v2);
    }

    string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;

        return self;
    }

    tuple3<T,T2,T3>*% catch(tuple4<T, T2, T3, T4>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v4) {
            block(parent);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return new tuple3<T, T2, T3>.initialize(self.v1, self.v2, self.v3);
            }
        }

        return new tuple3<T, T2, T3>.initialize(self.v1, self.v2, self.v3);
    }

    string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
}


struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;

        return self;
    }

    tuple4<T,T2,T3,T4>*% catch(tuple5<T, T2, T3, T4, T5>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v5) {
            block(parent);

            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return new tuple4<T, T2, T3, T4>.initialize(self.v1, self.v2, self.v3, self.v4);
            }
        }

        return new tuple4<T, T2, T3, T4>.initialize(self.v1, self.v2, self.v3, self.v4);
    }

    string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
}




struct buffer {
    char*% buf;
    int len;
    int size;
};

buffer*% buffer*::initialize(buffer*% self);
void buffer*::finalize(buffer* self);
void buffer*::force_finalize(buffer* self);
buffer*% buffer*::clone(buffer* self);
int buffer*::length(buffer* self);
void buffer*::reset(buffer* self);
void buffer*::trim(buffer* self, int len);
buffer* buffer*::append(buffer* self, char* mem, size_t size);
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_str(buffer* self, char* str);
buffer* buffer*::append_nullterminated_str(buffer* self, char* str);
buffer* buffer*::append_int(buffer* self, int value);
buffer* buffer*::append_long(buffer* self, long value);
buffer* buffer*::append_short(buffer* self, short value);
buffer* buffer*::alignment(buffer* self);
int buffer*::compare(buffer* left, buffer* right);
buffer*% string::to_buffer(char* self);
buffer*% char*::to_buffer(char* self);
string buffer*::to_string(buffer* self);

static inline buffer*% char[]::to_buffer(char* self, size_t len)
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

static inline buffer*% short[]::to_buffer(short* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

static inline buffer*% int[]::to_buffer(int* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

static inline buffer*% long[]::to_buffer(long* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

static inline buffer*% float[]::to_buffer(float* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

static inline buffer*% double[]::to_buffer(double* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}




struct smart_pointer<T> {
    buffer*% memory;
    T* p;
};

static inline smart_pointer<char>*% buffer*::to_pointer(buffer* self)
{
    auto result = new smart_pointer<char>;

    result.memory = clone self;
    result.p = result.memory.buf;

    return result;
}

static inline smart_pointer<char>*% buffer*::to_char_pointer(buffer* self)
{
    auto result = new smart_pointer<char>;

    result.memory = clone self;
    result.p = (char*)result.memory.buf;

    return result;
}

static inline smart_pointer<short>*% buffer*::to_short_pointer(buffer* self)
{
    auto result = new smart_pointer<short>;

    result.memory = clone self;
    result.p = (short*)result.memory.buf;

    return result;
}

static inline smart_pointer<int>*% buffer*::to_int_pointer(buffer* self)
{
    auto result = new smart_pointer<int>;

    result.memory = clone self;
    result.p = (int*)result.memory.buf;

    return result;
}

static inline smart_pointer<long>*% buffer*::to_long_pointer(buffer* self)
{
    auto result = new smart_pointer<long>;

    result.memory = clone self;
    result.p = (long*)result.memory.buf;

    return result;
}

impl smart_pointer<T>
{
    smart_pointer<T>*% initialize(smart_pointer<T>*% self, void* memory, int size)
    {
        self.memory = new buffer();

        self.memory.append(memory, sizeof(T)*size);

        self.p = (T*)self.memory.buf;

        return self;
    }

    record smart_pointer<T>*% operator_add(smart_pointer<T>* self, int value)
    {
        var result = new smart_pointer<T>;

        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n + value;

        if((char*)result.p > result.memory.buf + result.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return result;
    }

    record smart_pointer<T>*% operator_sub(smart_pointer<T>* self, int value)
    {
        smart_pointer<T>*% result = new smart_pointer<T>;

        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n - value;

        if((char*)result.p < result.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return result;
    }

    T operator_derefference(smart_pointer<T>* self)
    {
        T* p = self.p;
        return *p;
    }

    record smart_pointer<T>* operator_plus_plus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + 1;

        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_minus_minus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - 1;

        if((char*)result.p < result.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_plus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + value;

        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_minus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - value;

        if((char*)result.p < result.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    bool as_bool(smart_pointer<T>* self)
    {
        using unsafe;
        bool p = *(bool*)self.p;
        return p;
    }

    char as_char(smart_pointer<T>* self)
    {
        char p = *(char*)self.p;
        return p;
    }

    short as_short(smart_pointer<T>* self)
    {
        short p = *(short*)self.p;
        return p;
    }

    int as_int(smart_pointer<T>* self)
    {
        int p = *(int*)self.p;
        return p;
    }

    long as_long(smart_pointer<T>* self)
    {
        long p = *(long*)self.p;
        return p;
    }

    float as_float(smart_pointer<T>* self)
    {
        float p = *(float*)self.p;
        return p;
    }

    double as_double(smart_pointer<T>* self)
    {
        double p = *(double*)self.p;
        return p;
    }

    string to_string(smart_pointer<T>* self)
    {
        return self.memory.to_string();
    }
}




static inline smart_pointer<char>*% char[]::to_pointer(char* self, size_t len)
{
    return new smart_pointer<char>(self, len);
}

static inline smart_pointer<short>*% short[]::to_pointer(short* self, size_t len)
{
    return new smart_pointer<short>(self, len);
}

static inline smart_pointer<int>*% int[]::to_pointer(int* self, size_t len)
{
    return new smart_pointer<int>(self, len);
}

static inline smart_pointer<long>*% long[]::to_pointer(long* self, size_t len)
{
    return new smart_pointer<long>(self, len);
}

static inline smart_pointer<float>*% float[]::to_pointer(float* self, size_t len)
{
    return new smart_pointer<float>(self, len);
}

static inline smart_pointer<double>*% double[]::to_pointer(double* self, size_t len)
{
    return new smart_pointer<double>(self, len);
}

static inline list<char>*% char[]::to_list(char* self, size_t len)
{
    return new list<char>.initialize_with_values(len, self);
}

static inline list<short>*% short[]::to_list(short* self, size_t len)
{
    return new list<short>.initialize_with_values(len, self);
}

static inline list<int>*% int[]::to_list(int* self, size_t len)
{
    return new list<int>.initialize_with_values(len, self);
}

static inline list<long>*% long[]::to_list(long* self, size_t len)
{
    return new list<long>.initialize_with_values(len, self);
}

static inline list<float>*% float[]::to_list(float* self, size_t len)
{
    return new list<float>.initialize_with_values(len, self);
}

static inline list<double>*% double[]::to_list(double* self, size_t len)
{
    return new list<double>.initialize_with_values(len, self);
}





bool bool::equals(bool self, bool right);
bool char::equals(char self, char right);
bool int::equals(int self, int right);
bool short::equals(short self, short right);
bool long::equals(long self, long right);
bool size_t::equals(long self, long right);
bool float::equals(float self, float right);
bool double::equals(double self, double right);
bool char*::equals(char* self, char* right);
bool string::equals(char* self, char* right);

bool string::operator_equals(char* self, char* right);
bool char*::operator_equals(char* self, char* right);
bool string::operator_not_equals(char* self, char* right);
bool char*::operator_not_equals(char* self, char* right);

string char*::operator_add(char* self, char* right);
string string::operator_add(char* self, char* right);
string char*::operator_mult(char* self, int right);
string string::operator_mult(char* self, int right);

static inline size_t char[]::length(char* self, size_t len)
{
    return len;
}

static inline size_t short[]::length(short* self, size_t len)
{
    return len;
}

static inline size_t int[]::length(int* self, size_t len)
{
    return len;
}

static inline size_t long[]::length(long* self, size_t len)
{
    return len;
}

static inline size_t float[]::length(float* self, size_t len)
{
    return len;
}

static inline size_t double[]::length(double* self, size_t len)
{
    return len;
}




unsigned int bool::get_hash_key(bool value);
unsigned int char::get_hash_key(char value);
unsigned int short::get_hash_key(short value);
unsigned int int::get_hash_key(int value);
unsigned int long::get_hash_key(long value);
unsigned int size_t::get_hash_key(long value);
unsigned int float::get_hash_key(float value);
unsigned int double::get_hash_key(double value);
unsigned int string::get_hash_key(char* value);
unsigned int char*::get_hash_key(char* value);




bool bool::clone(char self);
char char::clone(char self);
short int short::clone(short self);
int int::clone(int self);
long int long::clone(long self);
size_t size_t::clone(long self);
double double::clone(double self);
float float::clone(float self);
string char*::clone(char* self);
string string::clone(char* self);




bool xiswascii(wchar_t c);
bool xiswalpha(wchar_t c);
bool xiswblank(wchar_t c);
bool xiswdigit(wchar_t c);
bool xiswalnum(wchar_t c);
bool xisalpha(char c);
bool xisblank(char c);
bool xisdigit(char c);
bool xisalnum(char c);
bool xisascii(char c);
bool xisalpha(char c);




int string::length(char* str);
int char*::length(char* str);
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
string string::operator_load_range_element(char* str, int head, int tail);
string char*::operator_load_range_element(char* str, int head, int tail);
string char*::reverse(char* str) ;
string string::reverse(char* str) ;
string xsprintf(char* msg, ...);

static inline string string::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

static inline string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

static inline string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}

string char*::delete(char* str, int head, int tail) ;
string string::delete(char* str, int head, int tail);
list<string>*% string::split_char(char* self, char c) ;
list<string>*% char*::split_char(char* self, char c);




string xrealpath(char* path);
string xbasename(char* path);
string xextname(char* path);
string xdirname(char* path);
string xnoextname(char* path);




string bool::to_string(bool self);
string char::to_string(char self);
string short::to_string(short self);
string int::to_string(int self);
string long::to_string(long self);
string size_t::to_string(size_t self);
string float::to_string(float self);
string double::to_string(double self);
string string::to_string(char* self);
string char*::to_string(char* self);




int bool::compare(bool left, bool right);
int char::compare(char left, char right);
int short::compare(short left, short right);
int int::compare(int left, int right);
int long::compare(long left, long right);
int float::compare(float left, float right);
int double::compare(float left, float right);
int size_t::compare(long left, long right);
int string::compare(char* left, char* right);
int char*::compare(char* left, char* right);




int FILE*::write(FILE* f, char* str);
string FILE*::read(FILE* f);
int FILE*::fclose(FILE* f) ;
int* FILE*::fprintf(FILE* f, const char* msg, ...);
list<string>*% FILE*::readlines(FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f));
int string::write(char* self, char* file_name, bool append=false);
int char*::write(char* self, char* file_name, bool append=false) ;
string char*::read(char* file_name) ;
string string::read(char* file_name) ;




string char*::puts(char* self);
string string::puts(char* self);
int int::printf(int self, char* msg);
string string::printf(char* self, ...);
string char*::printf(char* self, ...);

string char*::print(char* self);




void int::times(int self, void* parent, void (*block)(void* parent, int it));




struct integer
{
    long value;
};

integer*% integer*::initialize(integer*% self, long value);
integer*% char::to_integer(char self);
integer*% short::to_integer(short self);
integer*% int::to_integer(int self);
integer*% long::to_integer(long self);
int integer*::to_int(integer* self);
bool integer::equals(integer* self, integer* right);
int integer::compare(integer* self, integer* right);
bool integer::operator_equals(integer* self, integer* right);
bool integer::operator_not_equals(integer* self, integer* right);
integer*% integer::operator_add(integer* left, integer* right);
integer*% integer::operator_sub(integer* left, integer* right);
integer*% integer::operator_mult(integer* left, integer* right);
integer*% integer::operator_div(integer* left, integer* right);
integer*% integer::operator_mod(integer* left, integer* right);
integer*% integer::operator_lshift(integer* left, integer* right);
integer*% integer::operator_rshift(integer* left, integer* right);
integer*% integer::operator_gteq(integer* left, integer* right);
integer*% integer::operator_lteq(integer* left, integer* right);
integer*% integer::operator_lt(integer* left, integer* right);
integer*% integer::operator_gt(integer* left, integer* right);
integer*% integer::operator_and(integer* left, integer* right);
integer*% integer::operator_xor(integer* left, integer* right);
integer*% integer::operator_or(integer* left, integer* right);
integer*% integer::operator_andand(integer* left, integer* right);
integer*% integer::operator_oror(integer* left, integer* right);
# 4 "./common.h" 2

# 4 "./common.h"
struct sInfo
{
    int cursor;
    int page;
    string path;
# 21 "tmp-common-header" 3 4
   
# 21 "tmp-common-header" 3 4
  _Bool
# 21 "tmp-common-header"
        
# 21 "tmp-common-header"
       app_end;

    list<string>*% files;
    list<string>*% selected_files;
    string searching_str;
};
int xgetmaxx();
int xgetmaxy();
void read_dir(sInfo* info);
void vd(sInfo* info);
void fix_cursor(sInfo* info);


_Bool
# 126 "tmp-common-header"
    change_directory(sInfo* info, char* path, char* cursor_file);
void fix_cursor(sInfo* info);
void view(sInfo* info);
string cursor_path(sInfo* info);
string cursor_file(sInfo* info);
string selected_files(sInfo* info);
void search_file(sInfo* info);
void search_next_file(sInfo* info);
void search_prev_file(sInfo* info);
void select_files(sInfo* info);
void manual(sInfo* info);
void handmade_delete_file(char* path);
void handmade_selected_delete_file(sInfo* info);
void input(sInfo* info);
int main(int argc, char** argv);
# 0 "<command-line>" 2
# 1 "main.c"

# 1 "/usr/local/include/neo-c-str.h" 1 3



# 1 "/usr/include/pcre.h" 1 3 4
# 324 "/usr/include/pcre.h" 3 4

# 324 "/usr/include/pcre.h" 3 4
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;

struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;

struct real_pcre32;
typedef struct real_pcre32 pcre32;

struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;

struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;

struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
# 376 "/usr/include/pcre.h" 3 4
typedef struct pcre_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
} pcre_extra;



typedef struct pcre16_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned short **mark;
  void *executable_jit;
} pcre16_extra;



typedef struct pcre32_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned int **mark;
  void *executable_jit;
} pcre32_extra;






typedef struct pcre_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const char * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned char *mark;

} pcre_callout_block;



typedef struct pcre16_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const unsigned short * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned short *mark;

} pcre16_callout_block;



typedef struct pcre32_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const unsigned int * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned int *mark;

} pcre32_callout_block;
# 489 "/usr/include/pcre.h" 3 4
extern void *(*pcre_malloc)(size_t);
extern void (*pcre_free)(void *);
extern void *(*pcre_stack_malloc)(size_t);
extern void (*pcre_stack_free)(void *);
extern int (*pcre_callout)(pcre_callout_block *);
extern int (*pcre_stack_guard)(void);

extern void *(*pcre16_malloc)(size_t);
extern void (*pcre16_free)(void *);
extern void *(*pcre16_stack_malloc)(size_t);
extern void (*pcre16_stack_free)(void *);
extern int (*pcre16_callout)(pcre16_callout_block *);
extern int (*pcre16_stack_guard)(void);

extern void *(*pcre32_malloc)(size_t);
extern void (*pcre32_free)(void *);
extern void *(*pcre32_stack_malloc)(size_t);
extern void (*pcre32_stack_free)(void *);
extern int (*pcre32_callout)(pcre32_callout_block *);
extern int (*pcre32_stack_guard)(void);
# 534 "/usr/include/pcre.h" 3 4
typedef pcre_jit_stack *(*pcre_jit_callback)(void *);
typedef pcre16_jit_stack *(*pcre16_jit_callback)(void *);
typedef pcre32_jit_stack *(*pcre32_jit_callback)(void *);



extern pcre *pcre_compile(const char *, int, const char **, int *,
                  const unsigned char *);
extern pcre16 *pcre16_compile(const unsigned short *, int, const char **, int *,
                  const unsigned char *);
extern pcre32 *pcre32_compile(const unsigned int *, int, const char **, int *,
                  const unsigned char *);
extern pcre *pcre_compile2(const char *, int, int *, const char **,
                  int *, const unsigned char *);
extern pcre16 *pcre16_compile2(const unsigned short *, int, int *, const char **,
                  int *, const unsigned char *);
extern pcre32 *pcre32_compile2(const unsigned int *, int, int *, const char **,
                  int *, const unsigned char *);
extern int pcre_config(int, void *);
extern int pcre16_config(int, void *);
extern int pcre32_config(int, void *);
extern int pcre_copy_named_substring(const pcre *, const char *,
                  int *, int, const char *, char *, int);
extern int pcre16_copy_named_substring(const pcre16 *, const unsigned short *,
                  int *, int, const unsigned short *, unsigned short *, int);
extern int pcre32_copy_named_substring(const pcre32 *, const unsigned int *,
                  int *, int, const unsigned int *, unsigned int *, int);
extern int pcre_copy_substring(const char *, int *, int, int,
                  char *, int);
extern int pcre16_copy_substring(const unsigned short *, int *, int, int,
                  unsigned short *, int);
extern int pcre32_copy_substring(const unsigned int *, int *, int, int,
                  unsigned int *, int);
extern int pcre_dfa_exec(const pcre *, const pcre_extra *,
                  const char *, int, int, int, int *, int , int *, int);
extern int pcre16_dfa_exec(const pcre16 *, const pcre16_extra *,
                  const unsigned short *, int, int, int, int *, int , int *, int);
extern int pcre32_dfa_exec(const pcre32 *, const pcre32_extra *,
                  const unsigned int *, int, int, int, int *, int , int *, int);
extern int pcre_exec(const pcre *, const pcre_extra *, const char *,
                   int, int, int, int *, int);
extern int pcre16_exec(const pcre16 *, const pcre16_extra *,
                   const unsigned short *, int, int, int, int *, int);
extern int pcre32_exec(const pcre32 *, const pcre32_extra *,
                   const unsigned int *, int, int, int, int *, int);
extern int pcre_jit_exec(const pcre *, const pcre_extra *,
                   const char *, int, int, int, int *, int,
                   pcre_jit_stack *);
extern int pcre16_jit_exec(const pcre16 *, const pcre16_extra *,
                   const unsigned short *, int, int, int, int *, int,
                   pcre16_jit_stack *);
extern int pcre32_jit_exec(const pcre32 *, const pcre32_extra *,
                   const unsigned int *, int, int, int, int *, int,
                   pcre32_jit_stack *);
extern void pcre_free_substring(const char *);
extern void pcre16_free_substring(const unsigned short *);
extern void pcre32_free_substring(const unsigned int *);
extern void pcre_free_substring_list(const char **);
extern void pcre16_free_substring_list(const unsigned short * *);
extern void pcre32_free_substring_list(const unsigned int * *);
extern int pcre_fullinfo(const pcre *, const pcre_extra *, int,
                  void *);
extern int pcre16_fullinfo(const pcre16 *, const pcre16_extra *, int,
                  void *);
extern int pcre32_fullinfo(const pcre32 *, const pcre32_extra *, int,
                  void *);
extern int pcre_get_named_substring(const pcre *, const char *,
                  int *, int, const char *, const char **);
extern int pcre16_get_named_substring(const pcre16 *, const unsigned short *,
                  int *, int, const unsigned short *, const unsigned short * *);
extern int pcre32_get_named_substring(const pcre32 *, const unsigned int *,
                  int *, int, const unsigned int *, const unsigned int * *);
extern int pcre_get_stringnumber(const pcre *, const char *);
extern int pcre16_get_stringnumber(const pcre16 *, const unsigned short *);
extern int pcre32_get_stringnumber(const pcre32 *, const unsigned int *);
extern int pcre_get_stringtable_entries(const pcre *, const char *,
                  char **, char **);
extern int pcre16_get_stringtable_entries(const pcre16 *, const unsigned short *,
                  unsigned short **, unsigned short **);
extern int pcre32_get_stringtable_entries(const pcre32 *, const unsigned int *,
                  unsigned int **, unsigned int **);
extern int pcre_get_substring(const char *, int *, int, int,
                  const char **);
extern int pcre16_get_substring(const unsigned short *, int *, int, int,
                  const unsigned short * *);
extern int pcre32_get_substring(const unsigned int *, int *, int, int,
                  const unsigned int * *);
extern int pcre_get_substring_list(const char *, int *, int,
                  const char ***);
extern int pcre16_get_substring_list(const unsigned short *, int *, int,
                  const unsigned short * **);
extern int pcre32_get_substring_list(const unsigned int *, int *, int,
                  const unsigned int * **);
extern const unsigned char *pcre_maketables(void);
extern const unsigned char *pcre16_maketables(void);
extern const unsigned char *pcre32_maketables(void);
extern int pcre_refcount(pcre *, int);
extern int pcre16_refcount(pcre16 *, int);
extern int pcre32_refcount(pcre32 *, int);
extern pcre_extra *pcre_study(const pcre *, int, const char **);
extern pcre16_extra *pcre16_study(const pcre16 *, int, const char **);
extern pcre32_extra *pcre32_study(const pcre32 *, int, const char **);
extern void pcre_free_study(pcre_extra *);
extern void pcre16_free_study(pcre16_extra *);
extern void pcre32_free_study(pcre32_extra *);
extern const char *pcre_version(void);
extern const char *pcre16_version(void);
extern const char *pcre32_version(void);


extern int pcre_pattern_to_host_byte_order(pcre *, pcre_extra *,
                  const unsigned char *);
extern int pcre16_pattern_to_host_byte_order(pcre16 *, pcre16_extra *,
                  const unsigned char *);
extern int pcre32_pattern_to_host_byte_order(pcre32 *, pcre32_extra *,
                  const unsigned char *);
extern int pcre16_utf16_to_host_byte_order(unsigned short *,
                  const unsigned short *, int, int *, int);
extern int pcre32_utf32_to_host_byte_order(unsigned int *,
                  const unsigned int *, int, int *, int);



extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern pcre16_jit_stack *pcre16_jit_stack_alloc(int, int);
extern pcre32_jit_stack *pcre32_jit_stack_alloc(int, int);
extern void pcre_jit_stack_free(pcre_jit_stack *);
extern void pcre16_jit_stack_free(pcre16_jit_stack *);
extern void pcre32_jit_stack_free(pcre32_jit_stack *);
extern void pcre_assign_jit_stack(pcre_extra *,
                  pcre_jit_callback, void *);
extern void pcre16_assign_jit_stack(pcre16_extra *,
                  pcre16_jit_callback, void *);
extern void pcre32_assign_jit_stack(pcre32_extra *,
                  pcre32_jit_callback, void *);
extern void pcre_jit_free_unused_memory(void);
extern void pcre16_jit_free_unused_memory(void);
extern void pcre32_jit_free_unused_memory(void);
# 5 "/usr/local/include/neo-c-str.h" 2 3




# 1 "/usr/include/fortify/wchar.h" 1 3 4
# 21 "/usr/include/fortify/wchar.h" 3 4
__extension__

# 1 "/usr/include/limits.h" 1 3 4





# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 7 "/usr/include/limits.h" 2 3 4
# 40 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/limits.h" 1 3 4
# 41 "/usr/include/limits.h" 2 3 4
# 24 "/usr/include/fortify/wchar.h" 2 3 4

__extension__



__extension__



__extension__

# 1 "/usr/include/wchar.h" 1 3 4
# 31 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 21 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned wint_t;
# 211 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long wctype_t;
# 345 "/usr/include/bits/alltypes.h" 3 4
typedef struct __mbstate_t { unsigned __opaque1, __opaque2; } mbstate_t;
# 32 "/usr/include/wchar.h" 2 3 4
# 52 "/usr/include/wchar.h" 3 4
wchar_t *wcscpy (wchar_t *restrict, const wchar_t *restrict);
wchar_t *wcsncpy (wchar_t *restrict, const wchar_t *restrict, size_t);

wchar_t *wcscat (wchar_t *restrict, const wchar_t *restrict);
wchar_t *wcsncat (wchar_t *restrict, const wchar_t *restrict, size_t);

int wcscmp (const wchar_t *, const wchar_t *);
int wcsncmp (const wchar_t *, const wchar_t *, size_t);

int wcscoll(const wchar_t *, const wchar_t *);
size_t wcsxfrm (wchar_t *restrict, const wchar_t *restrict, size_t);

wchar_t *wcschr (const wchar_t *, wchar_t);
wchar_t *wcsrchr (const wchar_t *, wchar_t);

size_t wcscspn (const wchar_t *, const wchar_t *);
size_t wcsspn (const wchar_t *, const wchar_t *);
wchar_t *wcspbrk (const wchar_t *, const wchar_t *);

wchar_t *wcstok (wchar_t *restrict, const wchar_t *restrict, wchar_t **restrict);

size_t wcslen (const wchar_t *);

wchar_t *wcsstr (const wchar_t *restrict, const wchar_t *restrict);
wchar_t *wcswcs (const wchar_t *, const wchar_t *);

wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);
int wmemcmp (const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy (wchar_t *restrict, const wchar_t *restrict, size_t);
wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset (wchar_t *, wchar_t, size_t);

wint_t btowc (int);
int wctob (wint_t);

int mbsinit (const mbstate_t *);
size_t mbrtowc (wchar_t *restrict, const char *restrict, size_t, mbstate_t *restrict);
size_t wcrtomb (char *restrict, wchar_t, mbstate_t *restrict);

size_t mbrlen (const char *restrict, size_t, mbstate_t *restrict);

size_t mbsrtowcs (wchar_t *restrict, const char **restrict, size_t, mbstate_t *restrict);
size_t wcsrtombs (char *restrict, const wchar_t **restrict, size_t, mbstate_t *restrict);

float wcstof (const wchar_t *restrict, wchar_t **restrict);
double wcstod (const wchar_t *restrict, wchar_t **restrict);
long double wcstold (const wchar_t *restrict, wchar_t **restrict);

long wcstol (const wchar_t *restrict, wchar_t **restrict, int);
unsigned long wcstoul (const wchar_t *restrict, wchar_t **restrict, int);

long long wcstoll (const wchar_t *restrict, wchar_t **restrict, int);
unsigned long long wcstoull (const wchar_t *restrict, wchar_t **restrict, int);



int fwide (FILE *, int);


int wprintf (const wchar_t *restrict, ...);
int fwprintf (FILE *restrict, const wchar_t *restrict, ...);
int swprintf (wchar_t *restrict, size_t, const wchar_t *restrict, ...);

int vwprintf (const wchar_t *restrict, __isoc_va_list);
int vfwprintf (FILE *restrict, const wchar_t *restrict, __isoc_va_list);
int vswprintf (wchar_t *restrict, size_t, const wchar_t *restrict, __isoc_va_list);

int wscanf (const wchar_t *restrict, ...);
int fwscanf (FILE *restrict, const wchar_t *restrict, ...);
int swscanf (const wchar_t *restrict, const wchar_t *restrict, ...);

int vwscanf (const wchar_t *restrict, __isoc_va_list);
int vfwscanf (FILE *restrict, const wchar_t *restrict, __isoc_va_list);
int vswscanf (const wchar_t *restrict, const wchar_t *restrict, __isoc_va_list);

wint_t fgetwc (FILE *);
wint_t getwc (FILE *);
wint_t getwchar (void);

wint_t fputwc (wchar_t, FILE *);
wint_t putwc (wchar_t, FILE *);
wint_t putwchar (wchar_t);

wchar_t *fgetws (wchar_t *restrict, int, FILE *restrict);
int fputws (const wchar_t *restrict, FILE *restrict);

wint_t ungetwc (wint_t, FILE *);

struct tm;
size_t wcsftime (wchar_t *restrict, size_t, const wchar_t *restrict, const struct tm *restrict);




wint_t fgetwc_unlocked (FILE *);
wint_t getwc_unlocked (FILE *);
wint_t getwchar_unlocked (void);
wint_t fputwc_unlocked (wchar_t, FILE *);
wint_t putwc_unlocked (wchar_t, FILE *);
wint_t putwchar_unlocked (wchar_t);
wchar_t *fgetws_unlocked (wchar_t *restrict, int, FILE *restrict);
int fputws_unlocked (const wchar_t *restrict, FILE *restrict);



size_t wcsftime_l (wchar_t *restrict, size_t, const wchar_t *restrict, const struct tm *restrict, locale_t);




FILE *open_wmemstream(wchar_t **, size_t *);
size_t mbsnrtowcs(wchar_t *restrict, const char **restrict, size_t, size_t, mbstate_t *restrict);
size_t wcsnrtombs(char *restrict, const wchar_t **restrict, size_t, size_t, mbstate_t *restrict);
wchar_t *wcsdup(const wchar_t *);
size_t wcsnlen (const wchar_t *, size_t);
wchar_t *wcpcpy (wchar_t *restrict, const wchar_t *restrict);
wchar_t *wcpncpy (wchar_t *restrict, const wchar_t *restrict, size_t);
int wcscasecmp(const wchar_t *, const wchar_t *);
int wcscasecmp_l(const wchar_t *, const wchar_t *, locale_t);
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t);
int wcsncasecmp_l(const wchar_t *, const wchar_t *, size_t, locale_t);
int wcscoll_l(const wchar_t *, const wchar_t *, locale_t);
size_t wcsxfrm_l(wchar_t *restrict, const wchar_t *restrict, size_t, locale_t);



int wcwidth (wchar_t);
int wcswidth (const wchar_t *, size_t);
int iswalnum(wint_t);
int iswalpha(wint_t);
int iswblank(wint_t);
int iswcntrl(wint_t);
int iswdigit(wint_t);
int iswgraph(wint_t);
int iswlower(wint_t);
int iswprint(wint_t);
int iswpunct(wint_t);
int iswspace(wint_t);
int iswupper(wint_t);
int iswxdigit(wint_t);
int iswctype(wint_t, wctype_t);
wint_t towlower(wint_t);
wint_t towupper(wint_t);
wctype_t wctype(const char *);
# 36 "/usr/include/fortify/wchar.h" 2 3 4
# 10 "/usr/local/include/neo-c-str.h" 2 3

typedef wchar_t*% wstring;

struct come_regex
{
    string str;
    pcre* regex;

    bool ignore_case;
    bool multiline;
    bool global;
    bool extended;
    bool dotall;
    bool anchored;
    bool dollar_endonly;
    bool ungreedy;

    int options;

    pcre* re;
};

come_regex*% come_regex*::initialize(come_regex*% self, char* str, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
come_regex*% char*::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
come_regex*% string::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
void come_regex*::finalize(come_regex* reg);
come_regex*% come_regex*::clone(come_regex* reg);
bool come_regex*::equals(come_regex* left, come_regex* right);
unsigned int come_regex*::get_hash_key(come_regex* reg);

string come_regex*::to_string(come_regex* regex);
string string::lower_case(char* str);
string string::upper_case(char* str);

wstring wchar_t*::substring(wchar_t* str, int head, int tail);
static inline wstring wstring::substring(wchar_t* str, int head, int tail)
{
    return wchar_t*::substring(str, head, tail);
}

int char*::index_count(char* str, char* search_str, int count=1, int default_value=-1);
static inline int string::index_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::index_count(str, search_str, count, default_value);
}

int char*::index_regex_count(char* self, come_regex* reg, int count=1, int default_value);
static inline int string::index_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1)
{
    return char*::index_regex_count(self, reg, count, default_value);
}

int char*::rindex(char* str, char* search_str, int default_value=-1);
static inline int string::rindex(char* str, char* search_str, int default_value=-1)
{
    return char*::rindex(str, search_str, default_value);
}

int char*::rindex_regex(char* self, come_regex* reg, int default_value=-1);
static inline int string::rindex_regex(char* self, come_regex* reg, int default_value=-1)
{
    return char*::rindex_regex(self, reg, default_value);
}

int char*::rindex_count(char* str, char* search_str, int count=1, int default_value=-1);
static inline int string::rindex_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::rindex_count(str, search_str, default_value);
}

list<string>*% char*::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::scan_block(self, reg, parent, block);
}

list<string>*% char*::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::scan_block_count(self, reg, count, parent, block);
}

list<string>*% char*::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::split_block(self, reg, parent, block);
}

list<string>*% char*::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::split_block_count(self, reg, count, parent, block);
}

list<string>*% char*::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex);
static inline list<string>*% string::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex)
{
    return char*::scan_group_strings(self, reg, group_strings, num_group_string_in_regex);
}

string char*::strip(char* self);
static inline string string::strip(char* self)
{
    return char*::strip(self);
}

string char*::printable(char* str);
static inline string string::printable(char* str)
{
    return string::printable(str);
}

wstring char*::to_wstring(char* str);
static inline wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

string wchar_t::to_string(wchar_t wc);

string wchar_t*::to_string(wchar_t* wstr);
static inline string wstring::to_string(wchar_t* wstr)
{
    return wchar_t*::to_string(wstr);
}

static inline wstring int::to_wstring(int self)
{
    return xsprintf("%d", self).to_wstring();
}

int wchar_t*::length(wchar_t* str);
static inline int wstring::length(wchar_t* str)
{
    return wchar_t*::length(str);
}

wstring wchar_t*::delete(wchar_t* str, int head, int tail) ;
static inline wstring wstring::delete(wchar_t* str, int head, int tail)
{
    return wchar_t*::delete(str, head, tail);
}

int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value=-1);
static inline int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
{
    return wchar_t*::index(str, search_str, default_value);
}

int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1);
static inline int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
{
    return wchar_t*::rindex(str, search_str, default_value);
}

wstring wchar_t*::reverse(wchar_t* str);
static inline wstring wstring::reverse(wchar_t* str)
{
    return wchar_t*::reverse(str);
}

wstring wchar_t*::multiply(wchar_t* str, int n);
static inline wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

wstring wchar_t*::printable(wchar_t* str);
static inline wstring wstring::printable(wchar_t* str)
{
    return wchar_t*::printable(str);
}

int wchar_t*::compare(wchar_t* left, wchar_t* right);
int wstring::compare(wchar_t* left, wchar_t* right);

bool wchar_t::operator_equals(wchar_t left, wchar_t right);
bool wchar_t::operator_not_equals(wchar_t left, wchar_t right);
bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_equals(wchar_t* left, wchar_t* right);
bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_not_equals(wchar_t* left, wchar_t* right);
wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right);
wstring wstring::operator_add(wchar_t* left, wchar_t* right);
wstring wchar_t*::operator_mult(wchar_t* str, int n);
wstring wstring::operator_mult(wchar_t* str, int n);

unsigned int wchar_t::get_hash_key(wchar_t value);

unsigned int wchar_t*::get_hash_key(wchar_t* value);
static inline unsigned int wstring::get_hash_key(wchar_t* value)
{
    return wchar_t*::get_hash_key(value);
}

bool wchar_t::equals(wchar_t left, wchar_t right);

bool wchar_t*::equals(wchar_t* left, wchar_t* right);
bool wstring::equals(wchar_t* left, wchar_t* right);


bool char*::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings);
static inline bool string::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings)
{
    return char*::match_group_strings(self, reg, count, group_strings);
}

int char*::index(char* str, char* search_str, int default_value=-1);
static inline int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}

int char*::index_regex(char* self, come_regex* reg, int default_value=-1);
static inline int string::index_regex(char* self, come_regex* reg, int default_value=-1)
{
    return char*::index_regex(self, reg, default_value);
}


string char*::replace(char* self, int index, char c);
static inline string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

string char*::multiply(char* str, int n);
static inline string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}

string char*::sub(char* self, come_regex* reg, char* replace);
static inline string string::sub(char* self, come_regex* reg, char* replace)
{
    return char*::sub(self, reg, replace);
}

string char*::sub_count(char* self, come_regex* reg, char* replace, int count=1);
static inline string string::sub_count(char* self, come_regex* reg, char* replace, int count=1)
{
    return char*::sub_count(self, reg, replace, count);
}

list<string>*% char*::split_str(char* self, char* str);
static inline list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

list<string>*% char*::scan(char* self, come_regex* reg);
static inline list<string>*% string::scan(char* self, come_regex* reg)
{
    return char*::scan(self, reg);
}

list<string>*% char*::split(char* self, come_regex* reg);
static inline list<string>*% string::split(char* self, come_regex* reg)
{
    return char*::split(self, reg);
}

bool char*::match(char* self, come_regex* reg);
static inline bool string::match(char* self, come_regex* reg)
{
    return char*::match(self, reg);
}

list<string>*% char*::split_maxsplit(char* self, come_regex* reg, int maxsplit);
static inline list<string>*% string::split_maxsplit(char* self, come_regex* reg, int maxsplit)
{
    return char*::split_maxsplit(self, reg, maxsplit);
}

int char*::rindex_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1);
static inline int string::rindex_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1)
{
    return char*::rindex_regex_count(self, reg, count, default_value);
}

bool char*::match_count(char* self, come_regex* reg, int count=1);
static inline bool string::match_count(char* self, come_regex* reg, int count=1)
{
    return char*::match_count(self, reg, count);
}

string char*::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline string string::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block(self, reg, parent, block);
}

string char*::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline string string::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block_count(self, reg, count, parent, block);
}

bool come_regex*::operator_not_equals(come_regex* left, come_regex* right);
bool come_regex*::operator_equals(come_regex* left, come_regex* right);

wstring char*::to_wstring(char* str);
static inline wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

wstring __builtin_wstring(char* str);

string string::chomp(char* str);

static inline string char*::chomp(char* str)
{
    return string::chomp(str);
}
# 3 "main.c" 2

# 1 "/usr/include/curses.h" 1 3 4
# 89 "/usr/include/curses.h" 3 4
# 1 "/usr/include/ncurses_dll.h" 1 3 4
# 90 "/usr/include/curses.h" 2 3 4





# 1 "/usr/include/stdint.h" 1 3 4
# 20 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 63 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long uintptr_t;
# 78 "/usr/include/bits/alltypes.h" 3 4
typedef long intptr_t;
# 104 "/usr/include/bits/alltypes.h" 3 4
typedef signed char int8_t;




typedef signed short int16_t;




typedef signed int int32_t;




typedef signed long int64_t;




typedef signed long intmax_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long uint64_t;
# 154 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long uintmax_t;
# 21 "/usr/include/stdint.h" 2 3 4

typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
# 95 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/stdint.h" 1 3 4
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
# 96 "/usr/include/stdint.h" 2 3 4
# 96 "/usr/include/curses.h" 2 3 4
# 222 "/usr/include/curses.h" 3 4
typedef unsigned chtype;
typedef unsigned mmask_t;
# 272 "/usr/include/curses.h" 3 4
typedef unsigned char NCURSES_BOOL;
# 282 "/usr/include/curses.h" 3 4
# 1 "/usr/include/stdbool.h" 1 3 4
# 283 "/usr/include/curses.h" 2 3 4
# 344 "/usr/include/curses.h" 3 4
extern chtype acs_map[];
# 439 "/usr/include/curses.h" 3 4
typedef struct screen SCREEN;


typedef struct _win_st WINDOW;

typedef chtype attr_t;
# 597 "/usr/include/curses.h" 3 4
typedef int (*NCURSES_OUTC)(int);
# 606 "/usr/include/curses.h" 3 4
extern int addch (const chtype);
extern int addchnstr (const chtype *, int);
extern int addchstr (const chtype *);
extern int addnstr (const char *, int);
extern int addstr (const char *);
extern int attroff (int);
extern int attron (int);
extern int attrset (int);
extern int attr_get (attr_t *, short *, void *);
extern int attr_off (attr_t, void *);
extern int attr_on (attr_t, void *);
extern int attr_set (attr_t, short, void *);
extern int baudrate (void);
extern int beep (void);
extern int bkgd (chtype);
extern void bkgdset (chtype);
extern int border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int box (WINDOW *, chtype, chtype);
extern _Bool can_change_color (void);
extern int cbreak (void);
extern int chgat (int, attr_t, short, const void *);
extern int clear (void);
extern int clearok (WINDOW *,_Bool);
extern int clrtobot (void);
extern int clrtoeol (void);
extern int color_content (short,short*,short*,short*);
extern int color_set (short,void*);
extern int COLOR_PAIR (int);
extern int copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int);
extern int curs_set (int);
extern int def_prog_mode (void);
extern int def_shell_mode (void);
extern int delay_output (int);
extern int delch (void);
extern void delscreen (SCREEN *);
extern int delwin (WINDOW *);
extern int deleteln (void);
extern WINDOW * derwin (WINDOW *,int,int,int,int);
extern int doupdate (void);
extern WINDOW * dupwin (WINDOW *);
extern int echo (void);
extern int echochar (const chtype);
extern int erase (void);
extern int endwin (void);
extern char erasechar (void);
extern void filter (void);
extern int flash (void);
extern int flushinp (void);
extern chtype getbkgd (WINDOW *);
extern int getch (void);
extern int getnstr (char *, int);
extern int getstr (char *);
extern WINDOW * getwin (FILE *);
extern int halfdelay (int);
extern _Bool has_colors (void);
extern _Bool has_ic (void);
extern _Bool has_il (void);
extern int hline (chtype, int);
extern void idcok (WINDOW *, _Bool);
extern int idlok (WINDOW *, _Bool);
extern void immedok (WINDOW *, _Bool);
extern chtype inch (void);
extern int inchnstr (chtype *, int);
extern int inchstr (chtype *);
extern WINDOW * initscr (void);
extern int init_color (short,short,short,short);
extern int init_pair (short,short,short);
extern int innstr (char *, int);
extern int insch (chtype);
extern int insdelln (int);
extern int insertln (void);
extern int insnstr (const char *, int);
extern int insstr (const char *);
extern int instr (char *);
extern int intrflush (WINDOW *,_Bool);
extern _Bool isendwin (void);
extern _Bool is_linetouched (WINDOW *,int);
extern _Bool is_wintouched (WINDOW *);
extern const char * keyname (int);
extern int keypad (WINDOW *,_Bool);
extern char killchar (void);
extern int leaveok (WINDOW *,_Bool);
extern char * longname (void);
extern int meta (WINDOW *,_Bool);
extern int move (int, int);
extern int mvaddch (int, int, const chtype);
extern int mvaddchnstr (int, int, const chtype *, int);
extern int mvaddchstr (int, int, const chtype *);
extern int mvaddnstr (int, int, const char *, int);
extern int mvaddstr (int, int, const char *);
extern int mvchgat (int, int, int, attr_t, short, const void *);
extern int mvcur (int,int,int,int);
extern int mvdelch (int, int);
extern int mvderwin (WINDOW *, int, int);
extern int mvgetch (int, int);
extern int mvgetnstr (int, int, char *, int);
extern int mvgetstr (int, int, char *);
extern int mvhline (int, int, chtype, int);
extern chtype mvinch (int, int);
extern int mvinchnstr (int, int, chtype *, int);
extern int mvinchstr (int, int, chtype *);
extern int mvinnstr (int, int, char *, int);
extern int mvinsch (int, int, chtype);
extern int mvinsnstr (int, int, const char *, int);
extern int mvinsstr (int, int, const char *);
extern int mvinstr (int, int, char *);
extern int mvprintw (int,int, const char *,...)
  ;
extern int mvscanw (int,int, const char *,...)
  ;
extern int mvvline (int, int, chtype, int);
extern int mvwaddch (WINDOW *, int, int, const chtype);
extern int mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
extern int mvwaddchstr (WINDOW *, int, int, const chtype *);
extern int mvwaddnstr (WINDOW *, int, int, const char *, int);
extern int mvwaddstr (WINDOW *, int, int, const char *);
extern int mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
extern int mvwdelch (WINDOW *, int, int);
extern int mvwgetch (WINDOW *, int, int);
extern int mvwgetnstr (WINDOW *, int, int, char *, int);
extern int mvwgetstr (WINDOW *, int, int, char *);
extern int mvwhline (WINDOW *, int, int, chtype, int);
extern int mvwin (WINDOW *,int,int);
extern chtype mvwinch (WINDOW *, int, int);
extern int mvwinchnstr (WINDOW *, int, int, chtype *, int);
extern int mvwinchstr (WINDOW *, int, int, chtype *);
extern int mvwinnstr (WINDOW *, int, int, char *, int);
extern int mvwinsch (WINDOW *, int, int, chtype);
extern int mvwinsnstr (WINDOW *, int, int, const char *, int);
extern int mvwinsstr (WINDOW *, int, int, const char *);
extern int mvwinstr (WINDOW *, int, int, char *);
extern int mvwprintw (WINDOW*,int,int, const char *,...)
  ;
extern int mvwscanw (WINDOW *,int,int, const char *,...)
  ;
extern int mvwvline (WINDOW *,int, int, chtype, int);
extern int napms (int);
extern WINDOW * newpad (int,int);
extern SCREEN * newterm (const char *,FILE *,FILE *);
extern WINDOW * newwin (int,int,int,int);
extern int nl (void);
extern int nocbreak (void);
extern int nodelay (WINDOW *,_Bool);
extern int noecho (void);
extern int nonl (void);
extern void noqiflush (void);
extern int noraw (void);
extern int notimeout (WINDOW *,_Bool);
extern int overlay (const WINDOW*,WINDOW *);
extern int overwrite (const WINDOW*,WINDOW *);
extern int pair_content (short,short*,short*);
extern int PAIR_NUMBER (int);
extern int pechochar (WINDOW *, const chtype);
extern int pnoutrefresh (WINDOW*,int,int,int,int,int,int);
extern int prefresh (WINDOW *,int,int,int,int,int,int);
extern int printw (const char *,...)
  ;
extern int putwin (WINDOW *, FILE *);
extern void qiflush (void);
extern int raw (void);
extern int redrawwin (WINDOW *);
extern int refresh (void);
extern int resetty (void);
extern int reset_prog_mode (void);
extern int reset_shell_mode (void);
extern int ripoffline (int, int (*)(WINDOW *, int));
extern int savetty (void);
extern int scanw (const char *,...)
  ;
extern int scr_dump (const char *);
extern int scr_init (const char *);
extern int scrl (int);
extern int scroll (WINDOW *);
extern int scrollok (WINDOW *,_Bool);
extern int scr_restore (const char *);
extern int scr_set (const char *);
extern int setscrreg (int,int);
extern SCREEN * set_term (SCREEN *);
extern int slk_attroff (const chtype);
extern int slk_attr_off (const attr_t, void *);
extern int slk_attron (const chtype);
extern int slk_attr_on (attr_t,void*);
extern int slk_attrset (const chtype);
extern attr_t slk_attr (void);
extern int slk_attr_set (const attr_t,short,void*);
extern int slk_clear (void);
extern int slk_color (short);
extern int slk_init (int);
extern char * slk_label (int);
extern int slk_noutrefresh (void);
extern int slk_refresh (void);
extern int slk_restore (void);
extern int slk_set (int,const char *,int);
extern int slk_touch (void);
extern int standout (void);
extern int standend (void);
extern int start_color (void);
extern WINDOW * subpad (WINDOW *, int, int, int, int);
extern WINDOW * subwin (WINDOW *, int, int, int, int);
extern int syncok (WINDOW *, _Bool);
extern chtype termattrs (void);
extern char * termname (void);
extern void timeout (int);
extern int touchline (WINDOW *, int, int);
extern int touchwin (WINDOW *);
extern int typeahead (int);
extern int ungetch (int);
extern int untouchwin (WINDOW *);
extern void use_env (_Bool);
extern void use_tioctl (_Bool);
extern int vidattr (chtype);
extern int vidputs (chtype, NCURSES_OUTC);
extern int vline (chtype, int);
extern int vwprintw (WINDOW *, const char *, va_list)
  ;
extern int vw_printw (WINDOW *, const char *, va_list)
  ;
extern int vwscanw (WINDOW *, const char *, va_list)
  ;
extern int vw_scanw (WINDOW *, const char *, va_list)
  ;
extern int waddch (WINDOW *, const chtype);
extern int waddchnstr (WINDOW *,const chtype *,int);
extern int waddchstr (WINDOW *,const chtype *);
extern int waddnstr (WINDOW *,const char *,int);
extern int waddstr (WINDOW *,const char *);
extern int wattron (WINDOW *, int);
extern int wattroff (WINDOW *, int);
extern int wattrset (WINDOW *, int);
extern int wattr_get (WINDOW *, attr_t *, short *, void *);
extern int wattr_on (WINDOW *, attr_t, void *);
extern int wattr_off (WINDOW *, attr_t, void *);
extern int wattr_set (WINDOW *, attr_t, short, void *);
extern int wbkgd (WINDOW *, chtype);
extern void wbkgdset (WINDOW *,chtype);
extern int wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int wchgat (WINDOW *, int, attr_t, short, const void *);
extern int wclear (WINDOW *);
extern int wclrtobot (WINDOW *);
extern int wclrtoeol (WINDOW *);
extern int wcolor_set (WINDOW*,short,void*);
extern void wcursyncup (WINDOW *);
extern int wdelch (WINDOW *);
extern int wdeleteln (WINDOW *);
extern int wechochar (WINDOW *, const chtype);
extern int werase (WINDOW *);
extern int wgetch (WINDOW *);
extern int wgetnstr (WINDOW *,char *,int);
extern int wgetstr (WINDOW *, char *);
extern int whline (WINDOW *, chtype, int);
extern chtype winch (WINDOW *);
extern int winchnstr (WINDOW *, chtype *, int);
extern int winchstr (WINDOW *, chtype *);
extern int winnstr (WINDOW *, char *, int);
extern int winsch (WINDOW *, chtype);
extern int winsdelln (WINDOW *,int);
extern int winsertln (WINDOW *);
extern int winsnstr (WINDOW *, const char *,int);
extern int winsstr (WINDOW *, const char *);
extern int winstr (WINDOW *, char *);
extern int wmove (WINDOW *,int,int);
extern int wnoutrefresh (WINDOW *);
extern int wprintw (WINDOW *, const char *,...)
  ;
extern int wredrawln (WINDOW *,int,int);
extern int wrefresh (WINDOW *);
extern int wscanw (WINDOW *, const char *,...)
  ;
extern int wscrl (WINDOW *,int);
extern int wsetscrreg (WINDOW *,int,int);
extern int wstandout (WINDOW *);
extern int wstandend (WINDOW *);
extern void wsyncdown (WINDOW *);
extern void wsyncup (WINDOW *);
extern void wtimeout (WINDOW *,int);
extern int wtouchln (WINDOW *,int,int,int);
extern int wvline (WINDOW *,chtype,int);




extern int tigetflag (const char *);
extern int tigetnum (const char *);
extern char * tigetstr (const char *);
extern int putp (const char *);


extern char * tparm (const char *, ...);




extern char * tiparm (const char *, ...);
extern char * tiparm_s (int, int, const char *, ...);
extern int tiscan_s (int *, int *, const char *);




extern int getattrs (const WINDOW *);
extern int getcurx (const WINDOW *);
extern int getcury (const WINDOW *);
extern int getbegx (const WINDOW *);
extern int getbegy (const WINDOW *);
extern int getmaxx (const WINDOW *);
extern int getmaxy (const WINDOW *);
extern int getparx (const WINDOW *);
extern int getpary (const WINDOW *);
# 928 "/usr/include/curses.h" 3 4
typedef int (*NCURSES_WINDOW_CB)(WINDOW *, void *);
typedef int (*NCURSES_SCREEN_CB)(SCREEN *, void *);
extern int alloc_pair (int, int);
extern int assume_default_colors (int, int);
extern const char * curses_version (void);
extern int define_key (const char *, int);
extern int extended_color_content(int, int *, int *, int *);
extern int extended_pair_content(int, int *, int *);
extern int extended_slk_color(int);
extern int find_pair (int, int);
extern int free_pair (int);
extern int get_escdelay (void);
extern int init_extended_color(int, int, int, int);
extern int init_extended_pair(int, int, int);
extern int is_cbreak(void);
extern int is_echo(void);
extern int is_nl(void);
extern int is_raw(void);
extern _Bool is_term_resized (int, int);
extern int key_defined (const char *);
extern char * keybound (int, int);
extern int keyok (int, _Bool);
extern void nofilter(void);
extern void reset_color_pairs (void);
extern int resize_term (int, int);
extern int resizeterm (int, int);
extern int set_escdelay (int);
extern int set_tabsize (int);
extern int use_default_colors (void);
extern int use_legacy_coding (int);
extern int use_screen (SCREEN *, NCURSES_SCREEN_CB, void *);
extern int use_window (WINDOW *, NCURSES_WINDOW_CB, void *);
extern int wresize (WINDOW *, int, int);




extern int use_extended_names (_Bool);






extern WINDOW * wgetparent (const WINDOW *);
extern _Bool is_cleared (const WINDOW *);
extern _Bool is_idcok (const WINDOW *);
extern _Bool is_idlok (const WINDOW *);
extern _Bool is_immedok (const WINDOW *);
extern _Bool is_keypad (const WINDOW *);
extern _Bool is_leaveok (const WINDOW *);
extern _Bool is_nodelay (const WINDOW *);
extern _Bool is_notimeout (const WINDOW *);
extern _Bool is_pad (const WINDOW *);
extern _Bool is_scrollok (const WINDOW *);
extern _Bool is_subwin (const WINDOW *);
extern _Bool is_syncok (const WINDOW *);
extern int wgetdelay (const WINDOW *);
extern int wgetscrreg (const WINDOW *, int *, int *);
# 1003 "/usr/include/curses.h" 3 4
typedef int (*NCURSES_OUTC_sp)(SCREEN*, int);

extern SCREEN * new_prescr (void);

extern int baudrate_sp (SCREEN*);
extern int beep_sp (SCREEN*);
extern _Bool can_change_color_sp (SCREEN*);
extern int cbreak_sp (SCREEN*);
extern int curs_set_sp (SCREEN*, int);
extern int color_content_sp (SCREEN*, short, short*, short*, short*);
extern int def_prog_mode_sp (SCREEN*);
extern int def_shell_mode_sp (SCREEN*);
extern int delay_output_sp (SCREEN*, int);
extern int doupdate_sp (SCREEN*);
extern int echo_sp (SCREEN*);
extern int endwin_sp (SCREEN*);
extern char erasechar_sp (SCREEN*);
extern void filter_sp (SCREEN*);
extern int flash_sp (SCREEN*);
extern int flushinp_sp (SCREEN*);
extern WINDOW * getwin_sp (SCREEN*, FILE *);
extern int halfdelay_sp (SCREEN*, int);
extern _Bool has_colors_sp (SCREEN*);
extern _Bool has_ic_sp (SCREEN*);
extern _Bool has_il_sp (SCREEN*);
extern int init_color_sp (SCREEN*, short, short, short, short);
extern int init_pair_sp (SCREEN*, short, short, short);
extern int intrflush_sp (SCREEN*, WINDOW*, _Bool);
extern _Bool isendwin_sp (SCREEN*);
extern const char * keyname_sp (SCREEN*, int);
extern char killchar_sp (SCREEN*);
extern char * longname_sp (SCREEN*);
extern int mvcur_sp (SCREEN*, int, int, int, int);
extern int napms_sp (SCREEN*, int);
extern WINDOW * newpad_sp (SCREEN*, int, int);
extern SCREEN * newterm_sp (SCREEN*, const char *, FILE *, FILE *);
extern WINDOW * newwin_sp (SCREEN*, int, int, int, int);
extern int nl_sp (SCREEN*);
extern int nocbreak_sp (SCREEN*);
extern int noecho_sp (SCREEN*);
extern int nonl_sp (SCREEN*);
extern void noqiflush_sp (SCREEN*);
extern int noraw_sp (SCREEN*);
extern int pair_content_sp (SCREEN*, short, short*, short*);
extern void qiflush_sp (SCREEN*);
extern int raw_sp (SCREEN*);
extern int reset_prog_mode_sp (SCREEN*);
extern int reset_shell_mode_sp (SCREEN*);
extern int resetty_sp (SCREEN*);
extern int ripoffline_sp (SCREEN*, int, int (*)(WINDOW *, int));
extern int savetty_sp (SCREEN*);
extern int scr_init_sp (SCREEN*, const char *);
extern int scr_restore_sp (SCREEN*, const char *);
extern int scr_set_sp (SCREEN*, const char *);
extern int slk_attroff_sp (SCREEN*, const chtype);
extern int slk_attron_sp (SCREEN*, const chtype);
extern int slk_attrset_sp (SCREEN*, const chtype);
extern attr_t slk_attr_sp (SCREEN*);
extern int slk_attr_set_sp (SCREEN*, const attr_t, short, void*);
extern int slk_clear_sp (SCREEN*);
extern int slk_color_sp (SCREEN*, short);
extern int slk_init_sp (SCREEN*, int);
extern char * slk_label_sp (SCREEN*, int);
extern int slk_noutrefresh_sp (SCREEN*);
extern int slk_refresh_sp (SCREEN*);
extern int slk_restore_sp (SCREEN*);
extern int slk_set_sp (SCREEN*, int, const char *, int);
extern int slk_touch_sp (SCREEN*);
extern int start_color_sp (SCREEN*);
extern chtype termattrs_sp (SCREEN*);
extern char * termname_sp (SCREEN*);
extern int typeahead_sp (SCREEN*, int);
extern int ungetch_sp (SCREEN*, int);
extern void use_env_sp (SCREEN*, _Bool);
extern void use_tioctl_sp (SCREEN*, _Bool);
extern int vidattr_sp (SCREEN*, chtype);
extern int vidputs_sp (SCREEN*, chtype, NCURSES_OUTC_sp);

extern int alloc_pair_sp (SCREEN*, int, int);
extern int assume_default_colors_sp (SCREEN*, int, int);
extern int define_key_sp (SCREEN*, const char *, int);
extern int extended_color_content_sp (SCREEN*, int, int *, int *, int *);
extern int extended_pair_content_sp (SCREEN*, int, int *, int *);
extern int extended_slk_color_sp (SCREEN*, int);
extern int find_pair_sp (SCREEN*, int, int);
extern int free_pair_sp (SCREEN*, int);
extern int get_escdelay_sp (SCREEN*);
extern int init_extended_color_sp (SCREEN*, int, int, int, int);
extern int init_extended_pair_sp (SCREEN*, int, int, int);
extern int is_cbreak_sp (SCREEN*);
extern int is_echo_sp (SCREEN*);
extern int is_nl_sp (SCREEN*);
extern int is_raw_sp (SCREEN*);
extern _Bool is_term_resized_sp (SCREEN*, int, int);
extern int key_defined_sp (SCREEN*, const char *);
extern char * keybound_sp (SCREEN*, int, int);
extern int keyok_sp (SCREEN*, int, _Bool);
extern void nofilter_sp (SCREEN*);
extern void reset_color_pairs_sp (SCREEN*);
extern int resize_term_sp (SCREEN*, int, int);
extern int resizeterm_sp (SCREEN*, int, int);
extern int set_escdelay_sp (SCREEN*, int);
extern int set_tabsize_sp (SCREEN*, int);
extern int use_default_colors_sp (SCREEN*);
extern int use_legacy_coding_sp (SCREEN*, int);
# 1492 "/usr/include/curses.h" 3 4
extern WINDOW * curscr;
extern WINDOW * newscr;
extern WINDOW * stdscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
# 2021 "/usr/include/curses.h" 3 4
typedef struct
{
    short id;
    int x, y, z;
    mmask_t bstate;
}
MEVENT;

extern _Bool has_mouse(void);
extern int getmouse (MEVENT *);
extern int ungetmouse (MEVENT *);
extern mmask_t mousemask (mmask_t, mmask_t *);
extern _Bool wenclose (const WINDOW *, int, int);
extern int mouseinterval (int);
extern _Bool wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern _Bool mouse_trafo (int*, int*, _Bool);


extern _Bool has_mouse_sp (SCREEN*);
extern int getmouse_sp (SCREEN*, MEVENT *);
extern int ungetmouse_sp (SCREEN*,MEVENT *);
extern mmask_t mousemask_sp (SCREEN*, mmask_t, mmask_t *);
extern int mouseinterval_sp (SCREEN*, int);
# 2052 "/usr/include/curses.h" 3 4
extern int mcprint (char *, int);
extern int has_key (int);


extern int has_key_sp (SCREEN*, int);
extern int mcprint_sp (SCREEN*, char *, int);




extern void _tracef (const char *, ...) ;
extern char * _traceattr (attr_t);
extern char * _traceattr2 (int, chtype);
extern char * _tracechar (int);
extern char * _tracechtype (chtype);
extern char * _tracechtype2 (int, chtype);
# 2077 "/usr/include/curses.h" 3 4
extern void trace (const unsigned) ;
extern unsigned curses_trace (const unsigned);
# 2109 "/usr/include/curses.h" 3 4
extern void exit_curses (int);

# 1 "/usr/include/unctrl.h" 1 3 4
# 55 "/usr/include/unctrl.h" 3 4
# 1 "/usr/include/curses.h" 1 3 4
# 56 "/usr/include/unctrl.h" 2 3 4


 const char * unctrl (chtype);


 const char * unctrl_sp (SCREEN*, chtype);
# 2112 "/usr/include/curses.h" 2 3 4
# 5 "main.c" 2
# 1 "/usr/include/dirent.h" 1 3 4
# 16 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 175 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long ino_t;
# 17 "/usr/include/dirent.h" 2 3 4

# 1 "/usr/include/bits/dirent.h" 1 3 4




struct dirent {
 ino_t d_ino;
 off_t d_off;
 unsigned short d_reclen;
 unsigned char d_type;
 char d_name[256];
};
# 19 "/usr/include/dirent.h" 2 3 4

typedef struct __dirstream DIR;



int closedir(DIR *);
DIR *fdopendir(int);
DIR *opendir(const char *);
struct dirent *readdir(DIR *);
int readdir_r(DIR *restrict, struct dirent *restrict, struct dirent **restrict);
void rewinddir(DIR *);
int dirfd(DIR *);

int alphasort(const struct dirent **, const struct dirent **);
int scandir(const char *, struct dirent ***, int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **));


void seekdir(DIR *, long);
long telldir(DIR *);
# 52 "/usr/include/dirent.h" 3 4
int getdents(int, struct dirent *, size_t);



int versionsort(const struct dirent **, const struct dirent **);
# 6 "main.c" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 21 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 27 "/usr/include/bits/alltypes.h" 3 4
typedef int blksize_t;




typedef unsigned int nlink_t;
# 93 "/usr/include/bits/alltypes.h" 3 4
typedef long time_t;
# 160 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned mode_t;
# 180 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long dev_t;
# 190 "/usr/include/bits/alltypes.h" 3 4
typedef long blkcnt_t;
# 237 "/usr/include/bits/alltypes.h" 3 4
struct timespec { time_t tv_sec; int :8*(sizeof(time_t)-sizeof(long))*(1234==4321); long tv_nsec; int :8*(sizeof(time_t)-sizeof(long))*(1234!=4321); };
# 253 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned uid_t;




typedef unsigned gid_t;
# 22 "/usr/include/sys/stat.h" 2 3 4

# 1 "/usr/include/bits/stat.h" 1 3 4
struct stat {
 dev_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;
 unsigned long __pad;
 off_t st_size;
 blksize_t st_blksize;
 int __pad2;
 blkcnt_t st_blocks;
 struct timespec st_atim;
 struct timespec st_mtim;
 struct timespec st_ctim;
 unsigned __unused[2];
};
# 24 "/usr/include/sys/stat.h" 2 3 4
# 73 "/usr/include/sys/stat.h" 3 4
int stat(const char *restrict, struct stat *restrict);
int fstat(int, struct stat *);
int lstat(const char *restrict, struct stat *restrict);
int fstatat(int, const char *restrict, struct stat *restrict, int);
int chmod(const char *, mode_t);
int fchmod(int, mode_t);
int fchmodat(int, const char *, mode_t, int);
mode_t umask(mode_t);
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int mkdirat(int, const char *, mode_t);
int mkfifoat(int, const char *, mode_t);


int mknod(const char *, mode_t, dev_t);
int mknodat(int, const char *, mode_t, dev_t);


int futimens(int, const struct timespec [2]);
int utimensat(int, const char *, const struct timespec [2], int);


int lchmod(const char *, mode_t);
# 7 "main.c" 2
# 1 "/usr/include/fortify/unistd.h" 1 3 4
# 21 "/usr/include/fortify/unistd.h" 3 4
__extension__

# 1 "/usr/include/unistd.h" 1 3 4
# 37 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 243 "/usr/include/bits/alltypes.h" 3 4
typedef int pid_t;
# 268 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned useconds_t;
# 38 "/usr/include/unistd.h" 2 3 4

int pipe(int [2]);
int pipe2(int [2], int);
int close(int);
int posix_close(int, int);
int dup(int);
int dup2(int, int);
int dup3(int, int, int);
off_t lseek(int, off_t, int);
int fsync(int);
int fdatasync(int);

ssize_t read(int, void *, size_t);
ssize_t write(int, const void *, size_t);
ssize_t pread(int, void *, size_t, off_t);
ssize_t pwrite(int, const void *, size_t, off_t);

int chown(const char *, uid_t, gid_t);
int fchown(int, uid_t, gid_t);
int lchown(const char *, uid_t, gid_t);
int fchownat(int, const char *, uid_t, gid_t, int);

int link(const char *, const char *);
int linkat(int, const char *, int, const char *, int);
int symlink(const char *, const char *);
int symlinkat(const char *, int, const char *);
ssize_t readlink(const char *restrict, char *restrict, size_t);
ssize_t readlinkat(int, const char *restrict, char *restrict, size_t);
int unlink(const char *);
int unlinkat(int, const char *, int);
int rmdir(const char *);
int truncate(const char *, off_t);
int ftruncate(int, off_t);






int access(const char *, int);
int faccessat(int, const char *, int, int);

int chdir(const char *);
int fchdir(int);
char *getcwd(char *, size_t);

unsigned alarm(unsigned);
unsigned sleep(unsigned);
int pause(void);

pid_t fork(void);
pid_t _Fork(void);
int execve(const char *, char *const [], char *const []);
int execv(const char *, char *const []);
int execle(const char *, const char *, ...);
int execl(const char *, const char *, ...);
int execvp(const char *, char *const []);
int execlp(const char *, const char *, ...);
int fexecve(int, char *const [], char *const []);
_Noreturn void _exit(int);

pid_t getpid(void);
pid_t getppid(void);
pid_t getpgrp(void);
pid_t getpgid(pid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
pid_t getsid(pid_t);
char *ttyname(int);
int ttyname_r(int, char *, size_t);
int isatty(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);

uid_t getuid(void);
uid_t geteuid(void);
gid_t getgid(void);
gid_t getegid(void);
int getgroups(int, gid_t []);
int setuid(uid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setegid(gid_t);

char *getlogin(void);
int getlogin_r(char *, size_t);
int gethostname(char *, size_t);
char *ctermid(char *);

int getopt(int, char * const [], const char *);
extern char *optarg;
extern int optind, opterr, optopt;

long pathconf(const char *, int);
long fpathconf(int, int);
long sysconf(int);
size_t confstr(int, char *, size_t);






int setreuid(uid_t, uid_t);
int setregid(gid_t, gid_t);
int lockf(int, int, off_t);
long gethostid(void);
int nice(int);
void sync(void);
pid_t setpgrp(void);
char *crypt(const char *, const char *);
void encrypt(char *, int);
void swab(const void *restrict, void *restrict, ssize_t);




int usleep(unsigned);
unsigned ualarm(unsigned, unsigned);






int brk(void *);
void *sbrk(intptr_t);
pid_t vfork(void);
int vhangup(void);
int chroot(const char *);
int getpagesize(void);
int getdtablesize(void);
int sethostname(const char *, size_t);
int getdomainname(char *, size_t);
int setdomainname(const char *, size_t);
int setgroups(size_t, const gid_t *);
char *getpass(const char *);
int daemon(int, int);
void setusershell(void);
void endusershell(void);
char *getusershell(void);
int acct(const char *);
long syscall(long, ...);
int execvpe(const char *, char *const [], char *const []);
int issetugid(void);
int getentropy(void *, size_t);
extern int optreset;



extern char **environ;
int setresuid(uid_t, uid_t, uid_t);
int setresgid(gid_t, gid_t, gid_t);
int getresuid(uid_t *, uid_t *, uid_t *);
int getresgid(gid_t *, gid_t *, gid_t *);
char *get_current_dir_name(void);
int syncfs(int);
int euidaccess(const char *, int);
int eaccess(const char *, int);
ssize_t copy_file_range(int, off_t *, int, off_t *, size_t, unsigned);
pid_t gettid(void);
# 260 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix.h" 1 3 4
# 261 "/usr/include/unistd.h" 2 3 4
# 24 "/usr/include/fortify/unistd.h" 2 3 4
# 8 "main.c" 2
# 1 "/usr/include/sys/ioctl.h" 1 3 4
# 9 "/usr/include/sys/ioctl.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 369 "/usr/include/bits/alltypes.h" 3 4
struct winsize { unsigned short ws_row, ws_col, ws_xpixel, ws_ypixel; };
# 10 "/usr/include/sys/ioctl.h" 2 3 4
# 1 "/usr/include/bits/ioctl.h" 1 3 4
# 115 "/usr/include/bits/ioctl.h" 3 4
# 1 "/usr/include/bits/ioctl_fix.h" 1 3 4
# 116 "/usr/include/bits/ioctl.h" 2 3 4
# 11 "/usr/include/sys/ioctl.h" 2 3 4
# 115 "/usr/include/sys/ioctl.h" 3 4
int ioctl (int, int, ...);
# 9 "main.c" 2
# 1 "/usr/include/readline/readline.h" 1 3 4
# 35 "/usr/include/readline/readline.h" 3 4
# 1 "/usr/include/readline/rlstdc.h" 1 3 4
# 36 "/usr/include/readline/readline.h" 2 3 4
# 1 "/usr/include/readline/rltypedefs.h" 1 3 4
# 40 "/usr/include/readline/rltypedefs.h" 3 4
typedef int Function ();
typedef void VFunction ();
typedef char *CPFunction ();
typedef char **CPPFunction ();
# 54 "/usr/include/readline/rltypedefs.h" 3 4
typedef int rl_command_func_t (int, int);


typedef char *rl_compentry_func_t (const char *, int);
typedef char **rl_completion_func_t (const char *, int, int);

typedef char *rl_quote_func_t (char *, int, char *);
typedef char *rl_dequote_func_t (char *, int);

typedef int rl_compignore_func_t (char **);

typedef void rl_compdisp_func_t (char **, int, int);


typedef int rl_hook_func_t (void);


typedef int rl_getc_func_t (FILE *);




typedef int rl_linebuf_func_t (char *, int);


typedef int rl_intfunc_t (int);

typedef int rl_icpfunc_t (char *);
typedef int rl_icppfunc_t (char **);

typedef void rl_voidfunc_t (void);
typedef void rl_vintfunc_t (int);
typedef void rl_vcpfunc_t (char *);
typedef void rl_vcppfunc_t (char **);

typedef char *rl_cpvfunc_t (void);
typedef char *rl_cpifunc_t (int);
typedef char *rl_cpcpfunc_t (char *);
typedef char *rl_cpcppfunc_t (char **);
# 37 "/usr/include/readline/readline.h" 2 3 4
# 1 "/usr/include/readline/keymaps.h" 1 3 4
# 35 "/usr/include/readline/keymaps.h" 3 4
# 1 "/usr/include/readline/chardefs.h" 1 3 4
# 25 "/usr/include/readline/chardefs.h" 3 4
# 1 "/usr/include/ctype.h" 1 3 4
# 10 "/usr/include/ctype.h" 3 4
int isalnum(int);
int isalpha(int);
int isblank(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);


static inline int __isspace(int _c)
{
 return _c == ' ' || (unsigned)_c-'\t' < 5;
}
# 46 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 47 "/usr/include/ctype.h" 2 3 4

int isalnum_l(int, locale_t);
int isalpha_l(int, locale_t);
int isblank_l(int, locale_t);
int iscntrl_l(int, locale_t);
int isdigit_l(int, locale_t);
int isgraph_l(int, locale_t);
int islower_l(int, locale_t);
int isprint_l(int, locale_t);
int ispunct_l(int, locale_t);
int isspace_l(int, locale_t);
int isupper_l(int, locale_t);
int isxdigit_l(int, locale_t);
int tolower_l(int, locale_t);
int toupper_l(int, locale_t);

int isascii(int);
int toascii(int);
# 26 "/usr/include/readline/chardefs.h" 2 3 4
# 36 "/usr/include/readline/keymaps.h" 2 3 4
# 44 "/usr/include/readline/keymaps.h" 3 4
typedef struct _keymap_entry {
  char type;
  rl_command_func_t *function;
} KEYMAP_ENTRY;







typedef KEYMAP_ENTRY KEYMAP_ENTRY_ARRAY[257];
typedef KEYMAP_ENTRY *Keymap;






extern KEYMAP_ENTRY_ARRAY emacs_standard_keymap, emacs_meta_keymap, emacs_ctlx_keymap;
extern KEYMAP_ENTRY_ARRAY vi_insertion_keymap, vi_movement_keymap;



extern Keymap rl_make_bare_keymap (void);


extern Keymap rl_copy_keymap (Keymap);




extern Keymap rl_make_keymap (void);


extern void rl_discard_keymap (Keymap);





extern Keymap rl_get_keymap_by_name (const char *);


extern Keymap rl_get_keymap (void);


extern void rl_set_keymap (Keymap);


extern int rl_set_keymap_name (const char *, Keymap);
# 38 "/usr/include/readline/readline.h" 2 3 4
# 1 "/usr/include/readline/tilde.h" 1 3 4
# 30 "/usr/include/readline/tilde.h" 3 4
typedef char *tilde_hook_func_t (char *);





extern tilde_hook_func_t *tilde_expansion_preexpansion_hook;





extern tilde_hook_func_t *tilde_expansion_failure_hook;




extern char **tilde_additional_prefixes;




extern char **tilde_additional_suffixes;


extern char *tilde_expand (const char *);



extern char *tilde_expand_word (const char *);


extern char *tilde_find_word (const char *, int, int *);
# 39 "/usr/include/readline/readline.h" 2 3 4
# 54 "/usr/include/readline/readline.h" 3 4
enum undo_code { UNDO_DELETE, UNDO_INSERT, UNDO_BEGIN, UNDO_END };


typedef struct undo_list {
  struct undo_list *next;
  int start, end;
  char *text;
  enum undo_code what;
} UNDO_LIST;


extern UNDO_LIST *rl_undo_list;


typedef struct _funmap {
  const char *name;
  rl_command_func_t *function;
} FUNMAP;

extern FUNMAP **funmap;
# 82 "/usr/include/readline/readline.h" 3 4
extern int rl_digit_argument (int, int);
extern int rl_universal_argument (int, int);


extern int rl_forward_byte (int, int);
extern int rl_forward_char (int, int);
extern int rl_forward (int, int);
extern int rl_backward_byte (int, int);
extern int rl_backward_char (int, int);
extern int rl_backward (int, int);
extern int rl_beg_of_line (int, int);
extern int rl_end_of_line (int, int);
extern int rl_forward_word (int, int);
extern int rl_backward_word (int, int);
extern int rl_refresh_line (int, int);
extern int rl_clear_screen (int, int);
extern int rl_clear_display (int, int);
extern int rl_skip_csi_sequence (int, int);
extern int rl_arrow_keys (int, int);

extern int rl_previous_screen_line (int, int);
extern int rl_next_screen_line (int, int);


extern int rl_insert (int, int);
extern int rl_quoted_insert (int, int);
extern int rl_tab_insert (int, int);
extern int rl_newline (int, int);
extern int rl_do_lowercase_version (int, int);
extern int rl_rubout (int, int);
extern int rl_delete (int, int);
extern int rl_rubout_or_delete (int, int);
extern int rl_delete_horizontal_space (int, int);
extern int rl_delete_or_show_completions (int, int);
extern int rl_insert_comment (int, int);


extern int rl_upcase_word (int, int);
extern int rl_downcase_word (int, int);
extern int rl_capitalize_word (int, int);


extern int rl_transpose_words (int, int);
extern int rl_transpose_chars (int, int);


extern int rl_char_search (int, int);
extern int rl_backward_char_search (int, int);


extern int rl_beginning_of_history (int, int);
extern int rl_end_of_history (int, int);
extern int rl_get_next_history (int, int);
extern int rl_get_previous_history (int, int);
extern int rl_operate_and_get_next (int, int);
extern int rl_fetch_history (int, int);


extern int rl_set_mark (int, int);
extern int rl_exchange_point_and_mark (int, int);


extern int rl_vi_editing_mode (int, int);
extern int rl_emacs_editing_mode (int, int);


extern int rl_overwrite_mode (int, int);


extern int rl_re_read_init_file (int, int);
extern int rl_dump_functions (int, int);
extern int rl_dump_macros (int, int);
extern int rl_dump_variables (int, int);


extern int rl_complete (int, int);
extern int rl_possible_completions (int, int);
extern int rl_insert_completions (int, int);
extern int rl_old_menu_complete (int, int);
extern int rl_menu_complete (int, int);
extern int rl_backward_menu_complete (int, int);


extern int rl_kill_word (int, int);
extern int rl_backward_kill_word (int, int);
extern int rl_kill_line (int, int);
extern int rl_backward_kill_line (int, int);
extern int rl_kill_full_line (int, int);
extern int rl_unix_word_rubout (int, int);
extern int rl_unix_filename_rubout (int, int);
extern int rl_unix_line_discard (int, int);
extern int rl_copy_region_to_kill (int, int);
extern int rl_kill_region (int, int);
extern int rl_copy_forward_word (int, int);
extern int rl_copy_backward_word (int, int);
extern int rl_yank (int, int);
extern int rl_yank_pop (int, int);
extern int rl_yank_nth_arg (int, int);
extern int rl_yank_last_arg (int, int);
extern int rl_bracketed_paste_begin (int, int);






extern int rl_reverse_search_history (int, int);
extern int rl_forward_search_history (int, int);


extern int rl_start_kbd_macro (int, int);
extern int rl_end_kbd_macro (int, int);
extern int rl_call_last_kbd_macro (int, int);
extern int rl_print_last_kbd_macro (int, int);


extern int rl_revert_line (int, int);
extern int rl_undo_command (int, int);


extern int rl_tilde_expand (int, int);


extern int rl_restart_output (int, int);
extern int rl_stop_output (int, int);


extern int rl_abort (int, int);
extern int rl_tty_status (int, int);


extern int rl_history_search_forward (int, int);
extern int rl_history_search_backward (int, int);
extern int rl_history_substr_search_forward (int, int);
extern int rl_history_substr_search_backward (int, int);
extern int rl_noninc_forward_search (int, int);
extern int rl_noninc_reverse_search (int, int);
extern int rl_noninc_forward_search_again (int, int);
extern int rl_noninc_reverse_search_again (int, int);


extern int rl_insert_close (int, int);


extern void rl_callback_handler_install (const char *, rl_vcpfunc_t *);
extern void rl_callback_read_char (void);
extern void rl_callback_handler_remove (void);
extern void rl_callback_sigcleanup (void);



extern int rl_vi_redo (int, int);
extern int rl_vi_undo (int, int);
extern int rl_vi_yank_arg (int, int);
extern int rl_vi_fetch_history (int, int);
extern int rl_vi_search_again (int, int);
extern int rl_vi_search (int, int);
extern int rl_vi_complete (int, int);
extern int rl_vi_tilde_expand (int, int);
extern int rl_vi_prev_word (int, int);
extern int rl_vi_next_word (int, int);
extern int rl_vi_end_word (int, int);
extern int rl_vi_insert_beg (int, int);
extern int rl_vi_append_mode (int, int);
extern int rl_vi_append_eol (int, int);
extern int rl_vi_eof_maybe (int, int);
extern int rl_vi_insertion_mode (int, int);
extern int rl_vi_insert_mode (int, int);
extern int rl_vi_movement_mode (int, int);
extern int rl_vi_arg_digit (int, int);
extern int rl_vi_change_case (int, int);
extern int rl_vi_put (int, int);
extern int rl_vi_column (int, int);
extern int rl_vi_delete_to (int, int);
extern int rl_vi_change_to (int, int);
extern int rl_vi_yank_to (int, int);
extern int rl_vi_yank_pop (int, int);
extern int rl_vi_rubout (int, int);
extern int rl_vi_delete (int, int);
extern int rl_vi_back_to_indent (int, int);
extern int rl_vi_unix_word_rubout (int, int);
extern int rl_vi_first_print (int, int);
extern int rl_vi_char_search (int, int);
extern int rl_vi_match (int, int);
extern int rl_vi_change_char (int, int);
extern int rl_vi_subst (int, int);
extern int rl_vi_overstrike (int, int);
extern int rl_vi_overstrike_delete (int, int);
extern int rl_vi_replace (int, int);
extern int rl_vi_set_mark (int, int);
extern int rl_vi_goto_mark (int, int);


extern int rl_vi_check (void);
extern int rl_vi_domove (int, int *);
extern int rl_vi_bracktype (int);

extern void rl_vi_start_inserting (int, int, int);


extern int rl_vi_fWord (int, int);
extern int rl_vi_bWord (int, int);
extern int rl_vi_eWord (int, int);
extern int rl_vi_fword (int, int);
extern int rl_vi_bword (int, int);
extern int rl_vi_eword (int, int);
# 297 "/usr/include/readline/readline.h" 3 4
extern char *readline (const char *);

extern int rl_set_prompt (const char *);
extern int rl_expand_prompt (char *);

extern int rl_initialize (void);


extern int rl_discard_argument (void);


extern int rl_add_defun (const char *, rl_command_func_t *, int);
extern int rl_bind_key (int, rl_command_func_t *);
extern int rl_bind_key_in_map (int, rl_command_func_t *, Keymap);
extern int rl_unbind_key (int);
extern int rl_unbind_key_in_map (int, Keymap);
extern int rl_bind_key_if_unbound (int, rl_command_func_t *);
extern int rl_bind_key_if_unbound_in_map (int, rl_command_func_t *, Keymap);
extern int rl_unbind_function_in_map (rl_command_func_t *, Keymap);
extern int rl_unbind_command_in_map (const char *, Keymap);
extern int rl_bind_keyseq (const char *, rl_command_func_t *);
extern int rl_bind_keyseq_in_map (const char *, rl_command_func_t *, Keymap);
extern int rl_bind_keyseq_if_unbound (const char *, rl_command_func_t *);
extern int rl_bind_keyseq_if_unbound_in_map (const char *, rl_command_func_t *, Keymap);
extern int rl_generic_bind (int, const char *, char *, Keymap);

extern char *rl_variable_value (const char *);
extern int rl_variable_bind (const char *, const char *);


extern int rl_set_key (const char *, rl_command_func_t *, Keymap);


extern int rl_macro_bind (const char *, const char *, Keymap);


extern int rl_translate_keyseq (const char *, char *, int *);
extern char *rl_untranslate_keyseq (int);

extern rl_command_func_t *rl_named_function (const char *);
extern rl_command_func_t *rl_function_of_keyseq (const char *, Keymap, int *);
extern rl_command_func_t *rl_function_of_keyseq_len (const char *, size_t, Keymap, int *);
extern int rl_trim_arg_from_keyseq (const char *, size_t, Keymap);

extern void rl_list_funmap_names (void);
extern char **rl_invoking_keyseqs_in_map (rl_command_func_t *, Keymap);
extern char **rl_invoking_keyseqs (rl_command_func_t *);

extern void rl_function_dumper (int);
extern void rl_macro_dumper (int);
extern void rl_variable_dumper (int);

extern int rl_read_init_file (const char *);
extern int rl_parse_and_bind (char *);


extern Keymap rl_make_bare_keymap (void);
extern int rl_empty_keymap (Keymap);
extern Keymap rl_copy_keymap (Keymap);
extern Keymap rl_make_keymap (void);
extern void rl_discard_keymap (Keymap);
extern void rl_free_keymap (Keymap);

extern Keymap rl_get_keymap_by_name (const char *);
extern char *rl_get_keymap_name (Keymap);
extern void rl_set_keymap (Keymap);
extern Keymap rl_get_keymap (void);

extern int rl_set_keymap_name (const char *, Keymap);


extern void rl_set_keymap_from_edit_mode (void);
extern char *rl_get_keymap_name_from_edit_mode (void);


extern int rl_add_funmap_entry (const char *, rl_command_func_t *);
extern const char **rl_funmap_names (void);


extern void rl_initialize_funmap (void);


extern void rl_push_macro_input (char *);


extern void rl_add_undo (enum undo_code, int, int, char *);
extern void rl_free_undo_list (void);
extern int rl_do_undo (void);
extern int rl_begin_undo_group (void);
extern int rl_end_undo_group (void);
extern int rl_modifying (int, int);


extern void rl_redisplay (void);
extern int rl_on_new_line (void);
extern int rl_on_new_line_with_prompt (void);
extern int rl_forced_update_display (void);
extern int rl_clear_visible_line (void);
extern int rl_clear_message (void);
extern int rl_reset_line_state (void);
extern int rl_crlf (void);



extern void rl_keep_mark_active (void);

extern void rl_activate_mark (void);
extern void rl_deactivate_mark (void);
extern int rl_mark_active_p (void);




extern int rl_message ();


extern int rl_show_char (int);


extern int rl_character_len (int, int);
extern void rl_redraw_prompt_last_line (void);


extern void rl_save_prompt (void);
extern void rl_restore_prompt (void);


extern void rl_replace_line (const char *, int);
extern int rl_insert_text (const char *);
extern int rl_delete_text (int, int);
extern int rl_kill_text (int, int);
extern char *rl_copy_text (int, int);


extern void rl_prep_terminal (int);
extern void rl_deprep_terminal (void);
extern void rl_tty_set_default_bindings (Keymap);
extern void rl_tty_unset_default_bindings (Keymap);

extern int rl_tty_set_echoing (int);
extern int rl_reset_terminal (const char *);
extern void rl_resize_terminal (void);
extern void rl_set_screen_size (int, int);
extern void rl_get_screen_size (int *, int *);
extern void rl_reset_screen_size (void);

extern char *rl_get_termcap (const char *);


extern int rl_stuff_char (int);
extern int rl_execute_next (int);
extern int rl_clear_pending_input (void);
extern int rl_read_key (void);
extern int rl_getc (FILE *);
extern int rl_set_keyboard_input_timeout (int);


extern int rl_set_timeout (unsigned int, unsigned int);
extern int rl_timeout_remaining (unsigned int *, unsigned int *);





extern void rl_extend_line_buffer (int);
extern int rl_ding (void);
extern int rl_alphabetic (int);
extern void rl_free (void *);


extern int rl_set_signals (void);
extern int rl_clear_signals (void);
extern void rl_cleanup_after_signal (void);
extern void rl_reset_after_signal (void);
extern void rl_free_line_state (void);

extern int rl_pending_signal (void);
extern void rl_check_signals (void);

extern void rl_echo_signal_char (int);

extern int rl_set_paren_blink_timeout (int);



extern void rl_clear_history (void);


extern int rl_maybe_save_line (void);
extern int rl_maybe_unsave_line (void);
extern int rl_maybe_replace_line (void);


extern int rl_complete_internal (int);
extern void rl_display_match_list (char **, int, int);

extern char **rl_completion_matches (const char *, rl_compentry_func_t *);
extern char *rl_username_completion_function (const char *, int);
extern char *rl_filename_completion_function (const char *, int);

extern int rl_completion_mode (rl_command_func_t *);
# 522 "/usr/include/readline/readline.h" 3 4
extern const char *rl_library_version;
extern int rl_readline_version;


extern int rl_gnu_readline_p;


extern unsigned long rl_readline_state;



extern int rl_editing_mode;



extern int rl_insert_mode;



extern const char *rl_readline_name;



extern char *rl_prompt;



extern char *rl_display_prompt;


extern char *rl_line_buffer;


extern int rl_point;
extern int rl_end;


extern int rl_mark;



extern int rl_done;



extern int rl_eof_found;


extern int rl_pending_input;




extern int rl_dispatching;



extern int rl_explicit_arg;


extern int rl_numeric_arg;


extern rl_command_func_t *rl_last_func;


extern const char *rl_terminal_name;


extern FILE *rl_instream;
extern FILE *rl_outstream;




extern int rl_prefer_env_winsize;



extern rl_hook_func_t *rl_startup_hook;




extern rl_hook_func_t *rl_pre_input_hook;



extern rl_hook_func_t *rl_event_hook;


extern rl_hook_func_t *rl_signal_event_hook;

extern rl_hook_func_t *rl_timeout_event_hook;



extern rl_hook_func_t *rl_input_available_hook;



extern rl_getc_func_t *rl_getc_function;

extern rl_voidfunc_t *rl_redisplay_function;

extern rl_vintfunc_t *rl_prep_term_function;
extern rl_voidfunc_t *rl_deprep_term_function;


extern Keymap rl_executing_keymap;
extern Keymap rl_binding_keymap;

extern int rl_executing_key;
extern char *rl_executing_keyseq;
extern int rl_key_sequence_length;





extern int rl_erase_empty_line;




extern int rl_already_prompted;



extern int rl_num_chars_to_read;


extern char *rl_executing_macro;




extern int rl_catch_signals;






extern int rl_catch_sigwinch;



extern int rl_change_environment;





extern rl_compentry_func_t *rl_completion_entry_function;



extern rl_compentry_func_t *rl_menu_completion_entry_function;







extern rl_compignore_func_t *rl_ignore_some_completions_function;
# 697 "/usr/include/readline/readline.h" 3 4
extern rl_completion_func_t *rl_attempted_completion_function;




extern const char *rl_basic_word_break_characters;




extern const char *rl_completer_word_break_characters;




extern rl_cpvfunc_t *rl_completion_word_break_hook;





extern const char *rl_completer_quote_characters;


extern const char *rl_basic_quote_characters;


extern const char *rl_filename_quote_characters;




extern const char *rl_special_prefixes;
# 740 "/usr/include/readline/readline.h" 3 4
extern rl_icppfunc_t *rl_directory_completion_hook;
# 753 "/usr/include/readline/readline.h" 3 4
extern rl_icppfunc_t *rl_directory_rewrite_hook;






extern rl_icppfunc_t *rl_filename_stat_hook;
# 771 "/usr/include/readline/readline.h" 3 4
extern rl_dequote_func_t *rl_filename_rewrite_hook;
# 783 "/usr/include/readline/readline.h" 3 4
extern rl_compdisp_func_t *rl_completion_display_matches_hook;




extern int rl_filename_completion_desired;






extern int rl_filename_quoting_desired;





extern rl_quote_func_t *rl_filename_quoting_function;




extern rl_dequote_func_t *rl_filename_dequoting_function;




extern rl_linebuf_func_t *rl_char_is_quoted_p;



extern int rl_attempted_completion_over;




extern int rl_completion_type;


extern int rl_completion_invoking_key;




extern int rl_completion_query_items;



extern int rl_completion_append_character;



extern int rl_completion_suppress_append;



extern int rl_completion_quote_character;



extern int rl_completion_found_quote;




extern int rl_completion_suppress_quote;


extern int rl_sort_completion_matches;
# 863 "/usr/include/readline/readline.h" 3 4
extern int rl_completion_mark_symlink_dirs;


extern int rl_ignore_completion_duplicates;



extern int rl_inhibit_completion;







extern int rl_persistent_signal_handlers;
# 931 "/usr/include/readline/readline.h" 3 4
struct readline_state {

  int point;
  int end;
  int mark;
  int buflen;
  char *buffer;
  UNDO_LIST *ul;
  char *prompt;


  int rlstate;
  int done;
  Keymap kmap;


  rl_command_func_t *lastfunc;
  int insmode;
  int edmode;
  char *kseq;
  int kseqlen;

  int pendingin;
  FILE *inf;
  FILE *outf;
  char *macro;


  int catchsigs;
  int catchsigwinch;




  rl_compentry_func_t *entryfunc;
  rl_compentry_func_t *menuentryfunc;
  rl_compignore_func_t *ignorefunc;
  rl_completion_func_t *attemptfunc;
  const char *wordbreakchars;






  char reserved[64];
};

extern int rl_save_state (struct readline_state *);
extern int rl_restore_state (struct readline_state *);
# 10 "main.c" 2
# 1 "/usr/include/readline/history.h" 1 3 4
# 29 "/usr/include/readline/history.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 33 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 217 "/usr/include/bits/alltypes.h" 3 4
typedef void * timer_t;




typedef int clockid_t;




typedef long clock_t;
# 34 "/usr/include/time.h" 2 3 4






struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 const char *tm_zone;
};

clock_t clock (void);
time_t time (time_t *);
double difftime (time_t, time_t);
time_t mktime (struct tm *);
size_t strftime (char *restrict, size_t, const char *restrict, const struct tm *restrict);
struct tm *gmtime (const time_t *);
struct tm *localtime (const time_t *);
char *asctime (const struct tm *);
char *ctime (const time_t *);
int timespec_get(struct timespec *, int);
# 73 "/usr/include/time.h" 3 4
size_t strftime_l (char * restrict, size_t, const char * restrict, const struct tm * restrict, locale_t);

struct tm *gmtime_r (const time_t *restrict, struct tm *restrict);
struct tm *localtime_r (const time_t *restrict, struct tm *restrict);
char *asctime_r (const struct tm *restrict, char *restrict);
char *ctime_r (const time_t *, char *);

void tzset (void);

struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 102 "/usr/include/time.h" 3 4
int nanosleep (const struct timespec *, struct timespec *);
int clock_getres (clockid_t, struct timespec *);
int clock_gettime (clockid_t, struct timespec *);
int clock_settime (clockid_t, const struct timespec *);
int clock_nanosleep (clockid_t, int, const struct timespec *, struct timespec *);
int clock_getcpuclockid (pid_t, clockid_t *);

struct sigevent;
int timer_create (clockid_t, struct sigevent *restrict, timer_t *restrict);
int timer_delete (timer_t);
int timer_settime (timer_t, int, const struct itimerspec *restrict, struct itimerspec *restrict);
int timer_gettime (timer_t, struct itimerspec *);
int timer_getoverrun (timer_t);

extern char *tzname[2];





char *strptime (const char *restrict, const char *restrict, struct tm *restrict);
extern int daylight;
extern long timezone;
extern int getdate_err;
struct tm *getdate (const char *);




int stime(const time_t *);
time_t timegm(struct tm *);
# 30 "/usr/include/readline/history.h" 2 3 4
# 40 "/usr/include/readline/history.h" 3 4
typedef void *histdata_t;
# 51 "/usr/include/readline/history.h" 3 4
typedef struct _hist_entry {
  char *line;
  char *timestamp;
  histdata_t data;
} HIST_ENTRY;





typedef struct _hist_state {
  HIST_ENTRY **entries;
  int offset;
  int length;
  int size;
  int flags;
} HISTORY_STATE;
# 76 "/usr/include/readline/history.h" 3 4
extern void using_history (void);


extern HISTORY_STATE *history_get_history_state (void);


extern void history_set_history_state (HISTORY_STATE *);





extern void add_history (const char *);



extern void add_history_time (const char *);



extern HIST_ENTRY *remove_history (int);


extern HIST_ENTRY **remove_history_range (int, int);



extern HIST_ENTRY *alloc_history_entry (char *, char *);


extern HIST_ENTRY *copy_history_entry (HIST_ENTRY *);



extern histdata_t free_history_entry (HIST_ENTRY *);




extern HIST_ENTRY *replace_history_entry (int, const char *, histdata_t);


extern void clear_history (void);


extern void stifle_history (int);




extern int unstifle_history (void);


extern int history_is_stifled (void);






extern HIST_ENTRY **history_list (void);



extern int where_history (void);



extern HIST_ENTRY *current_history (void);



extern HIST_ENTRY *history_get (int);



extern time_t history_get_time (HIST_ENTRY *);



extern int history_total_bytes (void);




extern int history_set_pos (int);




extern HIST_ENTRY *previous_history (void);




extern HIST_ENTRY *next_history (void);
# 181 "/usr/include/readline/history.h" 3 4
extern int history_search (const char *, int);




extern int history_search_prefix (const char *, int);






extern int history_search_pos (const char *, int, int);






extern int read_history (const char *);






extern int read_history_range (const char *, int, int);




extern int write_history (const char *);



extern int append_history (int, const char *);


extern int history_truncate_file (const char *, int);
# 235 "/usr/include/readline/history.h" 3 4
extern int history_expand (char *, char **);




extern char *history_arg_extract (int, int, const char *);







extern char *get_history_event (const char *, int *, int);



extern char **history_tokenize (const char *);


extern int history_base;
extern int history_length;
extern int history_max_entries;
extern int history_offset;

extern int history_lines_read_from_file;
extern int history_lines_written_to_file;

extern char history_expansion_char;
extern char history_subst_char;
extern char *history_word_delimiters;
extern char history_comment_char;
extern char *history_no_expand_chars;
extern char *history_search_delimiter_chars;

extern int history_quotes_inhibit_expansion;
extern int history_quoting_state;

extern int history_write_timestamps;


extern int history_multiline_entries;
extern int history_file_version;


extern int max_input_history;




extern rl_linebuf_func_t *history_inhibit_expansion_function;
# 11 "main.c" 2
# 1 "/usr/include/locale.h" 1 3 4
# 26 "/usr/include/locale.h" 3 4
struct lconv {
 char *decimal_point;
 char *thousands_sep;
 char *grouping;

 char *int_curr_symbol;
 char *currency_symbol;
 char *mon_decimal_point;
 char *mon_thousands_sep;
 char *mon_grouping;
 char *positive_sign;
 char *negative_sign;
 char int_frac_digits;
 char frac_digits;
 char p_cs_precedes;
 char p_sep_by_space;
 char n_cs_precedes;
 char n_sep_by_space;
 char p_sign_posn;
 char n_sign_posn;
 char int_p_cs_precedes;
 char int_p_sep_by_space;
 char int_n_cs_precedes;
 char int_n_sep_by_space;
 char int_p_sign_posn;
 char int_n_sign_posn;
};


char *setlocale (int, const char *);
struct lconv *localeconv(void);







# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 65 "/usr/include/locale.h" 2 3 4
# 76 "/usr/include/locale.h" 3 4
locale_t duplocale(locale_t);
void freelocale(locale_t);
locale_t newlocale(int, const char *, locale_t);
locale_t uselocale(locale_t);
# 12 "main.c" 2
# 1 "/usr/include/limits.h" 1 3 4
# 13 "main.c" 2




# 16 "main.c"
struct sInfo
{
    int cursor;
    int page;
    string path;
    
# 21 "main.c" 3 4
   _Bool 
# 21 "main.c"
        app_end;

    list<string>*% files;
    list<string>*% selected_files;
    string searching_str;
};

int xgetmaxx()
{
    auto ws = new winsize;
    ioctl(
# 31 "main.c" 3 4
         1
# 31 "main.c"
                      , 
# 31 "main.c" 3 4
                        0x5413
# 31 "main.c"
                                  , ws);

    int result = ws.ws_col;

    if(result == -1 || result == 0) {
        return getmaxx(stdscr);
    }
    else {
        return result;
    }

    return result;
}

int xgetmaxy()
{
    auto ws = new winsize;
    ioctl(
# 48 "main.c" 3 4
         1
# 48 "main.c"
                      , 
# 48 "main.c" 3 4
                        0x5413
# 48 "main.c"
                                  , ws);

    int result = ws.ws_row;

    if(result == -1 || result == 0) {
        return getmaxy(stdscr);
    }
    else {
        return result;
    }

    return result;
}

void read_dir(sInfo* info)
{
    info.files = new list<string>();
    info.selected_files = new list<string>();

    DIR* dir = opendir(info.path);

    if(dir == null) {
        info.cursor = 0;
        info.page = 0;
        info.files.push_back(string("NO FILES"));
        return;
    }

    struct dirent* entry;
    while(entry = readdir(dir)) {
        info.files.push_back(string(entry->d_name));
    }

    closedir(dir);

    info.files = info.files.sort_with_lambda(int lambda(char* left, char* right) { return strcmp(left, right); });
}

void vd(sInfo* info)
{
    char* line = readline(getenv("PWD") + " > ");

    if(line == null) {
        return;
    }

    string cmdline = string(line);

    free(line);

    char buf[
# 98 "main.c" 3 4
            1024
# 98 "main.c"
                  ];

    FILE* f = popen(cmdline, "r");
    if(f == 
# 101 "main.c" 3 4
           ((void*)0)
# 101 "main.c"
               ) {
        return;
    }
    info.files.push_back(string("."));
    info.files.push_back(string(".."));

    while(1) {
        char file[
# 108 "main.c" 3 4
                 4096
# 108 "main.c"
                         ];
        char* result = fgets(file, 
# 109 "main.c" 3 4
                                  4096
# 109 "main.c"
                                          , f);

        if(result == null) {
            break;
        }

        info.files.push_back(string(result).chomp());
    }
    if(pclose(f) < 0) {
        return;
    }

    info.files = info.files.sort_with_lambda(int lambda(char* left, char* right) { return strcmp(left, right); });
}

void fix_cursor(sInfo* info);


# 126 "main.c" 3 4
_Bool 
# 126 "main.c"
    change_directory(sInfo* info, char* path, char* cursor_file)
{
    auto absolute_path = realpath(path, 
# 128 "main.c" 3 4
                                       ((void*)0)
# 128 "main.c"
                                           );

    auto absolute_path2 = string(absolute_path);

    free(absolute_path);

    info.path = absolute_path2;
    read_dir(info);

    chdir(info.path);
    setenv("PWD", info.path, 1);

    if(cursor_file) {
        int i = 0;
        
# 142 "main.c" 3
       for(var o2_saved = (
# 142 "main.c"
       info.files
# 142 "main.c" 3
       ), var 
# 142 "main.c"
       it 
# 142 "main.c" 3
       = (o2_saved).begin(); !(o2_saved).end(); 
# 142 "main.c"
       it 
# 142 "main.c" 3
       = (o2_saved).next()) 
# 142 "main.c"
                               {
            if(strcmp(it, cursor_file) == 0) {
                info.cursor = i;
                fix_cursor(info);
                break;
            }

            i++;
        }
    }
    else {
        info.cursor = 0;
        info.page = 0;
    }

    return 
# 157 "main.c" 3 4
          1
# 157 "main.c"
              ;
}


void fix_cursor(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    if(info.cursor >= info.files.length()) {
        info.cursor = info.files.length() - 1;
    }
    if(info.cursor < 0) {
        info.cursor = 0;
    }

    info.page = info.cursor / (3*maxy);
}

void view(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    
# 181 "main.c" 3 4
   werase(stdscr)
# 181 "main.c"
          ;

    int files_in_one_page = maxy * 3;

    int head = info.page * files_in_one_page;
    int tail = (info.page+1) * files_in_one_page;

    info.files.sublist(head, tail).each {
        string path = info.path + string("/") + it;

        struct stat stat_;
        (void)stat(path, &stat_);

        
# 194 "main.c" 3 4
       _Bool 
# 194 "main.c"
            is_dir = 
# 194 "main.c" 3 4
                     (((
# 194 "main.c"
                     stat_.st_mode
# 194 "main.c" 3 4
                     ) & 0170000) == 0040000)
# 194 "main.c"
                                           ;
        
# 195 "main.c" 3 4
       _Bool 
# 195 "main.c"
            selected = info.selected_files.contained(it);

        int index = it2;
        int cols = maxx/3;
        int x = (index / maxy) * cols;
        int y = index % maxy;
        if(it2+head == info.cursor) {
            
# 202 "main.c" 3 4
           wattr_on(stdscr, (attr_t)((((chtype)((1U)) << ((10) + 8)))), ((void*)0))
# 202 "main.c"
                            ;
            if(selected) {
                if(is_dir) {
                    mvprintw(y, x, "* %s/", it.substring(0, cols-3));
                }
                else {
                    mvprintw(y, x, "* %s", it.substring(0, cols-2));
                }
            }
            else {
                if(is_dir) {
                    mvprintw(y, x, "%s/", it.substring(0, cols-1));
                }
                else {
                    mvprintw(y, x, "%s", it.substring(0, cols));
                }
            }
            
# 219 "main.c" 3 4
           wattr_off(stdscr, (attr_t)((((chtype)((1U)) << ((10) + 8)))), ((void*)0))
# 219 "main.c"
                             ;
        }
        else {
            if(selected) {
                if(is_dir) {
                    mvprintw(y, x, "* %s/", it.substring(0, cols-3));
                }
                else {
                    mvprintw(y, x, "* %s", it.substring(0, cols-2));
                }
            }
            else {
                if(is_dir) {
                    mvprintw(y, x, "%s/", it.substring(0, cols-1));
                }
                else {
                    mvprintw(y, x, "%s", it.substring(0, cols));
                }
            }
        }
    }

    
# 241 "main.c" 3 4
   wattr_on(stdscr, (attr_t)((((chtype)((1U)) << ((10) + 8)))), ((void*)0))
# 241 "main.c"
                    ;
    mvprintw(maxy, 0, "%s page %d files %d head %d tail %d press ? for manual", info.path, info.page, info.files.length(), head, tail);
    
# 243 "main.c" 3 4
   wattr_off(stdscr, (attr_t)((((chtype)((1U)) << ((10) + 8)))), ((void*)0))
# 243 "main.c"
                     ;

    
# 245 "main.c" 3 4
   wrefresh(stdscr)
# 245 "main.c"
            ;
}


string cursor_path(sInfo* info)
{
    char* file_name = info.files.item(info.cursor, null);
    return xsprintf("%s/%s", info.path, file_name);
}

string cursor_file(sInfo* info)
{
    return string(info.files.item(info.cursor, null));
}

string selected_files(sInfo* info)
{
    var buf = new buffer();
    
# 263 "main.c" 3
   for(var o2_saved = (
# 263 "main.c"
   info.selected_files
# 263 "main.c" 3
   ), var 
# 263 "main.c"
   it 
# 263 "main.c" 3
   = (o2_saved).begin(); !(o2_saved).end(); 
# 263 "main.c"
   it 
# 263 "main.c" 3
   = (o2_saved).next()) 
# 263 "main.c"
                                    {
        buf.append_str("\"");
        buf.append_str(it);
        buf.append_str("\"");
        buf.append_str(" ");
    }
    return buf.to_string();
}

void search_file(sInfo* info)
{
    string str = string("");
    while(
# 275 "main.c" 3 4
         1
# 275 "main.c"
             ) {
        int key = 
# 276 "main.c" 3 4
                 wgetch(stdscr)
# 276 "main.c"
                        ;

        if(key >= ' ' && key <= '~') {
            str = xsprintf("%s%c", str, key);
            int n = 0;
            
# 281 "main.c" 3
           for(var o2_saved = (
# 281 "main.c"
           info.files
# 281 "main.c" 3
           ), var 
# 281 "main.c"
           it 
# 281 "main.c" 3
           = (o2_saved).begin(); !(o2_saved).end(); 
# 281 "main.c"
           it 
# 281 "main.c" 3
           = (o2_saved).next()) 
# 281 "main.c"
                                   {
                if(strcasestr(it, str)) {
                    info.cursor = n;
                    info.searching_str = string(str);
                    break;
                }
                n++;
            }
        }
        else {
            break;
        }
    }
}

void search_next_file(sInfo* info)
{
    int n = info.cursor+1;
    
# 299 "main.c" 3
   for(var o2_saved = (
# 299 "main.c"
   info.files.sublist(n, -1)
# 299 "main.c" 3
   ), var 
# 299 "main.c"
   it 
# 299 "main.c" 3
   = (o2_saved).begin(); !(o2_saved).end(); 
# 299 "main.c"
   it 
# 299 "main.c" 3
   = (o2_saved).next()) 
# 299 "main.c"
                                          {
        if(strcasestr(it, info.searching_str)) {
            info.cursor = n;
            break;
        }
        n++;
    }
}

void search_prev_file(sInfo* info)
{
    int n = info.cursor-1;
    
# 311 "main.c" 3
   for(var o2_saved = (
# 311 "main.c"
   info.files.sublist(0, n+1).reverse()
# 311 "main.c" 3
   ), var 
# 311 "main.c"
   it 
# 311 "main.c" 3
   = (o2_saved).begin(); !(o2_saved).end(); 
# 311 "main.c"
   it 
# 311 "main.c" 3
   = (o2_saved).next()) 
# 311 "main.c"
                                                     {
        if(strcasestr(it, info.searching_str)) {
            info.cursor = n;
            break;
        }
        n--;
    }
}

void select_files(sInfo* info)
{
    string cursor_file = cursor_file(info);

    if(info.selected_files.contained(cursor_file)) {
        info.selected_files.remove(cursor_file);
    }
    else {
        info.selected_files.add(cursor_file);
    }
}

void manual(sInfo* info)
{
    
# 334 "main.c" 3 4
   wclear(stdscr)
# 334 "main.c"
          ;
    mvprintw(0,0, "q --> quit");
    mvprintw(1,0, "* --> virtual directory(type shell command, and the result of the command is file list");
    mvprintw(2,0, "ENTER --> run command(type shell command) or insert directory");
    mvprintw(3,0, "~ --> move to home directory");
    mvprintw(4,0, "BACK SPACE ^H --> move to the parent directory");
    mvprintw(5,0, "d --> delete file");
    mvprintw(6,0, "c --> copy file");
    mvprintw(7,0, "m --> move file");
    mvprintw(8,0, "n --> next searching file");
    mvprintw(9,0, "N --> prev searching file");
    mvprintw(10,0, "x --> excute file");
    mvprintw(11,0, "e --> edit file");
    mvprintw(12,0, "LEFT h --> move cursor left");
    mvprintw(13,0, "RIGHT l --> move cursor right");
    mvprintw(14,0, "DOWN j --> move cursor down");
    mvprintw(15,0, "UP k --> move cursor up");
    mvprintw(16,0, "CTRL-L --> reread directory and refresh the window");
    mvprintw(17,0, "/ --> move cursor with searching file (n --> next, N --> prev)");
    mvprintw(18,0, "? --> this manual");
    mvprintw(19,0, ": --> run shell");
    mvprintw(20,0, "SPACE --> select files");

    
# 357 "main.c" 3 4
   wrefresh(stdscr)
# 357 "main.c"
            ;
    
# 358 "main.c" 3 4
   wgetch(stdscr)
# 358 "main.c"
          ;
}

void handmade_delete_file(char* path)
{
    
# 363 "main.c" 3 4
   werase(stdscr)
# 363 "main.c"
          ;
    mvprintw(0, 0, "Is %s delete OK? (y,Y,ENTER/other", path);
    
# 365 "main.c" 3 4
   wrefresh(stdscr)
# 365 "main.c"
            ;

    while(
# 367 "main.c" 3 4
         1
# 367 "main.c"
             ) {
        var key = 
# 368 "main.c" 3 4
                 wgetch(stdscr)
# 368 "main.c"
                        ;

        if(key == 'y' || key == 'Y' || key == 10) {
            unlink(path);
            break;
        }
        else {
            break;
        }
    }
}

void handmade_selected_delete_file(sInfo* info)
{
    
# 382 "main.c" 3 4
   werase(stdscr)
# 382 "main.c"
          ;
    mvprintw(0, 0, "Are %s delete OK? (y,Y,ENTER/other", selected_files(info));
    
# 384 "main.c" 3 4
   wrefresh(stdscr)
# 384 "main.c"
            ;

    while(
# 386 "main.c" 3 4
         1
# 386 "main.c"
             ) {
        var key = 
# 387 "main.c" 3 4
                 wgetch(stdscr)
# 387 "main.c"
                        ;

        if(key == 'y' || key == 'Y' || key == 10) {
            
# 390 "main.c" 3
           for(var o2_saved = (
# 390 "main.c"
           info.selected_files
# 390 "main.c" 3
           ), var 
# 390 "main.c"
           it 
# 390 "main.c" 3
           = (o2_saved).begin(); !(o2_saved).end(); 
# 390 "main.c"
           it 
# 390 "main.c" 3
           = (o2_saved).next()) 
# 390 "main.c"
                                            {
                unlink(it);
            }
            break;
        }
        else {
            break;
        }
    }
}

void input(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    auto key = 
# 406 "main.c" 3 4
              wgetch(stdscr)
# 406 "main.c"
                     ;

    switch(key) {
        case 'q':
            info.app_end = 
# 410 "main.c" 3 4
                          1
# 410 "main.c"
                              ;
            break;

        case '*':
            endwin();
            info.files.reset();
            vd(info);
            initscr();
            keypad(stdscr, 
# 418 "main.c" 3 4
                          1
# 418 "main.c"
                              );
            raw();
            noecho();
            break;

        case 
# 423 "main.c" 3 4
            0527
# 423 "main.c"
                     :
        case '\n': {
            string path = info.path + string("/") + cursor_file(info);

            struct stat stat_;
            (void)stat(path, &stat_);

            
# 430 "main.c" 3 4
           _Bool 
# 430 "main.c"
                is_dir = 
# 430 "main.c" 3 4
                         (((
# 430 "main.c"
                         stat_.st_mode
# 430 "main.c" 3 4
                         ) & 0170000) == 0040000)
# 430 "main.c"
                                               ;

            if(is_dir) {
                change_directory(info, path, null);
            }
            else {
                endwin();
                if(info.selected_files.length() > 0) {
                    system(xsprintf("shsh -i ' %s' -n 0 -o", selected_files(info)));
                }
                else {
                    system(xsprintf("shsh -i ' %s' -n 0 -o", cursor_file(info)));
                }
                read_dir(info);
                puts("HIT ANY KEY");
                initscr();
                keypad(stdscr, 
# 446 "main.c" 3 4
                              1
# 446 "main.c"
                                  );
                raw();
                noecho();
                getchar();
            }
            }
            break;

        case '~': {
            string path = string(getenv("HOME"));

            change_directory(info, path, null);
            }
            break;

        case 
# 461 "main.c" 3 4
            0407
# 461 "main.c"
                         :
        case 8:
        case 127: {
            string current_directory_name = xbasename(info.path);
            string path = info.path + string("/..");
            change_directory(info, path, current_directory_name);
            }
            break;

        case 'd': {
            endwin();
            if(info.selected_files.length() > 0) {
                handmade_selected_delete_file(info);
            }
            else {
                handmade_delete_file(cursor_file(info));
            }
            read_dir(info);
            initscr();
            keypad(stdscr, 
# 480 "main.c" 3 4
                          1
# 480 "main.c"
                              );
            raw();
            noecho();
            }
            break;

        case 'c': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i 'cp -r %s ' -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i 'cp -r %s ' -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, 
# 497 "main.c" 3 4
                          1
# 497 "main.c"
                              );
            raw();
            noecho();
            getchar();
            }
            break;

        case 'm': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i 'mv %s ' -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i 'mv %s ' -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, 
# 515 "main.c" 3 4
                          1
# 515 "main.c"
                              );
            raw();
            noecho();
            getchar();
            }
            break;

        case 'n': {
            search_next_file(info);
            }
            break;

        case 'N': {
            search_prev_file(info)
            }
            break;

        case 'x': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i ' %s' -n 0 -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i ' ./%s' -n 0 -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, 
# 543 "main.c" 3 4
                          1
# 543 "main.c"
                              );
            raw();
            noecho();
            getchar();
            }
            break;

        case 'e': {
            endwin();
            system(xsprintf("vin %s", cursor_file(info)));
            initscr();
            keypad(stdscr, 
# 554 "main.c" 3 4
                          1
# 554 "main.c"
                              );
            raw();
            noecho();
            }
            break;

        case 
# 560 "main.c" 3 4
            0404
# 560 "main.c"
                    :
        case 'h':
            if(info.cursor >= maxy) {
                info.cursor-=maxy;
            }
            break;

        case 
# 567 "main.c" 3 4
            0405
# 567 "main.c"
                     :
        case 'l':
            if(info.cursor + maxy < info.files.length()) {
                info.cursor+=maxy;
            }
            break;

        case 
# 574 "main.c" 3 4
            0402
# 574 "main.c"
                    :
        case 'j':
            info.cursor++;
            break;

        case 
# 579 "main.c" 3 4
            0403
# 579 "main.c"
                  :
        case 'k':
            info.cursor--;

            break;

        case 'L'-'A'+1:
            
# 586 "main.c" 3 4
           wclear(stdscr)
# 586 "main.c"
                  ;
            read_dir(info);
            view(info);
            
# 589 "main.c" 3 4
           wrefresh(stdscr)
# 589 "main.c"
                    ;
            break;

        case '/':
            search_file(info);
            view(info);
            
# 595 "main.c" 3 4
           wrefresh(stdscr)
# 595 "main.c"
                    ;
            break;

        case '?':
            manual(info);
            break;

        case ':': {
            endwin();
            system("shsh");
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, 
# 608 "main.c" 3 4
                          1
# 608 "main.c"
                              );
            raw();
            noecho();
            getchar();

            }
            break;

        case 0x04: {
            info.cursor+=10;
            }
            break;

        case ' ': {
            select_files(info);
            }
            break;

        case 0x15: {
            info.cursor-=10;
            }
            break;

    }

    fix_cursor(info);
}

int main(int argc, char** argv)
{
    setlocale(
# 638 "main.c" 3 4
             6
# 638 "main.c"
                   , "");

    sInfo info;

    memset(&info, 0, sizeof(sInfo));

    char* cwd = getenv("PWD");

    info.path = string(cwd);

    read_dir(&info);

    initscr();
    keypad(stdscr, 1);
    raw();
    noecho();

    while(!info.app_end) {
        view(&info);
        input(&info);
    }

    endwin();

    return 0;
}
