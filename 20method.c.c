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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2CVALUEpbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
};
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
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

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2CVALUEpbool* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self);
static struct CVALUE* optional$2CVALUEpbool_value(struct optional$2CVALUEpbool* self);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_20methodc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}

// body function







struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
char* __dec_obj1;
struct sCurrentNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 10))->sline=((struct sInfo*)come_null_check(info, "20method.c", 10))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname;
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 11))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = ((struct sCurrentNode*)come_null_check(self, "20method.c", 18))->sline;
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value1;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result9__ = __result_obj__ = ((char*)(right_value1=__builtin_string(((struct sCurrentNode*)come_null_check(self, "20method.c", 23))->sname)));
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}

char* sCurrentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
    __result11__ = __result_obj__ = ((char*)(right_value2=__builtin_string("sCurrentNode")));
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
char* class_name_0;
void* right_value4;
void* right_value5;
struct sClass* current_stack_1;
void* right_value6;
void* right_value7;
void* right_value8;
void* right_value9;
void* right_value50;
struct tuple2$2charphsTypeph* result_kind_30;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
void* right_value62;
struct tuple2$2charphsTypeph* return_value_35;
void* right_value63;
struct sVarTable* vtable_36;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_37;
char* it_40;
_Bool _for_condtionalA1;
char* key_43;
void* right_value73;
struct sVar* value_49;
void* right_value74;
struct sType* type2_50;
void* right_value75;
void* right_value76;
void* right_value77;
struct tuple2$2charphsTypeph* item_51;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value78;
struct sType* type3_52;
void* right_value79;
void* right_value80;
void* right_value81;
struct tuple2$2charphsTypeph* item2_55;
void* right_value82;
void* right_value83;
static int num_current_stack_104=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_105;
char* it_106;
_Bool _for_condtionalA6;
char* key_107;
void* right_value96;
struct sVar* value_108;
void* right_value97;
struct sType* type2_109;
void* right_value98;
void* right_value99;
struct tuple2$2charphsTypeph* item_110;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value100;
struct CVALUE* come_value_111;
void* right_value101;
char* __dec_obj33;
void* right_value102;
void* right_value103;
struct sType* __dec_obj34;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&class_name_0, 0, sizeof(char*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&current_stack_1, 0, sizeof(struct sClass*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&result_kind_30, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&return_value_35, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&vtable_36, 0, sizeof(struct sVarTable*));
memset(&o2_saved_37, 0, sizeof(struct map$2charphsVarph*));
memset(&it_40, 0, sizeof(char*));
memset(&key_43, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&value_49, 0, sizeof(struct sVar*));
memset(&right_value74, 0, sizeof(void*));
memset(&type2_50, 0, sizeof(struct sType*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&item_51, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value78, 0, sizeof(void*));
memset(&type3_52, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&item2_55, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&o2_saved_105, 0, sizeof(struct map$2charphsVarph*));
memset(&it_106, 0, sizeof(char*));
memset(&key_107, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&value_108, 0, sizeof(struct sVar*));
memset(&right_value97, 0, sizeof(void*));
memset(&type2_109, 0, sizeof(struct sType*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&item_110, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value100, 0, sizeof(void*));
memset(&come_value_111, 0, sizeof(struct CVALUE*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
    ((struct sInfo*)come_null_check(info, "20method.c", 38))->current_stack_num++;
    __freed_obj__ = 0;
    class_name_0=(char*)come_increment_ref_count(((char*)(right_value3=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 39))->current_stack_num))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = 0;
    current_stack_1=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value5=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value4=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40)))),class_name_0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value4;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value5;
    __freed_obj__ = 0;
    result_kind_30=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value50=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value9=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42)))),(char*)come_increment_ref_count(((char*)(right_value6=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value8=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value7=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42)))),"int",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value6;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value7;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value8;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value9;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value50;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_1, "20method.c", 43))->mFields, "20method.c", 43)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value57=tuple2$2charphsTypephp_clone(result_kind_30)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value57;
    __freed_obj__ = 0;
    return_value_35=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value62=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value61=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45)))),(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45)))),"void*",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value58;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value59;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value60;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value61;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value62;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_1, "20method.c", 46))->mFields, "20method.c", 46)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value63=tuple2$2charphsTypephp_clone(return_value_35)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value63;
    __freed_obj__ = 0;
    vtable_36=((struct sInfo*)come_null_check(info, "20method.c", 48))->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional8=vtable_36,    __freed_obj__ = 0, 
    _while_condtional8) {
        for(
        o2_saved_37=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_36, "20method.c", 87))->mVars)),it_40=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_37), "20method.c", 87))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_37), "20method.c", 87))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_40=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_37), "20method.c", 87))) ,        __freed_obj__ = 0, 
        0        ){
            key_43=it_40;
            __freed_obj__ = 0;
            come_clear_stackframe();
            value_49=optional$2sVarpbool_value((come_push_stackframe("20method.c", 53),((struct optional$2sVarpbool*)(right_value73=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_36, "20method.c", 53))->mVars,key_43)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value73;
            __freed_obj__ = 0;
            type2_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(((struct sVar*)come_null_check(value_49, "20method.c", 55))->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value74;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_50, "20method.c", 57))->mPointerNum++;
            __freed_obj__ = 0;
            item_51=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value77=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value76=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59)))),(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(((struct sVar*)come_null_check(value_49, "20method.c", 59))->mCValueName)))),(struct sType*)come_increment_ref_count(type2_50)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value75;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value76;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value77;
            __freed_obj__ = 0;
            if(_if_conditional115=((struct sVar*)come_null_check(value_49, "20method.c", 85))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                if(_if_conditional116=memcmp(((struct sVar*)come_null_check(value_49, "20method.c", 84))->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional116) {
                }
                else {
                    if(_if_conditional117=memcmp(((struct sVar*)come_null_check(value_49, "20method.c", 84))->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional117) {
                    }
                    else {
                        if(_if_conditional118=memcmp(((struct sVar*)come_null_check(value_49, "20method.c", 84))->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional118) {
                        }
                        else {
                            if(_if_conditional119=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_49, "20method.c", 84))->mType, "20method.c", 84))->mClass, "20method.c", 84))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_49, "20method.c", 84))->mType, "20method.c", 84))->mClass, "20method.c", 84))->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional119) {
                            }
                            else {
                                if(_if_conditional120=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type2_50, "20method.c", 84))->mArrayNum, "20method.c", 84)))==1,                                __freed_obj__ = 0, 
                                _if_conditional120) {
                                    type3_52=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(type2_50))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value78;
                                    __freed_obj__ = 0;
                                    list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type3_52, "20method.c", 76))->mArrayNum, "20method.c", 76)));
                                    __freed_obj__ = 0;
                                    ((struct sType*)come_null_check(type3_52, "20method.c", 77))->mPointerNum++;
                                    __freed_obj__ = 0;
                                    item2_55=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value81=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78)))),(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(((struct sVar*)come_null_check(value_49, "20method.c", 78))->mCValueName)))),(struct sType*)come_increment_ref_count(type3_52)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
                                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value79;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value80);
                                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value80;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value81);
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value81;
                                    __freed_obj__ = 0;
                                    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_1, "20method.c", 79))->mFields, "20method.c", 79)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value82=tuple2$2charphsTypephp_clone(item2_55)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value82);
                                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value82;
                                    __freed_obj__ = 0;
                                    if(type3_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_55 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_1, "20method.c", 82))->mFields, "20method.c", 82)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=tuple2$2charphsTypephp_clone(item_51)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value83;
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
            if(type2_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_50, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_51 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_37 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_36=((struct sVarTable*)come_null_check(vtable_36, "20method.c", 87))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    output_struct(current_stack_1,info);
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 92))->classes, "20method.c", 92)),(char*)come_increment_ref_count(class_name_0),(struct sClass*)come_increment_ref_count(current_stack_1));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    num_current_stack_104++;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_0,num_current_stack_104);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_104,class_name_0);
    __freed_obj__ = 0;
    vtable_36=((struct sInfo*)come_null_check(info, "20method.c", 99))->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional20=vtable_36,    __freed_obj__ = 0, 
    _while_condtional20) {
        for(
        o2_saved_105=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_36, "20method.c", 134))->mVars)),it_106=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_105), "20method.c", 134))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_105), "20method.c", 134))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it_106=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_105), "20method.c", 134))) ,        __freed_obj__ = 0, 
        0        ){
            key_107=it_106;
            __freed_obj__ = 0;
            come_clear_stackframe();
            value_108=optional$2sVarpbool_value((come_push_stackframe("20method.c", 104),((struct optional$2sVarpbool*)(right_value96=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_36, "20method.c", 104))->mVars,key_107)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value96;
            __freed_obj__ = 0;
            type2_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(((struct sVar*)come_null_check(value_108, "20method.c", 106))->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value97;
            __freed_obj__ = 0;
            item_110=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108)))),(char*)come_increment_ref_count(((struct sVar*)come_null_check(value_108, "20method.c", 108))->mCValueName),(struct sType*)come_increment_ref_count(type2_109)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value98);
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value98;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value99);
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value99;
            __freed_obj__ = 0;
            if(_if_conditional176=((struct sVar*)come_null_check(value_108, "20method.c", 132))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional176) {
                if(_if_conditional177=memcmp(((struct sVar*)come_null_check(value_108, "20method.c", 131))->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional177) {
                }
                else {
                    if(_if_conditional178=memcmp(((struct sVar*)come_null_check(value_108, "20method.c", 131))->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional178) {
                    }
                    else {
                        if(_if_conditional179=memcmp(((struct sVar*)come_null_check(value_108, "20method.c", 131))->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional179) {
                        }
                        else {
                            if(_if_conditional180=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_108, "20method.c", 131))->mType, "20method.c", 131))->mClass, "20method.c", 131))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_108, "20method.c", 131))->mType, "20method.c", 131))->mClass, "20method.c", 131))->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional180) {
                            }
                            else {
                                if(_if_conditional181=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_109, "20method.c", 130))->mClass, "20method.c", 130))->mName,"lambda"),                                __freed_obj__ = 0, 
                                _if_conditional181) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_104,((struct sVar*)come_null_check(value_108, "20method.c", 125))->mCValueName,((struct sVar*)come_null_check(value_108, "20method.c", 125))->mCValueName);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_104,((struct sVar*)come_null_check(value_108, "20method.c", 128))->mCValueName,((struct sVar*)come_null_check(value_108, "20method.c", 128))->mCValueName);
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
            if(type2_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_110 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_105 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_105, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_36=((struct sVarTable*)come_null_check(vtable_36, "20method.c", 134))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value100;
    __freed_obj__ = 0;
    __dec_obj33=((struct CVALUE*)come_null_check(come_value_111, "20method.c", 139))->c_value;
    ((struct CVALUE*)come_null_check(come_value_111, "20method.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("&__current_stack%d__",num_current_stack_104))));
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value101;
    __freed_obj__ = 0;
    __dec_obj34=((struct CVALUE*)come_null_check(come_value_111, "20method.c", 140))->type;
    ((struct CVALUE*)come_null_check(come_value_111, "20method.c", 140))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140)))),class_name_0,(_Bool)0,info))));
    if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value103;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_111, "20method.c", 141))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_111, "20method.c", 143))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 145))->stack, "20method.c", 145)),(struct CVALUE*)come_increment_ref_count(come_value_111));
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "20method.c", 147))->num_current_stack=num_current_stack_104;
    __freed_obj__ = 0;
    __result81__ = (_Bool)1;
    if(class_name_0 && !__freed_obj__) { class_name_0 = come_decrement_ref_count(class_name_0, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_30 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
    if(class_name_0 && !__freed_obj__) { class_name_0 = come_decrement_ref_count(class_name_0, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_30 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
_Bool _if_conditional3;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional3=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_2;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_2, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_3, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_2=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional1=it_2!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional1) {
                    prev_it_3=it_2;
                    __freed_obj__ = 0;
                    it_2=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_2, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_3 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional4=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional4) {
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional5=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional5) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional6=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional6) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional7) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional9) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional10) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional11) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional13) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional15) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional16) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional18) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional19) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional20) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional21) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional22) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional8=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional8) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_4;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_4, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_5, 0, sizeof(struct list_item$1sTypeph*));
                                                it_4=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional2=it_4!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional2) {
                                                    prev_it_5=it_4;
                                                    __freed_obj__ = 0;
                                                    it_4=((struct list_item$1sTypeph*)come_null_check(it_4, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_5 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional12=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional12) {
                                                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_6;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sNodeph*));
                                                it_6=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_6!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_7=it_6;
                                                    __freed_obj__ = 0;
                                                    it_6=((struct list_item$1sNodeph*)come_null_check(it_6, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional14=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional14) {
                                                            if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_8;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1charph*));
                                                it_8=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_8!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_9=it_8;
                                                    __freed_obj__ = 0;
                                                    it_8=((struct list_item$1charph*)come_null_check(it_8, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional17=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional17) {
                                                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj2;
void* right_value49;
struct sType* __dec_obj27;
struct tuple2$2charphsTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
        __dec_obj2=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value10=charp_clone(v1))));
        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        __dec_obj27=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_clone(v2))));
        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value49;
        __freed_obj__ = 0;
        __result34__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result34__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct sType* __result12__;
