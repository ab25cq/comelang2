// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef unsigned int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct optional$2intbool
{
    int v1;
    _Bool v2;
};
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gCommonHeader;
struct sType;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
};
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    char* mDeclareSName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    char* mAsmName;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool
{
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1;
    _Bool v2;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct optional$2tuple3$3sTypephcharphboolphbool
{
    struct tuple3$3sTypephcharphbool* v1;
    _Bool v2;
};
struct optional$2sNodephbool
{
    struct sNode* v1;
    _Bool v2;
};
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
    _Bool* is_type_name_flag_192;
    _Bool* multiple_declare_193;
    _Bool* multiple_declare2_200;
    struct sFun** fun_207;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

long double strtof128(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf128(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(unsigned int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, unsigned int __wchar);

long int mbstowcs(unsigned int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const unsigned int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void come_show_stackframe();

void come_clear_stackframe();

char* come_get_stackframe();

void stackframe();

void* come_null_check(void* mem, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(long int count, long int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

int come_main_v1(int argc, char** argv);

int come_main_v2(int argc, char** argv);

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct optional$2sNodephbool* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

struct optional$2sNodephbool* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct optional$2sNodephbool* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_07varc(struct __current_stack1__* parent);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    __freed_obj__ = 0;
    return __result1__;
    __freed_obj__ = 0;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    __freed_obj__ = 0;
    return __result4__;
    __freed_obj__ = 0;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    __freed_obj__ = 0;
    return __result5__;
    __freed_obj__ = 0;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    __freed_obj__ = 0;
    return __result6__;
    __freed_obj__ = 0;
}
static inline void die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}

// body function







struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
_Bool _if_conditional1;
void* right_value35;
struct sType* __dec_obj24;
struct sType* __dec_obj25;
struct sNode* __dec_obj26;
_Bool _if_conditional88;
void* right_value36;
struct list$1charph* __dec_obj27;
struct list$1charph* __dec_obj28;
_Bool _if_conditional89;
void* right_value47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj35;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj36;
char* __dec_obj37;
void* right_value48;
char* __dec_obj38;
struct sStoreNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    __dec_obj1=((struct sStoreNode*)come_null_check(self, "07var.c", 18))->name;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 18))->name=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(name))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 19))->alloc=alloc;
    __freed_obj__ = 0;
    if(_if_conditional1=type,    __freed_obj__ = 0, 
    _if_conditional1) {
        __dec_obj24=((struct sStoreNode*)come_null_check(self, "07var.c", 21))->type;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 21))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(type))));
        if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj25=((struct sStoreNode*)come_null_check(self, "07var.c", 24))->type;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 24))->type=((void*)0);
        if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj26=((struct sStoreNode*)come_null_check(self, "07var.c", 26))->right_value;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 26))->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    if(_if_conditional88=multiple_assign,    __freed_obj__ = 0, 
    _if_conditional88) {
        __dec_obj27=((struct sStoreNode*)come_null_check(self, "07var.c", 28))->multiple_assign;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 28))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charphp_clone(multiple_assign))));
        if(__dec_obj27) { come_call_finalizer(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj28=((struct sStoreNode*)come_null_check(self, "07var.c", 31))->multiple_assign;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 31))->multiple_assign=((void*)0);
        if(__dec_obj28) { come_call_finalizer(list$1charph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional89=multiple_declare,    __freed_obj__ = 0, 
    _if_conditional89) {
        __dec_obj35=((struct sStoreNode*)come_null_check(self, "07var.c", 34))->multiple_declare;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 34))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj35) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj36=((struct sStoreNode*)come_null_check(self, "07var.c", 37))->multiple_declare;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 37))->multiple_declare=((void*)0);
        if(__dec_obj36) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj37=((struct sStoreNode*)come_null_check(self, "07var.c", 40))->array_initializer;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 40))->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 42))->sline=((struct sInfo*)come_null_check(info, "07var.c", 42))->sline;
    __freed_obj__ = 0;
    __dec_obj38=((struct sStoreNode*)come_null_check(self, "07var.c", 43))->sname;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 43))->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 43))->sname))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
struct sType* __result7__;
void* right_value1;
struct sType* result_0;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional24;
void* right_value5;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional25;
void* right_value6;
char* __dec_obj5;
_Bool _if_conditional26;
void* right_value13;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional30;
void* right_value21;
struct list$1sNodeph* __dec_obj13;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* right_value22;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional45;
void* right_value29;
struct list$1charph* __dec_obj18;
_Bool _if_conditional49;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value31;
struct sNode* __dec_obj20;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value32;
struct sNode* __dec_obj21;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value33;
char* __dec_obj22;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value34;
char* __dec_obj23;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
            if(_if_conditional2=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional2) {
                __result7__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result7__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value1=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional19=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional19) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional24) {
                __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value5=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional25) {
                __dec_obj5=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value6=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional26) {
                __dec_obj9=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj9) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj13=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value21=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj13) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional43=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional43) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional44) {
                __dec_obj14=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional45) {
                __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value29=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj18) { come_call_finalizer(list$1charph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional49) {
                __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional50=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional50) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional51) {
                __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional52=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional52) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional53=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional54=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional54) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional56=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional56) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional58=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional58) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional59=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional59) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional60=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                ((struct sType*)come_null_check(result_0, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                __dec_obj23=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value34=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result24__ = __result_obj__ = result_0;
            if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result24__;
            __freed_obj__ = 0;
            if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional3=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional3) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional5) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional6) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional7) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional9) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional12) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional15) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional4=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional4) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_1;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_1, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_2, 0, sizeof(struct list_item$1sTypeph*));
                        it_1=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional1=it_1!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional1) {
                            prev_it_2=it_1;
                            __freed_obj__ = 0;
                            it_1=((struct list_item$1sTypeph*)come_null_check(it_1, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_2 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional8=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional8) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_3;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sNodeph*));
                        it_3=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_3!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_4=it_3;
                            __freed_obj__ = 0;
                            it_3=((struct list_item$1sNodeph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional10=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional10) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_5;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*));
                        it_5=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_5!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_6=it_5;
                            __freed_obj__ = 0;
                            it_5=((struct list_item$1charph*)come_null_check(it_5, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional13=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional13) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
struct tuple1$1sTypeph* __result8__;
void* right_value2;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional23;
void* right_value3;
struct sType* __dec_obj2;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value3, 0, sizeof(void*));
                    if(_if_conditional21=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        __result8__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result8__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value2=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional23=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional23) {
                        __dec_obj2=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result9__ = __result_obj__ = result_7;
                    if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result9__;
                    __freed_obj__ = 0;
                    if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional22) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional27;
struct list$1sTypeph* __result10__;
void* right_value7;
void* right_value8;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value12;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                    if(_if_conditional27=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional27) {
                        __result10__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result10__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value7=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional4=it_9!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional4) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                        if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result13__ = __result_obj__ = result_8;
                    if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result13__;
                    __freed_obj__ = 0;
                    if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result11__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result11__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
void* right_value9;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj6;
_Bool _if_conditional29;
void* right_value10;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj7;
void* right_value11;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj8;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional28) {
                                litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional29=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional29) {
                                    litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_12;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_12;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result12__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result12__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional31;
struct list$1sNodeph* __result14__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value20;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value20, 0, sizeof(void*));
                    if(_if_conditional31=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        __result14__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result14__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_14!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        it_14=((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result19__ = __result_obj__ = result_13;
                    if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result19__;
                    __freed_obj__ = 0;
                    if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result15__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result15__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
void* right_value16;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj10;
_Bool _if_conditional33;
void* right_value17;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj11;
void* right_value18;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj12;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional33=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional33) {
                                    litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_17;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_17;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result16__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result16__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional34;
struct sNode* __result17__;
void* right_value19;
struct sNode* result_18;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                            if(_if_conditional34=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional34) {
                                __result17__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result17__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            if(_if_conditional35=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional35) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional36=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional37=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional37) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional38=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional38) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional39=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional39) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional40=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional41=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional41) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional42=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional42) {
                                ((struct sNode*)come_null_check(result_18, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result18__ = __result_obj__ = result_18;
                            if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result18__;
                            __freed_obj__ = 0;
                            if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional46;
struct list$1charph* __result20__;
void* right_value23;
void* right_value24;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value28;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value28, 0, sizeof(void*));
                    if(_if_conditional46=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional46) {
                        __result20__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result20__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value23=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_20!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value28=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result23__ = __result_obj__ = result_19;
                    if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result23__;
                    __freed_obj__ = 0;
                    if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result21__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result21__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional47;
void* right_value25;
struct list_item$1charph* litem_21;
char* __dec_obj15;
_Bool _if_conditional48;
void* right_value26;
struct list_item$1charph* litem_22;
char* __dec_obj16;
void* right_value27;
struct list_item$1charph* litem_23;
char* __dec_obj17;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional48=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional48) {
                                    litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj17=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_23;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_23;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result22__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result22__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional90;
struct list$1tuple3$3sTypephcharphsNodephph* __result25__;
void* right_value37;
void* right_value38;
struct list$1tuple3$3sTypephcharphsNodephph* result_26;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_27;
_Bool _while_condtional8;
void* right_value46;
struct list$1tuple3$3sTypephcharphsNodephph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_27, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value46, 0, sizeof(void*));
            if(_if_conditional90=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                __result25__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result25__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_26=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value38=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value37=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_27=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional8=it_27!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(result_26, "./comelang2.h", 192)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value46=tuple3$3sTypephcharphsNodephp_clone(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_27, "./comelang2.h", 192))->item)))));
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_27=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_27, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result30__ = __result_obj__ = result_26;
            if(result_26 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result30__;
            __freed_obj__ = 0;
            if(result_26 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result26__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_24;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_24, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_25, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_24=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_24!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        prev_it_25=it_24;
                        __freed_obj__ = 0;
                        it_24=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_24, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_25 && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional91=self!=((void*)0)&&((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional91) {
                                if(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional92=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional92) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional93=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional94=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 3))->v3!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional94) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
void* right_value39;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_28;
struct tuple3$3sTypephcharphsNodeph* __dec_obj29;
_Bool _if_conditional99;
void* right_value40;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_29;
struct tuple3$3sTypephcharphsNodeph* __dec_obj30;
void* right_value41;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_30;
struct tuple3$3sTypephcharphsNodeph* __dec_obj31;
struct list$1tuple3$3sTypephcharphsNodephph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional95=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional95) {
                        litem_28=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value39=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 202))));
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_28, "./comelang2.h", 204))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_28, "./comelang2.h", 205))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj29=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_28, "./comelang2.h", 206))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_28, "./comelang2.h", 206))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_28;
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_28;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional99=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional99) {
                            litem_29=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value40=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 212))));
                            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_29, "./comelang2.h", 214))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_29, "./comelang2.h", 215))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj30=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_29, "./comelang2.h", 216))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_29, "./comelang2.h", 216))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj30) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_29;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_29;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_30=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value41=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 222))));
                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_30, "./comelang2.h", 224))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_30, "./comelang2.h", 225))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj31=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_30, "./comelang2.h", 226))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_30, "./comelang2.h", 226))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj31) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_30;
                            __freed_obj__ = 0;
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_30;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                    __freed_obj__ = 0;
                    __result27__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional96=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional96) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional97=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional97) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional98=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 3))->v3!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional98) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional100;
