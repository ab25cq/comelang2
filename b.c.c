// source head

// header function
void* come_calloc(int count, int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

char* __builtin_string(char* str);

void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

void* come_null_check(void* mem, char* sname, int sline);

int main(int argc, char** argv);

// inline function

// body function
int main(int argc, char** argv){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
come_heap_init(0, 1);
    char** a_0={ "AAA", "BBB", "CCC" };
    __freed_obj__ = 0;
    __result1__ = 0;
    __freed_obj__ = 0;
    come_heap_final();
    return __result1__;
    __freed_obj__ = 0;
come_heap_final();
}