void* right_value11;
struct sType* result_10;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional30;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj6;
_Bool _if_conditional33;
void* right_value18;
char* __dec_obj7;
_Bool _if_conditional34;
void* right_value25;
struct list$1sTypeph* __dec_obj11;
_Bool _if_conditional38;
void* right_value33;
struct list$1sNodeph* __dec_obj15;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value34;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional53;
void* right_value41;
struct list$1charph* __dec_obj20;
_Bool _if_conditional57;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value45;
struct sNode* __dec_obj23;
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
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value46;
struct sNode* __dec_obj24;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value47;
char* __dec_obj25;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value48;
char* __dec_obj26;
struct sType* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
            if(_if_conditional24=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional24) {
                __result12__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result12__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_10=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
            if(_if_conditional25=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional25) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional26) {
                __dec_obj4=((struct sType*)come_null_check(result_10, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_10, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj6=((struct sType*)come_null_check(result_10, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_10, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj6) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value17;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional33) {
                __dec_obj7=((struct sType*)come_null_check(result_10, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_10, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value18;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional34) {
                __dec_obj11=((struct sType*)come_null_check(result_10, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_10, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj11) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional38) {
                __dec_obj15=((struct sType*)come_null_check(result_10, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_10, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj15) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value33;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional51=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional51) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional52) {
                __dec_obj16=((struct sType*)come_null_check(result_10, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_10, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value34;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                __dec_obj20=((struct sType*)come_null_check(result_10, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_10, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value41;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                __dec_obj22=((struct sType*)come_null_check(result_10, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_10, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj22) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional60=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                __dec_obj23=((struct sType*)come_null_check(result_10, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_10, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value45;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                __dec_obj24=((struct sType*)come_null_check(result_10, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_10, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value46;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                __dec_obj25=((struct sType*)come_null_check(result_10, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_10, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value47;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional92=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional93=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                ((struct sType*)come_null_check(result_10, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                __dec_obj26=((struct sType*)come_null_check(result_10, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_10, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value48;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result33__ = __result_obj__ = result_10;
            if(result_10 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result33__;
            __freed_obj__ = 0;
            if(result_10 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional28=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional28) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
struct list$1sTypeph* __result17__;
void* right_value19;
void* right_value20;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional5;
void* right_value24;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
                    if(_if_conditional35=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        __result17__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result17__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value19=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value20;
                    __freed_obj__ = 0;
                    it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_14!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value24;
                        __freed_obj__ = 0;
                        it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result20__ = __result_obj__ = result_13;
                    if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                    if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result18__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result18__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
void* right_value21;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj8;
_Bool _if_conditional37;
void* right_value22;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj9;
void* right_value23;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj10;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional36=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional37=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value22;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value23;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_17;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_17;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result19__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result19__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
struct list$1sNodeph* __result21__;
void* right_value26;
void* right_value27;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional6;
void* right_value32;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value32, 0, sizeof(void*));
                    if(_if_conditional39=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional39) {
                        __result21__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result21__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value26=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value26;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value27;
                    __freed_obj__ = 0;
                    it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_19!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value32;
                        __freed_obj__ = 0;
                        it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result26__ = __result_obj__ = result_18;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result22__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj12;
_Bool _if_conditional41;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj13;
void* right_value30;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj14;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional40=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_20;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_20;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional41=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional41) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value29;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_21;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_21;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value30;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_22;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_22;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result23__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result23__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
struct sNode* __result24__;
void* right_value31;
struct sNode* result_23;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional42=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional42) {
                                __result24__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result24__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value31;
                            __freed_obj__ = 0;
                            if(_if_conditional43=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional43) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional44=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional45=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional45) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional46=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional46) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional47=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional48=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional48) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional49=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional49) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional50=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                ((struct sNode*)come_null_check(result_23, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result25__ = __result_obj__ = result_23;
                            if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result25__;
                            __freed_obj__ = 0;
                            if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
struct list$1charph* __result27__;
void* right_value35;
void* right_value36;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional7;
void* right_value40;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
                    if(_if_conditional54=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional54) {
                        __result27__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value35=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value36;
                    __freed_obj__ = 0;
                    it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_25!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value40=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value40;
                        __freed_obj__ = 0;
                        it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result30__ = __result_obj__ = result_24;
                    if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                    if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result28__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
void* right_value37;
struct list_item$1charph* litem_26;
char* __dec_obj17;
_Bool _if_conditional56;
void* right_value38;
struct list_item$1charph* litem_27;
char* __dec_obj18;
void* right_value39;
struct list_item$1charph* litem_28;
char* __dec_obj19;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional55=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional55) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value37;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_26;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_26;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional56=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional56) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value38;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj18=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_27;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_27;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj19=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_28;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_28;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result29__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct tuple1$1sTypeph* __result31__;
void* right_value42;
struct tuple1$1sTypeph* result_29;
_Bool _if_conditional59;
void* right_value43;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value43, 0, sizeof(void*));
                    if(_if_conditional58=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        __result31__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result31__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_29=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = 0;
                    if(_if_conditional59=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional59) {
                        __dec_obj21=((struct tuple1$1sTypeph*)come_null_check(result_29, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_29, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value43;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result32__ = __result_obj__ = result_29;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
void* right_value51;
struct list_item$1tuple2$2charphsTypephph* litem_31;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional101;
void* right_value52;
struct list_item$1tuple2$2charphsTypephph* litem_32;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value53;
struct list_item$1tuple2$2charphsTypephph* litem_33;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional98=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional98) {
            litem_31=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value51=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_31, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_31, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj28=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_31, "./comelang2.h", 276))->item;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_31, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj28) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_31;
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_31;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional101=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional101) {
                litem_32=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value52=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_32, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_32, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj29=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_32, "./comelang2.h", 286))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_32, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_32;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_32;
                __freed_obj__ = 0;
            }
            else {
                litem_33=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value53=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_33, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_33, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj30=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_33, "./comelang2.h", 296))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_33, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_33;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_33;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result35__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result35__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional99=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional100=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional100) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct tuple2$2charphsTypeph* __result36__;
void* right_value54;
struct tuple2$2charphsTypeph* result_34;
_Bool _if_conditional103;
void* right_value55;
char* __dec_obj31;
_Bool _if_conditional104;
void* right_value56;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
        if(_if_conditional102=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional102) {
            __result36__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_34=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value54=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54;
        __freed_obj__ = 0;
        if(_if_conditional103=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional103) {
            __dec_obj31=((struct tuple2$2charphsTypeph*)come_null_check(result_34, "tuple2$2charphsTypephp_clone", 4))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_34, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value55;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional104=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional104) {
            __dec_obj32=((struct tuple2$2charphsTypeph*)come_null_check(result_34, "tuple2$2charphsTypephp_clone", 5))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_34, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
            if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result37__ = __result_obj__ = result_34;
        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result37__;
        __freed_obj__ = 0;
        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
char* result_38;
char* __result38__;
_Bool _if_conditional106;
char* __result39__;
char* result_39;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(char*));
memset(&result_39, 0, sizeof(char*));
            if(_if_conditional105=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                __freed_obj__ = 0;
                memset(&result_38,0,sizeof(char*));
                __freed_obj__ = 0;
                __result38__ = __result_obj__ = result_38;
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
            __freed_obj__ = 0;
            if(_if_conditional106=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,            __freed_obj__ = 0, 
            _if_conditional106) {
                __result39__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_39,0,sizeof(char*));
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = result_39;
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result41__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
char* result_41;
char* __result42__;
_Bool _if_conditional108;
char* __result43__;
char* result_42;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_41, 0, sizeof(char*));
memset(&result_42, 0, sizeof(char*));
            if(_if_conditional107=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional107) {
                __freed_obj__ = 0;
                memset(&result_41,0,sizeof(char*));
                __freed_obj__ = 0;
                __result42__ = __result_obj__ = result_41;
                __freed_obj__ = 0;
                return __result42__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
            __freed_obj__ = 0;
            if(_if_conditional108=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,            __freed_obj__ = 0, 
            _if_conditional108) {
                __result43__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_42,0,sizeof(char*));
            __freed_obj__ = 0;
            __result44__ = __result_obj__ = result_42;
            __freed_obj__ = 0;
            return __result44__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_44;
unsigned int hash_45;
unsigned int it_46;
_Bool _while_condtional9;
_Bool _if_conditional109;
void* right_value64;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional111;
void* right_value65;
void* right_value66;
struct optional$2sVarpbool* __result48__;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value67;
void* right_value68;
struct optional$2sVarpbool* __result49__;
void* right_value69;
void* right_value70;
struct optional$2sVarpbool* __result50__;
void* right_value71;
void* right_value72;
struct optional$2sVarpbool* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(struct sVar*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(unsigned int));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_44,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                hash_45=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_46=hash_45;
                __freed_obj__ = 0;
                while(_while_condtional9=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional109=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_46],                    __freed_obj__ = 0, 
                    _if_conditional109) {
                        if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value64=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_46], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64),
                        (right_value64 && right_value64 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value64, 
                        __freed_obj__ = 0, 
                        _if_conditional111) {
                            __result48__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value66=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value65=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_46],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value65;
                            __freed_obj__ = 0;
                            return __result48__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_46++;
                        __freed_obj__ = 0;
                        if(_if_conditional112=it_46>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional112) {
                            it_46=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional113=it_46==hash_45,                            __freed_obj__ = 0, 
                            _if_conditional113) {
                                __result49__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value68=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value67=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_44,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value67;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value68;
                                __freed_obj__ = 0;
                                return __result49__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result50__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value70=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value69=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_44,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value69;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value70;
                        __freed_obj__ = 0;
                        return __result50__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result51__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value72=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value71=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_44,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value71;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value72;
                __freed_obj__ = 0;
                return __result51__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
_Bool default_value_47;
_Bool __result45__;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_47, 0, sizeof(_Bool));
                            if(_if_conditional110=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional110) {
                                __freed_obj__ = 0;
                                memset(&default_value_47,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result45__ = default_value_47;
                                __freed_obj__ = 0;
                                return __result45__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result46__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result46__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result47__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result47__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
struct sVar* default_value_48;
struct sVar* __result52__;
struct sVar* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_48, 0, sizeof(struct sVar*));
                if(_if_conditional114=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional114) {
                    __freed_obj__ = 0;
                    memset(&default_value_48,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    __result52__ = __result_obj__ = default_value_48;
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
                }
                else {
                    __result53__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result53__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result54__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                    __freed_obj__ = 0;
                                    return __result54__;
                                    __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_53;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_54;
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sNodeph*));
                                        it_53=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional10=it_53!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional10) {
                                            prev_it_54=it_53;
                                            __freed_obj__ = 0;
                                            it_53=((struct list_item$1sNodeph*)come_null_check(it_53, "./comelang2.h", 479))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_54 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                        __freed_obj__ = 0;
                                        __result55__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result55__;
                                        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_56;
_Bool _for_condtionalA2;
_Bool _if_conditional121;
_Bool _if_conditional122;
int i_57;
_Bool _for_condtionalA3;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
            for(
            i_56=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            i_56<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            __freed_obj__ = 0, 
            _for_condtionalA2;            i_56++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional121=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_56],                __freed_obj__ = 0, 
                _if_conditional121) {
                    if(_if_conditional122=1,                    __freed_obj__ = 0, 
                    _if_conditional122) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_56] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_56], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->items);
            __freed_obj__ = 0;
            for(
            i_57=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            i_57<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            __freed_obj__ = 0, 
            _for_condtionalA3;            i_57++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional127=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_57],                __freed_obj__ = 0, 
                _if_conditional127) {
                    if(_if_conditional128=1,                    __freed_obj__ = 0, 
                    _if_conditional128) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_57] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_57] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_57], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->keys);
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional123=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional123) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional124=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional124) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional125=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional125) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional126=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional126) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_58;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charp*));
                it_58=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional11=it_58!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional11) {
                    prev_it_59=it_58;
                    __freed_obj__ = 0;
                    it_58=((struct list_item$1charp*)come_null_check(it_58, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
unsigned int hash_77;
unsigned int it_78;
_Bool _while_condtional14;
_Bool _if_conditional141;
void* right_value90;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool same_key_exist_95;
char* it2_98;
_Bool _for_condtionalA5;
void* right_value92;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct map$2charphsClassph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_77, 0, sizeof(unsigned int));
memset(&it_78, 0, sizeof(unsigned int));
memset(&right_value90, 0, sizeof(void*));
memset(&same_key_exist_95, 0, sizeof(_Bool));
memset(&it2_98, 0, sizeof(char*));
memset(&right_value92, 0, sizeof(void*));
        if(_if_conditional129=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional129) {
            map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_77=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_78=hash_77;
        __freed_obj__ = 0;
        while(_while_condtional14=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional14) {
            if(_if_conditional141=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_78],            __freed_obj__ = 0, 
            _if_conditional141) {
                if(_if_conditional142=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value90=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_78], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90),
                (right_value90 && right_value90 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value90, 
                __freed_obj__ = 0, 
                _if_conditional142) {
                    if(_if_conditional143=1,                    __freed_obj__ = 0, 
                    _if_conditional143) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_78]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_78] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_78] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_78], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_78]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_78]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_78]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional163=1,                    __freed_obj__ = 0, 
                    _if_conditional163) {
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_78] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_78], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_78]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_78]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_78++;
                __freed_obj__ = 0;
                if(_if_conditional164=it_78>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional164) {
                    it_78=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional165=it_78==hash_77,                    __freed_obj__ = 0, 
                    _if_conditional165) {
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
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_78]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional166=1,                __freed_obj__ = 0, 
                _if_conditional166) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_78]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_78]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional167=1,                __freed_obj__ = 0, 
                _if_conditional167) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_78]=(struct sClass*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_78]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_95=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_98=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA5;        it2_98=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional172=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value92=string_equals(((char*)come_null_check(it2_98, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92),
            (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value92, 
            __freed_obj__ = 0, 
            _if_conditional172) {
                same_key_exist_95=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional173=!same_key_exist_95,        __freed_obj__ = 0, 
        _if_conditional173) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result79__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_60;
void* right_value84;
char** keys_61;
void* right_value85;
struct sClass** items_62;
void* right_value86;
_Bool* item_existance_63;
int len_64;
char* it_67;
_Bool _for_condtionalA4;
struct sClass* default_value_70;
void* right_value88;
struct sClass* it2_73;
unsigned int hash_74;
int n_75;
_Bool _while_condtional13;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* default_value_76;
void* right_value89;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_60, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&keys_61, 0, sizeof(char**));
memset(&right_value85, 0, sizeof(void*));
memset(&items_62, 0, sizeof(struct sClass**));
memset(&right_value86, 0, sizeof(void*));
memset(&item_existance_63, 0, sizeof(_Bool*));
memset(&len_64, 0, sizeof(int));
memset(&it_67, 0, sizeof(char*));
memset(&default_value_70, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&it2_73, 0, sizeof(struct sClass*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&n_75, 0, sizeof(int));
memset(&default_value_76, 0, sizeof(struct sClass*));
memset(&right_value89, 0, sizeof(void*));
                size_60=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_61=(char**)come_increment_ref_count(((char**)(right_value84=(char**)come_calloc(1, sizeof(char*)*(1*(size_60)), "./comelang2.h", 1370))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value84;
                __freed_obj__ = 0;
                items_62=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value85=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_60)), "./comelang2.h", 1371))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value85;
                __freed_obj__ = 0;
                item_existance_63=(_Bool*)come_increment_ref_count(((_Bool*)(right_value86=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_60)), "./comelang2.h", 1372))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value86;
                __freed_obj__ = 0;
                len_64=0;
                __freed_obj__ = 0;
                for(
                it_67=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA4=                !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA4;                it_67=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_70,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    it2_73=((struct sClass*)(right_value88=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_67,default_value_70)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value88;
                    __freed_obj__ = 0;
                    hash_74=string_get_hash_key(((char*)come_null_check(it_67, "./comelang2.h", 1380)))%size_60;
                    __freed_obj__ = 0;
                    n_75=hash_74;
                    __freed_obj__ = 0;
                    while(_while_condtional13=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        if(_if_conditional138=item_existance_63[n_75],                        __freed_obj__ = 0, 
                        _if_conditional138) {
                            n_75++;
                            __freed_obj__ = 0;
                            if(_if_conditional139=n_75>=size_60,                            __freed_obj__ = 0, 
                            _if_conditional139) {
                                n_75=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional140=n_75==hash_74,                                __freed_obj__ = 0, 
                                _if_conditional140) {
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
                            item_existance_63[n_75]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_61[n_75]=it_67;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_62[n_75]=((struct sClass*)(right_value89=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_67,default_value_76)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value89;
                            __freed_obj__ = 0;
                            len_64++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_61;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_62;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_63;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_60;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_64;
                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
char* result_65;
char* __result56__;
_Bool _if_conditional131;
char* __result57__;
char* result_66;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                    if(_if_conditional130=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __freed_obj__ = 0;
                        memset(&result_65,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = result_65;
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional131=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional131) {
                        __result57__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_66,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = result_66;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result59__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
char* result_68;
char* __result60__;
_Bool _if_conditional133;
char* __result61__;
char* result_69;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                    if(_if_conditional132=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        __freed_obj__ = 0;
                        memset(&result_68,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result60__ = __result_obj__ = result_68;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional133=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_69,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result62__ = __result_obj__ = result_69;
                    __freed_obj__ = 0;
                    return __result62__;
                    __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional12;
_Bool _if_conditional134;
void* right_value87;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional135;
struct sClass* __result63__;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct sClass* __result64__;
struct sClass* __result65__;
struct sClass* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
memset(&right_value87, 0, sizeof(void*));
                        hash_71=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_72=hash_71;
                        __freed_obj__ = 0;
                        while(_while_condtional12=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional12) {
                            if(_if_conditional134=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_72],                            __freed_obj__ = 0, 
                            _if_conditional134) {
                                if(_if_conditional135=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value87=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_72], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87),
                                (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value87, 
                                __freed_obj__ = 0, 
                                _if_conditional135) {
                                    __result63__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_72];
                                    __freed_obj__ = 0;
                                    return __result63__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_72++;
                                __freed_obj__ = 0;
                                if(_if_conditional136=it_72>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional136) {
                                    it_72=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional137=it_72==hash_71,                                    __freed_obj__ = 0, 
                                    _if_conditional137) {
                                        __result64__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result64__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result65__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result65__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result66__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result66__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_79;
struct list_item$1charp* it_80;
_Bool _while_condtional15;
void* right_value91;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional144;
struct list$1charp* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_79, 0, sizeof(int));
memset(&it_80, 0, sizeof(struct list_item$1charp*));
memset(&right_value91, 0, sizeof(void*));
                            it2_79=0;
                            __freed_obj__ = 0;
                            it_80=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional15=it_80!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional15) {
                                if(_if_conditional144=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value91=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_80, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91),
                                (right_value91 && right_value91 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value91, 
                                __freed_obj__ = 0, 
                                _if_conditional144) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_79,it2_79+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_79++;
                                __freed_obj__ = 0;
                                it_80=((struct list_item$1charp*)come_null_check(it_80, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result70__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result70__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
int tmp_81;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list$1charp* __result67__;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list_item$1charp* it_84;
int i_85;
_Bool _while_condtional17;
_Bool _if_conditional153;
struct list_item$1charp* prev_it_86;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_87;
int i_88;
_Bool _while_condtional18;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* prev_it_89;
struct list_item$1charp* it_90;
struct list_item$1charp* head_prev_it_91;
struct list_item$1charp* tail_it_92;
int i_93;
_Bool _while_condtional19;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_94;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list$1charp* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_81, 0, sizeof(int));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&i_85, 0, sizeof(int));
memset(&prev_it_86, 0, sizeof(struct list_item$1charp*));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
memset(&i_88, 0, sizeof(int));
memset(&prev_it_89, 0, sizeof(struct list_item$1charp*));
memset(&it_90, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_91, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_92, 0, sizeof(struct list_item$1charp*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional145=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional145) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional146=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional146) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional147=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional147) {
                                            tmp_81=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_81;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional148=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional148) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional149=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            __result67__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result67__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional152=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional152) {
                                                it_84=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_85=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_84!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    if(_if_conditional153=i_85<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional153) {
                                                        prev_it_86=it_84;
                                                        __freed_obj__ = 0;
                                                        it_84=((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_85++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_86 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional154=i_85==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional154) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_84;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_84=((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_85++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional155=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional155) {
                                                    it_87=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_88=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional18=it_87!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional18) {
                                                        if(_if_conditional156=i_88==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional156) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_87, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional157=i_88>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional157) {
                                                            prev_it_89=it_87;
                                                            __freed_obj__ = 0;
                                                            it_87=((struct list_item$1charp*)come_null_check(it_87, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_88++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_89 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_87=((struct list_item$1charp*)come_null_check(it_87, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_88++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_90=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_91=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_92=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_93=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_90!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional158=i_93==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional158) {
                                                            head_prev_it_91=((struct list_item$1charp*)come_null_check(it_90, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional159=i_93==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional159) {
                                                            tail_it_92=it_90;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional160=i_93>=head&&i_93<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional160) {
                                                            prev_it_94=it_90;
                                                            __freed_obj__ = 0;
                                                            it_90=((struct list_item$1charp*)come_null_check(it_90, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_93++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_94 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_90=((struct list_item$1charp*)come_null_check(it_90, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_93++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional161=head_prev_it_91!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional161) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_91, "./comelang2.h", 620))->next=tail_it_92;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional162=tail_it_92!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional162) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_92, "./comelang2.h", 623))->prev=head_prev_it_91;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result69__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result69__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_82;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_83;
struct list$1charp* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_83, 0, sizeof(struct list_item$1charp*));
                                                it_82=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_82!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    prev_it_83=it_82;
                                                    __freed_obj__ = 0;
                                                    it_82=((struct list_item$1charp*)come_null_check(it_82, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_83 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result68__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result68__;
                                                __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
char* result_96;
char* __result71__;
_Bool _if_conditional169;
char* __result72__;
char* result_97;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
            if(_if_conditional168=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional168) {
                __freed_obj__ = 0;
                memset(&result_96,0,sizeof(char*));
                __freed_obj__ = 0;
                __result71__ = __result_obj__ = result_96;
                __freed_obj__ = 0;
                return __result71__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional169=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional169) {
                __result72__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_97,0,sizeof(char*));
            __freed_obj__ = 0;
            __result73__ = __result_obj__ = result_97;
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result74__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result74__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
char* result_99;
char* __result75__;
_Bool _if_conditional171;
char* __result76__;
char* result_100;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
            if(_if_conditional170=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional170) {
                __freed_obj__ = 0;
                memset(&result_99,0,sizeof(char*));
                __freed_obj__ = 0;
                __result75__ = __result_obj__ = result_99;
                __freed_obj__ = 0;
                return __result75__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional171=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional171) {
                __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_100,0,sizeof(char*));
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = result_100;
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value93;
struct list_item$1charp* litem_101;
_Bool _if_conditional175;
void* right_value94;
struct list_item$1charp* litem_102;
void* right_value95;
struct list_item$1charp* litem_103;
struct list$1charp* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1charp*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1charp*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional174=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional174) {
                    litem_101=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value93=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_101, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_101, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_101, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_101;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_101;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional175=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        litem_102=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value94;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_102;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_102;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_103=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value95;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_103;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_103;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result78__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional182=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional182) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional183=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional183) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
void* right_value104;
struct list_item$1CVALUEph* litem_112;
struct CVALUE* __dec_obj35;
_Bool _if_conditional186;
void* right_value105;
struct list_item$1CVALUEph* litem_113;
struct CVALUE* __dec_obj36;
void* right_value106;
struct list_item$1CVALUEph* litem_114;
struct CVALUE* __dec_obj37;
struct list$1CVALUEph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value106, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional184=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional184) {
            litem_112=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_112, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_112, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj35=((struct list_item$1CVALUEph*)come_null_check(litem_112, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_112, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj35) { come_call_finalizer(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_112;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_112;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional186=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional186) {
                litem_113=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_113, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_113, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj36=((struct list_item$1CVALUEph*)come_null_check(litem_113, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_113, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj36) { come_call_finalizer(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_113;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_113;
                __freed_obj__ = 0;
            }
            else {
                litem_114=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value106=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_114, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_114, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj37=((struct list_item$1CVALUEph*)come_null_check(litem_114, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_114, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj37) { come_call_finalizer(CVALUE_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_114;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_114;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result80__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result80__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional185=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional185) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
struct sNode* __dec_obj38;
void* right_value108;
char* __dec_obj39;
void* right_value118;
struct list$1tuple2$2charphsNodephph* __dec_obj45;
void* right_value119;
struct buffer* __dec_obj46;
void* right_value120;
char* __dec_obj47;
struct sMethodCallNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    __dec_obj38=((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(obj))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    __dec_obj39=((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(fun_name))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    __dec_obj45=((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value118=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj45) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value118;
    __freed_obj__ = 0;
    __dec_obj46=((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_clone(method_block))));
    if(__dec_obj46) { come_call_finalizer(buffer_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value119;
    __freed_obj__ = 0;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 168))->sline=((struct sInfo*)come_null_check(info, "20method.c", 168))->sline;
    __freed_obj__ = 0;
    __dec_obj47=((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 169))->sname))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value120;
    __freed_obj__ = 0;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 170))->method_block_sline=method_block_sline;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
struct list$1tuple2$2charphsNodephph* __result82__;
void* right_value109;
void* right_value110;
struct list$1tuple2$2charphsNodephph* result_117;
struct list_item$1tuple2$2charphsNodephph* it_118;
_Bool _while_condtional22;
void* right_value117;
struct list$1tuple2$2charphsNodephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value117, 0, sizeof(void*));
        if(_if_conditional187=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            __result82__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result82__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_117=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value110=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value109=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value110;
        __freed_obj__ = 0;
        it_118=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional22=it_118!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional22) {
            list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_117, "./comelang2.h", 192)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value117=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_118, "./comelang2.h", 192))->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value117;
            __freed_obj__ = 0;
            it_118=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_118, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result87__ = __result_obj__ = result_117;
        if(result_117 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_117, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result87__;
        __freed_obj__ = 0;
        if(result_117 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_115;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_116;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_115, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_115=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional21=it_115!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    prev_it_116=it_115;
                    __freed_obj__ = 0;
                    it_115=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_115, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_116 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional188=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional188) {
                            if(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional189=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional189) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional190=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional190) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
void* right_value111;
struct list_item$1tuple2$2charphsNodephph* litem_119;
struct tuple2$2charphsNodeph* __dec_obj40;
_Bool _if_conditional194;
void* right_value112;
struct list_item$1tuple2$2charphsNodephph* litem_120;
struct tuple2$2charphsNodeph* __dec_obj41;
void* right_value113;
struct list_item$1tuple2$2charphsNodephph* litem_121;
struct tuple2$2charphsNodeph* __dec_obj42;
struct list$1tuple2$2charphsNodephph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional191=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional191) {
                    litem_119=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value111=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 202))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_119, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_119, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj40=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_119, "./comelang2.h", 206))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_119, "./comelang2.h", 206))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj40) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_119;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_119;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional194=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        litem_120=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value112=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value112;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_120, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_120, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj41=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_120, "./comelang2.h", 216))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_120, "./comelang2.h", 216))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_120;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_120;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_121=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value113=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value113;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_121, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_121, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj42=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_121, "./comelang2.h", 226))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_121, "./comelang2.h", 226))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj42) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_121;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_121;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result84__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional192=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional193) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
struct tuple2$2charphsNodeph* __result85__;
void* right_value114;
struct tuple2$2charphsNodeph* result_122;
_Bool _if_conditional196;
void* right_value115;
char* __dec_obj43;
_Bool _if_conditional197;
void* right_value116;
struct sNode* __dec_obj44;
struct tuple2$2charphsNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
                if(_if_conditional195=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional195) {
                    __result85__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result85__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_122=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value114=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                if(_if_conditional196=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional196) {
                    __dec_obj43=((struct tuple2$2charphsNodeph*)come_null_check(result_122, "tuple2$2charphsNodephp_clone", 4))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_122, "tuple2$2charphsNodephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1))));
                    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional197=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 6))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional197) {
                    __dec_obj44=((struct tuple2$2charphsNodeph*)come_null_check(result_122, "tuple2$2charphsNodephp_clone", 5))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_122, "tuple2$2charphsNodephp_clone", 5))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result86__ = __result_obj__ = result_122;
                if(result_122 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result86__;
                __freed_obj__ = 0;
                if(result_122 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = ((struct sMethodCallNode*)come_null_check(self, "20method.c", 177))->sline;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    __result90__ = __result_obj__ = ((char*)(right_value121=__builtin_string(((struct sMethodCallNode*)come_null_check(self, "20method.c", 182))->sname)));
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value122;
char* none_generics_name_123;
void* right_value123;
char* fun_name2_124;
void* right_value124;
char* fun_name3_125;
void* right_value126;
struct sGenericsFun* generics_fun_128;
_Bool _if_conditional216;
void* right_value127;
_Bool _if_conditional217;
void* right_value128;
char* __result95__;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&none_generics_name_123, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&fun_name2_124, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&fun_name3_125, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&generics_fun_128, 0, sizeof(struct sGenericsFun*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    none_generics_name_123=(char*)come_increment_ref_count(((char*)(right_value122=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "20method.c", 191))->mClass, "20method.c", 191))->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    fun_name2_124=(char*)come_increment_ref_count(((char*)(right_value123=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    fun_name3_125=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s_%s",none_generics_name_123,fun_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = 0;
    generics_fun_128=((struct sGenericsFun*)(right_value126=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 195))->generics_funcs, "20method.c", 195)),fun_name3_125,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    if(_if_conditional216=generics_fun_128,    __freed_obj__ = 0, 
    _if_conditional216) {
        if(_if_conditional217=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(fun_name2_124)))),generics_fun_128,type,info),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127),
        (right_value127 && right_value127 != __result_obj__ && !__freed_obj__) ? right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value127, 
        __freed_obj__ = 0, 
        _if_conditional217) {
            err_msg(info,"%s not found",fun_name3_125);
            __freed_obj__ = 0;
            __result95__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
            if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
            if(none_generics_name_123 && !__freed_obj__) { none_generics_name_123 = come_decrement_ref_count(none_generics_name_123, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name2_124 && !__freed_obj__) { fun_name2_124 = come_decrement_ref_count(fun_name2_124, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name3_125 && !__freed_obj__) { fun_name3_125 = come_decrement_ref_count(fun_name3_125, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result95__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result96__ = __result_obj__ = fun_name2_124;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_123 && !__freed_obj__) { none_generics_name_123 = come_decrement_ref_count(none_generics_name_123, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_124 && !__freed_obj__) { fun_name2_124 = come_decrement_ref_count(fun_name2_124, (void*)0, (void*)0, 0, 1, 0); }
    if(fun_name3_125 && !__freed_obj__) { fun_name3_125 = come_decrement_ref_count(fun_name3_125, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_123 && !__freed_obj__) { none_generics_name_123 = come_decrement_ref_count(none_generics_name_123, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_124 && !__freed_obj__) { fun_name2_124 = come_decrement_ref_count(fun_name2_124, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name3_125 && !__freed_obj__) { fun_name3_125 = come_decrement_ref_count(fun_name3_125, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional23;
_Bool _if_conditional203;
void* right_value125;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional204;
struct sGenericsFun* __result91__;
_Bool _if_conditional205;
_Bool _if_conditional206;
struct sGenericsFun* __result92__;
struct sGenericsFun* __result93__;
struct sGenericsFun* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
memset(&right_value125, 0, sizeof(void*));
        hash_126=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
        __freed_obj__ = 0;
        it_127=hash_126;
        __freed_obj__ = 0;
        while(_while_condtional23=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional23) {
            if(_if_conditional203=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_127],            __freed_obj__ = 0, 
            _if_conditional203) {
                if(_if_conditional204=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value125=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_127], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125),
                (right_value125 && right_value125 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value125, 
                __freed_obj__ = 0, 
                _if_conditional204) {
                    __result91__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_127];
                    __freed_obj__ = 0;
                    return __result91__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_127++;
                __freed_obj__ = 0;
                if(_if_conditional205=it_127>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                __freed_obj__ = 0, 
                _if_conditional205) {
                    it_127=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional206=it_127==hash_126,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result92__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result92__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result93__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result94__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional207=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional207) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional208=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional208) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional209=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional209) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional210=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional210) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional211=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional211) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional212=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional212) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional213=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional213) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional214=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional214) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional215=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional215) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
_Bool __result97__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional218=((struct sMethodCallNode*)come_null_check(self, "20method.c", 215))->method_block,    __freed_obj__ = 0, 
    _if_conditional218) {
        __result97__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
    }
    else {
        __result98__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* sMethodCallNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sMethodCallNode")));
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* fun_name_129;
struct list$1tuple2$2charphsNodephph* params_130;
struct sNode* obj_131;
struct buffer* method_block_132;
int method_block_sline_133;
_Bool _if_conditional219;
_Bool __result100__;
void* right_value130;
struct CVALUE* obj_value_134;
void* right_value131;
struct sType* obj_type_135;
struct sClass* klass_136;
_Bool calling_dynamic_method_137;
struct sType* lambda_type_138;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* it_142;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_145;
struct sType* field_type_146;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value132;
struct sType* result_type_147;
void* right_value133;
void* right_value134;
struct list$1CVALUEph* come_params_150;
int i_151;
struct list$1tuple2$2charphsNodephph* o2_saved_152;
struct tuple2$2charphsNodeph* it_155;
_Bool _for_condtionalA8;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_158;
struct sNode* node_159;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool __result116__;
void* right_value135;
struct CVALUE* come_value_160;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value143;
void* right_value144;
struct optional$2sTypephbool* __exception_result_var_a6;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
char* __dec_obj49;
_Bool _if_conditional239;
void* right_value145;
char* __dec_obj50;
_Bool _if_conditional240;
void* right_value146;
char* __dec_obj51;
void* right_value147;
char* __dec_obj52;
_Bool _if_conditional241;
void* right_value148;
char* __dec_obj53;
void* right_value149;
void* right_value150;
struct buffer* buf_165;
void* right_value151;
int j_166;
struct list$1CVALUEph* o2_saved_167;
struct CVALUE* it_170;
_Bool _for_condtionalA9;
_Bool _if_conditional246;
void* right_value152;
char* __dec_obj54;
_Bool _if_conditional247;
void* right_value153;
struct CVALUE* come_value2_173;
void* right_value154;
char* __dec_obj55;
void* right_value155;
struct sType* result_type2_174;
_Bool _if_conditional248;
void* right_value156;
void* right_value157;
char* __dec_obj56;
void* right_value158;
struct sType* __dec_obj57;
void* right_value159;
void* right_value160;
void* right_value161;
char* generics_fun_name_175;
struct sFun* fun_176;
int i_177;
_Bool _for_condtionalA10;
void* right_value162;
char* new_fun_name_178;
void* right_value172;
_Bool _if_conditional254;
void* right_value173;
char* __dec_obj58;
_Bool _if_conditional255;
void* right_value175;
_Bool _if_conditional275;
void* right_value176;
void* right_value177;
char* __dec_obj59;
void* right_value178;
_Bool _if_conditional276;
_Bool __result141__;
void* right_value179;
struct sType* result_type_185;
void* right_value180;
struct sType* result_type2_186;
void* right_value181;
void* right_value182;
struct list$1sTypeph* param_types_187;
struct list$1sTypeph* o2_saved_188;
struct sType* it_191;
_Bool _for_condtionalA11;
_Bool _if_conditional281;
void* right_value186;
struct sType* it2_197;
void* right_value187;
void* right_value188;
void* right_value189;
struct list$1CVALUEph* come_params_198;
void* right_value190;
void* right_value196;
struct map$2charphCVALUEph* label_params_202;
int i_203;
struct list$1tuple2$2charphsNodephph* o2_saved_204;
struct tuple2$2charphsNodeph* it_205;
_Bool _for_condtionalA15;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_206;
struct sNode* node_207;
_Bool _if_conditional288;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
struct optional$2sTypephbool* __exception_result_var_a8;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
char* __dec_obj64;
_Bool _if_conditional292;
void* right_value202;
char* __dec_obj65;
_Bool _if_conditional293;
void* right_value203;
char* __dec_obj66;
void* right_value204;
char* __dec_obj67;
_Bool _if_conditional294;
void* right_value205;
char* __dec_obj68;
void* right_value206;
struct optional$2sTypephbool* __exception_result_var_a9;
_Bool _if_conditional295;
void* right_value211;
_Bool _if_conditional300;
_Bool __result157__;
void* right_value212;
struct CVALUE* come_value_212;
_Bool _if_conditional301;
int n_213;
struct list$1charph* o2_saved_214;
char* it_217;
_Bool _for_condtionalA16;
_Bool _if_conditional306;
void* right_value213;
struct optional$2sTypephbool* __exception_result_var_a10;
_Bool _if_conditional307;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
struct optional$2sTypephbool* __exception_result_var_a11;
void* right_value219;
struct optional$2sTypephbool* __exception_result_var_a12;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
char* __dec_obj70;
_Bool _if_conditional311;
void* right_value220;
char* __dec_obj71;
_Bool _if_conditional312;
void* right_value221;
char* __dec_obj72;
void* right_value222;
char* __dec_obj73;
_Bool _if_conditional313;
void* right_value223;
char* __dec_obj74;
void* right_value224;
struct optional$2sTypephbool* __exception_result_var_a13;
_Bool _if_conditional314;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
struct optional$2sTypephbool* __exception_result_var_a14;
void* right_value230;
struct optional$2sTypephbool* __exception_result_var_a15;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
char* __dec_obj75;
_Bool _if_conditional318;
void* right_value231;
char* __dec_obj76;
_Bool _if_conditional319;
void* right_value232;
char* __dec_obj77;
void* right_value233;
char* __dec_obj78;
_Bool _if_conditional320;
void* right_value234;
char* __dec_obj79;
_Bool _if_conditional321;
void* right_value243;
_Bool _if_conditional344;
_Bool _for_condtionalA19;
void* right_value244;
void* right_value245;
char* default_param_241;
void* right_value246;
char* param_name_242;
void* right_value256;
struct CVALUE* come_value_247;
_Bool _if_conditional350;
struct buffer* source_248;
char* p_249;
char* head_250;
int sline_251;
void* right_value257;
struct buffer* __dec_obj80;
void* right_value258;
struct sNode* node_252;
_Bool _if_conditional351;
_Bool __result186__;
struct buffer* __dec_obj81;
void* right_value259;
struct CVALUE* come_value_253;
void* right_value260;
struct optional$2sTypephbool* __exception_result_var_a19;
_Bool _if_conditional352;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
struct optional$2sTypephbool* __exception_result_var_a20;
void* right_value266;
struct optional$2sTypephbool* __exception_result_var_a21;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
char* __dec_obj82;
_Bool _if_conditional356;
void* right_value267;
char* __dec_obj83;
_Bool _if_conditional357;
void* right_value268;
char* __dec_obj84;
void* right_value269;
char* __dec_obj85;
_Bool _if_conditional358;
void* right_value270;
char* __dec_obj86;
_Bool _if_conditional359;
_Bool __result187__;
_Bool _if_conditional360;
_Bool _for_condtionalA20;
void* right_value271;
char* param_name_254;
void* right_value272;
struct CVALUE* come_value_255;
_Bool _if_conditional361;
void* right_value276;
_Bool _if_conditional369;
void* right_value277;
void* right_value278;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value281;
struct sNode* current_stack_frame_node_260;
_Bool _if_conditional374;
_Bool __result196__;
void* right_value282;
struct CVALUE* come_value_261;
void* right_value283;
void* right_value284;
struct buffer* method_block2_262;
void* right_value285;
void* right_value286;
struct sType* method_block_type_263;
void* right_value287;
char* class_name_264;
void* right_value288;
void* right_value298;
struct sClass* current_stack_frame_struct_269;
void* right_value299;
_Bool _if_conditional380;
_Bool __result204__;
void* right_value300;
struct sType* result_type_270;
struct list$1sTypeph* param_types_271;
struct list$1charph* param_names_272;
void* right_value301;
void* right_value302;
struct buffer* all_alhabet_sname_273;
char* p_274;
_Bool _while_condtional35;
_Bool _if_conditional381;
void* right_value303;
void* right_value304;
void* right_value305;
int i_275;
struct list$1sTypeph* o2_saved_276;
struct sType* it_277;
_Bool _for_condtionalA21;
struct sType* param_type_278;
_Bool _if_conditional383;
void* right_value306;
char* param_name_279;
void* right_value307;
void* right_value308;
_Bool _if_conditional384;
void* right_value309;
char* param_name_280;
void* right_value310;
void* right_value311;
void* right_value312;
char* param_name_281;
void* right_value313;
void* right_value314;
_Bool _if_conditional385;
void* right_value315;
struct buffer* source3_282;
char* p_283;
char* head_284;
int sline_285;
struct buffer* __dec_obj91;
void* right_value316;
struct sNode* node_286;
_Bool _if_conditional386;
_Bool __result206__;
void* right_value317;
void* right_value318;
char* method_block_name_287;
void* right_value319;
struct CVALUE* come_value2_288;
void* right_value320;
struct sFun* fun2_289;
_Bool _if_conditional387;
_Bool __result207__;
struct sType* method_block_type2_290;
void* right_value321;
char* __dec_obj92;
void* right_value322;
struct sType* __dec_obj93;
struct buffer* __dec_obj94;
void* right_value323;
void* right_value324;
struct buffer* buf_291;
int j_292;
struct list$1CVALUEph* o2_saved_293;
struct CVALUE* it_294;
_Bool _for_condtionalA22;
_Bool _if_conditional388;
void* right_value325;
struct CVALUE* come_value2_295;
void* right_value326;
char* __dec_obj95;
void* right_value327;
struct sType* __dec_obj96;
_Bool _if_conditional389;
void* right_value328;
char* __dec_obj97;
_Bool _if_conditional390;
void* right_value329;
char* __dec_obj98;
_Bool _if_conditional391;
void* right_value330;
char* var_name_296;
void* right_value331;
struct sType* result_type_297;
void* right_value332;
struct sType* result_type2_298;
struct sType* result_type3_299;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value333;
void* right_value334;
void* right_value335;
void* right_value336;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
_Bool _if_conditional395;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_name_129, 0, sizeof(char*));
memset(&params_130, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_131, 0, sizeof(struct sNode*));
memset(&method_block_132, 0, sizeof(struct buffer*));
memset(&method_block_sline_133, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&obj_value_134, 0, sizeof(struct CVALUE*));
memset(&right_value131, 0, sizeof(void*));
memset(&obj_type_135, 0, sizeof(struct sType*));
memset(&klass_136, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_137, 0, sizeof(_Bool));
memset(&lambda_type_138, 0, sizeof(struct sType*));
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_142, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type_146, 0, sizeof(struct sType*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type_146, 0, sizeof(struct sType*));
memset(&right_value132, 0, sizeof(void*));
memset(&result_type_147, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&come_params_150, 0, sizeof(struct list$1CVALUEph*));
memset(&i_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_155, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_158, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&label_158, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&right_value135, 0, sizeof(void*));
memset(&come_value_160, 0, sizeof(struct CVALUE*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&buf_165, 0, sizeof(struct buffer*));
memset(&right_value151, 0, sizeof(void*));
memset(&j_166, 0, sizeof(int));
memset(&o2_saved_167, 0, sizeof(struct list$1CVALUEph*));
memset(&it_170, 0, sizeof(struct CVALUE*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&come_value2_173, 0, sizeof(struct CVALUE*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&result_type2_174, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&generics_fun_name_175, 0, sizeof(char*));
memset(&fun_176, 0, sizeof(struct sFun*));
memset(&i_177, 0, sizeof(int));
memset(&right_value162, 0, sizeof(void*));
memset(&new_fun_name_178, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&result_type_185, 0, sizeof(struct sType*));
memset(&right_value180, 0, sizeof(void*));
memset(&result_type2_186, 0, sizeof(struct sType*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&param_types_187, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_188, 0, sizeof(struct list$1sTypeph*));
memset(&it_191, 0, sizeof(struct sType*));
memset(&right_value186, 0, sizeof(void*));
memset(&it2_197, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&come_params_198, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&label_params_202, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_205, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_206, 0, sizeof(char*));
memset(&node_207, 0, sizeof(struct sNode*));
memset(&label_206, 0, sizeof(char*));
memset(&node_207, 0, sizeof(struct sNode*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_212, 0, sizeof(struct CVALUE*));
memset(&n_213, 0, sizeof(int));
memset(&o2_saved_214, 0, sizeof(struct list$1charph*));
memset(&it_217, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&default_param_241, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&param_name_242, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
memset(&come_value_247, 0, sizeof(struct CVALUE*));
memset(&source_248, 0, sizeof(struct buffer*));
memset(&p_249, 0, sizeof(char*));
memset(&head_250, 0, sizeof(char*));
memset(&sline_251, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&node_252, 0, sizeof(struct sNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&come_value_253, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&param_name_254, 0, sizeof(char*));
memset(&right_value272, 0, sizeof(void*));
memset(&come_value_255, 0, sizeof(struct CVALUE*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&current_stack_frame_node_260, 0, sizeof(struct sNode*));
memset(&right_value282, 0, sizeof(void*));
memset(&come_value_261, 0, sizeof(struct CVALUE*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&method_block2_262, 0, sizeof(struct buffer*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&method_block_type_263, 0, sizeof(struct sType*));
memset(&right_value287, 0, sizeof(void*));
memset(&class_name_264, 0, sizeof(char*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&current_stack_frame_struct_269, 0, sizeof(struct sClass*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&result_type_270, 0, sizeof(struct sType*));
memset(&param_types_271, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_272, 0, sizeof(struct list$1charph*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&all_alhabet_sname_273, 0, sizeof(struct buffer*));
memset(&p_274, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&i_275, 0, sizeof(int));
memset(&o2_saved_276, 0, sizeof(struct list$1sTypeph*));
memset(&it_277, 0, sizeof(struct sType*));
memset(&param_type_278, 0, sizeof(struct sType*));
memset(&right_value306, 0, sizeof(void*));
memset(&param_name_279, 0, sizeof(char*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&param_name_280, 0, sizeof(char*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&param_name_281, 0, sizeof(char*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&source3_282, 0, sizeof(struct buffer*));
memset(&p_283, 0, sizeof(char*));
memset(&head_284, 0, sizeof(char*));
memset(&sline_285, 0, sizeof(int));
memset(&right_value316, 0, sizeof(void*));
memset(&node_286, 0, sizeof(struct sNode*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&method_block_name_287, 0, sizeof(char*));
memset(&right_value319, 0, sizeof(void*));
memset(&come_value2_288, 0, sizeof(struct CVALUE*));
memset(&right_value320, 0, sizeof(void*));
memset(&fun2_289, 0, sizeof(struct sFun*));
memset(&method_block_type2_290, 0, sizeof(struct sType*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&buf_291, 0, sizeof(struct buffer*));
memset(&j_292, 0, sizeof(int));
memset(&o2_saved_293, 0, sizeof(struct list$1CVALUEph*));
memset(&it_294, 0, sizeof(struct CVALUE*));
memset(&right_value325, 0, sizeof(void*));
memset(&come_value2_295, 0, sizeof(struct CVALUE*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&var_name_296, 0, sizeof(char*));
memset(&right_value331, 0, sizeof(void*));
memset(&result_type_297, 0, sizeof(struct sType*));
memset(&right_value332, 0, sizeof(void*));
memset(&result_type2_298, 0, sizeof(struct sType*));
memset(&result_type3_299, 0, sizeof(struct sType*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
    fun_name_129=((struct sMethodCallNode*)come_null_check(self, "20method.c", 224))->fun_name;
    __freed_obj__ = 0;
    params_130=((struct sMethodCallNode*)come_null_check(self, "20method.c", 225))->params;
    __freed_obj__ = 0;
    obj_131=((struct sMethodCallNode*)come_null_check(self, "20method.c", 226))->obj;
    __freed_obj__ = 0;
    method_block_132=((struct sMethodCallNode*)come_null_check(self, "20method.c", 227))->method_block;
    __freed_obj__ = 0;
    method_block_sline_133=((struct sMethodCallNode*)come_null_check(self, "20method.c", 228))->method_block_sline;
    __freed_obj__ = 0;
    if(_if_conditional219=!((struct sNode*)come_null_check(obj_131, "20method.c", 234))->compile(((struct sNode*)come_null_check(obj_131, "20method.c", 234))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional219) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    obj_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    obj_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 240))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value131;
    __freed_obj__ = 0;
    klass_136=((struct sType*)come_null_check(obj_type_135, "20method.c", 242))->mClass;
    __freed_obj__ = 0;
    calling_dynamic_method_137=(_Bool)0;
    __freed_obj__ = 0;
    lambda_type_138=((void*)0);
    __freed_obj__ = 0;
    for(
    o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_136, "20method.c", 256))->mFields)),it_142=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "20method.c", 256))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "20method.c", 256))) ,    __freed_obj__ = 0, 
    _for_condtionalA7;    it_142=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "20method.c", 256))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_142;
        field_name_145=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_146=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional224=string_operator_equals(field_name_145,fun_name_129)&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(field_type_146, "20method.c", 254))->mClass, "20method.c", 254))->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional224) {
            calling_dynamic_method_137=(_Bool)1;
            __freed_obj__ = 0;
            lambda_type_138=field_type_146;
            __freed_obj__ = 0;
            if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional225=calling_dynamic_method_137,    __freed_obj__ = 0, 
    _if_conditional225) {
        result_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type_138, "20method.c", 257))->mResultType, "20method.c", 257))->v1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_147, "20method.c", 258))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_150=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value134=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value133=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value133;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value134;
        __freed_obj__ = 0;
        i_151=0;
        __freed_obj__ = 0;
        for(
        o2_saved_152=(params_130),it_155=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_152), "20method.c", 314))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_152), "20method.c", 314))) ,        __freed_obj__ = 0, 
        _for_condtionalA8;        it_155=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_152), "20method.c", 314))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=it_155;
            label_158=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_159=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            if(_if_conditional230=i_151==0,            __freed_obj__ = 0, 
            _if_conditional230) {
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_150, "20method.c", 267)),(struct CVALUE*)come_increment_ref_count(obj_value_134));
                __freed_obj__ = 0;
                i_151++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional231=!((struct sNode*)come_null_check(node_159, "20method.c", 275))->compile(((struct sNode*)come_null_check(node_159, "20method.c", 275))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional231) {
                    __result116__ = (_Bool)0;
                    if(label_158 && !__freed_obj__) { label_158 = come_decrement_ref_count(label_158, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_150 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result116__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = 0;
                come_clear_stackframe();
                check_assign_type(((char*)(right_value138=xsprintf("\%s param num \%s is assinged to",((char*)(right_value136=charp_to_string(fun_name_129))),((char*)(right_value137=int_to_string(i_151)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 277),((struct optional$2sTypephbool*)(right_value143=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_138, "20method.c", 277))->mParamTypes,i_151-1))))),((struct CVALUE*)come_null_check(come_value_160, "20method.c", 277))->type,come_value_160,(_Bool)0,info);
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value136;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value137;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value138;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value143;
                __freed_obj__ = 0;
                if(_if_conditional236=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 307),__exception_result_var_a6=((struct optional$2sTypephbool*)(right_value144=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_138, "20method.c", 307))->mParamTypes,i_151-1))), come_pop_stackframe(), __exception_result_var_a6)), "20method.c", 307))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 307))->type, "20method.c", 307))->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value144),
                (right_value144 && right_value144 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[5] = right_value144, 
                __freed_obj__ = 0, 
                _if_conditional236) {
                    if(_if_conditional237=((struct CVALUE*)come_null_check(come_value_160, "20method.c", 305))->var,                    __freed_obj__ = 0, 
                    _if_conditional237) {
                        if(_if_conditional238=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional238) {
                            __dec_obj49=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 282))->var, "20method.c", 282))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 282))->var, "20method.c", 282))->mCValueName=((void*)0);
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional239=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional239) {
                                __dec_obj50=((struct CVALUE*)come_null_check(come_value_160, "20method.c", 285))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_160, "20method.c", 285))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 285))->type,((struct CVALUE*)come_null_check(come_value_160, "20method.c", 285))->c_value,info))));
                                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value145;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional240=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional240) {
                                    __dec_obj51=((struct CVALUE*)come_null_check(come_value_160, "20method.c", 288))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_160, "20method.c", 288))->c_value=(char*)come_increment_ref_count(((char*)(right_value146=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 288))->type,((struct CVALUE*)come_null_check(come_value_160, "20method.c", 288))->c_value,info))));
                                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value146;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj52=((struct CVALUE*)come_null_check(come_value_160, "20method.c", 291))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_160, "20method.c", 291))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 291))->type,((struct CVALUE*)come_null_check(come_value_160, "20method.c", 291))->c_value,info))));
                                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value147;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional241=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 304))->type, "20method.c", 304))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional241) {
                        }
                        else {
                            __dec_obj53=((struct CVALUE*)come_null_check(come_value_160, "20method.c", 302))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_160, "20method.c", 302))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_160, "20method.c", 302))->type,((struct CVALUE*)come_null_check(come_value_160, "20method.c", 302))->c_value,info))));
                            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value148;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_150, "20method.c", 307)),(struct CVALUE*)come_increment_ref_count(come_value_160));
                __freed_obj__ = 0;
                i_151++;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_158 && !__freed_obj__) { label_158 = come_decrement_ref_count(label_158, (void*)0, (void*)0, 0, 0, 0); }
            if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        buf_165=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 314))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value149;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value150;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_165, "20method.c", 316)),((char*)(right_value151=xsprintf("%s->%s",((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 316))->c_value,fun_name_129))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value151;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_165, "20method.c", 317)),"(");
        __freed_obj__ = 0;
        j_166=0;
        __freed_obj__ = 0;
        for(
        o2_saved_167=(struct list$1CVALUEph*)come_increment_ref_count((come_params_150)),it_170=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_167), "20method.c", 332))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_167), "20method.c", 332))) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_170=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_167), "20method.c", 332))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional246=j_166==0,            __freed_obj__ = 0, 
            _if_conditional246) {
                __dec_obj54=((struct CVALUE*)come_null_check(it_170, "20method.c", 322))->c_value;
                ((struct CVALUE*)come_null_check(it_170, "20method.c", 322))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->_protocol_obj",((struct CVALUE*)come_null_check(it_170, "20method.c", 322))->c_value))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value152;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_165, "20method.c", 324)),((struct CVALUE*)come_null_check(it_170, "20method.c", 324))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional247=j_166!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_150, "20method.c", 330)))-1,            __freed_obj__ = 0, 
            _if_conditional247) {
                buffer_append_str(((struct buffer*)come_null_check(buf_165, "20method.c", 327)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_166++;
            __freed_obj__ = 0;
        }
        if(o2_saved_167 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_165, "20method.c", 332)),")");
        __freed_obj__ = 0;
        come_value2_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 334))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value153;
        __freed_obj__ = 0;
        __dec_obj55=((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 336))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 336))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=buffer_to_string(((struct buffer*)come_null_check(buf_165, "20method.c", 336))))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value154;
        __freed_obj__ = 0;
        result_type2_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=solve_generics(result_type_147,((struct sInfo*)come_null_check(info, "20method.c", 338))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value155;
        __freed_obj__ = 0;
        if(_if_conditional248=((struct sType*)come_null_check(result_type2_174, "20method.c", 344))->mHeap,        __freed_obj__ = 0, 
        _if_conditional248) {
            __dec_obj56=((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 341))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 341))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=append_object_to_right_values(((char*)(right_value156=buffer_to_string(((struct buffer*)come_null_check(buf_165, "20method.c", 341))))),(struct sType*)come_increment_ref_count(result_type2_174),info))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value156;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value157;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj57=((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 344))->type;
        ((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 344))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(result_type2_174))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value158;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 345))->type, "20method.c", 345))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 346))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_173, "20method.c", 348))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 350))->stack, "20method.c", 350)),(struct CVALUE*)come_increment_ref_count(come_value2_173));
        __freed_obj__ = 0;
        if(result_type_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_147, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_150 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_165 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value161=string_to_string(((char*)come_null_check(((char*)(right_value160=make_generics_function(obj_type_135,(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(fun_name_129)))),info))), "20method.c", 353))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value160;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value161;
        __freed_obj__ = 0;
        fun_176=((void*)0);
        __freed_obj__ = 0;
        for(
        i_177=128 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        i_177>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA10;        i_177-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s_v%d",generics_fun_name_175,i_177))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value162;
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_176=optional$2sFunpbool_value((come_push_stackframe("20method.c", 360),((struct optional$2sFunpbool*)(right_value172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 360))->funcs,new_fun_name_178)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value172;
            __freed_obj__ = 0;
            if(_if_conditional254=fun_176!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional254) {
                __dec_obj58=generics_fun_name_175;
                generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(new_fun_name_178))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value173;
                __freed_obj__ = 0;
                if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional255=fun_176==((void*)0),        __freed_obj__ = 0, 
        _if_conditional255) {
            fun_176=((struct sFun*)(right_value175=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 369))->funcs, "20method.c", 369)),generics_fun_name_175,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value175;
            __freed_obj__ = 0;
            if(_if_conditional275=fun_176==((void*)0),            __freed_obj__ = 0, 
            _if_conditional275) {
                __dec_obj59=generics_fun_name_175;
                generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value177=create_method_name(obj_type_135,(_Bool)0,((char*)(right_value176=__builtin_string(fun_name_129))),info))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value176;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value177;
                __freed_obj__ = 0;
                fun_176=((struct sFun*)(right_value178=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 374))->funcs, "20method.c", 374)),generics_fun_name_175,((void*)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value178;
                __freed_obj__ = 0;
                if(_if_conditional276=fun_176==((void*)0),                __freed_obj__ = 0, 
                _if_conditional276) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_175,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 377))->come_fun, "20method.c", 377))->mName);
                    __freed_obj__ = 0;
                    __result141__ = (_Bool)1;
                    if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(((struct sFun*)come_null_check(fun_176, "20method.c", 383))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value179;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_185, "20method.c", 384))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        result_type2_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=solve_generics(result_type_185,((struct sInfo*)come_null_check(info, "20method.c", 386))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value180;
        __freed_obj__ = 0;
        param_types_187=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 388))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value181;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value182;
        __freed_obj__ = 0;
        for(
        o2_saved_188=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_176, "20method.c", 400))->mParamTypes)),it_191=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_188), "20method.c", 400))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_188), "20method.c", 400))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_191=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_188), "20method.c", 400))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional281=it_191==((void*)0),            __freed_obj__ = 0, 
            _if_conditional281) {
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_187, "20method.c", 391)),it_191);
                __freed_obj__ = 0;
            }
            else {
                it2_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=solve_generics(it_191,((struct sInfo*)come_null_check(info, "20method.c", 394))->generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value186;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_187, "20method.c", 396)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(it2_197)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value187;
                __freed_obj__ = 0;
                if(it2_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_197, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        if(o2_saved_188 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_params_198=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value189=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value188=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 400))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value188;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value189;
        __freed_obj__ = 0;
        label_params_202=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value196=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value190=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 402))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value190;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value196;
        __freed_obj__ = 0;
        i_203=0;
        __freed_obj__ = 0;
        for(
        o2_saved_204=(params_130),it_205=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_204), "20method.c", 538))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_204), "20method.c", 538))) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_205=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_204), "20method.c", 538))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var3=it_205;
            label_206=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_207=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            __freed_obj__ = 0;
            if(_if_conditional288=i_203==0,            __freed_obj__ = 0, 
            _if_conditional288) {
                come_clear_stackframe();
                check_assign_type(((char*)(right_value199=xsprintf("\%s param num \%s is assinged to",((char*)(right_value197=charp_to_string(fun_name_129))),((char*)(right_value198=int_to_string(i_203)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 409),((struct optional$2sTypephbool*)(right_value200=list$1sTypephp_operator_load_element(param_types_187,i_203))))),((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 409))->type,obj_value_134,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value197;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value198;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value199;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value200;
                __freed_obj__ = 0;
                if(_if_conditional289=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 441),__exception_result_var_a8=((struct optional$2sTypephbool*)(right_value201=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a8)), "20method.c", 441))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 441))->type, "20method.c", 441))->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value201),
                (right_value201 && right_value201 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[4] = right_value201, 
                __freed_obj__ = 0, 
                _if_conditional289) {
                    if(_if_conditional290=((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 436))->var,                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        if(_if_conditional291=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            __dec_obj64=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 413))->var, "20method.c", 413))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 413))->var, "20method.c", 413))->mCValueName=((void*)0);
                            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional292=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional292) {
                                __dec_obj65=((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 416))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 416))->c_value=(char*)come_increment_ref_count(((char*)(right_value202=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 416))->type,((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 416))->c_value,info))));
                                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value202;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional293=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional293) {
                                    __dec_obj66=((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 419))->c_value;
                                    ((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value203=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 419))->type,((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 419))->c_value,info))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value203;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj67=((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 422))->c_value;
                                    ((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 422))->c_value=(char*)come_increment_ref_count(((char*)(right_value204=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 422))->type,((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 422))->c_value,info))));
                                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value204;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional294=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 435))->type, "20method.c", 435))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional294) {
                        }
                        else {
                            __dec_obj68=((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 433))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 433))->c_value=(char*)come_increment_ref_count(((char*)(right_value205=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 433))->type,((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 433))->c_value,info))));
                            if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value205;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional295=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 441),__exception_result_var_a9=((struct optional$2sTypephbool*)(right_value206=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a9)), "20method.c", 441))->mHeap&&!((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_134, "20method.c", 441))->type, "20method.c", 441))->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206),
                    (right_value206 && right_value206 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value206, 
                    __freed_obj__ = 0, 
                    _if_conditional295) {
                        come_clear_stackframe();
                        err_msg(info,"require heap parametor(%s)",optional$2charphbool_value((come_push_stackframe("20method.c", 438),((struct optional$2charphbool*)(right_value211=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_176, "20method.c", 438))->mParamNames,i_203))))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value211;
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 441)),(struct CVALUE*)come_increment_ref_count(obj_value_134));
                __freed_obj__ = 0;
                i_203++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional300=!((struct sNode*)come_null_check(node_207, "20method.c", 450))->compile(((struct sNode*)come_null_check(node_207, "20method.c", 450))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional300) {
                    __result157__ = (_Bool)0;
                    if(label_206 && !__freed_obj__) { label_206 = come_decrement_ref_count(label_206, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_207 && !__freed_obj__) { node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0, 0); } 
                    if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result157__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = 0;
                if(_if_conditional301=label_206!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional301) {
                    n_213=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_214=(struct list$1charph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_176, "20method.c", 462))->mParamNames)),it_217=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_214), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA16=                    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_214), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA16;                    it_217=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_214), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional306=string_operator_equals(label_206,it_217),                        __freed_obj__ = 0, 
                        _if_conditional306) {
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        n_213++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_214 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_214, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional307=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 465),__exception_result_var_a10=((struct optional$2sTypephbool*)(right_value213=list$1sTypephp_operator_load_element(param_types_187,n_213))), come_pop_stackframe(), __exception_result_var_a10)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213),
                    (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value213, 
                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value216=xsprintf("\%s param num \%s is assinged to",((char*)(right_value214=charp_to_string(fun_name_129))),((char*)(right_value215=int_to_string(i_203)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 463),((struct optional$2sTypephbool*)(right_value217=list$1sTypephp_operator_load_element(param_types_187,n_213))))),((struct CVALUE*)come_null_check(come_value_212, "20method.c", 463))->type,come_value_212,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value214;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value215;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value216;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value217;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional308=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 492),__exception_result_var_a11=((struct optional$2sTypephbool*)(right_value218=list$1sTypephp_operator_load_element(param_types_187,n_213))), come_pop_stackframe(), __exception_result_var_a11))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 492),__exception_result_var_a12=((struct optional$2sTypephbool*)(right_value219=list$1sTypephp_operator_load_element(param_types_187,n_213))), come_pop_stackframe(), __exception_result_var_a12)), "20method.c", 492))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 492))->type, "20method.c", 492))->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218),
                    (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value218, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value219),
                    (right_value219 && right_value219 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[2] = right_value219, 
                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        if(_if_conditional309=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 491))->var,                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            if(_if_conditional310=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional310) {
                                __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 468))->var, "20method.c", 468))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 468))->var, "20method.c", 468))->mCValueName=((void*)0);
                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional311=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional311) {
                                    __dec_obj71=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 471))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 471))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 471))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 471))->c_value,info))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                                    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value220;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional312=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional312) {
                                        __dec_obj72=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 474))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 474))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 474))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 474))->c_value,info))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value221;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj73=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 477))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 477))->c_value=(char*)come_increment_ref_count(((char*)(right_value222=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 477))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 477))->c_value,info))));
                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value222;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional313=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 490))->type, "20method.c", 490))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional313) {
                            }
                            else {
                                __dec_obj74=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 488))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 488))->c_value=(char*)come_increment_ref_count(((char*)(right_value223=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 488))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 488))->c_value,info))));
                                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value223;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional314=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 497),__exception_result_var_a13=((struct optional$2sTypephbool*)(right_value224=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a13)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224),
                    (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value224, 
                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value227=xsprintf("\%s param num \%s is assinged to",((char*)(right_value225=charp_to_string(fun_name_129))),((char*)(right_value226=int_to_string(i_203)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 495),((struct optional$2sTypephbool*)(right_value228=list$1sTypephp_operator_load_element(param_types_187,i_203))))),((struct CVALUE*)come_null_check(come_value_212, "20method.c", 495))->type,come_value_212,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value225;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value226;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value227;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value228);
                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value228;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional315=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 524),__exception_result_var_a14=((struct optional$2sTypephbool*)(right_value229=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a14))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 524),__exception_result_var_a15=((struct optional$2sTypephbool*)(right_value230=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a15)), "20method.c", 524))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 524))->type, "20method.c", 524))->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229),
                    (right_value229 && right_value229 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value229, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value230),
                    (right_value230 && right_value230 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[2] = right_value230, 
                    __freed_obj__ = 0, 
                    _if_conditional315) {
                        if(_if_conditional316=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 523))->var,                        __freed_obj__ = 0, 
                        _if_conditional316) {
                            if(_if_conditional317=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional317) {
                                __dec_obj75=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 500))->var, "20method.c", 500))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 500))->var, "20method.c", 500))->mCValueName=((void*)0);
                                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional318=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional318) {
                                    __dec_obj76=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 503))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 503))->c_value=(char*)come_increment_ref_count(((char*)(right_value231=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 503))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 503))->c_value,info))));
                                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value231;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional319=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional319) {
                                        __dec_obj77=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 506))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 506))->c_value=(char*)come_increment_ref_count(((char*)(right_value232=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 506))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 506))->c_value,info))));
                                        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value232;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj78=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 509))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 509))->c_value=(char*)come_increment_ref_count(((char*)(right_value233=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 509))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 509))->c_value,info))));
                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value233;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional320=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 522))->type, "20method.c", 522))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional320) {
                            }
                            else {
                                __dec_obj79=((struct CVALUE*)come_null_check(come_value_212, "20method.c", 520))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_212, "20method.c", 520))->c_value=(char*)come_increment_ref_count(((char*)(right_value234=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_212, "20method.c", 520))->type,((struct CVALUE*)come_null_check(come_value_212, "20method.c", 520))->c_value,info))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                                if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value234;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional321=label_206==((void*)0),                __freed_obj__ = 0, 
                _if_conditional321) {
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 527)),(struct CVALUE*)come_increment_ref_count(come_value_212));
                    __freed_obj__ = 0;
                    i_203++;
                    __freed_obj__ = 0;
                }
                else {
                    map$2charphCVALUEph_insert(((struct map$2charphCVALUEph*)come_null_check(label_params_202, "20method.c", 532)),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(label_206)))),(struct CVALUE*)come_increment_ref_count(come_value_212));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value243;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_206 && !__freed_obj__) { label_206 = come_decrement_ref_count(label_206, (void*)0, (void*)0, 0, 0, 0); }
            if(node_207 && !__freed_obj__) { node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        if(_if_conditional344=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_130, "20method.c", 615)))<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_176, "20method.c", 615))->mParamTypes, "20method.c", 615)))+(method_block_132?-2:0),        __freed_obj__ = 0, 
        _if_conditional344) {
            for(
            ;            _for_condtionalA19=            i_203<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_176, "20method.c", 614))->mParamTypes, "20method.c", 614)))+(method_block_132?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA19;            i_203++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                default_param_241=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(optional$2charphbool_value((come_push_stackframe("20method.c", 541),((struct optional$2charphbool*)(right_value244=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_176, "20method.c", 541))->mParamDefaultParametors,i_203)))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value244;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value245;
                __freed_obj__ = 0;
                come_clear_stackframe();
                param_name_242=optional$2charphbool_value((come_push_stackframe("20method.c", 543),((struct optional$2charphbool*)(right_value246=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_176, "20method.c", 543))->mParamNames,i_203)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value246);
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value246;
                __freed_obj__ = 0;
                come_clear_stackframe();
                come_value_247=optional$2CVALUEpbool_value((come_push_stackframe("20method.c", 546),((struct optional$2CVALUEpbool*)(right_value256=map$2charphCVALUEphp_operator_load_element(label_params_202,param_name_242)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value256);
                if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value256;
                __freed_obj__ = 0;
                if(_if_conditional350=default_param_241&&string_operator_not_equals(default_param_241,""),                __freed_obj__ = 0, 
                _if_conditional350) {
                    source_248=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 550))->source);
                    __freed_obj__ = 0;
                    p_249=((struct sInfo*)come_null_check(info, "20method.c", 551))->p;
                    __freed_obj__ = 0;
                    head_250=((struct sInfo*)come_null_check(info, "20method.c", 552))->head;
                    __freed_obj__ = 0;
                    sline_251=((struct sInfo*)come_null_check(info, "20method.c", 553))->sline;
                    __freed_obj__ = 0;
                    __dec_obj80=((struct sInfo*)come_null_check(info, "20method.c", 555))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 555))->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=string_to_buffer(((char*)come_null_check(default_param_241, "20method.c", 555))))));
                    if(__dec_obj80) { come_call_finalizer(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 556))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 556))->source, "20method.c", 556))->buf;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 557))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 557))->source, "20method.c", 557))->buf;
                    __freed_obj__ = 0;
                    node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value258;
                    __freed_obj__ = 0;
                    if(_if_conditional351=!((struct sNode*)come_null_check(node_252, "20method.c", 565))->compile(((struct sNode*)come_null_check(node_252, "20method.c", 565))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional351) {
                        __result186__ = (_Bool)0;
                        if(source_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                        if(default_param_241 && !__freed_obj__) { default_param_241 = come_decrement_ref_count(default_param_241, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result186__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj81=((struct sInfo*)come_null_check(info, "20method.c", 565))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 565))->source=(struct buffer*)come_increment_ref_count(source_248);
                    if(__dec_obj81) { come_call_finalizer(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 566))->p=p_249;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 567))->head=head_250;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 568))->sline=sline_251;
                    __freed_obj__ = 0;
                    come_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value259;
                    __freed_obj__ = 0;
                    if(_if_conditional352=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 574),__exception_result_var_a19=((struct optional$2sTypephbool*)(right_value260=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a19)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value260),
                    (right_value260 && right_value260 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[3] = right_value260, 
                    __freed_obj__ = 0, 
                    _if_conditional352) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value263=xsprintf("\%s param num \%s is assinged to",((char*)(right_value261=charp_to_string(fun_name_129))),((char*)(right_value262=int_to_string(i_203)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 572),((struct optional$2sTypephbool*)(right_value264=list$1sTypephp_operator_load_element(param_types_187,i_203))))),((struct CVALUE*)come_null_check(come_value_253, "20method.c", 572))->type,come_value_253,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value261;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
                        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value262;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value263;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value264);
                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value264;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional353=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 601),__exception_result_var_a20=((struct optional$2sTypephbool*)(right_value265=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a20))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 601),__exception_result_var_a21=((struct optional$2sTypephbool*)(right_value266=list$1sTypephp_operator_load_element(param_types_187,i_203))), come_pop_stackframe(), __exception_result_var_a21)), "20method.c", 601))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 601))->type, "20method.c", 601))->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value265),
                    (right_value265 && right_value265 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[4] = right_value265, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value266),
                    (right_value266 && right_value266 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[5] = right_value266, 
                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        if(_if_conditional354=((struct CVALUE*)come_null_check(come_value_253, "20method.c", 600))->var,                        __freed_obj__ = 0, 
                        _if_conditional354) {
                            if(_if_conditional355=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional355) {
                                __dec_obj82=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 577))->var, "20method.c", 577))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 577))->var, "20method.c", 577))->mCValueName=((void*)0);
                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional356=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional356) {
                                    __dec_obj83=((struct CVALUE*)come_null_check(come_value_253, "20method.c", 580))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_253, "20method.c", 580))->c_value=(char*)come_increment_ref_count(((char*)(right_value267=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 580))->type,((struct CVALUE*)come_null_check(come_value_253, "20method.c", 580))->c_value,info))));
                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value267;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional357=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional357) {
                                        __dec_obj84=((struct CVALUE*)come_null_check(come_value_253, "20method.c", 583))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_253, "20method.c", 583))->c_value=(char*)come_increment_ref_count(((char*)(right_value268=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 583))->type,((struct CVALUE*)come_null_check(come_value_253, "20method.c", 583))->c_value,info))));
                                        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value268;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj85=((struct CVALUE*)come_null_check(come_value_253, "20method.c", 586))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_253, "20method.c", 586))->c_value=(char*)come_increment_ref_count(((char*)(right_value269=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 586))->type,((struct CVALUE*)come_null_check(come_value_253, "20method.c", 586))->c_value,info))));
                                        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value269;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional358=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 599))->type, "20method.c", 599))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional358) {
                            }
                            else {
                                __dec_obj86=((struct CVALUE*)come_null_check(come_value_253, "20method.c", 597))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_253, "20method.c", 597))->c_value=(char*)come_increment_ref_count(((char*)(right_value270=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 597))->type,((struct CVALUE*)come_null_check(come_value_253, "20method.c", 597))->c_value,info))));
                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value270;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 601)),(struct CVALUE*)come_increment_ref_count(come_value_253));
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    if(source_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_253 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional359=come_value_247,                    __freed_obj__ = 0, 
                    _if_conditional359) {
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 606)),((void*)0));
                        __freed_obj__ = 0;
                    }
                    else {
                        err_msg(info,"require parametor(%s)",((struct sFun*)come_null_check(fun_176, "20method.c", 609))->mName);
                        __freed_obj__ = 0;
                        __result187__ = (_Bool)0;
                        if(default_param_241 && !__freed_obj__) { default_param_241 = come_decrement_ref_count(default_param_241, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result187__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(default_param_241 && !__freed_obj__) { default_param_241 = come_decrement_ref_count(default_param_241, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional360=map$2charphCVALUEph_length(((struct map$2charphCVALUEph*)come_null_check(label_params_202, "20method.c", 628)))>0,        __freed_obj__ = 0, 
        _if_conditional360) {
            for(
            i_203=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA20=            i_203<list$1charph_length(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(fun_176, "20method.c", 626))->mParamNames, "20method.c", 626)))+(method_block_132?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA20;            i_203++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                param_name_254=optional$2charphbool_value((come_push_stackframe("20method.c", 617),((struct optional$2charphbool*)(right_value271=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_176, "20method.c", 617))->mParamNames,i_203)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value271;
                __freed_obj__ = 0;
                come_clear_stackframe();
                come_value_255=optional$2CVALUEpbool_value((come_push_stackframe("20method.c", 620),((struct optional$2CVALUEpbool*)(right_value272=map$2charphCVALUEphp_operator_load_element(label_params_202,param_name_254)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value272;
                __freed_obj__ = 0;
                if(_if_conditional361=come_value_255,                __freed_obj__ = 0, 
                _if_conditional361) {
                    list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 623)),i_203,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=CVALUE_clone(come_value_255)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value276;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional369=method_block_132,        __freed_obj__ = 0, 
        _if_conditional369) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 629);
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value278=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value277=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 629)))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=_inf_value1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value277;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value278;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value281;
            __freed_obj__ = 0;
            if(_if_conditional374=!((struct sNode*)come_null_check(current_stack_frame_node_260, "20method.c", 635))->compile(((struct sNode*)come_null_check(current_stack_frame_node_260, "20method.c", 635))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional374) {
                __result196__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result196__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value282);
            if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value282;
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 636)),(struct CVALUE*)come_increment_ref_count(come_value_261));
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_block2_262=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value284=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value283=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 639))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value283);
            if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value283;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value284);
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value284;
            __freed_obj__ = 0;
            come_clear_stackframe();
            method_block_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(optional$2sTypephbool_value((come_push_stackframe("20method.c", 640),((struct optional$2sTypephbool*)(right_value285=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_176, "20method.c", 640))->mParamTypes,-1)))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value285;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value286;
            __freed_obj__ = 0;
            class_name_264=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 642))->current_stack_num))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value287);
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value287;
            __freed_obj__ = 0;
            come_clear_stackframe();
            come_clear_stackframe();
            ((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("20method.c", 644),((struct optional$2sTypephbool*)(right_value288=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(method_block_type_263, "20method.c", 644))->mParamTypes,0))))), "20method.c", 644))->mClass=optional$2sClasspbool_value((come_push_stackframe("20method.c", 644),((struct optional$2sClasspbool*)(right_value298=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 644))->classes,class_name_264)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value288);
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value288;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value298;
            __freed_obj__ = 0;
            current_stack_frame_struct_269=((struct sInfo*)come_null_check(info, "20method.c", 645))->current_stack_frame_struct;
            __freed_obj__ = 0;
            come_clear_stackframe();
            ((struct sInfo*)come_null_check(info, "20method.c", 646))->current_stack_frame_struct=optional$2sClasspbool_value((come_push_stackframe("20method.c", 646),((struct optional$2sClasspbool*)(right_value299=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 646))->classes,class_name_264)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value299);
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value299;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 648))->num_method_block++;
            __freed_obj__ = 0;
            if(_if_conditional380=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(method_block_type_263, "20method.c", 655))->mClass, "20method.c", 655))->mName,"lambda"),            __freed_obj__ = 0, 
            _if_conditional380) {
                err_msg(info,"This function does not have method block(%s)",fun_name_129);
                __freed_obj__ = 0;
                __result204__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result204__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_type_270=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(method_block_type_263, "20method.c", 655))->mResultType, "20method.c", 655))->v1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value300);
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[12] = right_value300;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_270, "20method.c", 656))->mStatic=(_Bool)0;
            __freed_obj__ = 0;
            param_types_271=((struct sType*)come_null_check(method_block_type_263, "20method.c", 657))->mParamTypes;
            __freed_obj__ = 0;
            param_names_272=((struct sType*)come_null_check(method_block_type_263, "20method.c", 658))->mParamNames;
            __freed_obj__ = 0;
            all_alhabet_sname_273=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value302=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value301=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 660))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value301);
            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[13] = right_value301;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value302);
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value302;
            __freed_obj__ = 0;
            {
                p_274=((struct sInfo*)come_null_check(info, "20method.c", 662))->sname;
                __freed_obj__ = 0;
                while(_while_condtional35=*p_274,                __freed_obj__ = 0, 
                _while_condtional35) {
                    if(_if_conditional381=xisalnum(*p_274),                    __freed_obj__ = 0, 
                    _if_conditional381) {
                        buffer_append_char(((struct buffer*)come_null_check(all_alhabet_sname_273, "20method.c", 665)),*p_274++);
                        __freed_obj__ = 0;
                    }
                    else {
                        p_274++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 673)),((char*)(right_value305=xsprintf("%s method_block%d_%s(",optional$2charphbool_expect((come_push_stackframe("20method.c", 673),((struct optional$2charphbool*)(right_value303=make_type_name_string(result_type_270,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct sInfo*)come_null_check(info, "20method.c", 673))->num_method_block,((char*)(right_value304=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_273, "20method.c", 673)))))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value303);
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[15] = right_value303;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value304);
            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value304;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value305);
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value305;
            __freed_obj__ = 0;
            i_275=0;
            __freed_obj__ = 0;
            for(
            o2_saved_276=(param_types_271),it_277=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_276), "20method.c", 700))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA21=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_276), "20method.c", 700))) ,            __freed_obj__ = 0, 
            _for_condtionalA21;            it_277=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_276), "20method.c", 700))) ,            __freed_obj__ = 0, 
            0            ){
                param_type_278=it_277;
                __freed_obj__ = 0;
                if(_if_conditional383=i_275==0,                __freed_obj__ = 0, 
                _if_conditional383) {
                    param_name_279=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("parent"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value306;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 681)),((char*)(right_value308=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 681),((struct optional$2charphbool*)(right_value307=make_define_var(param_type_278,param_name_279,(_Bool)0,info)))))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value307;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
                    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value308;
                    __freed_obj__ = 0;
                    if(param_name_279 && !__freed_obj__) { param_name_279 = come_decrement_ref_count(param_name_279, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional384=i_275==1,                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        param_name_280=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("it"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value309;
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 686)),((char*)(right_value311=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 686),((struct optional$2charphbool*)(right_value310=make_define_var(param_type_278,param_name_280,(_Bool)0,info)))))))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value310);
                        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value310;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value311);
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value311;
                        __freed_obj__ = 0;
                        if(param_name_280 && !__freed_obj__) { param_name_280 = come_decrement_ref_count(param_name_280, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        param_name_281=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("it%d",i_275))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value312;
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 691)),((char*)(right_value314=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 691),((struct optional$2charphbool*)(right_value313=make_define_var(param_type_278,param_name_281,(_Bool)0,info)))))))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
                        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value313;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value314);
                        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value314;
                        __freed_obj__ = 0;
                        if(param_name_281 && !__freed_obj__) { param_name_281 = come_decrement_ref_count(param_name_281, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional385=i_275!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(param_types_271, "20method.c", 698)))-1,                __freed_obj__ = 0, 
                _if_conditional385) {
                    buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 695)),",");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_275++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 700)),")\n");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 702)),((char*)(right_value315=buffer_to_string(((struct buffer*)come_null_check(method_block_132, "20method.c", 702))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value315);
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value315;
            __freed_obj__ = 0;
            source3_282=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 704))->source);
            __freed_obj__ = 0;
            p_283=((struct sInfo*)come_null_check(info, "20method.c", 705))->p;
            __freed_obj__ = 0;
            head_284=((struct sInfo*)come_null_check(info, "20method.c", 706))->head;
            __freed_obj__ = 0;
            sline_285=((struct sInfo*)come_null_check(info, "20method.c", 707))->sline;
            __freed_obj__ = 0;
            __dec_obj91=((struct sInfo*)come_null_check(info, "20method.c", 710))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 710))->source=(struct buffer*)come_increment_ref_count(method_block2_262);
            if(__dec_obj91) { come_call_finalizer(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 711))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 711))->source, "20method.c", 711))->buf;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 712))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 712))->source, "20method.c", 712))->buf;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 713))->sline=method_block_sline_133;
            __freed_obj__ = 0;
            node_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=parse_function(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value316);
            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[19] = right_value316;
            __freed_obj__ = 0;
            if(_if_conditional386=!((struct sNode*)come_null_check(node_286, "20method.c", 722))->compile(((struct sNode*)come_null_check(node_286, "20method.c", 722))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional386) {
                __result206__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_270 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_273 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_282 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_282, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_286 && !__freed_obj__) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result206__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_name_287=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("method_block%d_%s",((struct sInfo*)come_null_check(info, "20method.c", 722))->num_method_block,((char*)(right_value317=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_273, "20method.c", 722)))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value317;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value318);
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[21] = right_value318;
            __freed_obj__ = 0;
            come_value2_288=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 724))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value319);
            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[22] = right_value319;
            __freed_obj__ = 0;
            fun2_289=((struct sFun*)(right_value320=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 726))->funcs, "20method.c", 726)),method_block_name_287,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value320);
            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[23] = right_value320;
            __freed_obj__ = 0;
            if(_if_conditional387=fun2_289==((void*)0),            __freed_obj__ = 0, 
            _if_conditional387) {
                err_msg(info,"method block function not found(%s)",method_block_name_287);
                __freed_obj__ = 0;
                __result207__ = (_Bool)1;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_270 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_273 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_282 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_282, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_286 && !__freed_obj__) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                if(method_block_name_287 && !__freed_obj__) { method_block_name_287 = come_decrement_ref_count(method_block_name_287, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value2_288 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result207__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_type2_290=((struct sFun*)come_null_check(fun2_289, "20method.c", 733))->mLambdaType;
            __freed_obj__ = 0;
            __dec_obj92=((struct CVALUE*)come_null_check(come_value2_288, "20method.c", 735))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_288, "20method.c", 735))->c_value=(char*)come_increment_ref_count(((char*)(right_value321=xsprintf("(void*)%s",method_block_name_287))));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value321);
            if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[24] = right_value321;
            __freed_obj__ = 0;
            __dec_obj93=((struct CVALUE*)come_null_check(come_value2_288, "20method.c", 736))->type;
            ((struct CVALUE*)come_null_check(come_value2_288, "20method.c", 736))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(method_block_type2_290))));
            if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value322);
            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[25] = right_value322;
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value2_288, "20method.c", 737))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 739)),(struct CVALUE*)come_increment_ref_count(come_value2_288));
            __freed_obj__ = 0;
            __dec_obj94=((struct sInfo*)come_null_check(info, "20method.c", 741))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 741))->source=(struct buffer*)come_increment_ref_count(source3_282);
            if(__dec_obj94) { come_call_finalizer(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 742))->p=p_283;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 743))->head=head_284;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 744))->sline=sline_285;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 746))->current_stack_frame_struct=current_stack_frame_struct_269;
            __freed_obj__ = 0;
            if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
            if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_270 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(all_alhabet_sname_273 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_273, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(source3_282 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_282, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node_286 && !__freed_obj__) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
            if(method_block_name_287 && !__freed_obj__) { method_block_name_287 = come_decrement_ref_count(method_block_name_287, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value2_288 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_288, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        buf_291=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 749))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value323;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value324;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_291, "20method.c", 751)),generics_fun_name_175);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_291, "20method.c", 752)),"(");
        __freed_obj__ = 0;
        j_292=0;
        __freed_obj__ = 0;
        for(
        o2_saved_293=(struct list$1CVALUEph*)come_increment_ref_count((come_params_198)),it_294=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_293), "20method.c", 764))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_293), "20method.c", 764))) ,        __freed_obj__ = 0, 
        _for_condtionalA22;        it_294=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_293), "20method.c", 764))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_291, "20method.c", 756)),((struct CVALUE*)come_null_check(it_294, "20method.c", 756))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional388=j_292!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 762)))-1,            __freed_obj__ = 0, 
            _if_conditional388) {
                buffer_append_str(((struct buffer*)come_null_check(buf_291, "20method.c", 759)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_292++;
            __freed_obj__ = 0;
        }
        if(o2_saved_293 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_293, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_291, "20method.c", 764)),")");
        __freed_obj__ = 0;
        come_value2_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 767))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value325;
        __freed_obj__ = 0;
        __dec_obj95=((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 769))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 769))->c_value=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(((struct buffer*)come_null_check(buf_291, "20method.c", 769))))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value326;
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 770))->type;
        ((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 770))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(result_type2_186))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value327;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 771))->type, "20method.c", 771))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 772))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional389=((struct sType*)come_null_check(result_type2_186, "20method.c", 778))->mHeap,        __freed_obj__ = 0, 
        _if_conditional389) {
            __dec_obj97=((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 775))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 775))->c_value=(char*)come_increment_ref_count(((char*)(right_value328=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 775))->c_value,(struct sType*)come_increment_ref_count(result_type2_186),info))));
            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value328;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional390=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun_176, "20method.c", 782))->mResultType, "20method.c", 782))->mException,        __freed_obj__ = 0, 
        _if_conditional390) {
            __dec_obj98=((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 779))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 779))->c_value=(char*)come_increment_ref_count(((char*)(right_value329=append_exception_value(((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 779))->c_value,((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 779))->type,info))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value329;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_295, "20method.c", 782))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 784))->stack, "20method.c", 784)),(struct CVALUE*)come_increment_ref_count(come_value2_295));
        __freed_obj__ = 0;
        if(_if_conditional391=method_block_132,        __freed_obj__ = 0, 
        _if_conditional391) {
            var_name_296=(char*)come_increment_ref_count(((char*)(right_value330=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 787))->num_current_stack))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value330;
            __freed_obj__ = 0;
            result_type_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 789))->come_fun, "20method.c", 789))->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value331;
            __freed_obj__ = 0;
            result_type2_298=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=solve_generics(result_type_297,((struct sInfo*)come_null_check(info, "20method.c", 791))->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value332);
            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value332;
            __freed_obj__ = 0;
            result_type3_299=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_298, "20method.c", 793))->mNoSolvedGenericsType, "20method.c", 793))->v1;
            __freed_obj__ = 0;
            if(_if_conditional392=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_298, "20method.c", 801))->mNoSolvedGenericsType, "20method.c", 801))->v1,            __freed_obj__ = 0, 
            _if_conditional392) {
                result_type3_299=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_298, "20method.c", 795))->mNoSolvedGenericsType, "20method.c", 795))->v1;
                __freed_obj__ = 0;
            }
            else {
                result_type3_299=result_type2_298;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional393=((struct sInfo*)come_null_check(info, "20method.c", 847))->in_loop,            __freed_obj__ = 0, 
            _if_conditional393) {
                if(_if_conditional394=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_299, "20method.c", 832))->mClass, "20method.c", 832))->mName,"void")&&((struct sType*)come_null_check(result_type3_299, "20method.c", 832))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional394) {
                    add_come_last_code3(info,((char*)(right_value336=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value333=string_to_string(var_name_296))),((char*)(right_value334=string_to_string(var_name_296))),((char*)(right_value335=string_to_string(var_name_296)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value333;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value334;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value335;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value336;
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_last_code3(info,((char*)(right_value343=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value337=string_to_string(var_name_296))),((char*)(right_value338=string_to_string(var_name_296))),((char*)(right_value339=string_to_string(var_name_296))),((char*)(right_value341=string_to_string(optional$2charphbool_expect((come_push_stackframe("20method.c", 830),((struct optional$2charphbool*)(right_value340=make_type_name_string(result_type2_298,(_Bool)0,(_Bool)0,(_Bool)0,info)))))))),((char*)(right_value342=string_to_string(var_name_296)))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value337;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
                    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value338;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value339);
                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value339;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value340);
                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value340;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value341);
                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value341;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value342);
                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value342;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value343);
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value343;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional395=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_299, "20method.c", 847))->mClass, "20method.c", 847))->mName,"void")&&((struct sType*)come_null_check(result_type3_299, "20method.c", 847))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional395) {
                    add_come_last_code3(info,((char*)(right_value345=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value344=string_to_string(var_name_296)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value344;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value345);
                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value345;
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_last_code3(info,((char*)(right_value350=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value346=string_to_string(var_name_296))),((char*)(right_value348=string_to_string(optional$2charphbool_expect((come_push_stackframe("20method.c", 845),((struct optional$2charphbool*)(right_value347=make_type_name_string(result_type2_298,(_Bool)0,(_Bool)0,(_Bool)0,info)))))))),((char*)(right_value349=string_to_string(var_name_296)))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value346;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value347);
                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value347;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value348);
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value348;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value349);
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value349;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value350);
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value350;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_297 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_297, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_298 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_298, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(label_params_202 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_291 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_291, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_295 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_295, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result208__ = (_Bool)1;
    if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
    if(obj_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct tuple2$2charphsTypeph* result_140;
struct tuple2$2charphsTypeph* __result101__;
_Bool _if_conditional221;
struct tuple2$2charphsTypeph* __result102__;
struct tuple2$2charphsTypeph* result_141;
struct tuple2$2charphsTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_140, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_141, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional220=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional220) {
            __freed_obj__ = 0;
            memset(&result_140,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = result_140;
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional221=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional221) {
            __result102__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result102__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_141,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result103__ = __result_obj__ = result_141;
        __freed_obj__ = 0;
        return __result103__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result104__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct tuple2$2charphsTypeph* result_143;
struct tuple2$2charphsTypeph* __result105__;
_Bool _if_conditional223;
struct tuple2$2charphsTypeph* __result106__;
struct tuple2$2charphsTypeph* result_144;
struct tuple2$2charphsTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_143, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_144, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional222=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional222) {
            __freed_obj__ = 0;
            memset(&result_143,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result105__ = __result_obj__ = result_143;
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional223=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional223) {
            __result106__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_144,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result107__ = __result_obj__ = result_144;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result108__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_148;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_149;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_148, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_149, 0, sizeof(struct list_item$1CVALUEph*));
                it_148=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional24=it_148!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional24) {
                    prev_it_149=it_148;
                    __freed_obj__ = 0;
                    it_148=((struct list_item$1CVALUEph*)come_null_check(it_148, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_149 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct tuple2$2charphsNodeph* result_153;
struct tuple2$2charphsNodeph* __result109__;
_Bool _if_conditional227;
struct tuple2$2charphsNodeph* __result110__;
struct tuple2$2charphsNodeph* result_154;
struct tuple2$2charphsNodeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_154, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional226=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                __freed_obj__ = 0;
                memset(&result_153,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result109__ = __result_obj__ = result_153;
                __freed_obj__ = 0;
                return __result109__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional227=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional227) {
                __result110__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result110__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_154,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result111__ = __result_obj__ = result_154;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result112__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct tuple2$2charphsNodeph* result_156;
struct tuple2$2charphsNodeph* __result113__;
_Bool _if_conditional229;
struct tuple2$2charphsNodeph* __result114__;
struct tuple2$2charphsNodeph* result_157;
struct tuple2$2charphsNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_157, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional228=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                __freed_obj__ = 0;
                memset(&result_156,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result113__ = __result_obj__ = result_156;
                __freed_obj__ = 0;
                return __result113__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional229=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional229) {
                __result114__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result114__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_157,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result115__ = __result_obj__ = result_157;
            __freed_obj__ = 0;
            return __result115__;
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
struct list_item$1sTypeph* it_161;
int i_162;
_Bool _while_condtional25;
_Bool _if_conditional233;
void* right_value139;
void* right_value140;
struct optional$2sTypephbool* __result118__;
struct sType* default_value_163;
void* right_value141;
void* right_value142;
struct optional$2sTypephbool* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_161, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_162, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&default_value_163, 0, sizeof(struct sType*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
                    if(_if_conditional232=position<0,                    __freed_obj__ = 0, 
                    _if_conditional232) {
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_161=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                    __freed_obj__ = 0;
                    i_162=0;
                    __freed_obj__ = 0;
                    while(_while_condtional25=it_161!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional25) {
                        if(_if_conditional233=position==i_162,                        __freed_obj__ = 0, 
                        _if_conditional233) {
                            __result118__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value140=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value139=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_161, "./comelang2.h", 742))->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value139;
                            __freed_obj__ = 0;
                            return __result118__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_161=((struct list_item$1sTypeph*)come_null_check(it_161, "./comelang2.h", 744))->next;
                        __freed_obj__ = 0;
                        i_162++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_163,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result119__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value142=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value141=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_163),(_Bool)0))));
                    if(default_value_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value141;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value142;
                    __freed_obj__ = 0;
                    return __result119__;
                    __freed_obj__ = 0;
                    if(default_value_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj48;
struct optional$2sTypephbool* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj48=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result117__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result117__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional234=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional234) {
                                        if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
struct sType* default_value_164;
struct sType* __result120__;
struct sType* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_164, 0, sizeof(struct sType*));
                    if(_if_conditional235=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional235) {
                        __freed_obj__ = 0;
                        memset(&default_value_164,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result120__ = __result_obj__ = default_value_164;
                        __freed_obj__ = 0;
                        return __result120__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result121__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result121__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
struct CVALUE* result_168;
struct CVALUE* __result122__;
_Bool _if_conditional243;
struct CVALUE* __result123__;
struct CVALUE* result_169;
struct CVALUE* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(struct CVALUE*));
memset(&result_169, 0, sizeof(struct CVALUE*));
            if(_if_conditional242=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional242) {
                __freed_obj__ = 0;
                memset(&result_168,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result122__ = __result_obj__ = result_168;
                __freed_obj__ = 0;
                return __result122__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional243=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional243) {
                __result123__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_169,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result124__ = __result_obj__ = result_169;
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result125__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
struct CVALUE* result_171;
struct CVALUE* __result126__;
_Bool _if_conditional245;
struct CVALUE* __result127__;
struct CVALUE* result_172;
struct CVALUE* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(struct CVALUE*));
memset(&result_172, 0, sizeof(struct CVALUE*));
            if(_if_conditional244=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional244) {
                __freed_obj__ = 0;
                memset(&result_171,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result126__ = __result_obj__ = result_171;
                __freed_obj__ = 0;
                return __result126__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional245=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional245) {
                __result127__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result127__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_172,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result128__ = __result_obj__ = result_172;
            __freed_obj__ = 0;
            return __result128__;
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result129__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_179;
unsigned int hash_180;
unsigned int it_181;
_Bool _while_condtional26;
_Bool _if_conditional249;
void* right_value163;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional250;
void* right_value164;
void* right_value165;
struct optional$2sFunpbool* __result131__;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value166;
void* right_value167;
struct optional$2sFunpbool* __result132__;
void* right_value168;
void* right_value169;
struct optional$2sFunpbool* __result133__;
void* right_value170;
void* right_value171;
struct optional$2sFunpbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_179, 0, sizeof(struct sFun*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&it_181, 0, sizeof(unsigned int));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_179,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_180=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_181=hash_180;
                __freed_obj__ = 0;
                while(_while_condtional26=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional26) {
                    if(_if_conditional249=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_181],                    __freed_obj__ = 0, 
                    _if_conditional249) {
                        if(_if_conditional250=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value163=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_181], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163),
                        (right_value163 && right_value163 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value163, 
                        __freed_obj__ = 0, 
                        _if_conditional250) {
                            __result131__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value165=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value164=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_181],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value164;
                            __freed_obj__ = 0;
                            return __result131__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_181++;
                        __freed_obj__ = 0;
                        if(_if_conditional251=it_181>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional251) {
                            it_181=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional252=it_181==hash_180,                            __freed_obj__ = 0, 
                            _if_conditional252) {
                                __result132__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value167=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value166=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_179,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value166;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
                                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value167;
                                __freed_obj__ = 0;
                                return __result132__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result133__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value169=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value168=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_179,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value168;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value169;
                        __freed_obj__ = 0;
                        return __result133__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result134__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value171=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value170=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_179,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value171;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result130__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result130__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
struct sFun* default_value_182;
struct sFun* __result135__;
struct sFun* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_182, 0, sizeof(struct sFun*));
                if(_if_conditional253=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional253) {
                    __freed_obj__ = 0;
                    memset(&default_value_182,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result135__ = __result_obj__ = default_value_182;
                    __freed_obj__ = 0;
                    return __result135__;
                    __freed_obj__ = 0;
                }
                else {
                    __result136__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result136__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional27;
_Bool _if_conditional256;
void* right_value174;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional257;
struct sFun* __result137__;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct sFun* __result138__;
struct sFun* __result139__;
struct sFun* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
memset(&right_value174, 0, sizeof(void*));
                hash_183=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                __freed_obj__ = 0;
                it_184=hash_183;
                __freed_obj__ = 0;
                while(_while_condtional27=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional27) {
                    if(_if_conditional256=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_184],                    __freed_obj__ = 0, 
                    _if_conditional256) {
                        if(_if_conditional257=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a7=((struct optional$2boolbool*)(right_value174=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_184], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a7)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174),
                        (right_value174 && right_value174 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value174, 
                        __freed_obj__ = 0, 
                        _if_conditional257) {
                            __result137__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_184];
                            __freed_obj__ = 0;
                            return __result137__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_184++;
                        __freed_obj__ = 0;
                        if(_if_conditional258=it_184>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                        __freed_obj__ = 0, 
                        _if_conditional258) {
                            it_184=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional259=it_184==hash_183,                            __freed_obj__ = 0, 
                            _if_conditional259) {
                                __result138__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result138__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result139__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result139__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result140__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional260=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional260) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional261=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional261) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional262=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional262) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional263=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional263) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional264=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional264) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional265=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional265) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional266=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional266) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional269=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional269) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional270=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional270) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional271=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional271) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional272=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional272) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional273) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional274) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional267=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional267) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional268=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional268) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