struct tuple3$3sTypephcharphsNodeph* __result28__;
void* right_value42;
struct tuple3$3sTypephcharphsNodeph* result_31;
_Bool _if_conditional101;
void* right_value43;
struct sType* __dec_obj32;
_Bool _if_conditional102;
void* right_value44;
char* __dec_obj33;
_Bool _if_conditional103;
void* right_value45;
struct sNode* __dec_obj34;
struct tuple3$3sTypephcharphsNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
                    if(_if_conditional100=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional100) {
                        __result28__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_31=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value42=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3))));
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional101=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional101) {
                        __dec_obj32=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1))));
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional102=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional102) {
                        __dec_obj33=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2))));
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional103=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 7))->v3!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional103) {
                        __dec_obj34=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_31, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3))));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0); }
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result29__ = __result_obj__ = result_31;
                    if(result_31 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
                    if(result_31 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}

char* sStoreNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value49=__builtin_string("sStoreNode")));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value50;
char* array_initializer_32;
_Bool _if_conditional111;
void* right_value60;
struct sVar* var__38;
_Bool _if_conditional118;
_Bool __result43__;
_Bool _if_conditional119;
_Bool __result44__;
void* right_value61;
struct sType* type_39;
void* right_value62;
void* right_value63;
struct sType* var_type_40;
void* right_value64;
_Bool _if_conditional122;
void* right_value65;
struct sVar* var__42;
_Bool _if_conditional123;
_Bool __result47__;
_Bool _if_conditional124;
_Bool __result48__;
void* right_value66;
struct sType* type_43;
_Bool _if_conditional125;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_44;
struct tuple3$3sTypephcharphsNodeph* it_47;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assgin_var1;
struct sType* type_50;
char* var_name_51;
struct sNode* right_value_52;
void* right_value67;
_Bool _if_conditional130;
_Bool __result56__;
void* right_value68;
struct sType* left_type_53;
void* right_value69;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool __result57__;
void* right_value70;
struct CVALUE* come_value_54;
void* right_value71;
struct sType* left_type2_55;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value72;
struct list$1sNodeph* o2_saved_56;
struct sNode* it_59;
_Bool _for_condtionalA2;
_Bool _if_conditional142;
void* right_value73;
struct CVALUE* come_value_62;
void* right_value74;
void* right_value75;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool __result67__;
void* right_value76;
struct sType* left_type_63;
_Bool _if_conditional145;
void* right_value77;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value78;
struct list$1sNodeph* o2_saved_64;
struct sNode* it_65;
_Bool _for_condtionalA3;
_Bool _if_conditional148;
void* right_value79;
struct CVALUE* come_value_66;
void* right_value80;
void* right_value81;
struct sType* left_type2_67;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value82;
struct list$1sNodeph* o2_saved_68;
struct sNode* it_69;
_Bool _for_condtionalA4;
_Bool _if_conditional151;
void* right_value83;
struct CVALUE* come_value_70;
void* right_value84;
void* right_value85;
struct CVALUE* come_value_71;
void* right_value86;
char* __dec_obj39;
void* right_value87;
struct sType* __dec_obj40;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool __result69__;
void* right_value91;
struct CVALUE* right_value_75;
struct sType* right_type_76;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value92;
struct sVar* var__77;
_Bool _if_conditional160;
_Bool __result70__;
_Bool _if_conditional161;
int i_78;
struct list$1charph* o2_saved_79;
char* it_82;
_Bool _for_condtionalA5;
_Bool _if_conditional166;
void* right_value97;
struct sType* right_type2_89;
void* right_value98;
void* right_value99;
struct sType* var_type_90;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value100;
struct list$1sNodeph* o2_saved_91;
struct sNode* it_92;
_Bool _for_condtionalA6;
_Bool _if_conditional173;
void* right_value101;
struct CVALUE* come_value_93;
void* right_value102;
_Bool _if_conditional174;
void* right_value103;
void* right_value104;
struct sType* type_94;
void* right_value105;
void* right_value106;
struct sType* var_type_95;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value107;
struct list$1sNodeph* o2_saved_96;
struct sNode* it_97;
_Bool _for_condtionalA7;
_Bool _if_conditional177;
void* right_value108;
struct CVALUE* come_value_98;
void* right_value109;
struct sClass* current_stack_frame_struct_99;
void* right_value110;
struct optional$2sVarpbool* __exception_result_var_a1;
_Bool _if_conditional178;
struct sVar* parent_var_100;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value111;
struct CVALUE* come_value_101;
struct sType* left_type_102;
_Bool _if_conditional181;
void* right_value112;
char* c_value_103;
_Bool _if_conditional182;
_Bool _if_conditional183;
char* __dec_obj45;
_Bool _if_conditional184;
void* right_value113;
char* __dec_obj46;
_Bool _if_conditional185;
void* right_value114;
char* __dec_obj47;
void* right_value115;
char* __dec_obj48;
_Bool _if_conditional186;
void* right_value116;
char* __dec_obj49;
void* right_value117;
char* __dec_obj50;
int right_value_id_104;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value118;
char* c_value_105;
void* right_value119;
char* __dec_obj51;
void* right_value120;
char* __dec_obj52;
void* right_value121;
struct sType* __dec_obj53;
void* right_value122;
void* right_value123;
_Bool __result84__;
_Bool _if_conditional189;
static int num_multiple_var_106=0;
void* right_value124;
char* multiple_var_name_107;
void* right_value125;
void* right_value126;
char* __dec_obj54;
int i_108;
struct list$1charph* o2_saved_109;
char* it_110;
_Bool _for_condtionalA8;
_Bool _if_conditional190;
void* right_value127;
void* right_value128;
struct sType* right_type2_111;
struct sVar* var__112;
void* right_value129;
struct sType* var_type_113;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value130;
struct list$1sNodeph* o2_saved_114;
struct sNode* it_115;
_Bool _for_condtionalA9;
_Bool _if_conditional193;
void* right_value131;
struct CVALUE* come_value_116;
void* right_value132;
void* right_value133;
struct sType* left_type_117;
void* right_value134;
struct CVALUE* right_value2_118;
void* right_value135;
char* __dec_obj55;
void* right_value136;
struct sType* __dec_obj56;
void* right_value137;
struct CVALUE* come_value_119;
void* right_value138;
void* right_value139;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
char* __dec_obj57;
_Bool _if_conditional198;
void* right_value140;
char* __dec_obj58;
_Bool _if_conditional199;
void* right_value141;
char* __dec_obj59;
void* right_value142;
char* __dec_obj60;
_Bool _if_conditional200;
void* right_value143;
char* __dec_obj61;
void* right_value144;
char* __dec_obj62;
int right_value_id_120;
_Bool _if_conditional201;
void* right_value145;
char* __dec_obj63;
void* right_value146;
struct sType* __dec_obj64;
_Bool _if_conditional202;
void* right_value147;
struct sVar* var__121;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool __result85__;
_Bool _if_conditional205;
void* right_value148;
struct sType* __dec_obj65;
void* right_value149;
struct sType* left_type_122;
void* right_value150;
struct CVALUE* come_value_123;
_Bool _if_conditional206;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
char* __dec_obj66;
_Bool _if_conditional207;
void* right_value155;
void* right_value156;
_Bool _if_conditional208;
void* right_value157;
void* right_value158;
char* __dec_obj67;
_Bool _if_conditional209;
void* right_value159;
void* right_value160;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
char* __dec_obj68;
_Bool _if_conditional213;
void* right_value161;
char* __dec_obj69;
_Bool _if_conditional214;
void* right_value162;
char* __dec_obj70;
void* right_value163;
char* __dec_obj71;
_Bool _if_conditional215;
void* right_value164;
char* __dec_obj72;
void* right_value165;
char* __dec_obj73;
_Bool _if_conditional216;
_Bool _if_conditional217;
char* __dec_obj74;
_Bool _if_conditional218;
void* right_value166;
char* __dec_obj75;
_Bool _if_conditional219;
void* right_value167;
char* __dec_obj76;
void* right_value168;
char* __dec_obj77;
_Bool _if_conditional220;
void* right_value169;
char* __dec_obj78;
void* right_value170;
char* __dec_obj79;
int right_value_id_124;
_Bool _if_conditional221;
void* right_value171;
struct sType* __dec_obj80;
_Bool _if_conditional222;
void* right_value172;
void* right_value173;
_Bool _if_conditional223;
void* right_value174;
char* __dec_obj81;
void* right_value175;
char* __dec_obj82;
void* right_value176;
struct sType* __dec_obj83;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool __result86__;
void* right_value177;
void* right_value178;
void* right_value179;
char* __dec_obj84;
void* right_value180;
struct sType* __dec_obj85;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value181;
void* right_value182;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&array_initializer_32, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&var__38, 0, sizeof(struct sVar*));
memset(&right_value61, 0, sizeof(void*));
memset(&type_39, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&var_type_40, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&var__42, 0, sizeof(struct sVar*));
memset(&right_value66, 0, sizeof(void*));
memset(&type_43, 0, sizeof(struct sType*));
memset(&o2_saved_44, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_47, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&var_name_51, 0, sizeof(char*));
memset(&right_value_52, 0, sizeof(struct sNode*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&var_name_51, 0, sizeof(char*));
memset(&right_value_52, 0, sizeof(struct sNode*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&left_type_53, 0, sizeof(struct sType*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&right_value71, 0, sizeof(void*));
memset(&left_type2_55, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&o2_saved_56, 0, sizeof(struct list$1sNodeph*));
memset(&it_59, 0, sizeof(struct sNode*));
memset(&right_value73, 0, sizeof(void*));
memset(&come_value_62, 0, sizeof(struct CVALUE*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&left_type_63, 0, sizeof(struct sType*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_65, 0, sizeof(struct sNode*));
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&left_type2_67, 0, sizeof(struct sType*));
memset(&right_value82, 0, sizeof(void*));
memset(&o2_saved_68, 0, sizeof(struct list$1sNodeph*));
memset(&it_69, 0, sizeof(struct sNode*));
memset(&right_value83, 0, sizeof(void*));
memset(&come_value_70, 0, sizeof(struct CVALUE*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_71, 0, sizeof(struct CVALUE*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value_75, 0, sizeof(struct CVALUE*));
memset(&right_type_76, 0, sizeof(struct sType*));
memset(&right_value92, 0, sizeof(void*));
memset(&var__77, 0, sizeof(struct sVar*));
memset(&i_78, 0, sizeof(int));
memset(&o2_saved_79, 0, sizeof(struct list$1charph*));
memset(&it_82, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_type2_89, 0, sizeof(struct sType*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&var_type_90, 0, sizeof(struct sType*));
memset(&right_value100, 0, sizeof(void*));
memset(&o2_saved_91, 0, sizeof(struct list$1sNodeph*));
memset(&it_92, 0, sizeof(struct sNode*));
memset(&right_value101, 0, sizeof(void*));
memset(&come_value_93, 0, sizeof(struct CVALUE*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&var_type_95, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&o2_saved_96, 0, sizeof(struct list$1sNodeph*));
memset(&it_97, 0, sizeof(struct sNode*));
memset(&right_value108, 0, sizeof(void*));
memset(&come_value_98, 0, sizeof(struct CVALUE*));
memset(&right_value109, 0, sizeof(void*));
memset(&current_stack_frame_struct_99, 0, sizeof(struct sClass*));
memset(&right_value110, 0, sizeof(void*));
memset(&parent_var_100, 0, sizeof(struct sVar*));
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
memset(&left_type_102, 0, sizeof(struct sType*));
memset(&right_value112, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value_id_104, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&multiple_var_name_107, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&i_108, 0, sizeof(int));
memset(&o2_saved_109, 0, sizeof(struct list$1charph*));
memset(&it_110, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_type2_111, 0, sizeof(struct sType*));
memset(&var__112, 0, sizeof(struct sVar*));
memset(&right_value129, 0, sizeof(void*));
memset(&var_type_113, 0, sizeof(struct sType*));
memset(&right_value130, 0, sizeof(void*));
memset(&o2_saved_114, 0, sizeof(struct list$1sNodeph*));
memset(&it_115, 0, sizeof(struct sNode*));
memset(&right_value131, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&left_type_117, 0, sizeof(struct sType*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value2_118, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&come_value_119, 0, sizeof(struct CVALUE*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value_id_120, 0, sizeof(int));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&var__121, 0, sizeof(struct sVar*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&left_type_122, 0, sizeof(struct sType*));
memset(&right_value150, 0, sizeof(void*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value_id_124, 0, sizeof(int));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    array_initializer_32=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(((struct sStoreNode*)come_null_check(self, "07var.c", 60))->array_initializer))));
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional111=array_initializer_32,    __freed_obj__ = 0, 
    _if_conditional111) {
        come_clear_stackframe();
        var__38=optional$2sVarpbool_value((come_push_stackframe("07var.c", 63),((struct optional$2sVarpbool*)(right_value60=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 63))->lv_table, "07var.c", 63))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 63))->name)))));
        come_pop_stackframe();
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional118=var__38,        __freed_obj__ = 0, 
        _if_conditional118) {
            err_msg(info,"Already appended this var name(%s)(2)",((struct sStoreNode*)come_null_check(self, "07var.c", 65))->name);
            __freed_obj__ = 0;
            __result43__ = (_Bool)0;
            if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result43__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=((struct sStoreNode*)come_null_check(self, "07var.c", 80))->type==((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            err_msg(info,"Require type name(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 70))->name);
            __freed_obj__ = 0;
            __result44__ = (_Bool)0;
            if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result44__;
            __freed_obj__ = 0;
        }
        else {
            type_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 74))->type,((struct sInfo*)come_null_check(info, "07var.c", 74))->generics_type,info))));
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_39, "07var.c", 76))->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 77))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(type_39)))),info);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        var__38=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 80))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 80))->name);
        __freed_obj__ = 0;
        var_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(((struct sVar*)come_null_check(var__38, "07var.c", 82))->mType))));
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(var_type_40, "07var.c", 83))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        add_come_code(info,"%s=%s;\n",optional$2charphbool_value((come_push_stackframe("07var.c", 85),((struct optional$2charphbool*)(right_value64=make_define_var(var_type_40,((struct sVar*)come_null_check(var__38, "07var.c", 85))->mCValueName,(_Bool)0,info))))),array_initializer_32);
        come_pop_stackframe();
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(var_type_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional122=((struct sStoreNode*)come_null_check(self, "07var.c", 670))->right_value==((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            come_clear_stackframe();
            var__42=optional$2sVarpbool_value((come_push_stackframe("07var.c", 88),((struct optional$2sVarpbool*)(right_value65=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 88))->lv_table, "07var.c", 88))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 88))->name)))));
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional123=var__42,            __freed_obj__ = 0, 
            _if_conditional123) {
                err_msg(info,"Already appended this var name(%s)(1)",((struct sStoreNode*)come_null_check(self, "07var.c", 90))->name);
                __freed_obj__ = 0;
                __result47__ = (_Bool)0;
                if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional124=((struct sStoreNode*)come_null_check(self, "07var.c", 99))->type==((void*)0),            __freed_obj__ = 0, 
            _if_conditional124) {
                err_msg(info,"Require concrete variable type(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 95))->name);
                __freed_obj__ = 0;
                __result48__ = (_Bool)0;
                if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 99))->type,((struct sInfo*)come_null_check(info, "07var.c", 99))->generics_type,info))));
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_43, "07var.c", 100))->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            if(_if_conditional125=((struct sStoreNode*)come_null_check(self, "07var.c", 228))->multiple_declare,            __freed_obj__ = 0, 
            _if_conditional125) {
                for(
                o2_saved_44=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 151))->multiple_declare)),it_47=list$1tuple3$3sTypephcharphsNodephph_begin(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_44), "07var.c", 151))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_44), "07var.c", 151))) ,                __freed_obj__ = 0, 
                _for_condtionalA1;                it_47=list$1tuple3$3sTypephcharphsNodephph_next(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_44), "07var.c", 151))) ,                __freed_obj__ = 0, 
                0                ){
                    multiple_assgin_var1=it_47;
                    type_50=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                    var_name_51=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                    right_value_52=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v3);
                    __freed_obj__ = 0;
                    add_variable_to_table(var_name_51,(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(type_50)))),info);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    var__42=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 107))->lv_table,var_name_51);
                    __freed_obj__ = 0;
                    if(_if_conditional130=var__42==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_47);
                        __freed_obj__ = 0;
                        __result56__ = (_Bool)1;
                        if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_51 && !__freed_obj__) { var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_52 && !__freed_obj__) { right_value_52 = come_decrement_ref_count(right_value_52, ((struct sNode*)right_value_52)->finalize, ((struct sNode*)right_value_52)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_44 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_44, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    left_type_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(((struct sVar*)come_null_check(var__42, "07var.c", 114))->mType))));
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("07var.c", 116),((struct optional$2charphbool*)(right_value69=make_define_var(left_type_53,((struct sVar*)come_null_check(var__42, "07var.c", 116))->mCValueName,(_Bool)0,info))))));
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional131=right_value_52,                    __freed_obj__ = 0, 
                    _if_conditional131) {
                        if(_if_conditional132=!((struct sNode*)come_null_check(right_value_52, "07var.c", 122))->compile(((struct sNode*)come_null_check(right_value_52, "07var.c", 122))->_protocol_obj,info),                        __freed_obj__ = 0, 
                        _if_conditional132) {
                            __result57__ = (_Bool)0;
                            if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_51 && !__freed_obj__) { var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_52 && !__freed_obj__) { right_value_52 = come_decrement_ref_count(right_value_52, ((struct sNode*)right_value_52)->finalize, ((struct sNode*)right_value_52)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_44 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_44, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=get_value_from_stack(-1,info))));
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        __freed_obj__ = 0;
                        add_come_code(info,"%s=%s;\n",((struct sVar*)come_null_check(var__42, "07var.c", 125))->mCValueName,((struct CVALUE*)come_null_check(come_value_54, "07var.c", 125))->c_value);
                        __freed_obj__ = 0;
                        if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    left_type2_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(left_type_53))));
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(left_type2_55, "07var.c", 129))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional135=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__42, "07var.c", 150))->mType, "07var.c", 150))->mConstant&&!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__42, "07var.c", 150))->mType, "07var.c", 150))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        if(_if_conditional136=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type2_55, "07var.c", 149))->mArrayNum, "07var.c", 149)))>0,                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__42, "07var.c", 133))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 133),((struct optional$2charphbool*)(right_value72=make_type_name_string(left_type2_55,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_56=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type2_55, "07var.c", 144))->mArrayNum)),it_59=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_56), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA2=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_56), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA2;                            it_59=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_56), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional142=!((struct sNode*)come_null_check(it_59, "07var.c", 140))->compile(((struct sNode*)come_null_check(it_59, "07var.c", 140))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional142) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=get_value_from_stack(-1,info))));
                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_62, "07var.c", 142))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_56 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__42, "07var.c", 147))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 147),((struct optional$2charphbool*)(right_value74=make_type_name_string(left_type2_55,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_51 && !__freed_obj__) { var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_52 && !__freed_obj__) { right_value_52 = come_decrement_ref_count(right_value_52, ((struct sNode*)right_value_52)->finalize, ((struct sNode*)right_value_52)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_44 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_44, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 153))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(type_43)))),info);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                var__42=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 155))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 155))->name);
                __freed_obj__ = 0;
                if(_if_conditional143=var__42==((void*)0),                __freed_obj__ = 0, 
                _if_conditional143) {
                    var__42=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 158))->gv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 158))->name);
                    __freed_obj__ = 0;
                    if(_if_conditional144=var__42==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional144) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",((struct sStoreNode*)come_null_check(self, "07var.c", 161))->name);
                        __freed_obj__ = 0;
                        __result67__ = (_Bool)1;
                        if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result67__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(((struct sVar*)come_null_check(var__42, "07var.c", 166))->mType))));
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional145=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_63, "07var.c", 216))->mArrayNum, "07var.c", 216)))>0,                __freed_obj__ = 0, 
                _if_conditional145) {
                    come_clear_stackframe();
                    add_come_code(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 168),((struct optional$2charphbool*)(right_value77=make_define_var(left_type_63,((struct sVar*)come_null_check(var__42, "07var.c", 168))->mCValueName,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional146=!((struct sType*)come_null_check(left_type_63, "07var.c", 188))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional146) {
                        if(_if_conditional147=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_63, "07var.c", 187))->mArrayNum, "07var.c", 187)))>0,                        __freed_obj__ = 0, 
                        _if_conditional147) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__42, "07var.c", 171))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 171),((struct optional$2charphbool*)(right_value78=make_type_name_string(left_type_63,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type_63, "07var.c", 182))->mArrayNum)),it_65=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA3=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA3;                            it_65=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional148=!((struct sNode*)come_null_check(it_65, "07var.c", 178))->compile(((struct sNode*)come_null_check(it_65, "07var.c", 178))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional148) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=get_value_from_stack(-1,info))));
                                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_66, "07var.c", 180))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_64 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",((struct sVar*)come_null_check(var__42, "07var.c", 185))->mCValueName,((struct sVar*)come_null_check(var__42, "07var.c", 185))->mCValueName);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 190),((struct optional$2charphbool*)(right_value80=make_define_var(left_type_63,((struct sVar*)come_null_check(var__42, "07var.c", 190))->mCValueName,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    left_type2_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_type_63))));
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(left_type2_67, "07var.c", 193))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional149=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__42, "07var.c", 214))->mType, "07var.c", 214))->mConstant&&!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__42, "07var.c", 214))->mType, "07var.c", 214))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        if(_if_conditional150=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type2_67, "07var.c", 213))->mArrayNum, "07var.c", 213)))>0,                        __freed_obj__ = 0, 
                        _if_conditional150) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__42, "07var.c", 197))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 197),((struct optional$2charphbool*)(right_value82=make_type_name_string(left_type2_67,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_68=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type2_67, "07var.c", 208))->mArrayNum)),it_69=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_68), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA4=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_68), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA4;                            it_69=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_68), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional151=!((struct sNode*)come_null_check(it_69, "07var.c", 204))->compile(((struct sNode*)come_null_check(it_69, "07var.c", 204))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional151) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
                                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_70, "07var.c", 206))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_68 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__42, "07var.c", 211))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 211),((struct optional$2charphbool*)(right_value84=make_type_name_string(left_type2_67,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(left_type2_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj39=((struct CVALUE*)come_null_check(come_value_71, "07var.c", 218))->c_value;
                ((struct CVALUE*)come_null_check(come_value_71, "07var.c", 218))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s",((struct sVar*)come_null_check(var__42, "07var.c", 218))->mCValueName))));
                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj40=((struct CVALUE*)come_null_check(come_value_71, "07var.c", 219))->type;
                ((struct CVALUE*)come_null_check(come_value_71, "07var.c", 219))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(left_type_63))));
                if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_71, "07var.c", 220))->var=var__42;
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 222))->stack, "07var.c", 222)),(struct CVALUE*)come_increment_ref_count(come_value_71));
                __freed_obj__ = 0;
                if(_if_conditional155=((struct sStoreNode*)come_null_check(self, "07var.c", 227))->alloc&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type_63, "07var.c", 227))->mClass, "07var.c", 227))->mNumber&&((struct sType*)come_null_check(left_type_63, "07var.c", 227))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional155) {
                    ((struct sType*)come_null_check(((struct sVar*)come_null_check(var__42, "07var.c", 225))->mType, "07var.c", 225))->mAllocaValue=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional156=!((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 234))->right_value, "07var.c", 234))->compile(((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 234))->right_value, "07var.c", 234))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional156) {
                __result69__ = (_Bool)0;
                if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            right_type_76=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 236))->type;
            __freed_obj__ = 0;
            if(_if_conditional157=((struct sStoreNode*)come_null_check(self, "07var.c", 244))->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional157) {
                if(_if_conditional158=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 242))->mNoSolvedGenericsType, "07var.c", 242))->v1,                __freed_obj__ = 0, 
                _if_conditional158) {
                    right_type_76=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 240))->mNoSolvedGenericsType, "07var.c", 240))->v1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional159=((struct sStoreNode*)come_null_check(self, "07var.c", 328))->alloc,            __freed_obj__ = 0, 
            _if_conditional159) {
                come_clear_stackframe();
                var__77=optional$2sVarpbool_value((come_push_stackframe("07var.c", 245),((struct optional$2sVarpbool*)(right_value92=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 245))->lv_table, "07var.c", 245))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 245))->name)))));
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional160=var__77,                __freed_obj__ = 0, 
                _if_conditional160) {
                    err_msg(info,"Already appended this var name(%s)(2)",((struct sStoreNode*)come_null_check(self, "07var.c", 247))->name);
                    __freed_obj__ = 0;
                    __result70__ = (_Bool)0;
                    if(right_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result70__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional161=((struct sStoreNode*)come_null_check(self, "07var.c", 326))->multiple_assign,                __freed_obj__ = 0, 
                _if_conditional161) {
                    i_78=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_79=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 288))->multiple_assign)),it_82=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_79), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA5=                    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_79), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA5;                    it_82=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_79), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional166=i_78<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 286))->mGenericsTypes, "07var.c", 286))),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            come_clear_stackframe();
                            right_type2_89=optional$2sTypephbool_value((come_push_stackframe("07var.c", 255),((struct optional$2sTypephbool*)(right_value97=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_type_76, "07var.c", 255))->mGenericsTypes,i_78)))));
                            come_pop_stackframe();
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(right_type2_89, "07var.c", 256))->mFunctionParam=(_Bool)0;
                            __freed_obj__ = 0;
                            add_variable_to_table(it_82,(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(right_type2_89)))),info);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            var__77=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 260))->lv_table,it_82);
                            __freed_obj__ = 0;
                            var_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(((struct sVar*)come_null_check(var__77, "07var.c", 262))->mType))));
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(var_type_90, "07var.c", 263))->mStatic=(_Bool)0;
                            __freed_obj__ = 0;
                            if(_if_conditional171=!((struct sType*)come_null_check(var_type_90, "07var.c", 284))->mConstant&&!((struct sType*)come_null_check(var_type_90, "07var.c", 284))->mStatic,                            __freed_obj__ = 0, 
                            _if_conditional171) {
                                if(_if_conditional172=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_90, "07var.c", 283))->mArrayNum, "07var.c", 283)))>0,                                __freed_obj__ = 0, 
                                _if_conditional172) {
                                    come_clear_stackframe();
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__77, "07var.c", 267))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 267),((struct optional$2charphbool*)(right_value100=make_type_name_string(var_type_90,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                    come_pop_stackframe();
                                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_91=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_90, "07var.c", 278))->mArrayNum)),it_92=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_91), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_91), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    _for_condtionalA6;                                    it_92=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_91), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    0                                    ){
                                        if(_if_conditional173=!((struct sNode*)come_null_check(it_92, "07var.c", 274))->compile(((struct sNode*)come_null_check(it_92, "07var.c", 274))->_protocol_obj,info),                                        __freed_obj__ = 0, 
                                        _if_conditional173) {
                                            err_msg(info,"invalid array num");
                                            __freed_obj__ = 0;
                                            exit(1);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
                                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        __freed_obj__ = 0;
                                        add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_93, "07var.c", 276))->c_value);
                                        __freed_obj__ = 0;
                                        if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_91 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    add_come_code(info,");\n");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    come_clear_stackframe();
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__77, "07var.c", 281))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 281),((struct optional$2charphbool*)(right_value102=make_type_name_string(var_type_90,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                    come_pop_stackframe();
                                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(var_type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        i_78++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_79 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional174=((struct sStoreNode*)come_null_check(self, "07var.c", 301))->type==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional174) {
                        ((struct sType*)come_null_check(right_type_76, "07var.c", 291))->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 292))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(right_type_76)))),info);
                        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 295))->type,((struct sInfo*)come_null_check(info, "07var.c", 295))->generics_type,info))));
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_94, "07var.c", 297))->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 298))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(type_94)))),info);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(type_94 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    var__77=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 301))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 301))->name);
                    __freed_obj__ = 0;
                    var_type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(((struct sVar*)come_null_check(var__77, "07var.c", 303))->mType))));
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(var_type_95, "07var.c", 304))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional175=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__77, "07var.c", 325))->mType, "07var.c", 325))->mStatic&&!((struct sType*)come_null_check(var_type_95, "07var.c", 325))->mConstant&&list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_95, "07var.c", 325))->mArrayNum, "07var.c", 325)))==0,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        if(_if_conditional176=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_95, "07var.c", 324))->mArrayNum, "07var.c", 324)))>0,                        __freed_obj__ = 0, 
                        _if_conditional176) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__77, "07var.c", 308))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 308),((struct optional$2charphbool*)(right_value107=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_96=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_95, "07var.c", 319))->mArrayNum)),it_97=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_96), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA7=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_96), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA7;                            it_97=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_96), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional177=!((struct sNode*)come_null_check(it_97, "07var.c", 315))->compile(((struct sNode*)come_null_check(it_97, "07var.c", 315))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional177) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
                                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_98, "07var.c", 317))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_96 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__77, "07var.c", 322))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 322),((struct optional$2charphbool*)(right_value109=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(var_type_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            current_stack_frame_struct_99=((struct sInfo*)come_null_check(info, "07var.c", 328))->current_stack_frame_struct;
            __freed_obj__ = 0;
            if(_if_conditional178=current_stack_frame_struct_99&&optional$2sVarpbool_value((come_clear_stackframe(), come_push_stackframe("07var.c", 400),__exception_result_var_a1=((struct optional$2sVarpbool*)(right_value110=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 400))->lv_table, "07var.c", 400))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 400))->name))), come_pop_stackframe(), __exception_result_var_a1))==((void*)0),            (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional178) {
                parent_var_100=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 331))->lv_table, "07var.c", 331))->mParent,((struct sStoreNode*)come_null_check(self, "07var.c", 331))->name);
                __freed_obj__ = 0;
                if(_if_conditional179=parent_var_100!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=string_operator_not_equals(((struct sVar*)come_null_check(parent_var_100, "07var.c", 397))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 397))->come_fun, "07var.c", 397))->mName),                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335))));
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        left_type_102=((struct sVar*)come_null_check(parent_var_100, "07var.c", 337))->mType;
                        __freed_obj__ = 0;
                        if(_if_conditional181=((struct sType*)come_null_check(left_type_102, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_76, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_76, "07var.c", 386))->mHeap&&((struct sType*)come_null_check(left_type_102, "07var.c", 386))->mHeap,                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            c_value_103=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(parent_var_100, "07var.c", 340))->mCValueName))));
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            decrement_ref_count_object(((struct sVar*)come_null_check(parent_var_100, "07var.c", 341))->mType,c_value_103,info,(_Bool)0);
                            __freed_obj__ = 0;
                            if(_if_conditional182=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 368))->var,                            __freed_obj__ = 0, 
                            _if_conditional182) {
                                if(_if_conditional183=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional183) {
                                    __dec_obj45=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 345))->var, "07var.c", 345))->mCValueName;
                                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 345))->var, "07var.c", 345))->mCValueName=((void*)0);
                                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional184=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mShare,                                    __freed_obj__ = 0, 
                                    _if_conditional184) {
                                        __dec_obj46=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 348))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 348))->c_value=(char*)come_increment_ref_count(((char*)(right_value113=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 348))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 348))->c_value,info))));
                                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mClone,                                        __freed_obj__ = 0, 
                                        _if_conditional185) {
                                            __dec_obj47=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 351))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 351))->c_value=(char*)come_increment_ref_count(((char*)(right_value114=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 351))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 351))->c_value,info))));
                                            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj48=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 354))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 354))->c_value=(char*)come_increment_ref_count(((char*)(right_value115=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 354))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 354))->c_value,info))));
                                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional186=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 367))->type, "07var.c", 367))->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional186) {
                                }
                                else {
                                    __dec_obj49=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 365))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 365))->c_value=(char*)come_increment_ref_count(((char*)(right_value116=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 365))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 365))->c_value,info))));
                                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj50=((struct CVALUE*)come_null_check(come_value_101, "07var.c", 368))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_101, "07var.c", 368))->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_100, "07var.c", 368))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 368))->c_value))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            right_value_id_104=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 370))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional187=right_value_id_104!=-1,                            __freed_obj__ = 0, 
                            _if_conditional187) {
                                remove_object_from_right_values(right_value_id_104,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional188=((struct sType*)come_null_check(left_type_102, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_76, "07var.c", 386))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 386))->mClass, "07var.c", 386))->mName,"void")&&((struct sType*)come_null_check(left_type_102, "07var.c", 386))->mHeap,                            __freed_obj__ = 0, 
                            _if_conditional188) {
                                c_value_105=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(parent_var_100, "07var.c", 377))->mCValueName))));
                                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                decrement_ref_count_object(((struct sVar*)come_null_check(parent_var_100, "07var.c", 378))->mType,c_value_105,info,(_Bool)0);
                                __freed_obj__ = 0;
                                __dec_obj51=((struct CVALUE*)come_null_check(come_value_101, "07var.c", 380))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_101, "07var.c", 380))->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_100, "07var.c", 380))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 380))->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj52=((struct CVALUE*)come_null_check(come_value_101, "07var.c", 383))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_101, "07var.c", 383))->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_100, "07var.c", 383))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 383))->c_value))));
                                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj53=((struct CVALUE*)come_null_check(come_value_101, "07var.c", 386))->type;
                        ((struct CVALUE*)come_null_check(come_value_101, "07var.c", 386))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_type_102))));
                        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(come_value_101, "07var.c", 387))->var=((void*)0);
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value123=xsprintf("\%s is assigning to",((char*)(right_value122=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 389))->name)))))),left_type_102,right_type_76,come_value_101,(_Bool)0,info);
                        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_101, "07var.c", 391))->c_value);
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 393))->stack, "07var.c", 393)),(struct CVALUE*)come_increment_ref_count(come_value_101));
                        __freed_obj__ = 0;
                        __result84__ = (_Bool)1;
                        if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result84__;
                        __freed_obj__ = 0;
                        if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=((struct sStoreNode*)come_null_check(self, "07var.c", 668))->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional189) {
                __freed_obj__ = 0;
                multiple_var_name_107=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("multiple_assgin_var%d",++num_multiple_var_106))));
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 403),((struct optional$2charphbool*)(right_value125=make_define_var(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 403))->type,multiple_var_name_107,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_107,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 405))->c_value);
                __freed_obj__ = 0;
                __dec_obj54=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 407))->c_value;
                ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 407))->c_value=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(multiple_var_name_107))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                i_108=0;
                __freed_obj__ = 0;
                for(
                o2_saved_109=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 504))->multiple_assign)),it_110=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_109), "07var.c", 504))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA8=                !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_109), "07var.c", 504))) ,                __freed_obj__ = 0, 
                _for_condtionalA8;                it_110=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_109), "07var.c", 504))) ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional190=i_108<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 502))->mGenericsTypes, "07var.c", 502))),                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        come_clear_stackframe();
                        right_type2_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(optional$2sTypephbool_value((come_push_stackframe("07var.c", 412),((struct optional$2sTypephbool*)(right_value127=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_type_76, "07var.c", 412))->mGenericsTypes,i_108)))))))));
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        var__112=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 414))->lv_table,it_110);
                        __freed_obj__ = 0;
                        var_type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(((struct sVar*)come_null_check(var__112, "07var.c", 416))->mType))));
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(var_type_113, "07var.c", 417))->mStatic=(_Bool)0;
                        __freed_obj__ = 0;
                        if(_if_conditional191=!((struct sType*)come_null_check(var_type_113, "07var.c", 439))->mConstant,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                            if(_if_conditional192=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_113, "07var.c", 437))->mArrayNum, "07var.c", 437)))>0,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                come_clear_stackframe();
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__112, "07var.c", 421))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 421),((struct optional$2charphbool*)(right_value130=make_type_name_string(var_type_113,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                come_pop_stackframe();
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                for(
                                o2_saved_114=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_113, "07var.c", 432))->mArrayNum)),it_115=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_114), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA9=                                !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_114), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA9;                                it_115=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_114), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional193=!((struct sNode*)come_null_check(it_115, "07var.c", 428))->compile(((struct sNode*)come_null_check(it_115, "07var.c", 428))->_protocol_obj,info),                                    __freed_obj__ = 0, 
                                    _if_conditional193) {
                                        err_msg(info,"invalid array num");
                                        __freed_obj__ = 0;
                                        exit(1);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
                                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    __freed_obj__ = 0;
                                    add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_116, "07var.c", 430))->c_value);
                                    __freed_obj__ = 0;
                                    if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_114 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                add_come_code(info,");\n");
                                __freed_obj__ = 0;
                            }
                            else {
                                come_clear_stackframe();
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__112, "07var.c", 435))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 435),((struct optional$2charphbool*)(right_value132=make_type_name_string(var_type_113,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                come_pop_stackframe();
                                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        left_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(((struct sVar*)come_null_check(var__112, "07var.c", 439))->mType))));
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        right_value2_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 441))));
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj55=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 443))->c_value;
                        ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 443))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s->v%d",((struct CVALUE*)come_null_check(right_value_75, "07var.c", 443))->c_value,i_108+1))));
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj56=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 444))->type;
                        ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 444))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(right_type2_111))));
                        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 445))->var=((void*)0);
                        __freed_obj__ = 0;
                        come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 447))));
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value139=xsprintf("\%s is assining to}",((char*)(right_value138=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 449))->name)))))),left_type_117,right_type2_111,come_value_119,(_Bool)0,info);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional194=((struct sType*)come_null_check(right_type2_111, "07var.c", 490))->mHeap&&((struct sType*)come_null_check(left_type_117, "07var.c", 490))->mHeap&&((struct sType*)come_null_check(left_type_117, "07var.c", 490))->mPointerNum>0&&((struct sType*)come_null_check(right_type2_111, "07var.c", 490))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                            if(_if_conditional195=((struct sStoreNode*)come_null_check(self, "07var.c", 481))->alloc,                            __freed_obj__ = 0, 
                            _if_conditional195) {
                                if(_if_conditional196=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 478))->var,                                __freed_obj__ = 0, 
                                _if_conditional196) {
                                    if(_if_conditional197=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional197) {
                                        __dec_obj57=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 455))->var, "07var.c", 455))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 455))->var, "07var.c", 455))->mCValueName=((void*)0);
                                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional198=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional198) {
                                            __dec_obj58=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 458))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 458))->c_value=(char*)come_increment_ref_count(((char*)(right_value140=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 458))->type,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 458))->c_value,info))));
                                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional199=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional199) {
                                                __dec_obj59=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 461))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 461))->c_value=(char*)come_increment_ref_count(((char*)(right_value141=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 461))->type,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 461))->c_value,info))));
                                                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj60=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 464))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 464))->c_value=(char*)come_increment_ref_count(((char*)(right_value142=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 464))->type,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 464))->c_value,info))));
                                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional200=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 477))->type, "07var.c", 477))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional200) {
                                    }
                                    else {
                                        __dec_obj61=((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 475))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 475))->type,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 475))->c_value,info))));
                                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj62=((struct CVALUE*)come_null_check(come_value_119, "07var.c", 478))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_119, "07var.c", 478))->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s=%s",((struct sVar*)come_null_check(var__112, "07var.c", 478))->mCValueName,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 478))->c_value))));
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_120=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 481))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional201=right_value_id_120!=-1,                            __freed_obj__ = 0, 
                            _if_conditional201) {
                                remove_object_from_right_values(right_value_id_120,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj63=((struct CVALUE*)come_null_check(come_value_119, "07var.c", 488))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_119, "07var.c", 488))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s=%s",((struct sVar*)come_null_check(var__112, "07var.c", 488))->mCValueName,((struct CVALUE*)come_null_check(right_value2_118, "07var.c", 488))->c_value))));
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj64=((struct CVALUE*)come_null_check(come_value_119, "07var.c", 490))->type;
                        ((struct CVALUE*)come_null_check(come_value_119, "07var.c", 490))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(left_type_117))));
                        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(come_value_119, "07var.c", 491))->var=var__112;
                        __freed_obj__ = 0;
                        if(_if_conditional202=((struct sStoreNode*)come_null_check(self, "07var.c", 500))->alloc,                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            come_clear_stackframe();
                            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 494),((struct optional$2charphbool*)(right_value147=make_define_var(left_type_117,((struct sVar*)come_null_check(var__112, "07var.c", 494))->mCValueName,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_119, "07var.c", 495))->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_119, "07var.c", 498))->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(right_type2_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    i_108++;
                    __freed_obj__ = 0;
                }
                if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(multiple_var_name_107 && !__freed_obj__) { multiple_var_name_107 = come_decrement_ref_count(multiple_var_name_107, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__121=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 506))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 506))->name);
                __freed_obj__ = 0;
                if(_if_conditional203=var__121==((void*)0),                __freed_obj__ = 0, 
                _if_conditional203) {
                    var__121=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 509))->gv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 509))->name);
                    __freed_obj__ = 0;
                    if(_if_conditional204=var__121==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",((struct sStoreNode*)come_null_check(self, "07var.c", 512))->name);
                        __freed_obj__ = 0;
                        __result85__ = (_Bool)1;
                        if(right_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional205=((struct sVar*)come_null_check(var__121, "07var.c", 520))->mType==((void*)0),                __freed_obj__ = 0, 
                _if_conditional205) {
                    __dec_obj65=((struct sVar*)come_null_check(var__121, "07var.c", 518))->mType;
                    ((struct sVar*)come_null_check(var__121, "07var.c", 518))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(right_type_76))));
                    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(((struct sVar*)come_null_check(var__121, "07var.c", 520))->mType))));
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 522))));
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional206=((struct sType*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 659))->mType, "07var.c", 659))->mStatic,                __freed_obj__ = 0, 
                _if_conditional206) {
                    check_assign_type(((char*)(right_value152=xsprintf("\%s is assining to",((char*)(right_value151=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 525))->name)))))),left_type_122,right_type_76,right_value_75,(_Bool)0,info);
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 526),((struct optional$2charphbool*)(right_value153=make_define_var(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 526))->mCValueName,(_Bool)0,info))))),((struct CVALUE*)come_null_check(right_value_75, "07var.c", 526))->c_value);
                    come_pop_stackframe();
                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj66=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 527))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 527))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(""))));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 529))->stack, "07var.c", 529)),(struct CVALUE*)come_increment_ref_count(come_value_123));
                    __freed_obj__ = 0;
                    transpiler_clear_last_code(info);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional207=((struct sType*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 659))->mType, "07var.c", 659))->mConstant,                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        check_assign_type(((char*)(right_value156=xsprintf("\%s is assining to",((char*)(right_value155=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 534))->name)))))),left_type_122,right_type_76,right_value_75,(_Bool)0,info);
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional208=((struct sStoreNode*)come_null_check(self, "07var.c", 541))->alloc,                        __freed_obj__ = 0, 
                        _if_conditional208) {
                            come_clear_stackframe();
                            add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 536),((struct optional$2charphbool*)(right_value157=make_define_var(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 536))->mCValueName,(_Bool)0,info))))),((struct CVALUE*)come_null_check(right_value_75, "07var.c", 536))->c_value);
                            come_pop_stackframe();
                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",((struct sVar*)come_null_check(var__121, "07var.c", 539))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 539))->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj67=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 541))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 541))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(""))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 543))->stack, "07var.c", 543)),(struct CVALUE*)come_increment_ref_count(come_value_123));
                        __freed_obj__ = 0;
                        transpiler_clear_last_code(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional209=((struct sType*)come_null_check(right_type_76, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_122, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_122, "07var.c", 659))->mPointerNum>0&&((struct sType*)come_null_check(right_type_76, "07var.c", 659))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional209) {
                            check_assign_type(((char*)(right_value160=xsprintf("\%s is assining to",((char*)(right_value159=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 549))->name)))))),left_type_122,right_type_76,right_value_75,(_Bool)0,info);
                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional210=((struct sStoreNode*)come_null_check(self, "07var.c", 607))->alloc,                            __freed_obj__ = 0, 
                            _if_conditional210) {
                                if(_if_conditional211=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 576))->var,                                __freed_obj__ = 0, 
                                _if_conditional211) {
                                    if(_if_conditional212=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional212) {
                                        __dec_obj68=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 553))->var, "07var.c", 553))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 553))->var, "07var.c", 553))->mCValueName=((void*)0);
                                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional213=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional213) {
                                            __dec_obj69=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 556))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 556))->c_value=(char*)come_increment_ref_count(((char*)(right_value161=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 556))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 556))->c_value,info))));
                                            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional214=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional214) {
                                                __dec_obj70=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 559))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 559))->c_value=(char*)come_increment_ref_count(((char*)(right_value162=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 559))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 559))->c_value,info))));
                                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj71=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 562))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 562))->c_value=(char*)come_increment_ref_count(((char*)(right_value163=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 562))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 562))->c_value,info))));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional215=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 575))->type, "07var.c", 575))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional215) {
                                    }
                                    else {
                                        __dec_obj72=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 573))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 573))->c_value=(char*)come_increment_ref_count(((char*)(right_value164=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 573))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 573))->c_value,info))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj73=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 576))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 576))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("%s=%s",((struct sVar*)come_null_check(var__121, "07var.c", 576))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 576))->c_value))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 579))->mCValueName,info,(_Bool)0);
                                __freed_obj__ = 0;
                                if(_if_conditional216=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 605))->var,                                __freed_obj__ = 0, 
                                _if_conditional216) {
                                    if(_if_conditional217=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional217) {
                                        __dec_obj74=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 582))->var, "07var.c", 582))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 582))->var, "07var.c", 582))->mCValueName=((void*)0);
                                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional218=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional218) {
                                            __dec_obj75=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 585))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 585))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 585))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 585))->c_value,info))));
                                            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional219=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional219) {
                                                __dec_obj76=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 588))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 588))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 588))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 588))->c_value,info))));
                                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 591))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 591))->c_value=(char*)come_increment_ref_count(((char*)(right_value168=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 591))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 591))->c_value,info))));
                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional220=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 604))->type, "07var.c", 604))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional220) {
                                    }
                                    else {
                                        __dec_obj78=((struct CVALUE*)come_null_check(right_value_75, "07var.c", 602))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_75, "07var.c", 602))->c_value=(char*)come_increment_ref_count(((char*)(right_value169=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 602))->type,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 602))->c_value,info))));
                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj79=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 605))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 605))->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s=%s",((struct sVar*)come_null_check(var__121, "07var.c", 605))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 605))->c_value))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_124=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_75, "07var.c", 607))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional221=right_value_id_124!=-1,                            __freed_obj__ = 0, 
                            _if_conditional221) {
                                remove_object_from_right_values(right_value_id_124,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj80=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 612))->type;
                            ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 612))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_type_122))));
                            if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 613))->var=var__121;
                            __freed_obj__ = 0;
                            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 615))->stack, "07var.c", 615)),(struct CVALUE*)come_increment_ref_count(come_value_123));
                            __freed_obj__ = 0;
                            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_123, "07var.c", 617))->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional222=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 659))->mClass, "07var.c", 659))->mName,"void")&&((struct sType*)come_null_check(left_type_122, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_122, "07var.c", 659))->mPointerNum>0&&((struct sType*)come_null_check(right_type_76, "07var.c", 659))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional222) {
                                check_assign_type(((char*)(right_value173=xsprintf("\%s is assining to",((char*)(right_value172=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 621))->name)))))),left_type_122,right_type_76,right_value_75,(_Bool)0,info);
                                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional223=((struct sStoreNode*)come_null_check(self, "07var.c", 629))->alloc,                                __freed_obj__ = 0, 
                                _if_conditional223) {
                                    __dec_obj81=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 623))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 623))->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s=%s",((struct sVar*)come_null_check(var__121, "07var.c", 623))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 623))->c_value))));
                                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 626))->mCValueName,info,(_Bool)0);
                                    __freed_obj__ = 0;
                                    __dec_obj82=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 627))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 627))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s=%s",((struct sVar*)come_null_check(var__121, "07var.c", 627))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 627))->c_value))));
                                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj83=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 629))->type;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 629))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(left_type_122))));
                                if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 630))->var=var__121;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 632))->stack, "07var.c", 632)),(struct CVALUE*)come_increment_ref_count(come_value_123));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_123, "07var.c", 634))->c_value);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional224=((struct sType*)come_null_check(left_type_122, "07var.c", 649))->mHeap&&!((struct sType*)come_null_check(right_type_76, "07var.c", 649))->mHeap,                                __freed_obj__ = 0, 
                                _if_conditional224) {
                                    if(_if_conditional225=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_76, "07var.c", 647))->mClass, "07var.c", 647))->mName,"void")&&((struct sType*)come_null_check(right_type_76, "07var.c", 647))->mPointerNum==1,                                    __freed_obj__ = 0, 
                                    _if_conditional225) {
                                    }
                                    else {
                                        if(_if_conditional226=!((struct sType*)come_null_check(right_type_76, "07var.c", 646))->mDelegate&&!((struct sType*)come_null_check(right_type_76, "07var.c", 646))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional226) {
                                            err_msg(info,"require right value as heap object(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 643))->name);
                                            __freed_obj__ = 0;
                                            __result86__ = (_Bool)0;
                                            if(left_type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result86__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                check_assign_type(((char*)(right_value178=xsprintf("\%s is assining to",((char*)(right_value177=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 649))->name)))))),left_type_122,right_type_76,right_value_75,(_Bool)0,info);
                                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                __dec_obj84=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 650))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 650))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s=%s",((struct sVar*)come_null_check(var__121, "07var.c", 650))->mCValueName,((struct CVALUE*)come_null_check(right_value_75, "07var.c", 650))->c_value))));
                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                __dec_obj85=((struct CVALUE*)come_null_check(come_value_123, "07var.c", 651))->type;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 651))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(left_type_122))));
                                if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct CVALUE*)come_null_check(come_value_123, "07var.c", 652))->var=var__121;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 654))->stack, "07var.c", 654)),(struct CVALUE*)come_increment_ref_count(come_value_123));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_123, "07var.c", 656))->c_value);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional227=((struct sStoreNode*)come_null_check(self, "07var.c", 667))->alloc&&!((struct sType*)come_null_check(left_type_122, "07var.c", 667))->mConstant&&!((struct sType*)come_null_check(left_type_122, "07var.c", 667))->mStatic,                __freed_obj__ = 0, 
                _if_conditional227) {
                    if(_if_conditional228=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_122, "07var.c", 666))->mArrayNum, "07var.c", 666)))>0,                    __freed_obj__ = 0, 
                    _if_conditional228) {
                        come_clear_stackframe();
                        add_come_code(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 661),((struct optional$2charphbool*)(right_value181=make_define_var(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 661))->mCValueName,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        come_clear_stackframe();
                        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 664),((struct optional$2charphbool*)(right_value182=make_define_var(left_type_122,((struct sVar*)come_null_check(var__121, "07var.c", 664))->mCValueName,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(right_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result87__ = (_Bool)1;
    if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(array_initializer_32 && !__freed_obj__) { array_initializer_32 = come_decrement_ref_count(array_initializer_32, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* default_value_33;
unsigned int hash_34;
unsigned int it_35;
_Bool _while_condtional9;
_Bool _if_conditional112;
void* right_value51;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional114;
void* right_value52;
void* right_value53;
struct optional$2sVarpbool* __result37__;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value54;
void* right_value55;
struct optional$2sVarpbool* __result38__;
void* right_value56;
void* right_value57;
struct optional$2sVarpbool* __result39__;
void* right_value58;
void* right_value59;
struct optional$2sVarpbool* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(struct sVar*));
memset(&hash_34, 0, sizeof(unsigned int));
memset(&it_35, 0, sizeof(unsigned int));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_33,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_34=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_35=hash_34;
            __freed_obj__ = 0;
            while(_while_condtional9=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional112=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_35],                __freed_obj__ = 0, 
                _if_conditional112) {
                    if(_if_conditional114=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value51=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_35], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        __result37__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value53=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value52=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_35],(_Bool)1)));
                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result37__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_35++;
                    __freed_obj__ = 0;
                    if(_if_conditional115=it_35>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional115) {
                        it_35=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional116=it_35==hash_34,                        __freed_obj__ = 0, 
                        _if_conditional116) {
                            __result38__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value55=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value54=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_33,(_Bool)0))));
                            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result38__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result39__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value57=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value56=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_33,(_Bool)0))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value59=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value58=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_33,(_Bool)0))));
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional113;
_Bool default_value_36;
_Bool __result34__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_36, 0, sizeof(_Bool));
                        if(_if_conditional113=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            __freed_obj__ = 0;
                            memset(&default_value_36,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result34__ = default_value_36;
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result35__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result35__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sVarpbool* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result36__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result36__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
struct sVar* default_value_37;
struct sVar* __result41__;
struct sVar* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_37, 0, sizeof(struct sVar*));
            if(_if_conditional117=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                __freed_obj__ = 0;
                memset(&default_value_37,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result41__ = __result_obj__ = default_value_37;
                __freed_obj__ = 0;
                return __result41__;
                __freed_obj__ = 0;
            }
            else {
                __result42__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result42__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional120;
char* default_value_41;
char* __result45__;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(char*));
            if(_if_conditional120=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional120) {
                __freed_obj__ = 0;
                memset(&default_value_41,0,sizeof(char*));
                __freed_obj__ = 0;
                __result45__ = __result_obj__ = default_value_41;
                __freed_obj__ = 0;
                return __result45__;
                __freed_obj__ = 0;
            }
            else {
                __result46__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional121=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional126;
struct tuple3$3sTypephcharphsNodeph* result_45;
struct tuple3$3sTypephcharphsNodeph* __result49__;
_Bool _if_conditional127;
struct tuple3$3sTypephcharphsNodeph* __result50__;
struct tuple3$3sTypephcharphsNodeph* result_46;
struct tuple3$3sTypephcharphsNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_45, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_46, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional126=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional126) {
                        __freed_obj__ = 0;
                        memset(&result_45,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result49__ = __result_obj__ = result_45;
                        __freed_obj__ = 0;
                        return __result49__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional127=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        __result50__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                        __freed_obj__ = 0;
                        return __result50__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_46,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result51__ = __result_obj__ = result_46;
                    __freed_obj__ = 0;
                    return __result51__;
                    __freed_obj__ = 0;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result52__ = self==((void*)0)||((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional128;
struct tuple3$3sTypephcharphsNodeph* result_48;
struct tuple3$3sTypephcharphsNodeph* __result53__;
_Bool _if_conditional129;
struct tuple3$3sTypephcharphsNodeph* __result54__;
struct tuple3$3sTypephcharphsNodeph* result_49;
struct tuple3$3sTypephcharphsNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_48, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_49, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional128=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional128) {
                        __freed_obj__ = 0;
                        memset(&result_48,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result53__ = __result_obj__ = result_48;
                        __freed_obj__ = 0;
                        return __result53__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional129=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,                    __freed_obj__ = 0, 
                    _if_conditional129) {
                        __result54__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                        __freed_obj__ = 0;
                        return __result54__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_49,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result55__ = __result_obj__ = result_49;
                    __freed_obj__ = 0;
                    return __result55__;
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional133;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional133=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional133) {
                                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional134=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional134) {
                                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result58__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                            __freed_obj__ = 0;
                            return __result58__;
                            __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional137;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional137=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                                __freed_obj__ = 0, 
                                _if_conditional137) {
                                    puts("Exception: at");
                                    __freed_obj__ = 0;
                                    come_show_stackframe();
                                    __freed_obj__ = 0;
                                    puts("abort.");
                                    __freed_obj__ = 0;
                                    exit(2);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result59__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                                __freed_obj__ = 0;
                                return __result59__;
                                __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional138;
struct sNode* result_57;
struct sNode* __result60__;
_Bool _if_conditional139;
struct sNode* __result61__;
struct sNode* result_58;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_57, 0, sizeof(struct sNode*));
memset(&result_58, 0, sizeof(struct sNode*));
                                if(_if_conditional138=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional138) {
                                    __freed_obj__ = 0;
                                    memset(&result_57,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result60__ = __result_obj__ = result_57;
                                    __freed_obj__ = 0;
                                    return __result60__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
                                __freed_obj__ = 0;
                                if(_if_conditional139=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,                                __freed_obj__ = 0, 
                                _if_conditional139) {
                                    __result61__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                    __freed_obj__ = 0;
                                    return __result61__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_58,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result62__ = __result_obj__ = result_58;
                                __freed_obj__ = 0;
                                return __result62__;
                                __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __result63__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                __freed_obj__ = 0;
                                return __result63__;
                                __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional140;
struct sNode* result_60;
struct sNode* __result64__;
_Bool _if_conditional141;
struct sNode* __result65__;
struct sNode* result_61;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_60, 0, sizeof(struct sNode*));
memset(&result_61, 0, sizeof(struct sNode*));
                                if(_if_conditional140=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional140) {
                                    __freed_obj__ = 0;
                                    memset(&result_60,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result64__ = __result_obj__ = result_60;
                                    __freed_obj__ = 0;
                                    return __result64__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                __freed_obj__ = 0;
                                if(_if_conditional141=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,                                __freed_obj__ = 0, 
                                _if_conditional141) {
                                    __result65__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                    __freed_obj__ = 0;
                                    return __result65__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_61,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result66__ = __result_obj__ = result_61;
                                __freed_obj__ = 0;
                                return __result66__;
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
void* right_value88;
struct list_item$1CVALUEph* litem_72;
struct CVALUE* __dec_obj41;
_Bool _if_conditional154;
void* right_value89;
struct list_item$1CVALUEph* litem_73;
struct CVALUE* __dec_obj42;
void* right_value90;
struct list_item$1CVALUEph* litem_74;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value89, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional152=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional152) {
                        litem_72=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_72, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_72, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj41=((struct list_item$1CVALUEph*)come_null_check(litem_72, "./comelang2.h", 276))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_72, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_72;
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_72;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional154=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional154) {
                            litem_73=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_73, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_73, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj42=((struct list_item$1CVALUEph*)come_null_check(litem_73, "./comelang2.h", 286))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_73, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_73;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_73;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_74=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_74, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_74, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj43=((struct list_item$1CVALUEph*)come_null_check(litem_74, "./comelang2.h", 296))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_74, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_74;
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_74;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result68__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result68__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional153=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional153) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional162;
char* result_80;
char* __result71__;
_Bool _if_conditional163;
char* __result72__;
char* result_81;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(char*));
memset(&result_81, 0, sizeof(char*));
                        if(_if_conditional162=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional162) {
                            __freed_obj__ = 0;
                            memset(&result_80,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result71__ = __result_obj__ = result_80;
                            __freed_obj__ = 0;
                            return __result71__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional163=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional163) {
                            __result72__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result72__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_81,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result73__ = __result_obj__ = result_81;
                        __freed_obj__ = 0;
                        return __result73__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result74__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result74__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional164;
char* result_83;
char* __result75__;
_Bool _if_conditional165;
char* __result76__;
char* result_84;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(char*));
memset(&result_84, 0, sizeof(char*));
                        if(_if_conditional164=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional164) {
                            __freed_obj__ = 0;
                            memset(&result_83,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result75__ = __result_obj__ = result_83;
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional165=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional165) {
                            __result76__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result76__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_84,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result77__ = __result_obj__ = result_84;
                        __freed_obj__ = 0;
                        return __result77__;
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result78__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                            __freed_obj__ = 0;
                            return __result78__;
                            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional167;
struct list_item$1sTypeph* it_85;
int i_86;
_Bool _while_condtional10;
_Bool _if_conditional168;
void* right_value93;
void* right_value94;
struct optional$2sTypephbool* __result80__;
struct sType* default_value_87;
void* right_value95;
void* right_value96;
struct optional$2sTypephbool* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_86, 0, sizeof(int));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&default_value_87, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
                                if(_if_conditional167=position<0,                                __freed_obj__ = 0, 
                                _if_conditional167) {
                                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_85=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                                __freed_obj__ = 0;
                                i_86=0;
                                __freed_obj__ = 0;
                                while(_while_condtional10=it_85!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional10) {
                                    if(_if_conditional168=position==i_86,                                    __freed_obj__ = 0, 
                                    _if_conditional168) {
                                        __result80__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value94=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value93=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_85, "./comelang2.h", 742))->item),(_Bool)1)));
                                        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result80__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_85=((struct list_item$1sTypeph*)come_null_check(it_85, "./comelang2.h", 744))->next;
                                    __freed_obj__ = 0;
                                    i_86++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&default_value_87,0,sizeof(struct sType*));
                                __freed_obj__ = 0;
                                __result81__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value96=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value95=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_87),(_Bool)0))));
                                if(default_value_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result81__;
                                __freed_obj__ = 0;
                                if(default_value_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj44;
struct optional$2sTypephbool* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            __dec_obj44=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                            __freed_obj__ = 0;
                                            __result79__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result79__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional169=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional169) {
                                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional170;
struct sType* default_value_88;
struct sType* __result82__;
struct sType* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_88, 0, sizeof(struct sType*));
                                if(_if_conditional170=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional170) {
                                    __freed_obj__ = 0;
                                    memset(&default_value_88,0,sizeof(struct sType*));
                                    __freed_obj__ = 0;
                                    __result82__ = __result_obj__ = default_value_88;
                                    __freed_obj__ = 0;
                                    return __result82__;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result83__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                    __freed_obj__ = 0;
                                    return __result83__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = ((struct sStoreNode*)come_null_check(self, "07var.c", 675))->sline;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value183;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(right_value183=__builtin_string(((struct sStoreNode*)come_null_check(self, "07var.c", 680))->sname)));
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value184;
void* right_value185;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value194;
struct sNode* result_126;
struct sNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 685);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value185=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value184=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 685)))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_126=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=_inf_value1)));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result92__ = __result_obj__ = result_126;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, ((struct sNode*)result_126)->finalize, ((struct sNode*)result_126)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, ((struct sNode*)result_126)->finalize, ((struct sNode*)result_126)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value195;
char* __dec_obj93;
void* right_value196;
char* __dec_obj94;
struct sLoadNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    __dec_obj93=((struct sLoadNode*)come_null_check(self, "07var.c", 701))->name;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 701))->name=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(name))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 703))->sline=((struct sInfo*)come_null_check(info, "07var.c", 703))->sline;
    __freed_obj__ = 0;
    __dec_obj94=((struct sLoadNode*)come_null_check(self, "07var.c", 704))->sname;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 704))->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 704))->sname))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result93__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

char* sLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value197;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sLoadNode")));
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* current_stack_frame_struct_127;
void* right_value198;
struct optional$2sVarpbool* __exception_result_var_a2;
_Bool _if_conditional248;
struct sVar* parent_var_128;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value199;
struct CVALUE* come_value_129;
struct sType* type_130;
void* right_value200;
char* __dec_obj95;
void* right_value201;
struct sType* __dec_obj96;
_Bool __result96__;
struct sVar* var__131;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value211;
struct sFun* fun_136;
_Bool _if_conditional258;
void* right_value212;
struct CVALUE* come_value_137;
void* right_value213;
char* __dec_obj97;
struct sType* __dec_obj98;
_Bool __result104__;
_Bool __result105__;
void* right_value214;
struct CVALUE* come_value_138;
void* right_value215;
char* __dec_obj99;
void* right_value216;
struct sType* __dec_obj100;
_Bool _if_conditional259;
void* right_value217;
struct sType* __dec_obj101;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_127, 0, sizeof(struct sClass*));
memset(&right_value198, 0, sizeof(void*));
memset(&parent_var_128, 0, sizeof(struct sVar*));
memset(&right_value199, 0, sizeof(void*));
memset(&come_value_129, 0, sizeof(struct CVALUE*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&var__131, 0, sizeof(struct sVar*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_136, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_137, 0, sizeof(struct CVALUE*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&come_value_138, 0, sizeof(struct CVALUE*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
    current_stack_frame_struct_127=((struct sInfo*)come_null_check(info, "07var.c", 721))->current_stack_frame_struct;
    __freed_obj__ = 0;
    if(_if_conditional248=current_stack_frame_struct_127&&optional$2sVarpbool_value((come_clear_stackframe(), come_push_stackframe("07var.c", 746),__exception_result_var_a2=((struct optional$2sVarpbool*)(right_value198=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 746))->lv_table, "07var.c", 746))->mVars,((struct sLoadNode*)come_null_check(self, "07var.c", 746))->name))), come_pop_stackframe(), __exception_result_var_a2))==((void*)0),    (right_value198 && right_value198 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional248) {
        parent_var_128=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 724))->lv_table, "07var.c", 724))->mParent,((struct sLoadNode*)come_null_check(self, "07var.c", 724))->name);
        __freed_obj__ = 0;
        if(_if_conditional249=parent_var_128!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional249) {
            if(_if_conditional250=string_operator_not_equals(((struct sVar*)come_null_check(parent_var_128, "07var.c", 743))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 743))->come_fun, "07var.c", 743))->mName),            __freed_obj__ = 0, 
            _if_conditional250) {
                come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 728))));
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                type_130=((struct sVar*)come_null_check(parent_var_128, "07var.c", 730))->mType;
                __freed_obj__ = 0;
                __dec_obj95=((struct CVALUE*)come_null_check(come_value_129, "07var.c", 732))->c_value;
                ((struct CVALUE*)come_null_check(come_value_129, "07var.c", 732))->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("(*(parent->%s))",((struct sVar*)come_null_check(parent_var_128, "07var.c", 732))->mCValueName))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj96=((struct CVALUE*)come_null_check(come_value_129, "07var.c", 734))->type;
                ((struct CVALUE*)come_null_check(come_value_129, "07var.c", 734))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(type_130))));
                if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_129, "07var.c", 735))->var=((void*)0);
                __freed_obj__ = 0;
                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_129, "07var.c", 737))->c_value);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 739))->stack, "07var.c", 739)),(struct CVALUE*)come_increment_ref_count(come_value_129));
                __freed_obj__ = 0;
                __result96__ = (_Bool)1;
                if(come_value_129 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result96__;
                __freed_obj__ = 0;
                if(come_value_129 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var__131=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 746))->lv_table,((struct sLoadNode*)come_null_check(self, "07var.c", 746))->name);
    __freed_obj__ = 0;
    if(_if_conditional251=var__131==((void*)0),    __freed_obj__ = 0, 
    _if_conditional251) {
        var__131=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 749))->gv_table,((struct sLoadNode*)come_null_check(self, "07var.c", 749))->name);
        __freed_obj__ = 0;
        if(_if_conditional252=var__131==((void*)0),        __freed_obj__ = 0, 
        _if_conditional252) {
            come_clear_stackframe();
            fun_136=optional$2sFunpbool_value((come_push_stackframe("07var.c", 752),((struct optional$2sFunpbool*)(right_value211=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 752))->funcs,((struct sLoadNode*)come_null_check(self, "07var.c", 752))->name)))));
            come_pop_stackframe();
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional258=fun_136,            __freed_obj__ = 0, 
            _if_conditional258) {
                come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 755))));
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj97=((struct CVALUE*)come_null_check(come_value_137, "07var.c", 757))->c_value;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 757))->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s",((struct sFun*)come_null_check(fun_136, "07var.c", 757))->mName))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj98=((struct CVALUE*)come_null_check(come_value_137, "07var.c", 758))->type;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 758))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(fun_136, "07var.c", 758))->mLambdaType);
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 759))->var=((void*)0);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 761))->stack, "07var.c", 761)),(struct CVALUE*)come_increment_ref_count(come_value_137));
                __freed_obj__ = 0;
                __result104__ = (_Bool)1;
                if(come_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
                if(come_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",((struct sLoadNode*)come_null_check(self, "07var.c", 766))->name);
                __freed_obj__ = 0;
                __result105__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result105__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 772))));
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj99=((struct CVALUE*)come_null_check(come_value_138, "07var.c", 773))->c_value;
    ((struct CVALUE*)come_null_check(come_value_138, "07var.c", 773))->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s",((struct sVar*)come_null_check(var__131, "07var.c", 773))->mCValueName))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj100=((struct CVALUE*)come_null_check(come_value_138, "07var.c", 774))->type;
    ((struct CVALUE*)come_null_check(come_value_138, "07var.c", 774))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(((struct sVar*)come_null_check(var__131, "07var.c", 774))->mType))));
    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_138, "07var.c", 775))->var=var__131;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 777))->stack, "07var.c", 777)),(struct CVALUE*)come_increment_ref_count(come_value_138));
    __freed_obj__ = 0;
    if(_if_conditional259=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 787))->type, "07var.c", 787))->mArrayNum, "07var.c", 787)))==1,    __freed_obj__ = 0, 
    _if_conditional259) {
        __dec_obj101=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 780))->type, "07var.c", 780))->mOriginalLoadVarType, "07var.c", 780))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 780))->type, "07var.c", 780))->mOriginalLoadVarType, "07var.c", 780))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 780))->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 782))->type, "07var.c", 782))->mArrayNum, "07var.c", 782)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 783))->type, "07var.c", 783))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 784))->type, "07var.c", 784))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 784))->type, "07var.c", 784))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = (_Bool)1;
    if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_132;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional11;