struct sType* result_189;
struct sType* __result142__;
_Bool _if_conditional278;
struct sType* __result143__;
struct sType* result_190;
struct sType* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_189, 0, sizeof(struct sType*));
memset(&result_190, 0, sizeof(struct sType*));
            if(_if_conditional277=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional277) {
                __freed_obj__ = 0;
                memset(&result_189,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result142__ = __result_obj__ = result_189;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional278=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional278) {
                __result143__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result143__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_190,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result144__ = __result_obj__ = result_190;
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result145__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result145__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
struct sType* result_192;
struct sType* __result146__;
_Bool _if_conditional280;
struct sType* __result147__;
struct sType* result_193;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_192, 0, sizeof(struct sType*));
memset(&result_193, 0, sizeof(struct sType*));
            if(_if_conditional279=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional279) {
                __freed_obj__ = 0;
                memset(&result_192,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result146__ = __result_obj__ = result_192;
                __freed_obj__ = 0;
                return __result146__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional280=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional280) {
                __result147__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result147__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_193,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result148__ = __result_obj__ = result_193;
            __freed_obj__ = 0;
            return __result148__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
void* right_value183;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj60;
_Bool _if_conditional283;
void* right_value184;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj61;
void* right_value185;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj62;
struct list$1sTypeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value184, 0, sizeof(void*));
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value185, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional282=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value183=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value183;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_194, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_194, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj60=((struct list_item$1sTypeph*)come_null_check(litem_194, "./comelang2.h", 276))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_194, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_194;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_194;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional283=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional283) {
                            litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value184=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                            if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value184;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_195, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_195, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_195, "./comelang2.h", 286))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_195, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_195;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_195;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value185=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value185;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj62=((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 296))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_196;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_196;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result149__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result149__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value191;
void* right_value192;
void* right_value193;
int i_199;
_Bool _for_condtionalA12;
void* right_value194;
void* right_value195;
struct list$1charp* __dec_obj63;
struct map$2charphCVALUEph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&i_199, 0, sizeof(int));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value191;
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value192=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1123))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value192;
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value193;
            __freed_obj__ = 0;
            for(
            i_199=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA12=            i_199<1024 ,            __freed_obj__ = 0, 
            _for_condtionalA12;            i_199++ ,            __freed_obj__ = 0, 
            0            ){
                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_199]=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
            __freed_obj__ = 0;
            __dec_obj63=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value195=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value194=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
            if(__dec_obj63) { come_call_finalizer(list$1charp_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value194;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value195);
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value195;
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
            __freed_obj__ = 0;
            __result151__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result150__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result150__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_200;
_Bool _for_condtionalA13;
_Bool _if_conditional284;
_Bool _if_conditional285;
int i_201;
_Bool _for_condtionalA14;
_Bool _if_conditional286;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_200, 0, sizeof(int));
memset(&i_201, 0, sizeof(int));
                for(
                i_200=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA13=                i_200<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1172))->size ,                __freed_obj__ = 0, 
                _for_condtionalA13;                i_200++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional284=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_200],                    __freed_obj__ = 0, 
                    _if_conditional284) {
                        if(_if_conditional285=1,                        __freed_obj__ = 0, 
                        _if_conditional285) {
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1168))->items[i_200] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1168))->items[i_200], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1172))->items);
                __freed_obj__ = 0;
                for(
                i_201=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA14=                i_201<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1181))->size ,                __freed_obj__ = 0, 
                _for_condtionalA14;                i_201++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional286=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_201],                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        if(_if_conditional287=1,                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_201] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_201] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_201], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                __freed_obj__ = 0;
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
struct list_item$1charph* it_208;
int i_209;
_Bool _while_condtional28;
_Bool _if_conditional297;
void* right_value207;
void* right_value208;
struct optional$2charphbool* __result153__;
char* default_value_210;
void* right_value209;
void* right_value210;
struct optional$2charphbool* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_208, 0, sizeof(struct list_item$1charph*));
memset(&i_209, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&default_value_210, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
                            if(_if_conditional296=position<0,                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_208=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                            __freed_obj__ = 0;
                            i_209=0;
                            __freed_obj__ = 0;
                            while(_while_condtional28=it_208!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional28) {
                                if(_if_conditional297=position==i_209,                                __freed_obj__ = 0, 
                                _if_conditional297) {
                                    __result153__ = __result_obj__ = ((struct optional$2charphbool*)(right_value208=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value207=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_208, "./comelang2.h", 742))->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value207;
                                    __freed_obj__ = 0;
                                    return __result153__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_208=((struct list_item$1charph*)come_null_check(it_208, "./comelang2.h", 744))->next;
                                __freed_obj__ = 0;
                                i_209++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_210,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result154__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value210=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value209=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_210),(_Bool)0))));
                            if(default_value_210 && !__freed_obj__) { default_value_210 = come_decrement_ref_count(default_value_210, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value209;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value210;
                            __freed_obj__ = 0;
                            return __result154__;
                            __freed_obj__ = 0;
                            if(default_value_210 && !__freed_obj__) { default_value_210 = come_decrement_ref_count(default_value_210, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj69;
struct optional$2charphbool* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __dec_obj69=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                        ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                        __freed_obj__ = 0;
                                        __result152__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result152__;
                                        __freed_obj__ = 0;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional298=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional298) {
                                                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
char* default_value_211;
char* __result155__;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_211, 0, sizeof(char*));
                            if(_if_conditional299=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional299) {
                                __freed_obj__ = 0;
                                memset(&default_value_211,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result155__ = __result_obj__ = default_value_211;
                                __freed_obj__ = 0;
                                return __result155__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result156__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result156__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional302;
char* result_215;
char* __result158__;
_Bool _if_conditional303;
char* __result159__;
char* result_216;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_215, 0, sizeof(char*));
memset(&result_216, 0, sizeof(char*));
                        if(_if_conditional302=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional302) {
                            __freed_obj__ = 0;
                            memset(&result_215,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result158__ = __result_obj__ = result_215;
                            __freed_obj__ = 0;
                            return __result158__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional303=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional303) {
                            __result159__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result159__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_216,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result160__ = __result_obj__ = result_216;
                        __freed_obj__ = 0;
                        return __result160__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result161__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result161__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional304;
char* result_218;
char* __result162__;
_Bool _if_conditional305;
char* __result163__;
char* result_219;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_218, 0, sizeof(char*));
memset(&result_219, 0, sizeof(char*));
                        if(_if_conditional304=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional304) {
                            __freed_obj__ = 0;
                            memset(&result_218,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result162__ = __result_obj__ = result_218;
                            __freed_obj__ = 0;
                            return __result162__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional305=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional305) {
                            __result163__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result163__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_219,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result164__ = __result_obj__ = result_219;
                        __freed_obj__ = 0;
                        return __result164__;
                        __freed_obj__ = 0;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional322;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional31;
_Bool _if_conditional334;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a17;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool same_key_exist_239;
char* it2_240;
_Bool _for_condtionalA18;
void* right_value242;
struct optional$2boolbool* __exception_result_var_a18;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct map$2charphCVALUEph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
memset(&right_value241, 0, sizeof(void*));
memset(&same_key_exist_239, 0, sizeof(_Bool));
memset(&it2_240, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
                        if(_if_conditional322=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->size,                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            map$2charphCVALUEph_rehash(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1422)));
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        hash_237=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->size;
                        __freed_obj__ = 0;
                        it_238=hash_237;
                        __freed_obj__ = 0;
                        while(_while_condtional31=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional31) {
                            if(_if_conditional334=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_238],                            __freed_obj__ = 0, 
                            _if_conditional334) {
                                if(_if_conditional335=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a17=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_238], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a17)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241),
                                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value241, 
                                __freed_obj__ = 0, 
                                _if_conditional335) {
                                    if(_if_conditional336=1,                                    __freed_obj__ = 0, 
                                    _if_conditional336) {
                                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_238]);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_238] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_238] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_238], (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_238]=(char*)come_increment_ref_count(key);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_238]);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_238]=key;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional337=1,                                    __freed_obj__ = 0, 
                                    _if_conditional337) {
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->items[it_238] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->items[it_238], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1443))->items[it_238]=(struct CVALUE*)come_increment_ref_count(item);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1446))->items[it_238]=item;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_238++;
                                __freed_obj__ = 0;
                                if(_if_conditional338=it_238>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1460))->size,                                __freed_obj__ = 0, 
                                _if_conditional338) {
                                    it_238=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional339=it_238==hash_237,                                    __freed_obj__ = 0, 
                                    _if_conditional339) {
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
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_238]=(_Bool)1;
                                __freed_obj__ = 0;
                                if(_if_conditional340=1,                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_238]=(char*)come_increment_ref_count(key);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_238]=key;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional341=1,                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1470))->items[it_238]=(struct CVALUE*)come_increment_ref_count(item);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1473))->items[it_238]=item;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        same_key_exist_239=(_Bool)0;
                        __freed_obj__ = 0;
                        for(
                        it2_240=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA18=                        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA18;                        it2_240=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional342=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a18=((struct optional$2boolbool*)(right_value242=string_equals(((char*)come_null_check(it2_240, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a18)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242),
                            (right_value242 && right_value242 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value242, 
                            __freed_obj__ = 0, 
                            _if_conditional342) {
                                same_key_exist_239=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional343=!same_key_exist_239,                        __freed_obj__ = 0, 
                        _if_conditional343) {
                            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result176__ = __result_obj__ = self;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result176__;
                        __freed_obj__ = 0;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_220;
void* right_value235;
char** keys_221;
void* right_value236;
struct CVALUE** items_222;
void* right_value237;
_Bool* item_existance_223;
int len_224;
char* it_227;
_Bool _for_condtionalA17;
struct CVALUE* default_value_230;
void* right_value239;
struct CVALUE* it2_233;
unsigned int hash_234;
int n_235;
_Bool _while_condtional30;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
struct CVALUE* default_value_236;
void* right_value240;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_220, 0, sizeof(int));
memset(&right_value235, 0, sizeof(void*));
memset(&keys_221, 0, sizeof(char**));
memset(&right_value236, 0, sizeof(void*));
memset(&items_222, 0, sizeof(struct CVALUE**));
memset(&right_value237, 0, sizeof(void*));
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_230, 0, sizeof(struct CVALUE*));
memset(&right_value239, 0, sizeof(void*));
memset(&it2_233, 0, sizeof(struct CVALUE*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&n_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(struct CVALUE*));
memset(&right_value240, 0, sizeof(void*));
                                size_220=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                __freed_obj__ = 0;
                                keys_221=(char**)come_increment_ref_count(((char**)(right_value235=(char**)come_calloc(1, sizeof(char*)*(1*(size_220)), "./comelang2.h", 1370))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value235;
                                __freed_obj__ = 0;
                                items_222=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value236=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_220)), "./comelang2.h", 1371))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value236;
                                __freed_obj__ = 0;
                                item_existance_223=(_Bool*)come_increment_ref_count(((_Bool*)(right_value237=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_220)), "./comelang2.h", 1372))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
                                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value237;
                                __freed_obj__ = 0;
                                len_224=0;
                                __freed_obj__ = 0;
                                for(
                                it_227=map$2charphCVALUEph_begin(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA17=                                !map$2charphCVALUEph_end(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA17;                                it_227=map$2charphCVALUEph_next(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    __freed_obj__ = 0;
                                    memset(&default_value_230,0,sizeof(struct CVALUE*));
                                    __freed_obj__ = 0;
                                    it2_233=((struct CVALUE*)(right_value239=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1379)),it_227,default_value_230)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value239;
                                    __freed_obj__ = 0;
                                    hash_234=string_get_hash_key(((char*)come_null_check(it_227, "./comelang2.h", 1380)))%size_220;
                                    __freed_obj__ = 0;
                                    n_235=hash_234;
                                    __freed_obj__ = 0;
                                    while(_while_condtional30=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional30) {
                                        if(_if_conditional331=item_existance_223[n_235],                                        __freed_obj__ = 0, 
                                        _if_conditional331) {
                                            n_235++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional332=n_235>=size_220,                                            __freed_obj__ = 0, 
                                            _if_conditional332) {
                                                n_235=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional333=n_235==hash_234,                                                __freed_obj__ = 0, 
                                                _if_conditional333) {
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
                                            item_existance_223[n_235]=(_Bool)1;
                                            __freed_obj__ = 0;
                                            keys_221[n_235]=it_227;
                                            __freed_obj__ = 0;
                                            __freed_obj__ = 0;
                                            items_222[n_235]=((struct CVALUE*)(right_value240=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1400)),it_227,default_value_236)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                                            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value240;
                                            __freed_obj__ = 0;
                                            len_224++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))->items);
                                __freed_obj__ = 0;
                                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_221;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1413))->items=items_222;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_223;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1416))->size=size_220;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1417))->len=len_224;
                                __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional323;