_Bool _if_conditional253;
void* right_value202;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional254;
void* right_value203;
void* right_value204;
struct optional$2sFunpbool* __result98__;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value205;
void* right_value206;
struct optional$2sFunpbool* __result99__;
void* right_value207;
void* right_value208;
struct optional$2sFunpbool* __result100__;
void* right_value209;
void* right_value210;
struct optional$2sFunpbool* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_132, 0, sizeof(struct sFun*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_132,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_133=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_134=hash_133;
                __freed_obj__ = 0;
                while(_while_condtional11=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional11) {
                    if(_if_conditional253=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_134],                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        if(_if_conditional254=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value202=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_134], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                        (right_value202 && right_value202 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional254) {
                            __result98__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value204=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value203=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_134],(_Bool)1)));
                            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result98__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_134++;
                        __freed_obj__ = 0;
                        if(_if_conditional255=it_134>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional255) {
                            it_134=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional256=it_134==hash_133,                            __freed_obj__ = 0, 
                            _if_conditional256) {
                                __result99__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value206=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value205=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_132,(_Bool)0))));
                                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result99__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result100__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value208=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value207=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_132,(_Bool)0))));
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result100__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result101__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value210=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value209=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_132,(_Bool)0))));
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result101__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result97__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result97__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional257;
struct sFun* default_value_135;
struct sFun* __result102__;
struct sFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_135, 0, sizeof(struct sFun*));
                if(_if_conditional257=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional257) {
                    __freed_obj__ = 0;
                    memset(&default_value_135,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result102__ = __result_obj__ = default_value_135;
                    __freed_obj__ = 0;
                    return __result102__;
                    __freed_obj__ = 0;
                }
                else {
                    __result103__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_139;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_140;
struct list$1sNodeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_139, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_140, 0, sizeof(struct list_item$1sNodeph*));
            it_139=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional12=it_139!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                prev_it_140=it_139;
                __freed_obj__ = 0;
                it_139=((struct list_item$1sNodeph*)come_null_check(it_139, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_140 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result106__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = ((struct sLoadNode*)come_null_check(self, "07var.c", 792))->sline;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value218;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
    __result109__ = __result_obj__ = ((char*)(right_value218=__builtin_string(((struct sLoadNode*)come_null_check(self, "07var.c", 797))->sname)));
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value219;
void* right_value220;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value224;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 802);
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value220=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value219=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 802)))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result112__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value225;
char* __dec_obj104;
void* right_value226;
char* __dec_obj105;
struct sFunLoadNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
    __dec_obj104=((struct sFunLoadNode*)come_null_check(self, "07var.c", 814))->name;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 814))->name=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(name))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 816))->sline=((struct sInfo*)come_null_check(info, "07var.c", 816))->sline;
    __freed_obj__ = 0;
    __dec_obj105=((struct sFunLoadNode*)come_null_check(self, "07var.c", 817))->sname;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 817))->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 817))->sname))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result113__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional266=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional266) {
            if(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name && !__freed_obj__) { ((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name = come_decrement_ref_count(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional267=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional267) {
            if(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname && !__freed_obj__) { ((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname = come_decrement_ref_count(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value227;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sFunLoadNode")));
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value228;
struct sFun* fun_142;
_Bool _if_conditional268;
_Bool __result116__;
void* right_value229;
struct CVALUE* come_value_143;
void* right_value230;
char* __dec_obj106;
struct sType* __dec_obj107;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&right_value229, 0, sizeof(void*));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
memset(&right_value230, 0, sizeof(void*));
    come_clear_stackframe();
    fun_142=optional$2sFunpbool_value((come_push_stackframe("07var.c", 834),((struct optional$2sFunpbool*)(right_value228=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 834))->funcs,((struct sFunLoadNode*)come_null_check(self, "07var.c", 834))->name)))));
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional268=fun_142==((void*)0),    __freed_obj__ = 0, 
    _if_conditional268) {
        err_msg(info,"fun not found(%s) at loading variable\n",((struct sFunLoadNode*)come_null_check(self, "07var.c", 837))->name);
        __freed_obj__ = 0;
        __result116__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result116__;
        __freed_obj__ = 0;
    }
    else {
        come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 841))));
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj106=((struct CVALUE*)come_null_check(come_value_143, "07var.c", 843))->c_value;
        ((struct CVALUE*)come_null_check(come_value_143, "07var.c", 843))->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%s",((struct sFun*)come_null_check(fun_142, "07var.c", 843))->mName))));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj107=((struct CVALUE*)come_null_check(come_value_143, "07var.c", 844))->type;
        ((struct CVALUE*)come_null_check(come_value_143, "07var.c", 844))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(fun_142, "07var.c", 844))->mLambdaType);
        if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_143, "07var.c", 845))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 847))->stack, "07var.c", 847)),(struct CVALUE*)come_increment_ref_count(come_value_143));
        __freed_obj__ = 0;
        if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result117__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = ((struct sFunLoadNode*)come_null_check(self, "07var.c", 855))->sline;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value231;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value231, 0, sizeof(void*));
    __result119__ = __result_obj__ = ((char*)(right_value231=__builtin_string(((struct sFunLoadNode*)come_null_check(self, "07var.c", 860))->sname)));
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value232;
struct sVar* self_144;
void* right_value233;
char* __dec_obj108;
void* right_value234;
struct sType* __dec_obj109;
_Bool _if_conditional273;
void* right_value235;
char* __dec_obj110;
static int n_145=0;
void* right_value236;
char* __dec_obj111;
_Bool _if_conditional274;
void* right_value237;
char* __dec_obj112;
char* __dec_obj113;
void* right_value250;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
memset(&self_144, 0, sizeof(struct sVar*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    self_144=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value232=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 866))));
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj108=((struct sVar*)come_null_check(self_144, "07var.c", 868))->mName;
    ((struct sVar*)come_null_check(self_144, "07var.c", 868))->mName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj109=((struct sVar*)come_null_check(self_144, "07var.c", 869))->mType;
    ((struct sVar*)come_null_check(self_144, "07var.c", 869))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(type))));
    if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sType*)come_null_check(type, "07var.c", 879))->mFunctionParam,    __freed_obj__ = 0, 
    _if_conditional273) {
        __dec_obj110=((struct sVar*)come_null_check(self_144, "07var.c", 872))->mCValueName;
        ((struct sVar*)come_null_check(self_144, "07var.c", 872))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(name))));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        __dec_obj111=((struct sVar*)come_null_check(self_144, "07var.c", 876))->mCValueName;
        ((struct sVar*)come_null_check(self_144, "07var.c", 876))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s_%d",name,n_145++))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_144, "07var.c", 879))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 879))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_144, "07var.c", 880))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_144, "07var.c", 881))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_144, "07var.c", 882))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional274=((struct sInfo*)come_null_check(info, "07var.c", 890))->come_fun,    __freed_obj__ = 0, 
    _if_conditional274) {
        __dec_obj112=((struct sVar*)come_null_check(self_144, "07var.c", 884))->mFunName;
        ((struct sVar*)come_null_check(self_144, "07var.c", 884))->mFunName=(char*)come_increment_ref_count(((char*)(right_value237=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 884))->come_fun, "07var.c", 884))->mName))));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj113=((struct sVar*)come_null_check(self_144, "07var.c", 887))->mFunName;
        ((struct sVar*)come_null_check(self_144, "07var.c", 887))->mFunName=((void*)0);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 890))->lv_table, "07var.c", 890))->mVars, "07var.c", 890)),(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_144));
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_144 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional269=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional269) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional270=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional271=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional272=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional275;
unsigned int hash_163;
unsigned int it_164;
_Bool _while_condtional15;
_Bool _if_conditional287;
void* right_value244;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool same_key_exist_181;
char* it2_184;
_Bool _for_condtionalA11;
void* right_value246;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct map$2charphsVarph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_163, 0, sizeof(unsigned int));
memset(&it_164, 0, sizeof(unsigned int));
memset(&right_value244, 0, sizeof(void*));
memset(&same_key_exist_181, 0, sizeof(_Bool));
memset(&it2_184, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
        if(_if_conditional275=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional275) {
            map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_163=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_164=hash_163;
        __freed_obj__ = 0;
        while(_while_condtional15=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional15) {
            if(_if_conditional287=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_164],            __freed_obj__ = 0, 
            _if_conditional287) {
                if(_if_conditional288=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a4=((struct optional$2boolbool*)(right_value244=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_164], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value244 && right_value244 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional288) {
                    if(_if_conditional289=1,                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_164]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_164] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_164] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_164], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_164]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_164]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_164]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional309=1,                    __freed_obj__ = 0, 
                    _if_conditional309) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1442))->items[it_164] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1442))->items[it_164], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1443))->items[it_164]=(struct sVar*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1446))->items[it_164]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_164++;
                __freed_obj__ = 0;
                if(_if_conditional310=it_164>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional310) {
                    it_164=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional311=it_164==hash_163,                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        printf("unexpected error in map.insert\n");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_164]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional312=1,                __freed_obj__ = 0, 
                _if_conditional312) {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_164]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_164]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional313=1,                __freed_obj__ = 0, 
                _if_conditional313) {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1470))->items[it_164]=(struct sVar*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1473))->items[it_164]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_181=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_184=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it2_184=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional318=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a6=((struct optional$2boolbool*)(right_value246=string_equals(((char*)come_null_check(it2_184, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a6)),            (right_value246 && right_value246 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional318) {
                same_key_exist_181=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional319=!same_key_exist_181,        __freed_obj__ = 0, 
        _if_conditional319) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result143__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result143__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_146;
void* right_value238;
char** keys_147;
void* right_value239;
struct sVar** items_148;
void* right_value240;
_Bool* item_existance_149;
int len_150;
char* it_153;
_Bool _for_condtionalA10;
struct sVar* default_value_156;
void* right_value242;
struct sVar* it2_159;
unsigned int hash_160;
int n_161;
_Bool _while_condtional14;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct sVar* default_value_162;
void* right_value243;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_146, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&keys_147, 0, sizeof(char**));
memset(&right_value239, 0, sizeof(void*));
memset(&items_148, 0, sizeof(struct sVar**));
memset(&right_value240, 0, sizeof(void*));
memset(&item_existance_149, 0, sizeof(_Bool*));
memset(&len_150, 0, sizeof(int));
memset(&it_153, 0, sizeof(char*));
memset(&default_value_156, 0, sizeof(struct sVar*));
memset(&right_value242, 0, sizeof(void*));
memset(&it2_159, 0, sizeof(struct sVar*));
memset(&hash_160, 0, sizeof(unsigned int));
memset(&n_161, 0, sizeof(int));
memset(&default_value_162, 0, sizeof(struct sVar*));
memset(&right_value243, 0, sizeof(void*));
                size_146=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_147=(char**)come_increment_ref_count(((char**)(right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_146)), "./comelang2.h", 1370))));
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_148=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value239=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_146)), "./comelang2.h", 1371))));
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_149=(_Bool*)come_increment_ref_count(((_Bool*)(right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_146)), "./comelang2.h", 1372))));
                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_150=0;
                __freed_obj__ = 0;
                for(
                it_153=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA10=                !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA10;                it_153=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_156,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    it2_159=((struct sVar*)(right_value242=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_153,default_value_156)));
                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_160=string_get_hash_key(((char*)come_null_check(it_153, "./comelang2.h", 1380)))%size_146;
                    __freed_obj__ = 0;
                    n_161=hash_160;
                    __freed_obj__ = 0;
                    while(_while_condtional14=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional284=item_existance_149[n_161],                        __freed_obj__ = 0, 
                        _if_conditional284) {
                            n_161++;
                            __freed_obj__ = 0;
                            if(_if_conditional285=n_161>=size_146,                            __freed_obj__ = 0, 
                            _if_conditional285) {
                                n_161=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional286=n_161==hash_160,                                __freed_obj__ = 0, 
                                _if_conditional286) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    __freed_obj__ = 0;
                                    exit(2);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            item_existance_149[n_161]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_147[n_161]=it_153;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_148[n_161]=((struct sVar*)(right_value243=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_153,default_value_162)));
                            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_150++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_147;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_148;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_149;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_146;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_150;
                __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional276;