char* result_225;
char* __result165__;
_Bool _if_conditional324;
char* __result166__;
char* result_226;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                                    if(_if_conditional323=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional323) {
                                        __freed_obj__ = 0;
                                        memset(&result_225,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result165__ = __result_obj__ = result_225;
                                        __freed_obj__ = 0;
                                        return __result165__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional324=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional324) {
                                        __result166__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                        __freed_obj__ = 0;
                                        return __result166__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_226,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result167__ = __result_obj__ = result_226;
                                    __freed_obj__ = 0;
                                    return __result167__;
                                    __freed_obj__ = 0;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result168__ = self==((void*)0)||((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result168__;
                                    __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional325;
char* result_228;
char* __result169__;
_Bool _if_conditional326;
char* __result170__;
char* result_229;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                                    if(_if_conditional325=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional325) {
                                        __freed_obj__ = 0;
                                        memset(&result_228,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result169__ = __result_obj__ = result_228;
                                        __freed_obj__ = 0;
                                        return __result169__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional326=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional326) {
                                        __result170__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                        __freed_obj__ = 0;
                                        return __result170__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_229,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result171__ = __result_obj__ = result_229;
                                    __freed_obj__ = 0;
                                    return __result171__;
                                    __freed_obj__ = 0;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional29;
_Bool _if_conditional327;
void* right_value238;
struct optional$2boolbool* __exception_result_var_a16;
_Bool _if_conditional328;
struct CVALUE* __result172__;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct CVALUE* __result173__;
struct CVALUE* __result174__;
struct CVALUE* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
memset(&right_value238, 0, sizeof(void*));
                                        hash_231=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                        __freed_obj__ = 0;
                                        it_232=hash_231;
                                        __freed_obj__ = 0;
                                        while(_while_condtional29=(_Bool)1,                                        __freed_obj__ = 0, 
                                        _while_condtional29) {
                                            if(_if_conditional327=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_232],                                            __freed_obj__ = 0, 
                                            _if_conditional327) {
                                                if(_if_conditional328=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a16=((struct optional$2boolbool*)(right_value238=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_232], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a16)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238),
                                                (right_value238 && right_value238 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value238, 
                                                __freed_obj__ = 0, 
                                                _if_conditional328) {
                                                    __result172__ = __result_obj__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1266))->items[it_232];
                                                    __freed_obj__ = 0;
                                                    return __result172__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                it_232++;
                                                __freed_obj__ = 0;
                                                if(_if_conditional329=it_232>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                __freed_obj__ = 0, 
                                                _if_conditional329) {
                                                    it_232=0;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional330=it_232==hash_231,                                                    __freed_obj__ = 0, 
                                                    _if_conditional330) {
                                                        __result173__ = __result_obj__ = default_value;
                                                        __freed_obj__ = 0;
                                                        return __result173__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __result174__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result174__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result175__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result175__;
                                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result177__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result177__;
            __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result178__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result178__;
            __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* default_value_243;
unsigned int hash_244;
unsigned int it_245;
_Bool _while_condtional32;
_Bool _if_conditional345;
void* right_value247;
struct optional$2boolbool* __exception_result_var_b3;
_Bool _if_conditional346;
void* right_value248;
void* right_value249;
struct optional$2CVALUEpbool* __result180__;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value250;
void* right_value251;
struct optional$2CVALUEpbool* __result181__;
void* right_value252;
void* right_value253;
struct optional$2CVALUEpbool* __result182__;
void* right_value254;
void* right_value255;
struct optional$2CVALUEpbool* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_243, 0, sizeof(struct CVALUE*));
memset(&hash_244, 0, sizeof(unsigned int));
memset(&it_245, 0, sizeof(unsigned int));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_243,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    hash_244=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1584))->size;
                    __freed_obj__ = 0;
                    it_245=hash_244;
                    __freed_obj__ = 0;
                    while(_while_condtional32=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional32) {
                        if(_if_conditional345=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_245],                        __freed_obj__ = 0, 
                        _if_conditional345) {
                            if(_if_conditional346=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b3=((struct optional$2boolbool*)(right_value247=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_245], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b3)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247),
                            (right_value247 && right_value247 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value247, 
                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                __result180__ = __result_obj__ = ((struct optional$2CVALUEpbool*)(right_value249=optional$2CVALUEpbool_initialize((struct optional$2CVALUEpbool*)come_increment_ref_count(((struct optional$2CVALUEpbool*)(right_value248=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1592))->items[it_245],(_Bool)1)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value248;
                                __freed_obj__ = 0;
                                return __result180__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_245++;
                            __freed_obj__ = 0;
                            if(_if_conditional347=it_245>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1603))->size,                            __freed_obj__ = 0, 
                            _if_conditional347) {
                                it_245=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional348=it_245==hash_244,                                __freed_obj__ = 0, 
                                _if_conditional348) {
                                    __result181__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2CVALUEpbool*)(right_value251=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value250=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1601))),default_value_243,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value250;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
                                    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value251;
                                    __freed_obj__ = 0;
                                    return __result181__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result182__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2CVALUEpbool*)(right_value253=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value252=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1605))),default_value_243,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value252;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
                            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value253;
                            __freed_obj__ = 0;
                            return __result182__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result183__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2CVALUEpbool*)(right_value255=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value254=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1609))),default_value_243,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value254;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value255;
                    __freed_obj__ = 0;
                    return __result183__;
                    __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2CVALUEpbool* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result179__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result179__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct CVALUE* optional$2CVALUEpbool_value(struct optional$2CVALUEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
struct CVALUE* default_value_246;
struct CVALUE* __result184__;
struct CVALUE* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_246, 0, sizeof(struct CVALUE*));
                    if(_if_conditional349=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional349) {
                        __freed_obj__ = 0;
                        memset(&default_value_246,0,sizeof(struct CVALUE*));
                        __freed_obj__ = 0;
                        __result184__ = __result_obj__ = default_value_246;
                        __freed_obj__ = 0;
                        return __result184__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result185__ = __result_obj__ = ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result185__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result188__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1327))->len;
            __freed_obj__ = 0;
            return __result188__;
            __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result189__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result189__;
                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
_Bool _if_conditional363;
struct list$1CVALUEph* __result190__;
struct list_item$1CVALUEph* it_256;
int i_257;
_Bool _while_condtional33;
_Bool _if_conditional364;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_257, 0, sizeof(int));
                        if(_if_conditional362=position<0,                        __freed_obj__ = 0, 
                        _if_conditional362) {
                            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 632))->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional363=position>=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 640))->len,                        __freed_obj__ = 0, 
                        _if_conditional363) {
                            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 636)),(struct CVALUE*)come_increment_ref_count(item));
                            __freed_obj__ = 0;
                            __result190__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result190__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_256=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 640))->head;
                        __freed_obj__ = 0;
                        i_257=0;
                        __freed_obj__ = 0;
                        while(_while_condtional33=it_256!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional33) {
                            if(_if_conditional364=position==i_257,                            __freed_obj__ = 0, 
                            _if_conditional364) {
                                __dec_obj87=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 644))->item;
                                ((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 644))->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj87) { come_call_finalizer(CVALUE_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_256=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 647))->next;
                            __freed_obj__ = 0;
                            i_257++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result191__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result191__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional365;
struct CVALUE* __result192__;
void* right_value273;
struct CVALUE* result_258;
_Bool _if_conditional366;
void* right_value274;
char* __dec_obj88;
_Bool _if_conditional367;
void* right_value275;
struct sType* __dec_obj89;
_Bool _if_conditional368;
struct CVALUE* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct CVALUE*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
                        if(_if_conditional365=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional365) {
                            __result192__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result192__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value273;
                        __freed_obj__ = 0;
                        if(_if_conditional366=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional366) {
                            __dec_obj88=((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 4))->c_value;
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value274=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value274;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional367=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional367) {
                            __dec_obj89=((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 5))->type;
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                            if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value275;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional368=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional368) {
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result193__ = __result_obj__ = result_258;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result193__;
                        __freed_obj__ = 0;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_265;
unsigned int hash_266;
unsigned int it_267;
_Bool _while_condtional34;
_Bool _if_conditional375;
void* right_value289;
struct optional$2boolbool* __exception_result_var_b4;
_Bool _if_conditional376;
void* right_value290;
void* right_value291;
struct optional$2sClasspbool* __result198__;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value292;
void* right_value293;
struct optional$2sClasspbool* __result199__;
void* right_value294;
void* right_value295;
struct optional$2sClasspbool* __result200__;
void* right_value296;
void* right_value297;
struct optional$2sClasspbool* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_265, 0, sizeof(struct sClass*));
memset(&hash_266, 0, sizeof(unsigned int));
memset(&it_267, 0, sizeof(unsigned int));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_265,0,sizeof(struct sClass*));
                __freed_obj__ = 0;
                hash_266=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_267=hash_266;
                __freed_obj__ = 0;
                while(_while_condtional34=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional34) {
                    if(_if_conditional375=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_267],                    __freed_obj__ = 0, 
                    _if_conditional375) {
                        if(_if_conditional376=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b4=((struct optional$2boolbool*)(right_value289=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_267], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b4)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289),
                        (right_value289 && right_value289 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value289, 
                        __freed_obj__ = 0, 
                        _if_conditional376) {
                            __result198__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value291=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value290=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_267],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value290;
                            __freed_obj__ = 0;
                            return __result198__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_267++;
                        __freed_obj__ = 0;
                        if(_if_conditional377=it_267>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional377) {
                            it_267=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional378=it_267==hash_266,                            __freed_obj__ = 0, 
                            _if_conditional378) {
                                __result199__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value293=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value292=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_265,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                                if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value292;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
                                if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value293;
                                __freed_obj__ = 0;
                                return __result199__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result200__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value295=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value294=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_265,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value294;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value295);
                        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value295;
                        __freed_obj__ = 0;
                        return __result200__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result201__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value297=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value296=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_265,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value296;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value297);
                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value297;
                __freed_obj__ = 0;
                return __result201__;
                __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result197__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result197__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional379;