char* result_151;
char* __result120__;
_Bool _if_conditional277;
char* __result121__;
char* result_152;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
                    if(_if_conditional276=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional276) {
                        __freed_obj__ = 0;
                        memset(&result_151,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result120__ = __result_obj__ = result_151;
                        __freed_obj__ = 0;
                        return __result120__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional277=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional277) {
                        __result121__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result121__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_152,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result122__ = __result_obj__ = result_152;
                    __freed_obj__ = 0;
                    return __result122__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result123__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result123__;
                    __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional278;
char* result_154;
char* __result124__;
_Bool _if_conditional279;
char* __result125__;
char* result_155;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
                    if(_if_conditional278=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional278) {
                        __freed_obj__ = 0;
                        memset(&result_154,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result124__ = __result_obj__ = result_154;
                        __freed_obj__ = 0;
                        return __result124__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional279=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional279) {
                        __result125__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result125__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_155,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result126__ = __result_obj__ = result_155;
                    __freed_obj__ = 0;
                    return __result126__;
                    __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_157;
unsigned int it_158;
_Bool _while_condtional13;
_Bool _if_conditional280;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional281;
struct sVar* __result127__;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sVar* __result128__;
struct sVar* __result129__;
struct sVar* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_157, 0, sizeof(unsigned int));
memset(&it_158, 0, sizeof(unsigned int));
memset(&right_value241, 0, sizeof(void*));
                        hash_157=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_158=hash_157;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional280=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_158],                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                if(_if_conditional281=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a3=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_158], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional281) {
                                    __result127__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_158];
                                    __freed_obj__ = 0;
                                    return __result127__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_158++;
                                __freed_obj__ = 0;
                                if(_if_conditional282=it_158>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional282) {
                                    it_158=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional283=it_158==hash_157,                                    __freed_obj__ = 0, 
                                    _if_conditional283) {
                                        __result128__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result128__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result129__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result129__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result130__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result130__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_165;
struct list_item$1charp* it_166;
_Bool _while_condtional16;
void* right_value245;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional290;
struct list$1charp* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_165, 0, sizeof(int));
memset(&it_166, 0, sizeof(struct list_item$1charp*));
memset(&right_value245, 0, sizeof(void*));
                            it2_165=0;
                            __freed_obj__ = 0;
                            it_166=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_166!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional290=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a5=((struct optional$2boolbool*)(right_value245=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_166, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a5)),                                (right_value245 && right_value245 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional290) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_165,it2_165+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_165++;
                                __freed_obj__ = 0;
                                it_166=((struct list_item$1charp*)come_null_check(it_166, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result134__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result134__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
int tmp_167;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list$1charp* __result131__;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list_item$1charp* it_170;
int i_171;
_Bool _while_condtional18;
_Bool _if_conditional299;
struct list_item$1charp* prev_it_172;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list_item$1charp* it_173;
int i_174;
_Bool _while_condtional19;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1charp* prev_it_175;
struct list_item$1charp* it_176;
struct list_item$1charp* head_prev_it_177;
struct list_item$1charp* tail_it_178;
int i_179;
_Bool _while_condtional20;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list_item$1charp* prev_it_180;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_167, 0, sizeof(int));
memset(&it_170, 0, sizeof(struct list_item$1charp*));
memset(&i_171, 0, sizeof(int));
memset(&prev_it_172, 0, sizeof(struct list_item$1charp*));
memset(&it_173, 0, sizeof(struct list_item$1charp*));
memset(&i_174, 0, sizeof(int));
memset(&prev_it_175, 0, sizeof(struct list_item$1charp*));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_177, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional291=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional291) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional292=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional292) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional293=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional293) {
                                            tmp_167=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_167;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional294=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional294) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional295=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional295) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional296=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional296) {
                                            __result131__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result131__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional297=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional297) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional298=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional298) {
                                                it_170=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_171=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional18=it_170!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional18) {
                                                    if(_if_conditional299=i_171<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional299) {
                                                        prev_it_172=it_170;
                                                        __freed_obj__ = 0;
                                                        it_170=((struct list_item$1charp*)come_null_check(it_170, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_171++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_172 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_172, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional300=i_171==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional300) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_170;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_170=((struct list_item$1charp*)come_null_check(it_170, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_171++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional301=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional301) {
                                                    it_173=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_174=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_173!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional302=i_174==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional302) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_173, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional303=i_174>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional303) {
                                                            prev_it_175=it_173;
                                                            __freed_obj__ = 0;
                                                            it_173=((struct list_item$1charp*)come_null_check(it_173, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_174++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_175 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_175, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_173=((struct list_item$1charp*)come_null_check(it_173, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_174++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_176=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_177=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_178=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_179=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional20=it_176!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional20) {
                                                        if(_if_conditional304=i_179==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional304) {
                                                            head_prev_it_177=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional305=i_179==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional305) {
                                                            tail_it_178=it_176;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional306=i_179>=head&&i_179<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional306) {
                                                            prev_it_180=it_176;
                                                            __freed_obj__ = 0;
                                                            it_176=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_179++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_180 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_176=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_179++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional307=head_prev_it_177!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional307) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_177, "./comelang2.h", 620))->next=tail_it_178;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional308=tail_it_178!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional308) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_178, "./comelang2.h", 623))->prev=head_prev_it_177;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result133__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result133__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_168;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_169;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_168, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_169, 0, sizeof(struct list_item$1charp*));
                                                it_168=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_168!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    prev_it_169=it_168;
                                                    __freed_obj__ = 0;
                                                    it_168=((struct list_item$1charp*)come_null_check(it_168, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_169 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result132__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result132__;
                                                __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional314;
char* result_182;
char* __result135__;
_Bool _if_conditional315;
char* __result136__;
char* result_183;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_182, 0, sizeof(char*));
memset(&result_183, 0, sizeof(char*));
            if(_if_conditional314=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional314) {
                __freed_obj__ = 0;
                memset(&result_182,0,sizeof(char*));
                __freed_obj__ = 0;
                __result135__ = __result_obj__ = result_182;
                __freed_obj__ = 0;
                return __result135__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional315=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional315) {
                __result136__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result136__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_183,0,sizeof(char*));
            __freed_obj__ = 0;
            __result137__ = __result_obj__ = result_183;
            __freed_obj__ = 0;
            return __result137__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result138__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result138__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional316;
char* result_185;
char* __result139__;
_Bool _if_conditional317;
char* __result140__;
char* result_186;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_185, 0, sizeof(char*));
memset(&result_186, 0, sizeof(char*));
            if(_if_conditional316=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional316) {
                __freed_obj__ = 0;
                memset(&result_185,0,sizeof(char*));
                __freed_obj__ = 0;
                __result139__ = __result_obj__ = result_185;
                __freed_obj__ = 0;
                return __result139__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional317=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional317) {
                __result140__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_186,0,sizeof(char*));
            __freed_obj__ = 0;
            __result141__ = __result_obj__ = result_186;
            __freed_obj__ = 0;
            return __result141__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional320;
void* right_value247;
struct list_item$1charp* litem_187;
_Bool _if_conditional321;
void* right_value248;
struct list_item$1charp* litem_188;
void* right_value249;
struct list_item$1charp* litem_189;
struct list$1charp* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
memset(&litem_187, 0, sizeof(struct list_item$1charp*));
memset(&right_value248, 0, sizeof(void*));
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
memset(&right_value249, 0, sizeof(void*));
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional320=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional320) {
                    litem_187=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value247=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_187, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_187, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_187, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_187;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_187;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional321=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional321) {
                        litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value248=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_188, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_188, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_188, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_188;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_188;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value249=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_189, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_189, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_189, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_189;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_189;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result142__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value251;
struct sVar* self_190;
void* right_value252;
char* __dec_obj114;
void* right_value253;
struct sType* __dec_obj115;
void* right_value254;
char* __dec_obj116;
void* right_value255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&self_190, 0, sizeof(struct sVar*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
    self_190=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value251=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 895))));
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj114=((struct sVar*)come_null_check(self_190, "07var.c", 897))->mName;
    ((struct sVar*)come_null_check(self_190, "07var.c", 897))->mName=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(name))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj115=((struct sVar*)come_null_check(self_190, "07var.c", 898))->mType;
    ((struct sVar*)come_null_check(self_190, "07var.c", 898))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(type))));
    if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_190, "07var.c", 900))->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj116=((struct sVar*)come_null_check(self_190, "07var.c", 902))->mCValueName;
    ((struct sVar*)come_null_check(self_190, "07var.c", 902))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(name))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_190, "07var.c", 904))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 904))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_190, "07var.c", 905))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_190, "07var.c", 906))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_190, "07var.c", 907))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 909))->gv_table, "07var.c", 909))->mVars, "07var.c", 909)),(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_190));
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_190 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_190, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value256;
struct sVar* self_191;
void* right_value257;
char* __dec_obj117;
void* right_value258;
struct sType* __dec_obj118;
void* right_value259;
char* __dec_obj119;
void* right_value260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&self_191, 0, sizeof(struct sVar*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value256=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 914))));
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj117=((struct sVar*)come_null_check(self_191, "07var.c", 916))->mName;
    ((struct sVar*)come_null_check(self_191, "07var.c", 916))->mName=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj118=((struct sVar*)come_null_check(self_191, "07var.c", 917))->mType;
    ((struct sVar*)come_null_check(self_191, "07var.c", 917))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(type))));
    if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_191, "07var.c", 919))->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj119=((struct sVar*)come_null_check(self_191, "07var.c", 921))->mCValueName;
    ((struct sVar*)come_null_check(self_191, "07var.c", 921))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(c_value))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_191, "07var.c", 923))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 923))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_191, "07var.c", 924))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_191, "07var.c", 925))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_191, "07var.c", 926))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 928))->gv_table, "07var.c", 928))->mVars, "07var.c", 928)),(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_191 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_191, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool is_type_name_flag_192;
_Bool multiple_declare_193;
_Bool _if_conditional322;
char* p_194;
int sline_195;
void* right_value261;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_197;
char* name_198;
_Bool err_199;
_Bool _if_conditional327;
_Bool multiple_declare2_200;
_Bool _if_conditional328;
char* p_201;
int sline_202;
void* right_value262;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_203;
char* name_204;
_Bool err_205;
_Bool _if_conditional329;
void* right_value263;
struct sNode* exp_206;
_Bool _if_conditional330;
void* right_value264;
struct sFun* fun_207;
_Bool _if_conditional331;
void* right_value265;
char* buf2_208;
struct list$1charph* multiple_assign_209;
_Bool _if_conditional332;
void* right_value266;
void* right_value267;
struct list$1charph* __dec_obj120;
void* right_value271;
_Bool _while_condtional21;
void* right_value272;
char* buf3_213;
void* right_value273;
_Bool _if_conditional335;
void* right_value274;
struct sNode* right_value_214;
void* right_value275;
struct sNode* __dec_obj124;
void* right_value276;
void* right_value277;
void* right_value278;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value287;
struct sNode* result_216;
void* right_value288;
void* right_value289;
struct optional$2sNodephbool* __result150__;
void* right_value290;
void* right_value291;
struct optional$2sNodephbool* __result152__;
_Bool _if_conditional354;
void* right_value292;
void* right_value293;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_217;
void* right_value294;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* base_type_218;
char* name_219;
_Bool err_220;
void* right_value295;
struct tuple2$2sTypephcharph* variable_name_221;
void* right_value296;
void* right_value299;
struct tuple3$3sTypephcharphsNodeph* variable_name2_222;
_Bool _while_condtional22;
void* right_value303;
struct tuple2$2sTypephcharph* variable_name_226;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphsNodeph* variable_name2_227;
void* right_value306;
void* right_value307;
void* right_value308;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value317;
struct sNode* result_229;
void* right_value318;
void* right_value319;
struct optional$2sNodephbool* __result157__;
_Bool _if_conditional378;
void* right_value320;
void* right_value321;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_230;
void* right_value322;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_231;
char* name_232;
_Bool err_233;
void* right_value323;
struct tuple2$2sTypephcharph* variable_name_234;
_Bool _if_conditional379;
void* right_value324;
struct sNode* exp_235;
void* right_value325;
void* right_value329;
struct tuple3$3sTypephcharphsNodeph* variable_name2_236;
_Bool _while_condtional23;
void* right_value330;
struct tuple2$2sTypephcharph* variable_name_237;
_Bool _if_conditional380;
void* right_value331;
struct sNode* exp_238;
void* right_value332;
void* right_value333;
struct tuple3$3sTypephcharphsNodeph* variable_name2_239;
void* right_value334;
void* right_value335;
void* right_value336;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value345;
struct sNode* result_241;
void* right_value346;
void* right_value347;
struct optional$2sNodephbool* __result161__;
_Bool _if_conditional398;
void* right_value348;
struct sNode* right_value_242;
void* right_value349;
struct sNode* __dec_obj155;
void* right_value350;
void* right_value351;
void* right_value352;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value361;
struct sNode* result_244;
void* right_value362;
void* right_value363;
struct optional$2sNodephbool* __result164__;
void* right_value364;
struct optional$2sFunpbool* __exception_result_var_b3;
_Bool _if_conditional416;
void* right_value365;
void* right_value366;
void* right_value367;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value371;
struct sNode* node_246;
void* right_value372;
struct sNode* __dec_obj165;
void* right_value373;
struct sNode* __dec_obj166;
void* right_value374;
void* right_value375;
struct optional$2sNodephbool* __result167__;
void* right_value376;
char* word_247;
_Bool _if_conditional423;
void* right_value377;
char* __dec_obj167;
_Bool is_type_name_flag_248;
_Bool _if_conditional424;
void* right_value378;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_249;
char* name_250;
_Bool err_251;
_Bool _if_conditional425;
void* right_value379;
void* right_value380;
struct optional$2sNodephbool* __result168__;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value381;
void* right_value382;
struct buffer* buf2_252;
_Bool squort_253;
_Bool dquort_254;
int nest_255;
_Bool _while_condtional24;
_Bool _if_conditional428;
void* right_value383;
void* right_value384;
struct optional$2sNodephbool* __result169__;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value385;
char* array_initializer_256;
void* right_value386;
void* right_value387;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value396;
struct sNode* result_258;
void* right_value397;
void* right_value398;
struct optional$2sNodephbool* __result172__;
void* right_value399;
struct sNode* right_value_259;
void* right_value400;
void* right_value401;
struct list$1sNodeph* right_values_260;
_Bool _while_condtional25;
char* anonymous_var_nameX1354_261;
void* right_value402;
struct sNode* __dec_obj175;
void* right_value403;
void* right_value404;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value413;
struct sNode* result_263;
void* right_value414;
void* right_value415;
struct optional$2sNodephbool* __result175__;
void* right_value416;
void* right_value417;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value426;
struct sNode* result_265;
void* right_value427;
void* right_value428;
struct optional$2sNodephbool* __result178__;
void* right_value429;
struct __current_stack1__ __current_stack1__;
void* right_value432;
struct sNode* result_266;
void* right_value433;
void* right_value434;
struct optional$2sNodephbool* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_192, 0, sizeof(_Bool));
memset(&multiple_declare_193, 0, sizeof(_Bool));
memset(&p_194, 0, sizeof(char*));
memset(&sline_195, 0, sizeof(int));
memset(&right_value261, 0, sizeof(void*));
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&multiple_declare2_200, 0, sizeof(_Bool));
memset(&p_201, 0, sizeof(char*));
memset(&sline_202, 0, sizeof(int));
memset(&right_value262, 0, sizeof(void*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&exp_206, 0, sizeof(struct sNode*));
memset(&right_value264, 0, sizeof(void*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&right_value265, 0, sizeof(void*));
memset(&buf2_208, 0, sizeof(char*));
memset(&multiple_assign_209, 0, sizeof(struct list$1charph*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&buf3_213, 0, sizeof(char*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value_214, 0, sizeof(struct sNode*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&result_216, 0, sizeof(struct sNode*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&multiple_declare_217, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value294, 0, sizeof(void*));
memset(&base_type_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&base_type_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&variable_name_221, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&variable_name2_222, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value303, 0, sizeof(void*));
memset(&variable_name_226, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&variable_name2_227, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&result_229, 0, sizeof(struct sNode*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&multiple_declare_230, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value322, 0, sizeof(void*));
memset(&base_type_231, 0, sizeof(struct sType*));
memset(&name_232, 0, sizeof(char*));
memset(&err_233, 0, sizeof(_Bool));
memset(&base_type_231, 0, sizeof(struct sType*));
memset(&name_232, 0, sizeof(char*));
memset(&err_233, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&variable_name_234, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value324, 0, sizeof(void*));
memset(&exp_235, 0, sizeof(struct sNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&variable_name2_236, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value330, 0, sizeof(void*));
memset(&variable_name_237, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value331, 0, sizeof(void*));
memset(&exp_238, 0, sizeof(struct sNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&variable_name2_239, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&result_241, 0, sizeof(struct sNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value_242, 0, sizeof(struct sNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&node_246, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&word_247, 0, sizeof(char*));
memset(&right_value377, 0, sizeof(void*));
memset(&is_type_name_flag_248, 0, sizeof(_Bool));
memset(&right_value378, 0, sizeof(void*));
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&buf2_252, 0, sizeof(struct buffer*));
memset(&squort_253, 0, sizeof(_Bool));
memset(&dquort_254, 0, sizeof(_Bool));
memset(&nest_255, 0, sizeof(int));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&array_initializer_256, 0, sizeof(char*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sNode*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value_259, 0, sizeof(struct sNode*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_values_260, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1354_261, 0, sizeof(char*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&result_263, 0, sizeof(struct sNode*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct sNode*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value432, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sNode*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
    is_type_name_flag_192=is_type_name(buf,info);
    __freed_obj__ = 0;
    multiple_declare_193=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional322=is_type_name_flag_192,    __freed_obj__ = 0, 
    _if_conditional322) {
        p_194=((struct sInfo*)come_null_check(info, "07var.c", 939))->p;
        __freed_obj__ = 0;
        sline_195=((struct sInfo*)come_null_check(info, "07var.c", 940))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 942))->p=head;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 943))->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 945),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value261=parse_type(info,(_Bool)1,(_Bool)1)))));
        type_197=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_198=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_199=multiple_assgin_var2->v3;
        come_pop_stackframe();
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional327=err_199&&*((struct sInfo*)come_null_check(info, "07var.c", 951))->p==44,        __freed_obj__ = 0, 
        _if_conditional327) {
            multiple_declare_193=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 951))->p=p_194;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 952))->sline=sline_195;
        __freed_obj__ = 0;
        if(type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_198 && !__freed_obj__) { name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    multiple_declare2_200=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional328=is_type_name_flag_192,    __freed_obj__ = 0, 
    _if_conditional328) {
        p_201=((struct sInfo*)come_null_check(info, "07var.c", 958))->p;
        __freed_obj__ = 0;
        sline_202=((struct sInfo*)come_null_check(info, "07var.c", 959))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 961))->p=head;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 962))->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var3=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 964),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value262=parse_type(info,(_Bool)1,(_Bool)1)))));
        type_203=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_204=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_205=multiple_assgin_var3->v3;
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional329=err_205&&*((struct sInfo*)come_null_check(info, "07var.c", 987))->p==61,        __freed_obj__ = 0, 
        _if_conditional329) {
            ((struct sInfo*)come_null_check(info, "07var.c", 969))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 974))->no_output_err=(_Bool)1;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 975))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 976))->no_output_come_code=(_Bool)1;
            __freed_obj__ = 0;
            exp_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=expression_v13(info))));
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 978))->no_comma=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 979))->no_output_err=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 980))->no_output_come_code=(_Bool)0;
            __freed_obj__ = 0;
            if(_if_conditional330=*((struct sInfo*)come_null_check(info, "07var.c", 985))->p==44,            __freed_obj__ = 0, 
            _if_conditional330) {
                multiple_declare2_200=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(exp_206 && !__freed_obj__) { exp_206 = come_decrement_ref_count(exp_206, ((struct sNode*)exp_206)->finalize, ((struct sNode*)exp_206)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 987))->p=p_201;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 988))->sline=sline_202;
        __freed_obj__ = 0;
        if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_204 && !__freed_obj__) { name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    fun_207=optional$2sFunpbool_value((come_push_stackframe("07var.c", 992),((struct optional$2sFunpbool*)(right_value264=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 992))->funcs,buf)))));
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional331=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    __freed_obj__ = 0, 
    _if_conditional331) {
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        buf2_208=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 996),((struct optional$2charphbool*)(right_value265=parse_word(info))))));
        come_pop_stackframe();
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        multiple_assign_209=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional332=*((struct sInfo*)come_null_check(info, "07var.c", 1016))->p==44,        __freed_obj__ = 0, 
        _if_conditional332) {
            __dec_obj120=multiple_assign_209;
            multiple_assign_209=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value267=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value266=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1002))))))));
            if(__dec_obj120) { come_call_finalizer(list$1charph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(multiple_assign_209, "07var.c", 1003)),(char*)come_increment_ref_count(((char*)(right_value271=string_clone(buf2_208)))));
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional21=*((struct sInfo*)come_null_check(info, "07var.c", 1015))->p==44,            __freed_obj__ = 0, 
            _while_condtional21) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1006))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                buf3_213=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 1010),((struct optional$2charphbool*)(right_value272=parse_word(info))))));
                come_pop_stackframe();
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(multiple_assign_209, "07var.c", 1013)),(char*)come_increment_ref_count(((char*)(right_value273=string_clone(buf3_213)))));
                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(buf3_213 && !__freed_obj__) { buf3_213 = come_decrement_ref_count(buf3_213, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional335=*((struct sInfo*)come_null_check(info, "07var.c", 1041))->p==61&&*(((struct sInfo*)come_null_check(info, "07var.c", 1041))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional335) {
            ((struct sInfo*)come_null_check(info, "07var.c", 1019))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1023))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            right_value_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1025))->no_comma=(_Bool)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj124=right_value_214;
            right_value_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_214),info))));
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1031);
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value278=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value276=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1031)))),(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(buf2_208)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_209),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_214),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=_inf_value3)));
            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            __result150__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value289=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value288=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1035)))),(struct sNode*)come_increment_ref_count(result_216),(_Bool)1)));
            if(right_value_214 && !__freed_obj__) { right_value_214 = come_decrement_ref_count(right_value_214, ((struct sNode*)right_value_214)->finalize, ((struct sNode*)right_value_214)->_protocol_obj, 0, 0, 0); } 
            if(result_216 && !__freed_obj__) { result_216 = come_decrement_ref_count(result_216, ((struct sNode*)result_216)->finalize, ((struct sNode*)result_216)->_protocol_obj, 0, 0, 0); } 
            if(buf2_208 && !__freed_obj__) { buf2_208 = come_decrement_ref_count(buf2_208, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_209 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result150__;
            __freed_obj__ = 0;
            if(right_value_214 && !__freed_obj__) { right_value_214 = come_decrement_ref_count(right_value_214, ((struct sNode*)right_value_214)->finalize, ((struct sNode*)right_value_214)->_protocol_obj, 0, 0, 0); } 
            if(result_216 && !__freed_obj__) { result_216 = come_decrement_ref_count(result_216, ((struct sNode*)result_216)->finalize, ((struct sNode*)result_216)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*((struct sInfo*)come_null_check(info, "07var.c", 1038))->p);
            __freed_obj__ = 0;
            __result152__ = __result_obj__ = (come_save_stackframe("07var.c", 1039), ((struct optional$2voidpbool*)(right_value291=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value290=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1039))),((void*)0),(_Bool)0))));
            if(buf2_208 && !__freed_obj__) { buf2_208 = come_decrement_ref_count(buf2_208, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_209 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result152__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf2_208 && !__freed_obj__) { buf2_208 = come_decrement_ref_count(buf2_208, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_209 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional354=multiple_declare_193,        __freed_obj__ = 0, 
        _if_conditional354) {
            ((struct sInfo*)come_null_check(info, "07var.c", 1043))->p=head;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1044))->sline=head_sline;
            __freed_obj__ = 0;
            multiple_declare_217=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value293=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value292=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1046))))))));
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1048),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value294=parse_type(info,(_Bool)0,(_Bool)1)))));
            base_type_218=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_219=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_220=multiple_assgin_var4->v3;
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            variable_name_221=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value295=parse_variable_name((struct sType*)come_increment_ref_count(base_type_218),(_Bool)1,info))));
            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            variable_name2_222=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value299=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value296=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1052)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_221, "07var.c", 1052))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_221, "07var.c", 1052))->v2),((void*)0)))));
            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_217, "07var.c", 1054)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_222));
            __freed_obj__ = 0;
            while(_while_condtional22=*((struct sInfo*)come_null_check(info, "07var.c", 1067))->p==44,            __freed_obj__ = 0, 
            _while_condtional22) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1057))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                variable_name_226=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value303=parse_variable_name((struct sType*)come_increment_ref_count(base_type_218),(_Bool)0,info))));
                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                variable_name2_227=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value305=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value304=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1062)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_226, "07var.c", 1062))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_226, "07var.c", 1062))->v2),((void*)0)))));
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_217, "07var.c", 1064)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_227));
                __freed_obj__ = 0;
                if(variable_name_226 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_226, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_227 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1067);
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value308=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value306=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1067)))),(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_217),(struct sType*)come_increment_ref_count(base_type_218),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_229=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=_inf_value4)));
            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            __result157__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value319=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value318=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1071)))),(struct sNode*)come_increment_ref_count(result_229),(_Bool)1)));
            if(multiple_declare_217 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_218 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_218, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_219 && !__freed_obj__) { name_219 = come_decrement_ref_count(name_219, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_221 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_222 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_229 && !__freed_obj__) { result_229 = come_decrement_ref_count(result_229, ((struct sNode*)result_229)->finalize, ((struct sNode*)result_229)->_protocol_obj, 0, 0, 0); } 
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result157__;
            __freed_obj__ = 0;
            if(multiple_declare_217 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_218 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_218, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_219 && !__freed_obj__) { name_219 = come_decrement_ref_count(name_219, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_221 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_222 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_229 && !__freed_obj__) { result_229 = come_decrement_ref_count(result_229, ((struct sNode*)result_229)->finalize, ((struct sNode*)result_229)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional378=multiple_declare2_200,            __freed_obj__ = 0, 
            _if_conditional378) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1074))->p=head;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "07var.c", 1075))->sline=head_sline;
                __freed_obj__ = 0;
                multiple_declare_230=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value321=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value320=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1077))))))));
                if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1079),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value322=parse_type(info,(_Bool)0,(_Bool)1)))));
                base_type_231=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_232=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_233=multiple_assgin_var5->v3;
                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                variable_name_234=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_231),(_Bool)1,info))));
                if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional379=*((struct sInfo*)come_null_check(info, "07var.c", 1100))->p==61,                __freed_obj__ = 0, 
                _if_conditional379) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1086))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "07var.c", 1091))->no_comma=(_Bool)1;
                    __freed_obj__ = 0;
                    exp_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=expression_v13(info))));
                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "07var.c", 1093))->no_comma=(_Bool)0;
                    __freed_obj__ = 0;
                    variable_name2_236=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value329=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value325=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1095)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_234, "07var.c", 1095))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_234, "07var.c", 1095))->v2),(struct sNode*)come_increment_ref_count(exp_235)))));
                    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_230, "07var.c", 1097)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_236));
                    __freed_obj__ = 0;
                    if(exp_235 && !__freed_obj__) { exp_235 = come_decrement_ref_count(exp_235, ((struct sNode*)exp_235)->finalize, ((struct sNode*)exp_235)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_236 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_236, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                while(_while_condtional23=*((struct sInfo*)come_null_check(info, "07var.c", 1127))->p==44,                __freed_obj__ = 0, 
                _while_condtional23) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1101))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    variable_name_237=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value330=parse_variable_name((struct sType*)come_increment_ref_count(base_type_231),(_Bool)0,info))));
                    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional380=*((struct sInfo*)come_null_check(info, "07var.c", 1125))->p==61,                    __freed_obj__ = 0, 
                    _if_conditional380) {
                        ((struct sInfo*)come_null_check(info, "07var.c", 1109))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1114))->no_comma=(_Bool)1;
                        __freed_obj__ = 0;
                        exp_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=expression_v13(info))));
                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1116))->no_comma=(_Bool)0;
                        __freed_obj__ = 0;
                        variable_name2_239=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value333=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value332=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1118)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_237, "07var.c", 1118))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_237, "07var.c", 1118))->v2),(struct sNode*)come_increment_ref_count(exp_238)))));
                        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_230, "07var.c", 1120)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_239));
                        __freed_obj__ = 0;
                        if(exp_238 && !__freed_obj__) { exp_238 = come_decrement_ref_count(exp_238, ((struct sNode*)exp_238)->finalize, ((struct sNode*)exp_238)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_239 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_237 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_237, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(variable_name_237 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_237, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1127);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value336=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value334=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1127)))),(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_230),(struct sType*)come_increment_ref_count(base_type_231),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=_inf_value5)));
                if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                __result161__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value347=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value346=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1131)))),(struct sNode*)come_increment_ref_count(result_241),(_Bool)1)));
                if(multiple_declare_230 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_230, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_232 && !__freed_obj__) { name_232 = come_decrement_ref_count(name_232, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_234 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_241 && !__freed_obj__) { result_241 = come_decrement_ref_count(result_241, ((struct sNode*)result_241)->finalize, ((struct sNode*)result_241)->_protocol_obj, 0, 0, 0); } 
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result161__;
                __freed_obj__ = 0;
                if(multiple_declare_230 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_230, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_232 && !__freed_obj__) { name_232 = come_decrement_ref_count(name_232, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_234 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_241 && !__freed_obj__) { result_241 = come_decrement_ref_count(result_241, ((struct sNode*)result_241)->finalize, ((struct sNode*)result_241)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional398=!is_type_name_flag_192&&*((struct sInfo*)come_null_check(info, "07var.c", 1281))->p==61&&*(((struct sInfo*)come_null_check(info, "07var.c", 1281))->p+1)!=61&&!((struct sInfo*)come_null_check(info, "07var.c", 1281))->no_assign,                __freed_obj__ = 0, 
                _if_conditional398) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1134))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_value_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj155=right_value_242;
                    right_value_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_242),info))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0); }
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1145);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value352=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value350=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1145)))),(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_242),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value6)));
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    __result164__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value363=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value362=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1149)))),(struct sNode*)come_increment_ref_count(result_244),(_Bool)1)));
                    if(right_value_242 && !__freed_obj__) { right_value_242 = come_decrement_ref_count(right_value_242, ((struct sNode*)right_value_242)->finalize, ((struct sNode*)right_value_242)->_protocol_obj, 0, 0, 0); } 
                    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, ((struct sNode*)result_244)->finalize, ((struct sNode*)result_244)->_protocol_obj, 0, 0, 0); } 
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result164__;
                    __freed_obj__ = 0;
                    if(right_value_242 && !__freed_obj__) { right_value_242 = come_decrement_ref_count(right_value_242, ((struct sNode*)right_value_242)->finalize, ((struct sNode*)right_value_242)->_protocol_obj, 0, 0, 0); } 
                    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, ((struct sNode*)result_244)->finalize, ((struct sNode*)result_244)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional416=!is_type_name_flag_192||optional$2sFunpbool_value((come_push_stackframe("07var.c", 1281),__exception_result_var_b3=((struct optional$2sFunpbool*)(right_value364=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 1281))->funcs,buf))), come_pop_stackframe(), __exception_result_var_b3)),                    (right_value364 && right_value364 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sFunpboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional416) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1152);
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value367=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value365=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1152)))),(char*)come_increment_ref_count(((char*)(right_value366=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value7)));
                        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __dec_obj165=node_246;
                        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_246),info))));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __dec_obj166=node_246;
                        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_246),info))));
                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __result167__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value375=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value374=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1158)))),(struct sNode*)come_increment_ref_count(node_246),(_Bool)1)));
                        if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result167__;
                        __freed_obj__ = 0;
                        if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "07var.c", 1161))->p=head;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1162))->sline=head_sline;
                        __freed_obj__ = 0;
                        word_247=(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(""))));
                        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional423=xisalpha(*((struct sInfo*)come_null_check(info, "07var.c", 1169))->p)||*((struct sInfo*)come_null_check(info, "07var.c", 1169))->p==95,                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            __dec_obj167=word_247;
                            word_247=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 1166),((struct optional$2charphbool*)(right_value377=parse_word(info))))));
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        is_type_name_flag_248=is_type_name(word_247,info);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1171))->p=head;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1172))->sline=head_sline;
                        __freed_obj__ = 0;
                        if(_if_conditional424=is_type_name_flag_248,                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1176),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value378=parse_type(info,(_Bool)1,(_Bool)1)))));
                            type_249=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                            name_250=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                            err_251=multiple_assgin_var6->v3;
                            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional425=!err_251,                            __freed_obj__ = 0, 
                            _if_conditional425) {
                                printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "07var.c", 1179))->sname,((struct sInfo*)come_null_check(info, "07var.c", 1179))->sline);
                                __freed_obj__ = 0;
                                __result168__ = __result_obj__ = (come_save_stackframe("07var.c", 1180), ((struct optional$2voidpbool*)(right_value380=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value379=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1180))),((void*)0),(_Bool)0))));
                                if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result168__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            if(_if_conditional426=*((struct sInfo*)come_null_check(info, "07var.c", 1278))->p==61,                            __freed_obj__ = 0, 
                            _if_conditional426) {
                                ((struct sInfo*)come_null_check(info, "07var.c", 1185))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                parse_sharp_v5(info);
                                __freed_obj__ = 0;
                                if(_if_conditional427=*((struct sInfo*)come_null_check(info, "07var.c", 1270))->p==123,                                __freed_obj__ = 0, 
                                _if_conditional427) {
                                    buf2_252=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value382=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1191))))))));
                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1193)),*((struct sInfo*)come_null_check(info, "07var.c", 1193))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "07var.c", 1194))->p++;
                                    __freed_obj__ = 0;
                                    squort_253=(_Bool)0;
                                    __freed_obj__ = 0;
                                    dquort_254=(_Bool)0;
                                    __freed_obj__ = 0;
                                    nest_255=1;
                                    __freed_obj__ = 0;
                                    while(_while_condtional24=1,                                    __freed_obj__ = 0, 
                                    _while_condtional24) {
                                        if(_if_conditional428=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional428) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            __freed_obj__ = 0;
                                            __result169__ = __result_obj__ = (come_save_stackframe("07var.c", 1202), ((struct optional$2voidpbool*)(right_value384=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value383=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1202))),((void*)0),(_Bool)0))));
                                            if(buf2_252 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                                            if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                                            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0, 0); }
                                            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result169__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional429=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==92,                                            __freed_obj__ = 0, 
                                            _if_conditional429) {
                                                buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1205)),*((struct sInfo*)come_null_check(info, "07var.c", 1205))->p);
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "07var.c", 1206))->p++;
                                                __freed_obj__ = 0;
                                                buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1207)),*((struct sInfo*)come_null_check(info, "07var.c", 1207))->p);
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "07var.c", 1208))->p++;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional430=!squort_253&&*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==34,                                                __freed_obj__ = 0, 
                                                _if_conditional430) {
                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1211)),*((struct sInfo*)come_null_check(info, "07var.c", 1211))->p);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1212))->p++;
                                                    __freed_obj__ = 0;
                                                    dquort_254=!dquort_254;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional431=!dquort_254&&*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==39,                                                    __freed_obj__ = 0, 
                                                    _if_conditional431) {
                                                        buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1216)),*((struct sInfo*)come_null_check(info, "07var.c", 1216))->p);
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "07var.c", 1217))->p++;
                                                        __freed_obj__ = 0;
                                                        squort_253=!squort_253;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional432=squort_253||dquort_254,                                                        __freed_obj__ = 0, 
                                                        _if_conditional432) {
                                                            buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1221)),*((struct sInfo*)come_null_check(info, "07var.c", 1221))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "07var.c", 1222))->p++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional433=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional433) {
                                                                nest_255++;
                                                                __freed_obj__ = 0;
                                                                buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1226)),*((struct sInfo*)come_null_check(info, "07var.c", 1226))->p);
                                                                __freed_obj__ = 0;
                                                                ((struct sInfo*)come_null_check(info, "07var.c", 1227))->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional434=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional434) {
                                                                    nest_255--;
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1231)),*((struct sInfo*)come_null_check(info, "07var.c", 1231))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1232))->p++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional435=nest_255==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional435) {
                                                                        skip_spaces_and_lf(info);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_252, "07var.c", 1240)),*((struct sInfo*)come_null_check(info, "07var.c", 1240))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1241))->p++;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    array_initializer_256=(char*)come_increment_ref_count(((char*)(right_value385=buffer_to_string(((struct buffer*)come_null_check(buf2_252, "07var.c", 1244))))));
                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1246);
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value387=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value386=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1246)))),(char*)come_increment_ref_count(name_250),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_249),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_256),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=_inf_value8)));
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    __result172__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value398=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value397=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1250)))),(struct sNode*)come_increment_ref_count(result_258),(_Bool)1)));
                                    if(buf2_252 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_256 && !__freed_obj__) { array_initializer_256 = come_decrement_ref_count(array_initializer_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_258 && !__freed_obj__) { result_258 = come_decrement_ref_count(result_258, ((struct sNode*)result_258)->finalize, ((struct sNode*)result_258)->_protocol_obj, 0, 0, 0); } 
                                    if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result172__;
                                    __freed_obj__ = 0;
                                    if(buf2_252 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_256 && !__freed_obj__) { array_initializer_256 = come_decrement_ref_count(array_initializer_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_258 && !__freed_obj__) { result_258 = come_decrement_ref_count(result_258, ((struct sNode*)result_258)->finalize, ((struct sNode*)result_258)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_value_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=expression_v13(info))));
                                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_values_260=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value401=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value400=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1257))))))));
                                    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*((struct sInfo*)come_null_check(info, "07var.c", 1262))->p==44,                                    __freed_obj__ = 0, 
                                    _while_condtional25) {
                                        __freed_obj__ = 0;
                                        if(anonymous_var_nameX1354_261 && !__freed_obj__) { anonymous_var_nameX1354_261 = come_decrement_ref_count(anonymous_var_nameX1354_261, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                    __dec_obj175=right_value_259;
                                    right_value_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_259),info))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1264);
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value404=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value403=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1264)))),(char*)come_increment_ref_count(name_250),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_249),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_259),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=_inf_value9)));
                                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    __result175__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value415=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value414=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1268)))),(struct sNode*)come_increment_ref_count(result_263),(_Bool)1)));
                                    if(right_value_259 && !__freed_obj__) { right_value_259 = come_decrement_ref_count(right_value_259, ((struct sNode*)right_value_259)->finalize, ((struct sNode*)right_value_259)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_260 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_263 && !__freed_obj__) { result_263 = come_decrement_ref_count(result_263, ((struct sNode*)result_263)->finalize, ((struct sNode*)result_263)->_protocol_obj, 0, 0, 0); } 
                                    if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result175__;
                                    __freed_obj__ = 0;
                                    if(right_value_259 && !__freed_obj__) { right_value_259 = come_decrement_ref_count(right_value_259, ((struct sNode*)right_value_259)->finalize, ((struct sNode*)right_value_259)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_260 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_263 && !__freed_obj__) { result_263 = come_decrement_ref_count(result_263, ((struct sNode*)result_263)->finalize, ((struct sNode*)result_263)->_protocol_obj, 0, 0, 0); } 
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1272);
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value417=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value416=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1272)))),(char*)come_increment_ref_count(name_250),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_249),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=_inf_value10)));
                                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                __result178__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value428=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value427=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1276)))),(struct sNode*)come_increment_ref_count(result_265),(_Bool)1)));
                                if(result_265 && !__freed_obj__) { result_265 = come_decrement_ref_count(result_265, ((struct sNode*)result_265)->finalize, ((struct sNode*)result_265)->_protocol_obj, 0, 0, 0); } 
                                if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result178__;
                                __freed_obj__ = 0;
                                if(result_265 && !__freed_obj__) { result_265 = come_decrement_ref_count(result_265, ((struct sNode*)result_265)->finalize, ((struct sNode*)result_265)->_protocol_obj, 0, 0, 0); } 
                            }
                            __freed_obj__ = 0;
                            if(type_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_250 && !__freed_obj__) { name_250 = come_decrement_ref_count(name_250, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(word_247 && !__freed_obj__) { word_247 = come_decrement_ref_count(word_247, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    __current_stack1__.is_type_name_flag_192 = &is_type_name_flag_192;
    __current_stack1__.multiple_declare_193 = &multiple_declare_193;
    __current_stack1__.multiple_declare2_200 = &multiple_declare2_200;
    __current_stack1__.fun_207 = &fun_207;
    result_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("07var.c", 1285),((struct optional$2sNodephbool*)(right_value429=string_node_v5(buf,head,head_sline,info)))), "07var.c", 1285)),&__current_stack1__,(void*)method_block1_07varc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result181__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value434=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value433=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1285)))),(struct sNode*)come_increment_ref_count(result_266),(_Bool)1)));
    if(result_266 && !__freed_obj__) { result_266 = come_decrement_ref_count(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 0, 0); } 
    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result181__;
    __freed_obj__ = 0;
    if(result_266 && !__freed_obj__) { result_266 = come_decrement_ref_count(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional323;
struct tuple3$3sTypephcharphbool* default_value_196;
struct tuple3$3sTypephcharphbool* __result144__;
struct tuple3$3sTypephcharphbool* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_196, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional323=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional323) {
                __freed_obj__ = 0;
                memset(&default_value_196,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __freed_obj__ = 0;
                __result144__ = __result_obj__ = default_value_196;
                __freed_obj__ = 0;
                return __result144__;
                __freed_obj__ = 0;
            }
            else {
                __result145__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional324=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional324) {
                if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional325=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional326=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional326) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional333;
void* right_value268;
struct list_item$1charph* litem_210;
char* __dec_obj121;
_Bool _if_conditional334;
void* right_value269;
struct list_item$1charph* litem_211;
char* __dec_obj122;
void* right_value270;
struct list_item$1charph* litem_212;
char* __dec_obj123;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&litem_210, 0, sizeof(struct list_item$1charph*));
memset(&right_value269, 0, sizeof(void*));
memset(&litem_211, 0, sizeof(struct list_item$1charph*));
memset(&right_value270, 0, sizeof(void*));
memset(&litem_212, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional333=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional333) {
                    litem_210=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value268=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_210, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_210, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj121=((struct list_item$1charph*)come_null_check(litem_210, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_210, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_210;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_210;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional334=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional334) {
                        litem_211=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value269=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_211, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_211, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj122=((struct list_item$1charph*)come_null_check(litem_211, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_211, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_211;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_211;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_212=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value270=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_212, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_212, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj123=((struct list_item$1charph*)come_null_check(litem_212, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_212, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_212;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_212;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result146__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result146__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj132;
struct optional$2sNodephbool* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj132=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result149__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional353=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                __freed_obj__ = 0;
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result151__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result151__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional355=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional355) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional356=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional356) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value297;
struct sType* __dec_obj133;
void* right_value298;
char* __dec_obj134;
struct tuple3$3sTypephcharphvoidp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
                __dec_obj133=((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1841))->v1;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(v1))));
                if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj134=((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1842))->v2;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value298=string_clone(v2))));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                __freed_obj__ = 0;
                __result153__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional357=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional357) {
                        if(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional358=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional358) {
                        if(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional359;
void* right_value300;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_223;
struct tuple3$3sTypephcharphsNodeph* __dec_obj135;
_Bool _if_conditional360;
void* right_value301;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_224;
struct tuple3$3sTypephcharphsNodeph* __dec_obj136;
void* right_value302;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_225;
struct tuple3$3sTypephcharphsNodeph* __dec_obj137;
struct list$1tuple3$3sTypephcharphsNodephph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&litem_223, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value301, 0, sizeof(void*));
memset(&litem_224, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value302, 0, sizeof(void*));
memset(&litem_225, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional359=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional359) {
                    litem_223=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value300=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 272))));
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_223, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_223, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj135=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_223, "./comelang2.h", 276))->item;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_223, "./comelang2.h", 276))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj135) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_223;
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_223;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional360=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional360) {
                        litem_224=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value301=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 282))));
                        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_224, "./comelang2.h", 284))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_224, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj136=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_224, "./comelang2.h", 286))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_224, "./comelang2.h", 286))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj136) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_224;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_224;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_225=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value302=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 292))));
                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_225, "./comelang2.h", 294))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_225, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj137=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_225, "./comelang2.h", 296))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_225, "./comelang2.h", 296))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj137) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_225;
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_225;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result154__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result154__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value326;
struct sType* __dec_obj145;
void* right_value327;
char* __dec_obj146;
void* right_value328;
struct sNode* __dec_obj147;
struct tuple3$3sTypephcharphsNodeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
                        __dec_obj145=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1841))->v1;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(v1))));
                        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj146=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1842))->v2;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value327=string_clone(v2))));
                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj147=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1843))->v3;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1843))->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(v3))));
                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __result158__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result158__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional417;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional417=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional417) {
                                if(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name && !__freed_obj__) { ((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name = come_decrement_ref_count(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional418=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 2))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional418) {
                                if(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname && !__freed_obj__) { ((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname = come_decrement_ref_count(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional419;
struct sLoadNode* __result165__;
void* right_value368;
struct sLoadNode* result_245;
_Bool _if_conditional420;
void* right_value369;
char* __dec_obj163;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value370;
char* __dec_obj164;
struct sLoadNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sLoadNode*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                            if(_if_conditional419=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional419) {
                                __result165__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result165__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_245=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value368=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3))));
                            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional420=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5))->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional420) {
                                __dec_obj163=((struct sLoadNode*)come_null_check(result_245, "sLoadNode_clone", 4))->name;
                                ((struct sLoadNode*)come_null_check(result_245, "sLoadNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value369=string_clone(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 4))->name))));
                                if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
                                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional421=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional421) {
                                ((struct sLoadNode*)come_null_check(result_245, "sLoadNode_clone", 5))->sline=((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional422=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional422) {
                                __dec_obj164=((struct sLoadNode*)come_null_check(result_245, "sLoadNode_clone", 6))->sname;
                                ((struct sLoadNode*)come_null_check(result_245, "sLoadNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 6))->sname))));
                                if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result166__ = __result_obj__ = result_245;
                            if(result_245 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result166__;
                            __freed_obj__ = 0;
                            if(result_245 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
_Bool _if_conditional476;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional470=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional470) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional471=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional471) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional472=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional472) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional473=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional473) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value, ((struct sNode*)((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value)->finalize, ((struct sNode*)((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional474=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional474) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional475=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional475) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional476=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 7))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional476) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional477;
struct sStoreNode* __result176__;
void* right_value418;
struct sStoreNode* result_264;
_Bool _if_conditional478;
void* right_value419;
char* __dec_obj183;
_Bool _if_conditional479;
void* right_value420;
struct list$1charph* __dec_obj184;
_Bool _if_conditional480;
void* right_value421;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj185;
_Bool _if_conditional481;
void* right_value422;
struct sNode* __dec_obj186;
_Bool _if_conditional482;
void* right_value423;
struct sType* __dec_obj187;
_Bool _if_conditional483;
void* right_value424;
char* __dec_obj188;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
void* right_value425;
char* __dec_obj189;
struct sStoreNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value418, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sStoreNode*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
                                    if(_if_conditional477=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional477) {
                                        __result176__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result176__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_264=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value418=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3))));
                                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional478=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5))->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional478) {
                                        __dec_obj183=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 4))->name;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 4))->name))));
                                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional479=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6))->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional479) {
                                        __dec_obj184=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 5))->multiple_assign;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 5))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=list$1charphp_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5))->multiple_assign))));
                                        if(__dec_obj184) { come_call_finalizer(list$1charph_finalize,__dec_obj184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional480=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 7))->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional480) {
                                        __dec_obj185=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 6))->multiple_declare;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 6))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value421=list$1tuple3$3sTypephcharphsNodephphp_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6))->multiple_declare))));
                                        if(__dec_obj185) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj185, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional481=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8))->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional481) {
                                        __dec_obj186=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 7))->right_value;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 7))->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=sNode_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 7))->right_value))));
                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0); }
                                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional482=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional482) {
                                        __dec_obj187=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 8))->type;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 8))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8))->type))));
                                        if(__dec_obj187) { come_call_finalizer(sType_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional483=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10))->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional483) {
                                        __dec_obj188=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 9))->array_initializer;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 9))->array_initializer=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9))->array_initializer))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional484=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional484) {
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 10))->alloc=((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10))->alloc;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional485=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional485) {
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 11))->sline=((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 11))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional486=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 13))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional486) {
                                        __dec_obj189=((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 12))->sname;
                                        ((struct sStoreNode*)come_null_check(result_264, "sStoreNode_clone", 12))->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 12))->sname))));
                                        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result177__ = __result_obj__ = result_264;
                                    if(result_264 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result177__;
                                    __freed_obj__ = 0;
                                    if(result_264 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional487;
_Bool _if_conditional488;
struct sNode* __result179__;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional487=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional487) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional488=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional488) {
                __result179__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result179__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result180__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result180__;
        __freed_obj__ = 0;
}

void method_block1_07varc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value430;
void* right_value431;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("07var.c", 1283), ((struct optional$2voidpbool*)(right_value431=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value430=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1283))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