struct sClass* default_value_268;
struct sClass* __result202__;
struct sClass* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_268, 0, sizeof(struct sClass*));
                if(_if_conditional379=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional379) {
                    __freed_obj__ = 0;
                    memset(&default_value_268,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    __result202__ = __result_obj__ = default_value_268;
                    __freed_obj__ = 0;
                    return __result202__;
                    __freed_obj__ = 0;
                }
                else {
                    __result203__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result203__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional382=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional382) {
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
                __result205__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result205__;
                __freed_obj__ = 0;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value351;
void* right_value352;
struct list$1tuple2$2charphsNodephph* params_300;
void* right_value356;
void* right_value359;
void* right_value360;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value361;
_Bool _while_condtional36;
_Bool _if_conditional401;
char* p_305;
int sline_306;
_Bool err_flag_307;
void* right_value362;
char* label_308;
_Bool _if_conditional402;
void* right_value363;
char* __dec_obj104;
_Bool _if_conditional403;
char* __dec_obj105;
_Bool no_comma_309;
void* right_value364;
struct sNode* node_310;
void* right_value365;
struct sNode* __dec_obj106;
void* right_value366;
void* right_value367;
_Bool _if_conditional404;
_Bool _if_conditional405;
struct buffer* method_block_311;
int method_block_sline_312;
_Bool _if_conditional406;
char* head_313;
void* right_value368;
char* tail_314;
void* right_value369;
void* right_value370;
struct buffer* __dec_obj107;
int len_315;
void* right_value371;
char* mem_316;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value382;
struct sNode* node_318;
void* right_value383;
struct sNode* __dec_obj113;
struct sNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&params_300, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&p_305, 0, sizeof(char*));
memset(&sline_306, 0, sizeof(int));
memset(&err_flag_307, 0, sizeof(_Bool));
memset(&right_value362, 0, sizeof(void*));
memset(&label_308, 0, sizeof(char*));
memset(&right_value363, 0, sizeof(void*));
memset(&no_comma_309, 0, sizeof(_Bool));
memset(&right_value364, 0, sizeof(void*));
memset(&node_310, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&method_block_311, 0, sizeof(struct buffer*));
memset(&method_block_sline_312, 0, sizeof(int));
memset(&head_313, 0, sizeof(char*));
memset(&right_value368, 0, sizeof(void*));
memset(&tail_314, 0, sizeof(char*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&len_315, 0, sizeof(int));
memset(&right_value371, 0, sizeof(void*));
memset(&mem_316, 0, sizeof(char*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&node_318, 0, sizeof(struct sNode*));
memset(&right_value383, 0, sizeof(void*));
    params_300=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value352=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value351=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 855))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value351;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value352);
    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value352;
    __freed_obj__ = 0;
    list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_300, "20method.c", 856)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value360=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value356=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 856)))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(obj)))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value356);
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value356;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value359);
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value359;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value360);
    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value360;
    __freed_obj__ = 0;
    if(_if_conditional398=*((struct sInfo*)come_null_check(info, "20method.c", 863))->p==45&&*(((struct sInfo*)come_null_check(info, "20method.c", 863))->p+1)==62,    __freed_obj__ = 0, 
    _if_conditional398) {
        ((struct sInfo*)come_null_check(info, "20method.c", 859))->p+=2;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional399=*((struct sInfo*)come_null_check(info, "20method.c", 917))->p!=123,    __freed_obj__ = 0, 
    _if_conditional399) {
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("20method.c", 864),((struct optional$2intbool*)(right_value361=expected_next_character(40,info)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value361;
        __freed_obj__ = 0;
        while(_while_condtional36=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional36) {
            if(_if_conditional401=*((struct sInfo*)come_null_check(info, "20method.c", 873))->p==41,            __freed_obj__ = 0, 
            _if_conditional401) {
                ((struct sInfo*)come_null_check(info, "20method.c", 868))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            p_305=((struct sInfo*)come_null_check(info, "20method.c", 873))->p;
            __freed_obj__ = 0;
            sline_306=((struct sInfo*)come_null_check(info, "20method.c", 874))->sline;
            __freed_obj__ = 0;
            err_flag_307=(_Bool)0;
            __freed_obj__ = 0;
            label_308=(char*)come_increment_ref_count(((char*)(right_value362=__builtin_string(""))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value362;
            __freed_obj__ = 0;
            if(_if_conditional402=xisalpha(*((struct sInfo*)come_null_check(info, "20method.c", 881))->p)||*((struct sInfo*)come_null_check(info, "20method.c", 881))->p==95,            __freed_obj__ = 0, 
            _if_conditional402) {
                come_clear_stackframe();
                __dec_obj104=label_308;
                label_308=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("20method.c", 879),((struct optional$2charphbool*)(right_value363=parse_word(info))))));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value363;
                __freed_obj__ = 0;
                err_flag_307=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional403=err_flag_307==(_Bool)1&&*((struct sInfo*)come_null_check(info, "20method.c", 894))->p==58,            __freed_obj__ = 0, 
            _if_conditional403) {
                ((struct sInfo*)come_null_check(info, "20method.c", 884))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                __dec_obj105=label_308;
                label_308=((void*)0);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "20method.c", 890))->p=p_305;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "20method.c", 891))->sline=sline_306;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            no_comma_309=((struct sInfo*)come_null_check(info, "20method.c", 894))->no_comma;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 895))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value364;
            __freed_obj__ = 0;
            __dec_obj106=node_310;
            node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_310),info))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value365);
            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value365;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 901))->no_comma=no_comma_309;
            __freed_obj__ = 0;
            list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_300, "20method.c", 903)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value367=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value366=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 903)))),(char*)come_increment_ref_count(label_308),(struct sNode*)come_increment_ref_count(node_310))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value366);
            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value366;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value367);
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value367;
            __freed_obj__ = 0;
            if(_if_conditional404=*((struct sInfo*)come_null_check(info, "20method.c", 914))->p==44,            __freed_obj__ = 0, 
            _if_conditional404) {
                ((struct sInfo*)come_null_check(info, "20method.c", 906))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional405=*((struct sInfo*)come_null_check(info, "20method.c", 914))->p==41,                __freed_obj__ = 0, 
                _if_conditional405) {
                    ((struct sInfo*)come_null_check(info, "20method.c", 910))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(label_308 && !__freed_obj__) { label_308 = come_decrement_ref_count(label_308, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0); } 
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(label_308 && !__freed_obj__) { label_308 = come_decrement_ref_count(label_308, (void*)0, (void*)0, 0, 0, 0); }
            if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    method_block_311=((void*)0);
    __freed_obj__ = 0;
    method_block_sline_312=0;
    __freed_obj__ = 0;
    if(_if_conditional406=*((struct sInfo*)come_null_check(info, "20method.c", 940))->p==123,    __freed_obj__ = 0, 
    _if_conditional406) {
        head_313=((struct sInfo*)come_null_check(info, "20method.c", 922))->p;
        __freed_obj__ = 0;
        method_block_sline_312=((struct sInfo*)come_null_check(info, "20method.c", 923))->sline;
        __freed_obj__ = 0;
        ((char*)(right_value368=skip_block(info)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value368;
        __freed_obj__ = 0;
        tail_314=((struct sInfo*)come_null_check(info, "20method.c", 927))->p;
        __freed_obj__ = 0;
        __dec_obj107=method_block_311;
        method_block_311=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value370=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value369=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 929))))))));
        if(__dec_obj107) { come_call_finalizer(buffer_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value369);
        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value369;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value370);
        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value370;
        __freed_obj__ = 0;
        len_315=tail_314-head_313;
        __freed_obj__ = 0;
        mem_316=(char*)come_increment_ref_count(((char*)(right_value371=(char*)come_calloc(1, sizeof(char)*(1*(len_315+1)), "20method.c", 932))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value371);
        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value371;
        __freed_obj__ = 0;
        memcpy(mem_316,head_313,len_315);
        __freed_obj__ = 0;
        mem_316[len_315]=0;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(method_block_311, "20method.c", 936)),mem_316);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(method_block_311, "20method.c", 937)),"\n");
        __freed_obj__ = 0;
        if(mem_316 && !__freed_obj__) { mem_316 = come_decrement_ref_count(mem_316, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 942);
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value375=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value372=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 942)))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value374=list$1tuple2$2charphsNodephphp_clone(params_300)))),method_block_311,method_block_sline_312,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value372;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value373);
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[6] = right_value373;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value374;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value375);
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value375;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value382);
    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[9] = right_value382;
    __freed_obj__ = 0;
    __dec_obj113=node_318;
    node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=exception_get_value((struct sNode*)come_increment_ref_count(node_318),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value383);
    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value383;
    __freed_obj__ = 0;
    __result215__ = __result_obj__ = node_318;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_300 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_300, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_311 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_311, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_300 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_300, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_311 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_311, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional396;
void* right_value353;
struct list_item$1tuple2$2charphsNodephph* litem_301;
struct tuple2$2charphsNodeph* __dec_obj99;
_Bool _if_conditional397;
void* right_value354;
struct list_item$1tuple2$2charphsNodephph* litem_302;
struct tuple2$2charphsNodeph* __dec_obj100;
void* right_value355;
struct list_item$1tuple2$2charphsNodephph* litem_303;
struct tuple2$2charphsNodeph* __dec_obj101;
struct list$1tuple2$2charphsNodephph* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value353, 0, sizeof(void*));
memset(&litem_301, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value354, 0, sizeof(void*));
memset(&litem_302, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value355, 0, sizeof(void*));
memset(&litem_303, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional396=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional396) {
            litem_301=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value353=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
            if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value353;
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj99=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 276))->item;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 276))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj99) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_301;
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_301;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional397=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional397) {
                litem_302=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value354=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value354;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj100=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 286))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 286))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj100) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_302;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_302;
                __freed_obj__ = 0;
            }
            else {
                litem_303=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value355=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value355;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_303, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_303, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj101=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_303, "./comelang2.h", 296))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_303, "./comelang2.h", 296))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj101) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_303;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_303;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result209__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result209__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value357;
char* __dec_obj102;
void* right_value358;
struct sNode* __dec_obj103;
struct tuple2$2charphsNodeph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
        __dec_obj102=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value357=string_clone(v1))));
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value357;
        __freed_obj__ = 0;
        __dec_obj103=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(v2))));
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
        if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value358;
        __freed_obj__ = 0;
        __result210__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result210__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional400;
int default_value_304;
int __result211__;
int __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_304, 0, sizeof(int));
            if(_if_conditional400=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional400) {
                __freed_obj__ = 0;
                memset(&default_value_304,0,sizeof(int));
                __freed_obj__ = 0;
                __result211__ = default_value_304;
                __freed_obj__ = 0;
                return __result211__;
                __freed_obj__ = 0;
            }
            else {
                __result212__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result212__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional407=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional407) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->finalize, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional408=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional408) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional409=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional409) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional410=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional410) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional411=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 5))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional411) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional412;
struct sMethodCallNode* __result213__;
void* right_value376;
struct sMethodCallNode* result_317;
_Bool _if_conditional413;
void* right_value377;
struct sNode* __dec_obj108;
_Bool _if_conditional414;
void* right_value378;
char* __dec_obj109;
_Bool _if_conditional415;
void* right_value379;
struct list$1tuple2$2charphsNodephph* __dec_obj110;
_Bool _if_conditional416;
void* right_value380;
struct buffer* __dec_obj111;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value381;
char* __dec_obj112;
_Bool _if_conditional419;
struct sMethodCallNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sMethodCallNode*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
        if(_if_conditional412=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional412) {
            __result213__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result213__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_317=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value376=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value376;
        __freed_obj__ = 0;
        if(_if_conditional413=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional413) {
            __dec_obj108=((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 4))->obj;
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 4))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 4))->obj))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value377;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional414=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional414) {
            __dec_obj109=((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 5))->fun_name;
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 5))->fun_name=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->fun_name))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value378;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional415=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional415) {
            __dec_obj110=((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 6))->params;
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 6))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value379=list$1tuple2$2charphsNodephphp_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->params))));
            if(__dec_obj110) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value379;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional416=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8))->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional416) {
            __dec_obj111=((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 7))->method_block;
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 7))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=buffer_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->method_block))));
            if(__dec_obj111) { come_call_finalizer(buffer_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value380;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 8))->sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional418=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional418) {
            __dec_obj112=((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 9))->sname;
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value381=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9))->sname))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value381;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional419=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional419) {
            ((struct sMethodCallNode*)come_null_check(result_317, "sMethodCallNode_clone", 10))->method_block_sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10))->method_block_sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result214__ = __result_obj__ = result_317;
        if(result_317 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result214__;
        __freed_obj__ = 0;
        if(result_317 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional420;
void* right_value384;
void* right_value385;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value388;
void* right_value389;
void* right_value390;
struct sNode* __result219__;
void* right_value391;
struct __current_stack1__ __current_stack1__;
void* right_value394;
struct sNode* result_320;
void* right_value395;
void* right_value396;
struct sNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value394, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
    if(_if_conditional420=charp_operator_equals(buf,"__current__"),    __freed_obj__ = 0, 
    _if_conditional420) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 951);
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value385=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value384=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 951)))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result219__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value390=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value389=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 951)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=_inf_value3))),(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value384;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value385);
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value385;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value388);
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value388;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value389);
        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value389;
        __freed_obj__ = 0;
        return __result219__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("20method.c", 958),((struct optional$2sNodephbool*)(right_value391=string_node_v15(buf,head,head_sline,info)))), "20method.c", 958)),&__current_stack1__,(void*)method_block1_20methodc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value391;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value394);
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value394;
    __freed_obj__ = 0;
    __result223__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value396=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value395=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 958)))),(struct sNode*)come_increment_ref_count(result_320),(_Bool)1)));
    if(result_320 && !__freed_obj__) { result_320 = come_decrement_ref_count(result_320, ((struct sNode*)result_320)->finalize, ((struct sNode*)result_320)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value395);
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value395;
    __freed_obj__ = 0;
    return __result223__;
    __freed_obj__ = 0;
    if(result_320 && !__freed_obj__) { result_320 = come_decrement_ref_count(result_320, ((struct sNode*)result_320)->finalize, ((struct sNode*)result_320)->_protocol_obj, 0, 0, 0); } 
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional421=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 1))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional421) {
                if(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional422;
struct sCurrentNode* __result216__;
void* right_value386;
struct sCurrentNode* result_319;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value387;
char* __dec_obj114;
struct sCurrentNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value386, 0, sizeof(void*));
memset(&result_319, 0, sizeof(struct sCurrentNode*));
memset(&right_value387, 0, sizeof(void*));
            if(_if_conditional422=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional422) {
                __result216__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result216__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_319=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value386=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value386;
            __freed_obj__ = 0;
            if(_if_conditional423=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional423) {
                ((struct sCurrentNode*)come_null_check(result_319, "sCurrentNode_clone", 4))->sline=((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 4))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional424=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional424) {
                __dec_obj114=((struct sCurrentNode*)come_null_check(result_319, "sCurrentNode_clone", 5))->sname;
                ((struct sCurrentNode*)come_null_check(result_319, "sCurrentNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value387=string_clone(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5))->sname))));
                if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value387;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result217__ = __result_obj__ = result_319;
            if(result_319 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result217__;
            __freed_obj__ = 0;
            if(result_319 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj115;
struct optional$2sNodephbool* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj115=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result218__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result218__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional425=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional425) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional426;
_Bool _if_conditional427;
struct sNode* __result220__;
struct sNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional426=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional426) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional427=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional427) {
                __result220__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result220__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result221__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result221__;
        __freed_obj__ = 0;
}

void method_block1_20methodc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value392;
void* right_value393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
        if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value392;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
        if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value393;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("20method.c", 956), ((struct optional$2voidpbool*)(right_value393=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value392=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "20method.c", 956))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result222__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result222__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value397;
struct sNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
    __result224__ = __result_obj__ = ((struct sNode*)(right_value397=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result224__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

