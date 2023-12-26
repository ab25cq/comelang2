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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
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

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, _Bool check_no_pointer, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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







_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* generics_type_24;
_Bool _if_conditional87;
struct sType* __dec_obj23;
struct sClass* klass_25;
char* class_name_26;
char* fun_name2_27;
struct sFun* operator_fun_28;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value35;
char* none_generics_name_29;
void* right_value36;
struct sType* obj_type_30;
void* right_value37;
char* __dec_obj24;
void* right_value38;
char* fun_name3_31;
void* right_value40;
struct sGenericsFun* generics_fun_35;
_Bool _if_conditional104;
void* right_value41;
_Bool _if_conditional105;
_Bool __result32__;
void* right_value51;
void* right_value52;
char* __dec_obj25;
int i_40;
_Bool _for_condtionalA1;
void* right_value53;
char* new_fun_name_41;
void* right_value54;
_Bool _if_conditional111;
void* right_value55;
char* __dec_obj26;
_Bool _if_conditional112;
void* right_value56;
_Bool result_42;
_Bool _if_conditional113;
void* right_value57;
struct CVALUE* come_value_43;
char* left_value2_44;
void* right_value58;
void* right_value59;
void* right_value64;
void* right_value65;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
char* __dec_obj28;
_Bool _if_conditional123;
void* right_value66;
char* __dec_obj29;
_Bool _if_conditional124;
void* right_value67;
char* __dec_obj30;
void* right_value68;
char* __dec_obj31;
_Bool _if_conditional125;
void* right_value69;
char* __dec_obj32;
void* right_value70;
char* __dec_obj33;
void* right_value71;
char* __dec_obj34;
char* middle_value2_49;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
char* __dec_obj35;
_Bool _if_conditional129;
void* right_value76;
char* __dec_obj36;
_Bool _if_conditional130;
void* right_value77;
char* __dec_obj37;
void* right_value78;
char* __dec_obj38;
_Bool _if_conditional131;
void* right_value79;
char* __dec_obj39;
void* right_value80;
char* __dec_obj40;
void* right_value81;
char* __dec_obj41;
char* right_value2_50;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __dec_obj42;
_Bool _if_conditional135;
void* right_value86;
char* __dec_obj43;
_Bool _if_conditional136;
void* right_value87;
char* __dec_obj44;
void* right_value88;
char* __dec_obj45;
_Bool _if_conditional137;
void* right_value89;
char* __dec_obj46;
void* right_value90;
char* __dec_obj47;
void* right_value91;
char* __dec_obj48;
void* right_value92;
char* __dec_obj49;
void* right_value93;
struct sType* result_type1_51;
void* right_value94;
struct sType* result_type2_52;
void* right_value95;
struct sType* __dec_obj50;
_Bool _if_conditional138;
void* right_value96;
char* __dec_obj51;
_Bool _if_conditional139;
void* right_value97;
char* __dec_obj52;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&generics_type_24, 0, sizeof(struct sType*));
memset(&klass_25, 0, sizeof(struct sClass*));
memset(&class_name_26, 0, sizeof(char*));
memset(&fun_name2_27, 0, sizeof(char*));
memset(&operator_fun_28, 0, sizeof(struct sFun*));
memset(&right_value35, 0, sizeof(void*));
memset(&none_generics_name_29, 0, sizeof(char*));
memset(&right_value36, 0, sizeof(void*));
memset(&obj_type_30, 0, sizeof(struct sType*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&fun_name3_31, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&generics_fun_35, 0, sizeof(struct sGenericsFun*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&i_40, 0, sizeof(int));
memset(&right_value53, 0, sizeof(void*));
memset(&new_fun_name_41, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&result_42, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_43, 0, sizeof(struct CVALUE*));
memset(&left_value2_44, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&middle_value2_49, 0, sizeof(char*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value2_50, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&result_type1_51, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_type2_52, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
    generics_type_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional87=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "18field.c", 11))->mNoSolvedGenericsType, "18field.c", 11))->v1,    __freed_obj__ = 0, 
    _if_conditional87) {
        __dec_obj23=generics_type_24;
        generics_type_24=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "18field.c", 8))->mNoSolvedGenericsType, "18field.c", 8))->v1);
        if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_25=((struct sType*)come_null_check(type, "18field.c", 11))->mClass;
    __freed_obj__ = 0;
    class_name_26=((struct sClass*)come_null_check(klass_25, "18field.c", 12))->mName;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    operator_fun_28=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional88=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21))->mNoSolvedGenericsType, "18field.c", 21))->v1,    __freed_obj__ = 0, 
    _if_conditional88) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18))->mNoSolvedGenericsType, "18field.c", 18))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional89=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 58))->mGenericsTypes, "18field.c", 58)))>0,    __freed_obj__ = 0, 
    _if_conditional89) {
        none_generics_name_29=(char*)come_increment_ref_count(((char*)(right_value35=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22))->mClass, "18field.c", 22))->mName))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(type,((struct sInfo*)come_null_check(info, "18field.c", 24))->generics_type,info))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value37=create_method_name(obj_type_30,(_Bool)0,fun_name,info))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_31=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("%s_%s",none_generics_name_29,fun_name))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_35=((struct sGenericsFun*)(right_value40=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29))->generics_funcs, "18field.c", 29)),fun_name3_31,((void*)0))));
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional104=generics_fun_35,        __freed_obj__ = 0, 
        _if_conditional104) {
            if(_if_conditional105=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(fun_name2_27)))),generics_fun_35,obj_type_30,info),            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional105) {
                __result32__ = (_Bool)0;
                if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 37),((struct optional$2sFunpbool*)(right_value51=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 37))->funcs,fun_name2_27)))));
        come_pop_stackframe();
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj25=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value52=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_40=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_40>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_40-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_41=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("%s_v%d",fun_name2_27,i_40))));
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 45),((struct optional$2sFunpbool*)(right_value54=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 45))->funcs,new_fun_name_41)))));
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional111=operator_fun_28,            __freed_obj__ = 0, 
            _if_conditional111) {
                __dec_obj26=fun_name2_27;
                fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(new_fun_name_41))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_41 && !__freed_obj__) { new_fun_name_41 = come_decrement_ref_count(new_fun_name_41, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_41 && !__freed_obj__) { new_fun_name_41 = come_decrement_ref_count(new_fun_name_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional112=operator_fun_28==((void*)0),        __freed_obj__ = 0, 
        _if_conditional112) {
            come_clear_stackframe();
            operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 54),((struct optional$2sFunpbool*)(right_value56=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 54))->funcs,fun_name2_27)))));
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_42=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional113=operator_fun_28&&(list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 186))->mGenericsTypes, "18field.c", 186)))>0||(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 186))->type, "18field.c", 186))->mClass, "18field.c", 186))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 186))->type, "18field.c", 186))->mClass, "18field.c", 186))->mName)&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 186))->type, "18field.c", 186))->mPointerNum==((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 186))->type, "18field.c", 186))->mPointerNum)),    __freed_obj__ = 0, 
    _if_conditional113) {
        come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61))));
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 63),((struct optional$2sTypephbool*)(right_value64=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 63))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "18field.c", 63))->type,(_Bool)0,info);
        come_pop_stackframe();
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional120=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 95),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value65=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 95))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "18field.c", 95))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 95))->type, "18field.c", 95))->mHeap,        (right_value65 && right_value65 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional120) {
            if(_if_conditional121=((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->var,            __freed_obj__ = 0, 
            _if_conditional121) {
                if(_if_conditional122=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional122) {
                    __dec_obj28=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName=((void*)0);
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional123=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional123) {
                        __dec_obj29=((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value=(char*)come_increment_ref_count(((char*)(right_value66=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value,info))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional124=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional124) {
                            __dec_obj30=((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value=(char*)come_increment_ref_count(((char*)(right_value67=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value,info))));
                            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj31=((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value=(char*)come_increment_ref_count(((char*)(right_value68=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value,info))));
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional125=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 89))->type, "18field.c", 89))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional125) {
                }
                else {
                    __dec_obj32=((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value=(char*)come_increment_ref_count(((char*)(right_value69=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value,info))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj33=left_value2_44;
            left_value2_44=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_44;
            left_value2_44=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(((struct CVALUE*)come_null_check(left_value, "18field.c", 93))->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 96),((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 96))->mParamTypes,1))))),((struct CVALUE*)come_null_check(middle_value, "18field.c", 96))->type,(_Bool)0,info);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional126=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 128),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 128))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "18field.c", 128))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 128))->type, "18field.c", 128))->mHeap,        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional126) {
            if(_if_conditional127=((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->var,            __freed_obj__ = 0, 
            _if_conditional127) {
                if(_if_conditional128=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional128) {
                    __dec_obj35=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName=((void*)0);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional129=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional129) {
                        __dec_obj36=((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value;
                        ((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value,info))));
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional130=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional130) {
                            __dec_obj37=((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value,info))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj38=((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value,info))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional131=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 122))->type, "18field.c", 122))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional131) {
                }
                else {
                    __dec_obj39=((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value;
                    ((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value,info))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj40=middle_value2_49;
            middle_value2_49=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s",((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->c_value))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj41=middle_value2_49;
            middle_value2_49=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(((struct CVALUE*)come_null_check(middle_value, "18field.c", 126))->c_value))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 129),((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 129))->mParamTypes,2))))),((struct CVALUE*)come_null_check(right_value, "18field.c", 129))->type,(_Bool)0,info);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional132=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 162),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 162))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_a4)), "18field.c", 162))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 162))->type, "18field.c", 162))->mHeap,        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional132) {
            if(_if_conditional133=((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->var,            __freed_obj__ = 0, 
            _if_conditional133) {
                if(_if_conditional134=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional134) {
                    __dec_obj42=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName=((void*)0);
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional135=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        __dec_obj43=((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value,info))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional136=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            __dec_obj44=((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value,info))));
                            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj45=((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value=(char*)come_increment_ref_count(((char*)(right_value88=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value,info))));
                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional137=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 155))->type, "18field.c", 155))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional137) {
                }
                else {
                    __dec_obj46=((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value=(char*)come_increment_ref_count(((char*)(right_value89=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value,info))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj47=right_value2_50;
            right_value2_50=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj48=right_value2_50;
            right_value2_50=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(((struct CVALUE*)come_null_check(right_value, "18field.c", 159))->c_value))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj49=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 162))->c_value;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s(%s,%s,%s)",fun_name2_27,left_value2_44,middle_value2_49,right_value2_50))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type1_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 164))->mResultType))));
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type2_52=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=solve_generics(result_type1_51,generics_type_24,info))));
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj50=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 168))->type;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 168))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(result_type2_52))));
        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 169))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional138=((struct sType*)come_null_check(result_type2_52, "18field.c", 175))->mHeap,        __freed_obj__ = 0, 
        _if_conditional138) {
            __dec_obj51=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value;
            ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value=(char*)come_increment_ref_count(((char*)(right_value96=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value,(struct sType*)come_increment_ref_count(result_type2_52),info))));
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional139=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 179))->mResultType, "18field.c", 179))->mException,        __freed_obj__ = 0, 
        _if_conditional139) {
            __dec_obj52=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value;
            ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value=(char*)come_increment_ref_count(((char*)(right_value97=append_exception_value(((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value,((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->type,info))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_43, "18field.c", 179))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 181))->stack, "18field.c", 181)),(struct CVALUE*)come_increment_ref_count(come_value_43));
        __freed_obj__ = 0;
        result_42=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_43 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_44 && !__freed_obj__) { left_value2_44 = come_decrement_ref_count(left_value2_44, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_49 && !__freed_obj__) { middle_value2_49 = come_decrement_ref_count(middle_value2_49, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_50 && !__freed_obj__) { right_value2_50 = come_decrement_ref_count(right_value2_50, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result46__ = result_42;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct sType* __result7__;
void* right_value0;
struct sType* result_0;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value3;
struct tuple1$1sTypeph* __dec_obj2;
_Bool _if_conditional23;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional24;
void* right_value5;
char* __dec_obj4;
_Bool _if_conditional25;
void* right_value12;
struct list$1sTypeph* __dec_obj8;
_Bool _if_conditional29;
void* right_value20;
struct list$1sNodeph* __dec_obj12;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional44;
void* right_value28;
struct list$1charph* __dec_obj17;
_Bool _if_conditional48;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value30;
struct sNode* __dec_obj19;
_Bool _if_conditional51;
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
void* right_value31;
struct sNode* __dec_obj20;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value32;
char* __dec_obj21;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value33;
char* __dec_obj22;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result7__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            __dec_obj2=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj8=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj12=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional42=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional42) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional43) {
            __dec_obj13=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj17=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional50) {
            __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
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
_Bool _if_conditional2;
_Bool _if_conditional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional2=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional2) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional4=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional4) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional5) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional13) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional16) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional3=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional3) {
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
                    while(_while_condtional1=it_1!=((void*)0),                    __freed_obj__ = 0, 
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
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional7=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional7) {
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
                    while(_while_condtional2=it_3!=((void*)0),                    __freed_obj__ = 0, 
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
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional9=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional9) {
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
                    while(_while_condtional3=it_5!=((void*)0),                    __freed_obj__ = 0, 
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
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional12=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional12) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
struct tuple1$1sTypeph* __result8__;
void* right_value1;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional22;
void* right_value2;
struct sType* __dec_obj1;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(_if_conditional20=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional20) {
                    __result8__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result8__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __dec_obj1=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional21=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
struct list$1sTypeph* __result10__;
void* right_value6;
void* right_value7;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value11;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
                if(_if_conditional26=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __result10__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result10__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value6=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional27;
void* right_value8;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj5;
_Bool _if_conditional28;
void* right_value9;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj6;
void* right_value10;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj7;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional27=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional27) {
                            litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional28) {
                                litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional30;
struct list$1sNodeph* __result14__;
void* right_value13;
void* right_value14;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value19;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result14__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value13=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
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
_Bool _if_conditional31;
void* right_value15;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
_Bool _if_conditional32;
void* right_value16;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
void* right_value17;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional33;
struct sNode* __result17__;
void* right_value18;
struct sNode* result_18;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                        if(_if_conditional33=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            __result17__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result17__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(_if_conditional34=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional34) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional35=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional36=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional37=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
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
_Bool _if_conditional45;
struct list$1charph* __result20__;
void* right_value22;
void* right_value23;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value27;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
                if(_if_conditional45=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    __result20__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
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
_Bool _if_conditional46;
void* right_value24;
struct list_item$1charph* litem_21;
char* __dec_obj14;
_Bool _if_conditional47;
void* right_value25;
struct list_item$1charph* litem_22;
char* __dec_obj15;
void* right_value26;
struct list_item$1charph* litem_23;
char* __dec_obj16;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional46=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional46) {
                            litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result25__;
        __freed_obj__ = 0;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_32;
unsigned int it_33;
_Bool _while_condtional7;
_Bool _if_conditional90;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional92;
struct sGenericsFun* __result28__;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct sGenericsFun* __result29__;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_32, 0, sizeof(unsigned int));
memset(&it_33, 0, sizeof(unsigned int));
memset(&right_value39, 0, sizeof(void*));
            hash_32=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1227)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1227))->size;
            __freed_obj__ = 0;
            it_33=hash_32;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional90=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1250))->item_existance[it_33],                __freed_obj__ = 0, 
                _if_conditional90) {
                    if(_if_conditional92=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1238),__exception_result_var_a1=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1238))->keys[it_33], "./comelang2.h", 1238)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional92) {
                        __result28__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1235))->items[it_33];
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_33++;
                    __freed_obj__ = 0;
                    if(_if_conditional93=it_33>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1246))->size,                    __freed_obj__ = 0, 
                    _if_conditional93) {
                        it_33=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional94=it_33==hash_32,                        __freed_obj__ = 0, 
                        _if_conditional94) {
                            __result29__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result30__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result31__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional91;
_Bool default_value_34;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_34, 0, sizeof(_Bool));
                        if(_if_conditional91=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional91) {
                            __freed_obj__ = 0;
                            memset(&default_value_34,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result26__ = default_value_34;
                            __freed_obj__ = 0;
                            return __result26__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result27__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result27__;
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

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional95=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_36;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional8;
_Bool _if_conditional106;
void* right_value42;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional107;
void* right_value43;
void* right_value44;
struct optional$2sFunpbool* __result34__;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value45;
void* right_value46;
struct optional$2sFunpbool* __result35__;
void* right_value47;
void* right_value48;
struct optional$2sFunpbool* __result36__;
void* right_value49;
void* right_value50;
struct optional$2sFunpbool* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_36, 0, sizeof(struct sFun*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_36,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_37=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1553)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1553))->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional106=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1576))->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional106) {
                    if(_if_conditional107=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1564),__exception_result_var_b1=((struct optional$2boolbool*)(right_value42=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1564))->keys[it_38], "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value42 && right_value42 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        __result34__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value44=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value43=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1561)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1561))->items[it_38],(_Bool)1)));
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional108=it_38>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1572))->size,                    __freed_obj__ = 0, 
                    _if_conditional108) {
                        it_38=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional109=it_38==hash_37,                        __freed_obj__ = 0, 
                        _if_conditional109) {
                            __result35__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1570), ((struct optional$2sFunpbool*)(right_value46=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value45=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1570))),default_value_36,(_Bool)0))));
                            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result35__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result36__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1574), ((struct optional$2sFunpbool*)(right_value48=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value47=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1574))),default_value_36,(_Bool)0))));
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result37__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1578), ((struct optional$2sFunpbool*)(right_value50=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value49=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1578))),default_value_36,(_Bool)0))));
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result33__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result33__;
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
_Bool _if_conditional110;
struct sFun* default_value_39;
struct sFun* __result38__;
struct sFun* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(struct sFun*));
            if(_if_conditional110=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional110) {
                __freed_obj__ = 0;
                memset(&default_value_39,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result38__ = __result_obj__ = default_value_39;
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
            }
            else {
                __result39__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional114;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional114=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional115=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
struct list_item$1sTypeph* it_45;
int i_46;
_Bool _while_condtional9;
_Bool _if_conditional117;
void* right_value60;
void* right_value61;
struct optional$2sTypephbool* __result41__;
struct sType* default_value_47;
void* right_value62;
void* right_value63;
struct optional$2sTypephbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_46, 0, sizeof(int));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&default_value_47, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            if(_if_conditional116=position<0,            __freed_obj__ = 0, 
            _if_conditional116) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_45=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_46=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_45!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional117=position==i_46,                __freed_obj__ = 0, 
                _if_conditional117) {
                    __result41__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value61=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value60=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_45=((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_46++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_47,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value63=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value62=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_47),(_Bool)0))));
            if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
            if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj27;
struct optional$2sTypephbool* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj27=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result40__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional118=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional118) {
                                if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional119;
struct sType* default_value_48;
struct sType* __result43__;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_48, 0, sizeof(struct sType*));
            if(_if_conditional119=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                __freed_obj__ = 0;
                memset(&default_value_48,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = default_value_48;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
            }
            else {
                __result44__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional140;
void* right_value98;
struct list_item$1CVALUEph* litem_53;
struct CVALUE* __dec_obj53;
_Bool _if_conditional142;
void* right_value99;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj54;
void* right_value100;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional140=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional140) {
                litem_53=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj53=((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 276))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj53) { come_call_finalizer(CVALUE_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_53;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_53;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional142=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional142) {
                    litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj54=((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 286))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj54) { come_call_finalizer(CVALUE_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_54;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_54;
                    __freed_obj__ = 0;
                }
                else {
                    litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj55=((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 296))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj55) { come_call_finalizer(CVALUE_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_55;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_55;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result45__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional141=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional141) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value101;
char* __dec_obj56;
void* right_value102;
struct sNode* __dec_obj57;
void* right_value103;
struct sNode* __dec_obj58;
void* right_value104;
char* __dec_obj59;
struct sStoreFieldNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 201))->sline=((struct sInfo*)come_null_check(info, "18field.c", 201))->sline;
    __freed_obj__ = 0;
    __dec_obj56=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 202))->sname))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj57=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj58=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj59=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(name))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result47__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result48__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value105;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    __result49__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_56;
struct sNode* right_57;
void* right_value106;
char* name_58;
_Bool _if_conditional147;
_Bool __result50__;
void* right_value107;
struct CVALUE* left_value_59;
_Bool _if_conditional148;
_Bool __result51__;
void* right_value108;
struct CVALUE* right_value_60;
struct sType* right_type_61;
struct sType* left_type_62;
void* right_value109;
struct sType* left_type2_63;
struct sClass* klass_64;
void* right_value119;
struct sType* field_type_69;
int index_70;
char* child_field_name_71;
void* right_value120;
_Bool _if_conditional154;
_Bool __result59__;
struct list$1tuple2$2charphsTypephph* o2_saved_72;
struct tuple2$2charphsTypeph* field_75;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_78;
struct sType* field_type2_79;
_Bool _if_conditional159;
void* right_value121;
struct sType* __dec_obj60;
_Bool _if_conditional163;
struct list$1tuple2$2charphsTypephph* o2_saved_82;
struct tuple2$2charphsTypeph* field_83;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_84;
struct sType* field_type2_85;
struct sClass* klass2_86;
struct list$1tuple2$2charphsTypephph* o2_saved_87;
struct tuple2$2charphsTypeph* field2_88;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_89;
struct sType* field_type3_90;
_Bool _if_conditional164;
void* right_value122;
char* __dec_obj61;
void* right_value123;
struct sType* __dec_obj62;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value124;
struct sType* __dec_obj63;
_Bool _if_conditional167;
_Bool __result68__;
void* right_value125;
struct CVALUE* come_value_91;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool __result69__;
void* right_value126;
void* right_value127;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value128;
char* c_value_92;
_Bool _if_conditional174;
_Bool _if_conditional175;
char* __dec_obj64;
_Bool _if_conditional176;
void* right_value129;
char* __dec_obj65;
_Bool _if_conditional177;
void* right_value130;
char* __dec_obj66;
void* right_value131;
char* __dec_obj67;
_Bool _if_conditional178;
void* right_value132;
char* __dec_obj68;
void* right_value133;
char* __dec_obj69;
void* right_value134;
char* c_value_93;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __dec_obj70;
_Bool _if_conditional181;
void* right_value135;
char* __dec_obj71;
_Bool _if_conditional182;
void* right_value136;
char* __dec_obj72;
void* right_value137;
char* __dec_obj73;
_Bool _if_conditional183;
void* right_value138;
char* __dec_obj74;
void* right_value139;
char* __dec_obj75;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value140;
char* c_value_94;
_Bool _if_conditional186;
_Bool _if_conditional187;
char* __dec_obj76;
_Bool _if_conditional188;
void* right_value141;
char* __dec_obj77;
_Bool _if_conditional189;
void* right_value142;
char* __dec_obj78;
void* right_value143;
char* __dec_obj79;
_Bool _if_conditional190;
void* right_value144;
char* __dec_obj80;
void* right_value145;
char* __dec_obj81;
void* right_value146;
char* c_value_95;
void* right_value147;
char* __dec_obj82;
void* right_value148;
char* __dec_obj83;
_Bool __result70__;
int right_value_id_96;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value149;
char* c_value_97;
void* right_value150;
char* __dec_obj84;
void* right_value151;
char* c_value_98;
void* right_value152;
char* __dec_obj85;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value153;
char* c_value_99;
void* right_value154;
char* __dec_obj86;
void* right_value155;
char* c_value_100;
void* right_value156;
char* __dec_obj87;
_Bool __result71__;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value157;
char* __dec_obj88;
void* right_value158;
char* __dec_obj89;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value159;
char* __dec_obj90;
void* right_value160;
char* __dec_obj91;
_Bool __result72__;
void* right_value161;
struct sType* __dec_obj92;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_56, 0, sizeof(struct sNode*));
memset(&right_57, 0, sizeof(struct sNode*));
memset(&right_value106, 0, sizeof(void*));
memset(&name_58, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_60, 0, sizeof(struct CVALUE*));
memset(&right_type_61, 0, sizeof(struct sType*));
memset(&left_type_62, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&left_type2_63, 0, sizeof(struct sType*));
memset(&klass_64, 0, sizeof(struct sClass*));
memset(&right_value119, 0, sizeof(void*));
memset(&field_type_69, 0, sizeof(struct sType*));
memset(&index_70, 0, sizeof(int));
memset(&child_field_name_71, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&o2_saved_72, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_75, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_78, 0, sizeof(char*));
memset(&field_type2_79, 0, sizeof(struct sType*));
memset(&field_name_78, 0, sizeof(char*));
memset(&field_type2_79, 0, sizeof(struct sType*));
memset(&right_value121, 0, sizeof(void*));
memset(&o2_saved_82, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_83, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_84, 0, sizeof(char*));
memset(&field_type2_85, 0, sizeof(struct sType*));
memset(&field_name_84, 0, sizeof(char*));
memset(&field_type2_85, 0, sizeof(struct sType*));
memset(&klass2_86, 0, sizeof(struct sClass*));
memset(&o2_saved_87, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_88, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_89, 0, sizeof(char*));
memset(&field_type3_90, 0, sizeof(struct sType*));
memset(&field_name2_89, 0, sizeof(char*));
memset(&field_type3_90, 0, sizeof(struct sType*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&come_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&c_value_92, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&c_value_93, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&c_value_94, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&c_value_95, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_id_96, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&c_value_97, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&c_value_98, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    left_56=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 223))->mLeft;
    __freed_obj__ = 0;
    right_57=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 224))->mRight;
    __freed_obj__ = 0;
    name_58=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 225))->mName))));
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional147=!((struct sNode*)come_null_check(left_56, "18field.c", 231))->compile(((struct sNode*)come_null_check(left_56, "18field.c", 231))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional147) {
        __result50__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result50__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional148=!((struct sNode*)come_null_check(right_57, "18field.c", 238))->compile(((struct sNode*)come_null_check(right_57, "18field.c", 238))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional148) {
        __result51__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_61=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 241))->type;
    __freed_obj__ = 0;
    left_type_62=((struct CVALUE*)come_null_check(left_value_59, "18field.c", 243))->type;
    __freed_obj__ = 0;
    left_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=solve_generics(left_type_62,left_type_62,info))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_64=((struct sType*)come_null_check(left_type2_63, "18field.c", 247))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_64=optional$2sClasspbool_value((come_push_stackframe("18field.c", 248),((struct optional$2sClasspbool*)(right_value119=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 248))->classes,((struct sClass*)come_null_check(klass_64, "18field.c", 248))->mName)))));
    come_pop_stackframe();
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_69=((void*)0);
    __freed_obj__ = 0;
    index_70=0;
    __freed_obj__ = 0;
    child_field_name_71=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_64=optional$2sClasspbool_value((come_push_stackframe("18field.c", 253),((struct optional$2sClasspbool*)(right_value120=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 253))->classes,((struct sClass*)come_null_check(klass_64, "18field.c", 253))->mName)))));
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional154=((struct sClass*)come_null_check(klass_64, "18field.c", 260))->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional154) {
        err_msg(info,"%s fields are null",((struct sClass*)come_null_check(klass_64, "18field.c", 256))->mName);
        __freed_obj__ = 0;
        __result59__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    o2_saved_72=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_64, "18field.c", 271))->mFields)),field_75=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    field_75=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_75;
        field_name_78=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_79=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional159=string_operator_equals(field_name_78,name_58),        __freed_obj__ = 0, 
        _if_conditional159) {
            __dec_obj60=field_type_69;
            field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(field_type2_79))));
            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_78 && !__freed_obj__) { field_name_78 = come_decrement_ref_count(field_name_78, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_70++;
        __freed_obj__ = 0;
        if(field_name_78 && !__freed_obj__) { field_name_78 = come_decrement_ref_count(field_name_78, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional163=index_70==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_64, "18field.c", 306))->mFields, "18field.c", 306))),    __freed_obj__ = 0, 
    _if_conditional163) {
        index_70=0;
        __freed_obj__ = 0;
        for(
        o2_saved_82=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_64, "18field.c", 300))->mFields)),field_83=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        field_83=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_83;
            field_name_84=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_85=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_86=((struct sType*)come_null_check(field_type2_85, "18field.c", 276))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_86, "18field.c", 288))->mFields)),field2_88=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            field2_88=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_88;
                field_name2_89=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_90=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional164=string_operator_equals(field_name2_89,name_58),                __freed_obj__ = 0, 
                _if_conditional164) {
                    __dec_obj61=child_field_name_71;
                    child_field_name_71=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(field_name_84))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj62=field_type_69;
                    field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(field_type3_90))));
                    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_89 && !__freed_obj__) { field_name2_89 = come_decrement_ref_count(field_name2_89, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_89 && !__freed_obj__) { field_name2_89 = come_decrement_ref_count(field_name2_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_90, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_87 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional165=child_field_name_71,            __freed_obj__ = 0, 
            _if_conditional165) {
                if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional166=string_operator_equals(field_name_84,name_58),            __freed_obj__ = 0, 
            _if_conditional166) {
                __dec_obj63=field_type_69;
                field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(field_type2_85))));
                if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_70++;
            __freed_obj__ = 0;
            if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_82 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional167=index_70==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_64, "18field.c", 304))->mFields, "18field.c", 304))),        __freed_obj__ = 0, 
        _if_conditional167) {
            err_msg(info,"field not found(%s) in %s(1)",name_58,((struct sClass*)come_null_check(klass_64, "18field.c", 301))->mName);
            __freed_obj__ = 0;
            __result68__ = (_Bool)0;
            if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result68__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 306))));
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional168=((struct sType*)come_null_check(field_type_69, "18field.c", 320))->mHeap&&!((struct sType*)come_null_check(right_type_61, "18field.c", 320))->mHeap,    __freed_obj__ = 0, 
    _if_conditional168) {
        if(_if_conditional169=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_61, "18field.c", 318))->mClass, "18field.c", 318))->mName,"void")&&((struct sType*)come_null_check(right_type_61, "18field.c", 318))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional169) {
        }
        else {
            if(_if_conditional170=!((struct sType*)come_null_check(right_type_61, "18field.c", 317))->mDelegate&&!((struct sType*)come_null_check(right_type_61, "18field.c", 317))->mShare,            __freed_obj__ = 0, 
            _if_conditional170) {
                err_msg(info,"require right value as heap object(%s)",name_58);
                __freed_obj__ = 0;
                __result69__ = (_Bool)0;
                if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    check_assign_type(((char*)(right_value127=xsprintf("\%s is assigned to",((char*)(right_value126=string_to_string(name_58)))))),field_type_69,right_type_61,(_Bool)0,info);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional171=((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional171) {
        if(_if_conditional172=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional172) {
            if(_if_conditional173=child_field_name_71,            __freed_obj__ = 0, 
            _if_conditional173) {
                c_value_92=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 325))->c_value,child_field_name_71,name_58))));
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_69,c_value_92,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional174=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 352))->var,                __freed_obj__ = 0, 
                _if_conditional174) {
                    if(_if_conditional175=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        __dec_obj64=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 329))->var, "18field.c", 329))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 329))->var, "18field.c", 329))->mCValueName=((void*)0);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional176=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional176) {
                            __dec_obj65=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value=(char*)come_increment_ref_count(((char*)(right_value129=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value,info))));
                            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional177=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional177) {
                                __dec_obj66=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value=(char*)come_increment_ref_count(((char*)(right_value130=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value,info))));
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj67=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value=(char*)come_increment_ref_count(((char*)(right_value131=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value,info))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional178=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 351))->type, "18field.c", 351))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional178) {
                    }
                    else {
                        __dec_obj68=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value=(char*)come_increment_ref_count(((char*)(right_value132=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value,info))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj69=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 352))->c_value;
                ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 352))->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 352))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 352))->c_value))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_92 && !__freed_obj__) { c_value_92 = come_decrement_ref_count(c_value_92, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_93=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 355))->c_value,name_58))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_69,c_value_93,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional179=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 382))->var,                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 359))->var, "18field.c", 359))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 359))->var, "18field.c", 359))->mCValueName=((void*)0);
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            __dec_obj71=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value,info))));
                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional182=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional182) {
                                __dec_obj72=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value=(char*)come_increment_ref_count(((char*)(right_value136=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value,info))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj73=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value=(char*)come_increment_ref_count(((char*)(right_value137=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value,info))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional183=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 381))->type, "18field.c", 381))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                    }
                    else {
                        __dec_obj74=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value=(char*)come_increment_ref_count(((char*)(right_value138=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value,info))));
                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj75=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 382))->c_value;
                ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 382))->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 382))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 382))->c_value))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_93 && !__freed_obj__) { c_value_93 = come_decrement_ref_count(c_value_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional184=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional184) {
                if(_if_conditional185=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional185) {
                    c_value_94=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 387))->c_value,child_field_name_71,name_58))));
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_94,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional186=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 414))->var,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        if(_if_conditional187=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional187) {
                            __dec_obj76=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 391))->var, "18field.c", 391))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 391))->var, "18field.c", 391))->mCValueName=((void*)0);
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional188=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional188) {
                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value=(char*)come_increment_ref_count(((char*)(right_value141=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value,info))));
                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional189=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional189) {
                                    __dec_obj78=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value=(char*)come_increment_ref_count(((char*)(right_value142=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value,info))));
                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj79=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value,info))));
                                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional190=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 413))->type, "18field.c", 413))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional190) {
                        }
                        else {
                            __dec_obj80=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value=(char*)come_increment_ref_count(((char*)(right_value144=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value,info))));
                            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj81=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 414))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 414))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 414))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 414))->c_value))));
                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_94 && !__freed_obj__) { c_value_94 = come_decrement_ref_count(c_value_94, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_95=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 417))->c_value,name_58))));
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_95,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj82=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value;
                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value,info))));
                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj83=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 420))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 420))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 420))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 420))->c_value))));
                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_95 && !__freed_obj__) { c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 424))->type, "18field.c", 424))->mPointerNum);
                __freed_obj__ = 0;
                __result70__ = (_Bool)0;
                if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result70__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        right_value_id_96=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 427))->c_value));
        __freed_obj__ = 0;
        if(_if_conditional191=right_value_id_96!=-1,        __freed_obj__ = 0, 
        _if_conditional191) {
            remove_object_from_right_values(right_value_id_96,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional192=((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mClass, "18field.c", 487))->mName,"void"),        __freed_obj__ = 0, 
        _if_conditional192) {
            if(_if_conditional193=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional193) {
                if(_if_conditional194=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional194) {
                    c_value_97=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 437))->c_value,child_field_name_71,name_58))));
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_97,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj84=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 439))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 439))->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 439))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 439))->c_value))));
                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_98=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 442))->c_value,name_58))));
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_98,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj85=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 444))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 444))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 444))->c_value))));
                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_98 && !__freed_obj__) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional195=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional195) {
                    if(_if_conditional196=child_field_name_71,                    __freed_obj__ = 0, 
                    _if_conditional196) {
                        c_value_99=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 449))->c_value,child_field_name_71,name_58))));
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_69,c_value_99,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj86=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 451))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 451))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 451))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 451))->c_value))));
                        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_100=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 454))->c_value,name_58))));
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_69,c_value_100,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj87=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 456))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 456))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 456))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 456))->c_value))));
                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 460))->type, "18field.c", 460))->mPointerNum);
                    __freed_obj__ = 0;
                    __result71__ = (_Bool)0;
                    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result71__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional197=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                if(_if_conditional198=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional198) {
                    __dec_obj88=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 467))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 467))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 467))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 467))->c_value))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj89=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 470))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 470))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 470))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 470))->c_value))));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional199=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    if(_if_conditional200=child_field_name_71,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        __dec_obj90=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 475))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 475))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 475))->c_value))));
                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj91=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 478))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 478))->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 478))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 478))->c_value))));
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 482))->type, "18field.c", 482))->mPointerNum);
                    __freed_obj__ = 0;
                    __result72__ = (_Bool)0;
                    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj92=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 487))->type;
    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 487))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(field_type_69))));
    if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 488))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 490))->stack, "18field.c", 490)),(struct CVALUE*)come_increment_ref_count(come_value_91));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_91, "18field.c", 492))->c_value);
    __freed_obj__ = 0;
    __result73__ = (_Bool)1;
    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
_Bool _while_condtional10;
_Bool _if_conditional149;
void* right_value110;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional150;
void* right_value111;
void* right_value112;
struct optional$2sClasspbool* __result53__;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value113;
void* right_value114;
struct optional$2sClasspbool* __result54__;
void* right_value115;
void* right_value116;
struct optional$2sClasspbool* __result55__;
void* right_value117;
void* right_value118;
struct optional$2sClasspbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_65, 0, sizeof(struct sClass*));
memset(&hash_66, 0, sizeof(unsigned int));
memset(&it_67, 0, sizeof(unsigned int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_65,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_66=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1553)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1553))->size;
        __freed_obj__ = 0;
        it_67=hash_66;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional149=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1576))->item_existance[it_67],            __freed_obj__ = 0, 
            _if_conditional149) {
                if(_if_conditional150=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1564),__exception_result_var_b2=((struct optional$2boolbool*)(right_value110=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1564))->keys[it_67], "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_b2)),                (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional150) {
                    __result53__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value112=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value111=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1561)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1561))->items[it_67],(_Bool)1)));
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result53__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_67++;
                __freed_obj__ = 0;
                if(_if_conditional151=it_67>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1572))->size,                __freed_obj__ = 0, 
                _if_conditional151) {
                    it_67=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional152=it_67==hash_66,                    __freed_obj__ = 0, 
                    _if_conditional152) {
                        __result54__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1570), ((struct optional$2sClasspbool*)(right_value114=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value113=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1570))),default_value_65,(_Bool)0))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result54__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result55__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1574), ((struct optional$2sClasspbool*)(right_value116=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value115=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1574))),default_value_65,(_Bool)0))));
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1578), ((struct optional$2sClasspbool*)(right_value118=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value117=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1578))),default_value_65,(_Bool)0))));
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result52__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result52__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional153;
struct sClass* default_value_68;
struct sClass* __result57__;
struct sClass* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_68, 0, sizeof(struct sClass*));
        if(_if_conditional153=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional153) {
            __freed_obj__ = 0;
            memset(&default_value_68,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result57__ = __result_obj__ = default_value_68;
            __freed_obj__ = 0;
            return __result57__;
            __freed_obj__ = 0;
        }
        else {
            __result58__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional155;
struct tuple2$2charphsTypeph* result_73;
struct tuple2$2charphsTypeph* __result60__;
_Bool _if_conditional156;
struct tuple2$2charphsTypeph* __result61__;
struct tuple2$2charphsTypeph* result_74;
struct tuple2$2charphsTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_74, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional155=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional155) {
            __freed_obj__ = 0;
            memset(&result_73,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result60__ = __result_obj__ = result_73;
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional156=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional156) {
            __result61__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result61__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_74,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result62__ = __result_obj__ = result_74;
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result63__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional157;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result64__;
_Bool _if_conditional158;
struct tuple2$2charphsTypeph* __result65__;
struct tuple2$2charphsTypeph* result_77;
struct tuple2$2charphsTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_77, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional157=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            __freed_obj__ = 0;
            memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = result_76;
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional158=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional158) {
            __result65__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_77,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result66__ = __result_obj__ = result_77;
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_80;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_80, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_80=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_80!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_81=it_80;
            __freed_obj__ = 0;
            it_80=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_80, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_81 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional160=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional161=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional161) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional162=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional162) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result67__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 499))->sline;
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value162;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value162=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 504))->sname)));
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value163;
char* __dec_obj93;
void* right_value164;
struct sNode* __dec_obj94;
struct sNullCheckNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 519))->sline=((struct sInfo*)come_null_check(info, "18field.c", 519))->sline;
    __freed_obj__ = 0;
    __dec_obj93=((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 520))->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj94=((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 523))->mOnlyNullCecker=only_null_checker;
    __freed_obj__ = 0;
    __result76__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value165;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sNullCheckNode")));
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_101;
_Bool _if_conditional203;
_Bool __result79__;
void* right_value166;
struct CVALUE* left_value_102;
_Bool _if_conditional204;
void* right_value167;
char* method_name_103;
void* right_value169;
_Bool _if_conditional209;
struct sType* obj_type_106;
_Bool _if_conditional225;
struct sType* obj_type2_107;
void* right_value170;
void* right_value171;
char* __dec_obj95;
void* right_value172;
struct sFun* fun_108;
_Bool _if_conditional226;
_Bool __result84__;
void* right_value173;
struct sType* type_109;
void* right_value174;
struct CVALUE* come_value_110;
void* right_value175;
char* __dec_obj96;
void* right_value176;
struct sType* __dec_obj97;
_Bool _if_conditional227;
void* right_value177;
struct CVALUE* come_value_111;
void* right_value178;
void* right_value179;
char* __dec_obj98;
void* right_value180;
struct sType* __dec_obj99;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_101, 0, sizeof(struct sNode*));
memset(&right_value166, 0, sizeof(void*));
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&method_name_103, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&obj_type_106, 0, sizeof(struct sType*));
memset(&obj_type2_107, 0, sizeof(struct sType*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&fun_108, 0, sizeof(struct sFun*));
memset(&right_value173, 0, sizeof(void*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&come_value_111, 0, sizeof(struct CVALUE*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
    left_101=((struct sNullCheckNode*)come_null_check(self, "18field.c", 540))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional203=!((struct sNode*)come_null_check(left_101, "18field.c", 546))->compile(((struct sNode*)come_null_check(left_101, "18field.c", 546))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional203) {
        __result79__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional204=!((struct sNullCheckNode*)come_null_check(self, "18field.c", 598))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass, "18field.c", 598))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional204) {
        method_name_103=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 550))->type,(_Bool)0,"expect",info))));
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional209=((struct sFun*)(right_value169=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs, "18field.c", 564)),method_name_103,((void*)0))))==((void*)0),        (right_value169 && right_value169 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional209) {
            obj_type_106=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 553))->type, "18field.c", 553))->mNoSolvedGenericsType, "18field.c", 553))->v1;
            __freed_obj__ = 0;
            if(_if_conditional225=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_106, "18field.c", 562))->mGenericsTypes, "18field.c", 562)))>0,            __freed_obj__ = 0, 
            _if_conditional225) {
                obj_type2_107=((struct CVALUE*)come_null_check(left_value_102, "18field.c", 555))->type;
                __freed_obj__ = 0;
                __dec_obj95=method_name_103;
                method_name_103=(char*)come_increment_ref_count(((char*)(right_value171=make_generics_function(obj_type2_107,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("expect")))),info))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 559))->type, "18field.c", 559))->mClass, "18field.c", 559))->mName);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        fun_108=optional$2sFunpbool_value((come_push_stackframe("18field.c", 564),((struct optional$2sFunpbool*)(right_value172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs,method_name_103)))));
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional226=fun_108==((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            err_msg(info,"function not found(%s)",method_name_103);
            __freed_obj__ = 0;
            __result84__ = (_Bool)1;
            if(method_name_103 && !__freed_obj__) { method_name_103 = come_decrement_ref_count(method_name_103, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result84__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(((struct sFun*)come_null_check(fun_108, "18field.c", 571))->mResultType,((struct CVALUE*)come_null_check(left_value_102, "18field.c", 571))->type,info))));
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573))));
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value_110, "18field.c", 575))->c_value;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 575))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s(%s)",method_name_103,((struct CVALUE*)come_null_check(left_value_102, "18field.c", 575))->c_value))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj97=((struct CVALUE*)come_null_check(come_value_110, "18field.c", 576))->type;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 576))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type_109))));
        if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 577))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 579))->stack, "18field.c", 579)),(struct CVALUE*)come_increment_ref_count(come_value_110));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_110, "18field.c", 581))->c_value);
        __freed_obj__ = 0;
        if(method_name_103 && !__freed_obj__) { method_name_103 = come_decrement_ref_count(method_name_103, (void*)0, (void*)0, 0, 0, 0); }
        if(type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional227=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional227) {
            come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 584))));
            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj98=((struct CVALUE*)come_null_check(come_value_111, "18field.c", 586))->c_value;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 586))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect((come_push_stackframe("18field.c", 586),((struct optional$2charphbool*)(right_value178=make_type_name_string(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 586))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct CVALUE*)come_null_check(left_value_102, "18field.c", 586))->c_value,((struct sInfo*)come_null_check(info, "18field.c", 586))->sname,((struct sInfo*)come_null_check(info, "18field.c", 586))->sline))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj99=((struct CVALUE*)come_null_check(come_value_111, "18field.c", 587))->type;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 587))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 587))->type))));
            if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 588))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 590))->stack, "18field.c", 590)),(struct CVALUE*)come_increment_ref_count(come_value_111));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_111, "18field.c", 592))->c_value);
            __freed_obj__ = 0;
            if(come_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 595))->stack, "18field.c", 595)),(struct CVALUE*)come_increment_ref_count(left_value_102));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result86__ = (_Bool)1;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_104;
unsigned int it_105;
_Bool _while_condtional12;
_Bool _if_conditional205;
void* right_value168;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional206;
struct sFun* __result80__;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sFun* __result81__;
struct sFun* __result82__;
struct sFun* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_104, 0, sizeof(unsigned int));
memset(&it_105, 0, sizeof(unsigned int));
memset(&right_value168, 0, sizeof(void*));
            hash_104=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1227)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1227))->size;
            __freed_obj__ = 0;
            it_105=hash_104;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional205=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1250))->item_existance[it_105],                __freed_obj__ = 0, 
                _if_conditional205) {
                    if(_if_conditional206=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1238),__exception_result_var_a5=((struct optional$2boolbool*)(right_value168=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1238))->keys[it_105], "./comelang2.h", 1238)),key))), come_pop_stackframe(), __exception_result_var_a5)),                    (right_value168 && right_value168 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result80__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1235))->items[it_105];
                        __freed_obj__ = 0;
                        return __result80__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_105++;
                    __freed_obj__ = 0;
                    if(_if_conditional207=it_105>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1246))->size,                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        it_105=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional208=it_105==hash_104,                        __freed_obj__ = 0, 
                        _if_conditional208) {
                            __result81__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result81__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result82__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result82__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional210=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional211=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional211) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional212=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional212) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional213=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional222=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional222) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional217=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional217) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional218=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional218) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional228;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional228=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional228) {
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
                __result85__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional229=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional229) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = ((struct sNullCheckNode*)come_null_check(self, "18field.c", 603))->sline;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value181;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(right_value181=__builtin_string(((struct sNullCheckNode*)come_null_check(self, "18field.c", 608))->sname)));
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value182;
char* __dec_obj100;
void* right_value183;
struct sNode* __dec_obj101;
struct sExceptionGetValueNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 621))->sline=((struct sInfo*)come_null_check(info, "18field.c", 621))->sline;
    __freed_obj__ = 0;
    __dec_obj100=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 622))->sname))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj101=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(left))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result89__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value184;
struct CVALUE* left_value_112;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value185;
char* method_name_113;
void* right_value186;
_Bool _if_conditional234;
struct sType* obj_type_114;
_Bool _if_conditional235;
struct sType* obj_type2_115;
void* right_value187;
void* right_value188;
char* __dec_obj102;
void* right_value189;
struct sFun* fun_116;
_Bool _if_conditional236;
_Bool __result91__;
void* right_value190;
struct sType* type_117;
void* right_value191;
struct CVALUE* come_value_118;
void* right_value192;
char* __dec_obj103;
void* right_value193;
struct sType* __dec_obj104;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&left_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&method_name_113, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_114, 0, sizeof(struct sType*));
memset(&obj_type2_115, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&fun_116, 0, sizeof(struct sFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    left_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional232=left_value_112==((void*)0),    __freed_obj__ = 0, 
    _if_conditional232) {
    }
    else {
        if(_if_conditional233=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass, "18field.c", 681))->mName,"optional"),        __freed_obj__ = 0, 
        _if_conditional233) {
            method_name_113=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 642))->type,(_Bool)0,"expect",info))));
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional234=((struct sFun*)(right_value186=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs, "18field.c", 656)),method_name_113,((void*)0))))==((void*)0),            (right_value186 && right_value186 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional234) {
                obj_type_114=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 645))->type, "18field.c", 645))->mNoSolvedGenericsType, "18field.c", 645))->v1;
                __freed_obj__ = 0;
                if(_if_conditional235=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_114, "18field.c", 654))->mGenericsTypes, "18field.c", 654)))>0,                __freed_obj__ = 0, 
                _if_conditional235) {
                    obj_type2_115=((struct CVALUE*)come_null_check(left_value_112, "18field.c", 647))->type;
                    __freed_obj__ = 0;
                    __dec_obj102=method_name_113;
                    method_name_113=(char*)come_increment_ref_count(((char*)(right_value188=make_generics_function(obj_type2_115,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("value")))),info))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 651))->type, "18field.c", 651))->mClass, "18field.c", 651))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_116=optional$2sFunpbool_value((come_push_stackframe("18field.c", 656),((struct optional$2sFunpbool*)(right_value189=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs,method_name_113)))));
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional236=fun_116==((void*)0),            __freed_obj__ = 0, 
            _if_conditional236) {
                err_msg(info,"function not found(%s)",method_name_113);
                __freed_obj__ = 0;
                __result91__ = (_Bool)1;
                if(method_name_113 && !__freed_obj__) { method_name_113 = come_decrement_ref_count(method_name_113, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result91__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(((struct sFun*)come_null_check(fun_116, "18field.c", 663))->mResultType,((struct CVALUE*)come_null_check(left_value_112, "18field.c", 663))->type,info))));
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 665))));
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj103=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 667))->c_value;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 667))->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s(%s)",method_name_113,((struct CVALUE*)come_null_check(left_value_112, "18field.c", 667))->c_value))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj104=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 668))->type;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 668))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(type_117))));
            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 669))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 671))->stack, "18field.c", 671)),(struct CVALUE*)come_increment_ref_count(come_value_118));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_118, "18field.c", 673))->c_value);
            __freed_obj__ = 0;
            if(method_name_113 && !__freed_obj__) { method_name_113 = come_decrement_ref_count(method_name_113, (void*)0, (void*)0, 0, 0, 0); }
            if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 676))->stack, "18field.c", 676)),(struct CVALUE*)come_increment_ref_count(left_value_112));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(left_value_112, "18field.c", 678))->c_value);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result92__ = (_Bool)1;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value194;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
    __result93__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_119;
_Bool _if_conditional237;
_Bool __result94__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_119, 0, sizeof(struct sNode*));
    left_119=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 691))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional237=!((struct sNode*)come_null_check(left_119, "18field.c", 697))->compile(((struct sNode*)come_null_check(left_119, "18field.c", 697))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional237) {
        __result94__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result95__ = compiletime_get_exception_value(info);
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 702))->sline;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value195;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value195=__builtin_string(((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 707))->sname)));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value196;
void* right_value197;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value203;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 712);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value197=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value196=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 712)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result100__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value204;
char* __dec_obj109;
void* right_value205;
struct sNode* __dec_obj110;
void* right_value206;
char* __dec_obj111;
struct sLoadFieldNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 726))->sline=((struct sInfo*)come_null_check(info, "18field.c", 726))->sline;
    __freed_obj__ = 0;
    __dec_obj109=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 727))->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj110=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj111=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(name))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result101__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value207;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_121;
void* right_value208;
char* name_122;
_Bool _if_conditional251;
_Bool __result104__;
void* right_value209;
struct CVALUE* left_value_123;
struct sType* left_type_124;
void* right_value210;
struct sType* left_type2_125;
struct sClass* klass_126;
void* right_value211;
struct sType* field_type_127;
int index_128;
char* child_field_name_129;
void* right_value212;
struct list$1tuple2$2charphsTypephph* o2_saved_130;
struct tuple2$2charphsTypeph* field_131;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_132;
struct sType* field_type2_133;
_Bool _if_conditional252;
void* right_value213;
struct sType* __dec_obj112;
_Bool _if_conditional253;
struct list$1tuple2$2charphsTypephph* o2_saved_134;
struct tuple2$2charphsTypeph* field_135;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_136;
struct sType* field_type2_137;
struct sClass* klass2_138;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* field2_140;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_141;
struct sType* field_type3_142;
_Bool _if_conditional254;
void* right_value214;
char* __dec_obj113;
void* right_value215;
struct sType* __dec_obj114;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value216;
struct sType* __dec_obj115;
_Bool _if_conditional257;
_Bool __result105__;
void* right_value217;
struct CVALUE* come_value_143;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value218;
char* __dec_obj116;
void* right_value219;
char* __dec_obj117;
_Bool _if_conditional260;
void* right_value220;
char* __dec_obj118;
void* right_value221;
char* __dec_obj119;
void* right_value222;
struct sType* __dec_obj120;
_Bool _if_conditional261;
void* right_value223;
struct sType* __dec_obj121;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_121, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&name_122, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&left_value_123, 0, sizeof(struct CVALUE*));
memset(&left_type_124, 0, sizeof(struct sType*));
memset(&right_value210, 0, sizeof(void*));
memset(&left_type2_125, 0, sizeof(struct sType*));
memset(&klass_126, 0, sizeof(struct sClass*));
memset(&right_value211, 0, sizeof(void*));
memset(&field_type_127, 0, sizeof(struct sType*));
memset(&index_128, 0, sizeof(int));
memset(&child_field_name_129, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&o2_saved_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_131, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_132, 0, sizeof(char*));
memset(&field_type2_133, 0, sizeof(struct sType*));
memset(&field_name_132, 0, sizeof(char*));
memset(&field_type2_133, 0, sizeof(struct sType*));
memset(&right_value213, 0, sizeof(void*));
memset(&o2_saved_134, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_135, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_136, 0, sizeof(char*));
memset(&field_type2_137, 0, sizeof(struct sType*));
memset(&field_name_136, 0, sizeof(char*));
memset(&field_type2_137, 0, sizeof(struct sType*));
memset(&klass2_138, 0, sizeof(struct sClass*));
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_140, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_141, 0, sizeof(char*));
memset(&field_type3_142, 0, sizeof(struct sType*));
memset(&field_name2_141, 0, sizeof(char*));
memset(&field_type3_142, 0, sizeof(struct sType*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
    left_121=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 747))->mLeft;
    __freed_obj__ = 0;
    name_122=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 748))->mName))));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional251=!((struct sNode*)come_null_check(left_121, "18field.c", 754))->compile(((struct sNode*)come_null_check(left_121, "18field.c", 754))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result104__ = (_Bool)0;
        if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_124=((struct CVALUE*)come_null_check(left_value_123, "18field.c", 757))->type;
    __freed_obj__ = 0;
    left_type2_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(left_type_124,left_type_124,info))));
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_126=((struct sType*)come_null_check(left_type2_125, "18field.c", 761))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_126=optional$2sClasspbool_value((come_push_stackframe("18field.c", 762),((struct optional$2sClasspbool*)(right_value211=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 762))->classes,((struct sClass*)come_null_check(klass_126, "18field.c", 762))->mName)))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_127=((void*)0);
    __freed_obj__ = 0;
    index_128=0;
    __freed_obj__ = 0;
    child_field_name_129=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_126=optional$2sClasspbool_value((come_push_stackframe("18field.c", 767),((struct optional$2sClasspbool*)(right_value212=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 767))->classes,((struct sClass*)come_null_check(klass_126, "18field.c", 767))->mName)))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_126, "18field.c", 779))->mFields)),field_131=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    field_131=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_131;
        field_name_132=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_133=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional252=string_operator_equals(field_name_132,name_122),        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj112=field_type_127;
            field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(field_type2_133))));
            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_132 && !__freed_obj__) { field_name_132 = come_decrement_ref_count(field_name_132, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_128++;
        __freed_obj__ = 0;
        if(field_name_132 && !__freed_obj__) { field_name_132 = come_decrement_ref_count(field_name_132, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_130 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional253=index_128==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_126, "18field.c", 814))->mFields, "18field.c", 814))),    __freed_obj__ = 0, 
    _if_conditional253) {
        index_128=0;
        __freed_obj__ = 0;
        for(
        o2_saved_134=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_126, "18field.c", 808))->mFields)),field_135=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        field_135=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_135;
            field_name_136=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_137=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_138=((struct sType*)come_null_check(field_type2_137, "18field.c", 784))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_138, "18field.c", 796))->mFields)),field2_140=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            field2_140=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_140;
                field_name2_141=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_142=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional254=string_operator_equals(field_name2_141,name_122),                __freed_obj__ = 0, 
                _if_conditional254) {
                    __dec_obj113=child_field_name_129;
                    child_field_name_129=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(field_name_136))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj114=field_type_127;
                    field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(field_type3_142))));
                    if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_141 && !__freed_obj__) { field_name2_141 = come_decrement_ref_count(field_name2_141, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_141 && !__freed_obj__) { field_name2_141 = come_decrement_ref_count(field_name2_141, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional255=child_field_name_129,            __freed_obj__ = 0, 
            _if_conditional255) {
                if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional256=string_operator_equals(field_name_136,name_122),            __freed_obj__ = 0, 
            _if_conditional256) {
                __dec_obj115=field_type_127;
                field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(field_type2_137))));
                if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_128++;
            __freed_obj__ = 0;
            if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_134 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_134, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional257=index_128==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_126, "18field.c", 812))->mFields, "18field.c", 812))),        __freed_obj__ = 0, 
        _if_conditional257) {
            err_msg(info,"field not found(%s) in %s(2)",name_122,((struct sClass*)come_null_check(klass_126, "18field.c", 809))->mName);
            __freed_obj__ = 0;
            __result105__ = (_Bool)0;
            if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 814))));
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional258=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_123, "18field.c", 832))->type, "18field.c", 832))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional258) {
        if(_if_conditional259=child_field_name_129,        __freed_obj__ = 0, 
        _if_conditional259) {
            __dec_obj116=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 818))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 818))->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 818))->c_value,child_field_name_129,name_122))));
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj117=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 821))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 821))->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 821))->c_value,name_122))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional260=child_field_name_129,        __freed_obj__ = 0, 
        _if_conditional260) {
            __dec_obj118=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 826))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 826))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 826))->c_value,child_field_name_129,name_122))));
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj119=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 829))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 829))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 829))->c_value,name_122))));
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj120=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 832))->type;
    ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 832))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type_127))));
    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 833))->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional261=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 843))->type, "18field.c", 843))->mArrayNum, "18field.c", 843)))==1,    __freed_obj__ = 0, 
    _if_conditional261) {
        __dec_obj121=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 838))->type, "18field.c", 838))->mArrayNum, "18field.c", 838)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 839))->type, "18field.c", 839))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 840))->type, "18field.c", 840))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 840))->type, "18field.c", 840))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 843))->stack, "18field.c", 843)),(struct CVALUE*)come_increment_ref_count(come_value_143));
    __freed_obj__ = 0;
    __result108__ = (_Bool)1;
    if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result106__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_144;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_145;
struct list$1sNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_144, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_145, 0, sizeof(struct list_item$1sNodeph*));
            it_144=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_144!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_145=it_144;
                __freed_obj__ = 0;
                it_144=((struct list_item$1sNodeph*)come_null_check(it_144, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_145 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result107__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 850))->sline;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value224;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value224, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value224=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 855))->sname)));
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value225;
char* __dec_obj122;
void* right_value226;
struct sNode* __dec_obj123;
void* right_value227;
struct sNode* __dec_obj124;
void* right_value228;
struct list$1sNodeph* __dec_obj125;
struct sStoreArrayNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 871))->sline=((struct sInfo*)come_null_check(info, "18field.c", 871))->sline;
    __freed_obj__ = 0;
    __dec_obj122=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 872))->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj123=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj124=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj125=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value228=list$1sNodephp_clone(array_num))));
    if(__dec_obj125) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->mQuote=quote;
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value229;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
    __result113__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_146;
struct sNode* right_147;
struct list$1sNodeph* array_num_nodes_148;
_Bool _if_conditional266;
_Bool __result114__;
void* right_value230;
struct CVALUE* left_value_149;
struct sType* left_type_150;
void* right_value231;
void* right_value232;
struct list$1CVALUEph* array_num_153;
struct list$1sNodeph* o2_saved_154;
struct sNode* it_157;
_Bool _for_condtionalA8;
_Bool _if_conditional271;
_Bool __result123__;
void* right_value233;
struct CVALUE* c_value_160;
_Bool _if_conditional272;
_Bool __result124__;
void* right_value234;
struct CVALUE* right_value_161;
struct sType* right_type_162;
struct sClass* klass_163;
void* right_value235;
struct sType* type_164;
char* fun_name_165;
_Bool calling_fun_166;
_Bool _if_conditional273;
void* right_value240;
_Bool _if_conditional278;
void* right_value241;
struct CVALUE* come_value_171;
_Bool _if_conditional279;
int i_172;
_Bool _for_condtionalA9;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value242;
void* right_value243;
struct buffer* buf_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_189;
_Bool _for_condtionalA10;
void* right_value244;
void* right_value245;
char* left_value_code_192;
void* right_value246;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
char* __dec_obj127;
_Bool _if_conditional308;
void* right_value247;
char* __dec_obj128;
_Bool _if_conditional309;
void* right_value248;
char* __dec_obj129;
void* right_value249;
char* __dec_obj130;
_Bool _if_conditional310;
void* right_value250;
char* __dec_obj131;
void* right_value251;
char* __dec_obj132;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
char* __dec_obj133;
_Bool _if_conditional314;
void* right_value252;
char* __dec_obj134;
_Bool _if_conditional315;
void* right_value253;
char* __dec_obj135;
void* right_value254;
char* __dec_obj136;
_Bool _if_conditional316;
void* right_value255;
char* __dec_obj137;
void* right_value256;
char* __dec_obj138;
_Bool __result140__;
int right_value_id_193;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value257;
char* __dec_obj139;
_Bool _if_conditional319;
void* right_value258;
char* __dec_obj140;
_Bool __result141__;
void* right_value259;
struct sType* result_type_194;
void* right_value260;
void* right_value261;
struct list$1sNodeph* __dec_obj141;
struct sType* __dec_obj142;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_146, 0, sizeof(struct sNode*));
memset(&right_147, 0, sizeof(struct sNode*));
memset(&array_num_nodes_148, 0, sizeof(struct list$1sNodeph*));
memset(&right_value230, 0, sizeof(void*));
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&left_type_150, 0, sizeof(struct sType*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&array_num_153, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_154, 0, sizeof(struct list$1sNodeph*));
memset(&it_157, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&c_value_160, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value_161, 0, sizeof(struct CVALUE*));
memset(&right_type_162, 0, sizeof(struct sType*));
memset(&klass_163, 0, sizeof(struct sClass*));
memset(&right_value235, 0, sizeof(void*));
memset(&type_164, 0, sizeof(struct sType*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&calling_fun_166, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&come_value_171, 0, sizeof(struct CVALUE*));
memset(&i_172, 0, sizeof(int));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&buf_185, 0, sizeof(struct buffer*));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_189, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&left_value_code_192, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value_id_193, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    left_146=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 894))->mLeft;
    __freed_obj__ = 0;
    right_147=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 895))->mRight;
    __freed_obj__ = 0;
    array_num_nodes_148=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 896))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional266=!((struct sNode*)come_null_check(left_146, "18field.c", 902))->compile(((struct sNode*)come_null_check(left_146, "18field.c", 902))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional266) {
        __result114__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_150=((struct CVALUE*)come_null_check(left_value_149, "18field.c", 905))->type;
    __freed_obj__ = 0;
    array_num_153=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value232=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 907))))))));
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_154=(array_num_nodes_148),it_157=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_157=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional271=!((struct sNode*)come_null_check(it_157, "18field.c", 914))->compile(((struct sNode*)come_null_check(it_157, "18field.c", 914))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional271) {
            __result123__ = (_Bool)0;
            if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 917)),(struct CVALUE*)come_increment_ref_count(c_value_160));
        __freed_obj__ = 0;
        if(c_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional272=!((struct sNode*)come_null_check(right_147, "18field.c", 924))->compile(((struct sNode*)come_null_check(right_147, "18field.c", 924))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional272) {
        __result124__ = (_Bool)0;
        if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_162=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 927))->type;
    __freed_obj__ = 0;
    klass_163=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 929))->type, "18field.c", 929))->mClass;
    __freed_obj__ = 0;
    type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 931))->type))));
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_165="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 942))->mQuote,    __freed_obj__ = 0, 
    _if_conditional273) {
        calling_fun_166=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_166=operator_overload_fun2(type_164,fun_name_165,left_value_149,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 939),((struct optional$2CVALUEphbool*)(right_value240=list$1CVALUEphp_operator_load_element(array_num_153,0))))),right_value_161,info);
        come_pop_stackframe();
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional278=!calling_fun_166,    __freed_obj__ = 0, 
    _if_conditional278) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 943))));
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional279=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_150, "18field.c", 964))->mArrayNum, "18field.c", 964)))>0,        __freed_obj__ = 0, 
        _if_conditional279) {
            for(
            i_172=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            i_172<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 955))) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            i_172++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_150, "18field.c", 953))->mArrayNum, "18field.c", 953)),-1,-1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional298=((struct sType*)come_null_check(left_type_150, "18field.c", 964))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional298) {
                ((struct sType*)come_null_check(left_type_150, "18field.c", 957))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 957)));
                __freed_obj__ = 0;
                if(_if_conditional299=((struct sType*)come_null_check(left_type_150, "18field.c", 962))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional299) {
                    ((struct sType*)come_null_check(left_type_150, "18field.c", 960))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value242=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 964))))))));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_185, "18field.c", 966)),((struct CVALUE*)come_null_check(left_value_149, "18field.c", 966))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((array_num_153)),it_189=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_189=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_185, "18field.c", 969)),((char*)(right_value244=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_189, "18field.c", 969))->c_value))));
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_186 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_192=(char*)come_increment_ref_count(((char*)(right_value245=buffer_to_string(((struct buffer*)come_null_check(buf_185, "18field.c", 972))))));
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value246=xsprintf("array is assinged to"))),left_type_150,right_type_162,(_Bool)0,info);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional304=((struct sType*)come_null_check(left_type_150, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(right_type_162, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(left_type_150, "18field.c", 1057))->mPointerNum>0&&((struct sType*)come_null_check(right_type_162, "18field.c", 1057))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional304) {
            if(_if_conditional305=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional305) {
                decrement_ref_count_object(left_type_150,left_value_code_192,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional306=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1004))->var,                __freed_obj__ = 0, 
                _if_conditional306) {
                    if(_if_conditional307=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        __dec_obj127=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 981))->var, "18field.c", 981))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 981))->var, "18field.c", 981))->mCValueName=((void*)0);
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional308=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            __dec_obj128=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value247=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value,info))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional309=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional309) {
                                __dec_obj129=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value=(char*)come_increment_ref_count(((char*)(right_value248=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value,info))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj130=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value=(char*)come_increment_ref_count(((char*)(right_value249=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value,info))));
                                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional310=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1003))->type, "18field.c", 1003))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional310) {
                    }
                    else {
                        __dec_obj131=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value=(char*)come_increment_ref_count(((char*)(right_value250=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value,info))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj132=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1004))->c_value;
                ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1004))->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1004))->c_value))));
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional311=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional311) {
                    decrement_ref_count_object(left_type_150,left_value_code_192,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional312=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1033))->var,                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        if(_if_conditional313=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName=((void*)0);
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional314=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj134=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value=(char*)come_increment_ref_count(((char*)(right_value252=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value,info))));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional315=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional315) {
                                    __dec_obj135=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value=(char*)come_increment_ref_count(((char*)(right_value253=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value,info))));
                                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj136=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value=(char*)come_increment_ref_count(((char*)(right_value254=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value,info))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional316=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1032))->type, "18field.c", 1032))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional316) {
                        }
                        else {
                            __dec_obj137=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value=(char*)come_increment_ref_count(((char*)(right_value255=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value,info))));
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj138=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1033))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1033))->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1033))->c_value))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_192,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1036))->type, "18field.c", 1036))->mPointerNum);
                    __freed_obj__ = 0;
                    __result140__ = (_Bool)0;
                    if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result140__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_id_193=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1039))->c_value));
            __freed_obj__ = 0;
            if(_if_conditional317=right_value_id_193!=-1,            __freed_obj__ = 0, 
            _if_conditional317) {
                remove_object_from_right_values(right_value_id_193,info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional318=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional318) {
                __dec_obj139=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1047))->c_value;
                ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1047))->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1047))->c_value))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional319=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional319) {
                    __dec_obj140=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1050))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1050))->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1050))->c_value))));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_192,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1053))->type, "18field.c", 1053))->mPointerNum);
                    __freed_obj__ = 0;
                    __result141__ = (_Bool)0;
                    if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(left_type_150))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj141=((struct sType*)come_null_check(result_type_194, "18field.c", 1058))->mArrayNum;
        ((struct sType*)come_null_check(result_type_194, "18field.c", 1058))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1058))))))));
        if(__dec_obj141) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj142=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1059))->type;
        ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1059))->type=(struct sType*)come_increment_ref_count(result_type_194);
        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1060))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1062))->stack, "18field.c", 1062)),(struct CVALUE*)come_increment_ref_count(come_value_171));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1064))->c_value);
        __freed_obj__ = 0;
        if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result142__ = (_Bool)1;
    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result115__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_151;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_151, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1CVALUEph*));
            it_151=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_151!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_152=it_151;
                __freed_obj__ = 0;
                it_151=((struct list_item$1CVALUEph*)come_null_check(it_151, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_152 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional267;
struct sNode* result_155;
struct sNode* __result116__;
_Bool _if_conditional268;
struct sNode* __result117__;
struct sNode* result_156;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_155, 0, sizeof(struct sNode*));
memset(&result_156, 0, sizeof(struct sNode*));
        if(_if_conditional267=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional267) {
            __freed_obj__ = 0;
            memset(&result_155,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result116__ = __result_obj__ = result_155;
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional268=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional268) {
            __result117__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_156,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result118__ = __result_obj__ = result_156;
        __freed_obj__ = 0;
        return __result118__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result119__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional269;
struct sNode* result_158;
struct sNode* __result120__;
_Bool _if_conditional270;
struct sNode* __result121__;
struct sNode* result_159;
struct sNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_158, 0, sizeof(struct sNode*));
memset(&result_159, 0, sizeof(struct sNode*));
        if(_if_conditional269=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional269) {
            __freed_obj__ = 0;
            memset(&result_158,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result120__ = __result_obj__ = result_158;
            __freed_obj__ = 0;
            return __result120__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional270=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional270) {
            __result121__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_159,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result122__ = __result_obj__ = result_159;
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional274;
struct list_item$1CVALUEph* it_167;
int i_168;
_Bool _while_condtional15;
_Bool _if_conditional275;
void* right_value236;
void* right_value237;
struct optional$2CVALUEphbool* __result126__;
struct CVALUE* default_value_169;
void* right_value238;
void* right_value239;
struct optional$2CVALUEphbool* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_167, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_168, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&default_value_169, 0, sizeof(struct CVALUE*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
            if(_if_conditional274=position<0,            __freed_obj__ = 0, 
            _if_conditional274) {
                position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_167=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_168=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_167!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional275=position==i_168,                __freed_obj__ = 0, 
                _if_conditional275) {
                    __result126__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value237=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value236=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_167, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result126__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_167=((struct list_item$1CVALUEph*)come_null_check(it_167, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_168++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_169,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result127__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value239=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value238=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_169),(_Bool)0))));
            if(default_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
            if(default_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj126;
struct optional$2CVALUEphbool* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj126=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj126) { come_call_finalizer(CVALUE_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result125__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result125__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional276=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional276) {
                                if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional277;
struct CVALUE* default_value_170;
struct CVALUE* __result128__;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional277=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional277) {
                __freed_obj__ = 0;
                memset(&default_value_170,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result128__ = __result_obj__ = default_value_170;
                __freed_obj__ = 0;
                return __result128__;
                __freed_obj__ = 0;
            }
            else {
                __result129__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result130__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result130__;
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
int tmp_173;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct list$1sNodeph* __result131__;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct list_item$1sNodeph* it_174;
int i_175;
_Bool _while_condtional16;
_Bool _if_conditional288;
struct list_item$1sNodeph* prev_it_176;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list_item$1sNodeph* it_177;
int i_178;
_Bool _while_condtional17;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list_item$1sNodeph* prev_it_179;
struct list_item$1sNodeph* it_180;
struct list_item$1sNodeph* head_prev_it_181;
struct list_item$1sNodeph* tail_it_182;
int i_183;
_Bool _while_condtional18;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1sNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_173, 0, sizeof(int));
memset(&it_174, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_177, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_178, 0, sizeof(int));
memset(&prev_it_179, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_180, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_181, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional280=head<0,                    __freed_obj__ = 0, 
                    _if_conditional280) {
                        head+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 508))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional281=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        tail+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 511))->len+1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional282=head>tail,                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        tmp_173=tail;
                        __freed_obj__ = 0;
                        tail=head;
                        __freed_obj__ = 0;
                        head=tmp_173;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional283=head<0,                    __freed_obj__ = 0, 
                    _if_conditional283) {
                        head=0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional284=tail>((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 528))->len,                    __freed_obj__ = 0, 
                    _if_conditional284) {
                        tail=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 525))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional285=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional285) {
                        __result131__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result131__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional286=head==0&&tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 534)));
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional287=head==0,                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            it_174=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 537))->head;
                            __freed_obj__ = 0;
                            i_175=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_174!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional288=i_175<tail,                                __freed_obj__ = 0, 
                                _if_conditional288) {
                                    prev_it_176=it_174;
                                    __freed_obj__ = 0;
                                    it_174=((struct list_item$1sNodeph*)come_null_check(it_174, "./comelang2.h", 543))->next;
                                    __freed_obj__ = 0;
                                    i_175++;
                                    __freed_obj__ = 0;
                                    if(prev_it_176 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 548))->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional289=i_175==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional289) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 551))->head=it_174;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_174=((struct list_item$1sNodeph*)come_null_check(it_174, "./comelang2.h", 556))->next;
                                        __freed_obj__ = 0;
                                        i_175++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional290=tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                            __freed_obj__ = 0, 
                            _if_conditional290) {
                                it_177=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 562))->head;
                                __freed_obj__ = 0;
                                i_178=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_177!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional291=i_178==head,                                    __freed_obj__ = 0, 
                                    _if_conditional291) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 566))->prev;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional292=i_178>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional292) {
                                        prev_it_179=it_177;
                                        __freed_obj__ = 0;
                                        it_177=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 573))->next;
                                        __freed_obj__ = 0;
                                        i_178++;
                                        __freed_obj__ = 0;
                                        if(prev_it_179 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 578))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_177=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 581))->next;
                                        __freed_obj__ = 0;
                                        i_178++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_180=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 587))->head;
                                __freed_obj__ = 0;
                                head_prev_it_181=((void*)0);
                                __freed_obj__ = 0;
                                tail_it_182=((void*)0);
                                __freed_obj__ = 0;
                                i_183=0;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_180!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional293=i_183==head,                                    __freed_obj__ = 0, 
                                    _if_conditional293) {
                                        head_prev_it_181=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 596))->prev;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional294=i_183==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional294) {
                                        tail_it_182=it_180;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional295=i_183>=head&&i_183<tail,                                    __freed_obj__ = 0, 
                                    _if_conditional295) {
                                        prev_it_184=it_180;
                                        __freed_obj__ = 0;
                                        it_180=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 606))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                        if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 611))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_180=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 614))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional296=head_prev_it_181!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional296) {
                                    ((struct list_item$1sNodeph*)come_null_check(head_prev_it_181, "./comelang2.h", 620))->next=tail_it_182;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional297=tail_it_182!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional297) {
                                    ((struct list_item$1sNodeph*)come_null_check(tail_it_182, "./comelang2.h", 623))->prev=head_prev_it_181;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result132__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result132__;
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional300;
struct CVALUE* result_187;
struct CVALUE* __result133__;
_Bool _if_conditional301;
struct CVALUE* __result134__;
struct CVALUE* result_188;
struct CVALUE* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_187, 0, sizeof(struct CVALUE*));
memset(&result_188, 0, sizeof(struct CVALUE*));
            if(_if_conditional300=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional300) {
                __freed_obj__ = 0;
                memset(&result_187,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result133__ = __result_obj__ = result_187;
                __freed_obj__ = 0;
                return __result133__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional301=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional301) {
                __result134__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_188,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result135__ = __result_obj__ = result_188;
            __freed_obj__ = 0;
            return __result135__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result136__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result136__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional302;
struct CVALUE* result_190;
struct CVALUE* __result137__;
_Bool _if_conditional303;
struct CVALUE* __result138__;
struct CVALUE* result_191;
struct CVALUE* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_190, 0, sizeof(struct CVALUE*));
memset(&result_191, 0, sizeof(struct CVALUE*));
            if(_if_conditional302=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional302) {
                __freed_obj__ = 0;
                memset(&result_190,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result137__ = __result_obj__ = result_190;
                __freed_obj__ = 0;
                return __result137__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional303=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional303) {
                __result138__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result138__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_191,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result139__ = __result_obj__ = result_191;
            __freed_obj__ = 0;
            return __result139__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1072))->sline;
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value262;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
    __result144__ = __result_obj__ = ((char*)(right_value262=__builtin_string(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1077))->sname)));
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value263;
char* __dec_obj143;
void* right_value264;
struct list$1sNodeph* __dec_obj144;
void* right_value265;
struct sNode* __dec_obj145;
struct sLoadArrayNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1092))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1092))->sline;
    __freed_obj__ = 0;
    __dec_obj143=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1093))->sname))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj144=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=list$1sNodephp_clone(array_num))));
    if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj145=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->mQuote=quote;
    __freed_obj__ = 0;
    __result145__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value266;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(right_value266=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_195;
struct list$1sNodeph* array_num_nodes_196;
_Bool _if_conditional323;
_Bool __result148__;
void* right_value267;
struct CVALUE* left_value_197;
void* right_value268;
struct sType* left_type_198;
void* right_value269;
void* right_value270;
struct list$1CVALUEph* array_num_199;
struct list$1sNodeph* o2_saved_200;
struct sNode* it_201;
_Bool _for_condtionalA11;
_Bool _if_conditional324;
_Bool __result149__;
void* right_value271;
struct CVALUE* c_value_202;
void* right_value272;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional325;
void* right_value273;
_Bool _if_conditional326;
void* right_value274;
struct CVALUE* come_value_206;
void* right_value275;
void* right_value276;
struct buffer* buf_207;
struct list$1CVALUEph* o2_saved_208;
struct CVALUE* it_209;
_Bool _for_condtionalA12;
void* right_value277;
void* right_value278;
char* left_value_code_210;
void* right_value279;
char* __dec_obj146;
void* right_value280;
struct sType* result_type_211;
_Bool _if_conditional327;
struct sType* __dec_obj147;
_Bool _if_conditional328;
int n_212;
_Bool _if_conditional329;
void* right_value281;
struct sType* __dec_obj148;
_Bool _if_conditional330;
void* right_value282;
struct sType* __dec_obj149;
_Bool _if_conditional331;
int i_213;
_Bool _for_condtionalA13;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value283;
struct sType* __dec_obj150;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_195, 0, sizeof(struct sNode*));
memset(&array_num_nodes_196, 0, sizeof(struct list$1sNodeph*));
memset(&right_value267, 0, sizeof(void*));
memset(&left_value_197, 0, sizeof(struct CVALUE*));
memset(&right_value268, 0, sizeof(void*));
memset(&left_type_198, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&array_num_199, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_200, 0, sizeof(struct list$1sNodeph*));
memset(&it_201, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&c_value_202, 0, sizeof(struct CVALUE*));
memset(&right_value272, 0, sizeof(void*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&come_value_206, 0, sizeof(struct CVALUE*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&buf_207, 0, sizeof(struct buffer*));
memset(&o2_saved_208, 0, sizeof(struct list$1CVALUEph*));
memset(&it_209, 0, sizeof(struct CVALUE*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&left_value_code_210, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&result_type_211, 0, sizeof(struct sType*));
memset(&n_212, 0, sizeof(int));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&i_213, 0, sizeof(int));
memset(&right_value283, 0, sizeof(void*));
    left_195=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1115))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_196=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1116))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional323=!((struct sNode*)come_null_check(left_195, "18field.c", 1122))->compile(((struct sNode*)come_null_check(left_195, "18field.c", 1122))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional323) {
        __result148__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1125))->type))));
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    array_num_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value270=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value269=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1127))))))));
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_200=(array_num_nodes_196),it_201=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    it_201=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional324=!((struct sNode*)come_null_check(it_201, "18field.c", 1134))->compile(((struct sNode*)come_null_check(it_201, "18field.c", 1134))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional324) {
            __result149__ = (_Bool)0;
            if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result149__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1137)),(struct CVALUE*)come_increment_ref_count(c_value_202));
        __freed_obj__ = 0;
        if(c_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1140))->type))));
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_204="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional325=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1151))->mQuote,    __freed_obj__ = 0, 
    _if_conditional325) {
        calling_fun_205=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_197,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1148),((struct optional$2CVALUEphbool*)(right_value273=list$1CVALUEphp_operator_load_element(array_num_199,0))))),info);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional326=!calling_fun_205,    __freed_obj__ = 0, 
    _if_conditional326) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1152))));
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buf_207=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1154))))))));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_207, "18field.c", 1156)),((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1156))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_208=(struct list$1CVALUEph*)come_increment_ref_count((array_num_199)),it_209=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_209=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_207, "18field.c", 1159)),((char*)(right_value277=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_209, "18field.c", 1159))->c_value))));
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_208, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_210=(char*)come_increment_ref_count(((char*)(right_value278=buffer_to_string(((struct buffer*)come_null_check(buf_207, "18field.c", 1162))))));
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj146=((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1164))->c_value;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1164))->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s",left_value_code_210))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_198))));
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional327=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1172))->mOriginalLoadVarType, "18field.c", 1172))->v1,        __freed_obj__ = 0, 
        _if_conditional327) {
            __dec_obj147=result_type_211;
            result_type_211=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1169))->mOriginalLoadVarType, "18field.c", 1169))->v1);
            if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional328=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1206))->mArrayNum, "18field.c", 1206)))>0,        __freed_obj__ = 0, 
        _if_conditional328) {
            n_212=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1173))->mArrayNum, "18field.c", 1173)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1173)));
            __freed_obj__ = 0;
            if(_if_conditional329=n_212==0,            __freed_obj__ = 0, 
            _if_conditional329) {
                __dec_obj148=result_type_211;
                result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_198))));
                if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional330=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_198, "18field.c", 1180))->mOriginalLoadVarType, "18field.c", 1180))->v1,                __freed_obj__ = 0, 
                _if_conditional330) {
                    __dec_obj149=result_type_211;
                    result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_198, "18field.c", 1178))->mOriginalLoadVarType, "18field.c", 1178))->v1))));
                    if(__dec_obj149) { come_call_finalizer(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1180))->mArrayNum, "18field.c", 1180)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional331=n_212>0,                __freed_obj__ = 0, 
                _if_conditional331) {
                    for(
                    i_213=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA13=                    i_213<n_212 ,                    __freed_obj__ = 0, 
                    _for_condtionalA13;                    i_213++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1184))->mArrayNum, "18field.c", 1184)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional332=n_212<0,                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1188))->mArrayNum, "18field.c", 1188)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_211, "18field.c", 1189))->mPointerNum+=n_212;
                        __freed_obj__ = 0;
                        if(_if_conditional333=((struct sType*)come_null_check(result_type_211, "18field.c", 1194))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional333) {
                            ((struct sType*)come_null_check(result_type_211, "18field.c", 1192))->mPointerNum=0;
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
        else {
            if(_if_conditional334=((struct sType*)come_null_check(result_type_211, "18field.c", 1204))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional334) {
                ((struct sType*)come_null_check(result_type_211, "18field.c", 1198))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1198)));
                __freed_obj__ = 0;
                if(_if_conditional335=((struct sType*)come_null_check(result_type_211, "18field.c", 1203))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional335) {
                    ((struct sType*)come_null_check(result_type_211, "18field.c", 1201))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj150=((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1206))->type;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1206))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(result_type_211))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1207))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1209))->stack, "18field.c", 1209)),(struct CVALUE*)come_increment_ref_count(come_value_206));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1211))->c_value);
        __freed_obj__ = 0;
        if(come_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_207 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_210 && !__freed_obj__) { left_value_code_210 = come_decrement_ref_count(left_value_code_210, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result150__ = (_Bool)1;
    if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
    if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1219))->sline;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value284;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value284=__builtin_string("LOAD ARRAY NODE")));
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    __freed_obj__ = 0;
    exit(2);
    __freed_obj__ = 0;
    __result154__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional336;
char* p_214;
int sline_215;
_Bool _if_conditional337;
void* right_value285;
char* word_216;
_Bool _if_conditional338;
void* right_value286;
void* right_value287;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value291;
struct sNode* __dec_obj153;
void* right_value292;
void* right_value293;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value297;
struct sNode* __dec_obj156;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value298;
void* right_value299;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value303;
struct sNode* __dec_obj159;
struct sNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_214, 0, sizeof(char*));
memset(&sline_215, 0, sizeof(int));
memset(&right_value285, 0, sizeof(void*));
memset(&word_216, 0, sizeof(char*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
    if(_if_conditional336=*((struct sInfo*)come_null_check(info, "18field.c", 1278))->p==46||(*((struct sInfo*)come_null_check(info, "18field.c", 1278))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1278))->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional336) {
        p_214=((struct sInfo*)come_null_check(info, "18field.c", 1243))->p;
        __freed_obj__ = 0;
        sline_215=((struct sInfo*)come_null_check(info, "18field.c", 1244))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "18field.c", 1246))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional337=xisalpha(*((struct sInfo*)come_null_check(info, "18field.c", 1269))->p)||*((struct sInfo*)come_null_check(info, "18field.c", 1269))->p==95,        __freed_obj__ = 0, 
        _if_conditional337) {
            come_clear_stackframe();
            word_216=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1250),((struct optional$2charphbool*)(right_value285=parse_word(info))))));
            come_pop_stackframe();
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional338=(string_operator_equals(word_216,"expect")||string_operator_equals(word_216,"value")||string_operator_equals(word_216,"catch"))&&(*((struct sInfo*)come_null_check(info, "18field.c", 1262))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1262))->p==123),            __freed_obj__ = 0, 
            _if_conditional338) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1253))->p=p_214;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1254))->sline=sline_215;
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "18field.c", 1257))->p=p_214;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1258))->sline=sline_215;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1260);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value287=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value286=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1260)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj153=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=_inf_value2)));
                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_216 && !__freed_obj__) { word_216 = come_decrement_ref_count(word_216, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "18field.c", 1264))->p=p_214;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1265))->sline=sline_215;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1267);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value293=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value292=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1267)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj156=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=_inf_value3)));
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0); }
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional351=*((struct sInfo*)come_null_check(info, "18field.c", 1278))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1278))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional351) {
        }
        else {
            if(_if_conditional352=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional352) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1275);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value299=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value298=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1275)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj159=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=_inf_value4)));
                if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
                if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result161__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional353=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional354=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional354) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional355;
struct sExceptionGetValueNode* __result159__;
void* right_value300;
struct sExceptionGetValueNode* result_219;
_Bool _if_conditional356;
void* right_value301;
struct sNode* __dec_obj157;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value302;
char* __dec_obj158;
struct sExceptionGetValueNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
                    if(_if_conditional355=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional355) {
                        __result159__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result159__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_219=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value300=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional356=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional356) {
                        __dec_obj157=((struct sExceptionGetValueNode*)come_null_check(result_219, "sExceptionGetValueNode_clone", 4))->mLeft;
                        ((struct sExceptionGetValueNode*)come_null_check(result_219, "sExceptionGetValueNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNode_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft))));
                        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
                        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional357=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional357) {
                        ((struct sExceptionGetValueNode*)come_null_check(result_219, "sExceptionGetValueNode_clone", 5))->sline=((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional358=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 7))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional358) {
                        __dec_obj158=((struct sExceptionGetValueNode*)come_null_check(result_219, "sExceptionGetValueNode_clone", 6))->sname;
                        ((struct sExceptionGetValueNode*)come_null_check(result_219, "sExceptionGetValueNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname))));
                        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result160__ = __result_obj__ = result_219;
                    if(result_219 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_219, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result160__;
                    __freed_obj__ = 0;
                    if(result_219 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_219, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _while_condtional19;
_Bool _if_conditional359;
_Bool quote_220;
_Bool _if_conditional360;
void* right_value304;
void* right_value305;
struct list$1sNodeph* array_num_221;
_Bool _while_condtional20;
_Bool _if_conditional361;
void* right_value306;
struct sNode* node_222;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value310;
struct sNode* right_node_226;
void* right_value311;
void* right_value312;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* right_value318;
struct sNode* __dec_obj167;
void* right_value319;
void* right_value320;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* right_value325;
struct sNode* __dec_obj171;
void* right_value326;
struct sNode* __dec_obj172;
_Bool _if_conditional386;
void* right_value327;
void* right_value328;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value332;
struct sNode* __dec_obj175;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value333;
void* right_value334;
void* right_value335;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value339;
struct sNode* __dec_obj178;
void* right_value340;
char* field_name_231;
_Bool _if_conditional403;
void* right_value341;
struct sNode* right_node_232;
void* right_value342;
void* right_value343;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value349;
struct sNode* __dec_obj183;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value350;
void* right_value351;
struct sNode* __dec_obj184;
_Bool _if_conditional416;
void* right_value352;
void* right_value353;
struct sNode* __dec_obj185;
void* right_value354;
void* right_value355;
struct sNode* __dec_obj186;
void* right_value356;
void* right_value357;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value362;
struct sNode* __dec_obj190;
void* right_value363;
struct sNode* node2_235;
_Bool _if_conditional425;
struct sNode* __dec_obj191;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&quote_220, 0, sizeof(_Bool));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&array_num_221, 0, sizeof(struct list$1sNodeph*));
memset(&right_value306, 0, sizeof(void*));
memset(&node_222, 0, sizeof(struct sNode*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_node_226, 0, sizeof(struct sNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&field_name_231, 0, sizeof(char*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_node_232, 0, sizeof(struct sNode*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&node2_235, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional359=*((struct sInfo*)come_null_check(info, "18field.c", 1394))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1394))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1394))->p==91,        __freed_obj__ = 0, 
        _if_conditional359) {
            quote_220=*((struct sInfo*)come_null_check(info, "18field.c", 1285))->p==92;
            __freed_obj__ = 0;
            if(_if_conditional360=quote_220,            __freed_obj__ = 0, 
            _if_conditional360) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1287))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            array_num_221=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value305=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value304=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1289))))))));
            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional20=1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional361=*((struct sInfo*)come_null_check(info, "18field.c", 1313))->p==91,                __freed_obj__ = 0, 
                _if_conditional361) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1292))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    node_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=expression_v13(info))));
                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_221, "18field.c", 1299)),(struct sNode*)come_increment_ref_count(node_222));
                    __freed_obj__ = 0;
                    if(_if_conditional364=*((struct sInfo*)come_null_check(info, "18field.c", 1309))->p==93,                    __freed_obj__ = 0, 
                    _if_conditional364) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1302))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        err_msg(info,"require ] character");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(node_222 && !__freed_obj__) { node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional365=*((struct sInfo*)come_null_check(info, "18field.c", 1332))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1332))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional365) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1316))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                right_node_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=expression_v13(info))));
                if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1325);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreArrayNode*)(right_value312=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value311=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1325)))),node,(struct sNode*)come_increment_ref_count(right_node_226),(struct list$1sNodeph*)come_increment_ref_count(array_num_221),quote_220,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sStoreArrayNode_sline;
                _inf_value5->sname=(void*)sStoreArrayNode_sname;
                _inf_value5->terminated=(void*)sStoreArrayNode_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj167=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value5)));
                if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                if(right_node_226 && !__freed_obj__) { right_node_226 = come_decrement_ref_count(right_node_226, ((struct sNode*)right_node_226)->finalize, ((struct sNode*)right_node_226)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1328);
                _inf_obj_value6=come_increment_ref_count(((struct sLoadArrayNode*)(right_value320=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value319=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1328)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_221),quote_220,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sLoadArrayNode_sline;
                _inf_value6->sname=(void*)sLoadArrayNode_sname;
                _inf_value6->terminated=(void*)sLoadArrayNode_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj171=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=_inf_value6)));
                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                __dec_obj172=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(array_num_221 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional386=*((struct sInfo*)come_null_check(info, "18field.c", 1394))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1394))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional386) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1334))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1339);
                _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value328=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value327=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1339)))),node,(_Bool)0,info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                _inf_value7->clone=(void*)sNullCheckNode_clone;
                _inf_value7->compile=(void*)sNullCheckNode_compile;
                _inf_value7->sline=(void*)sNullCheckNode_sline;
                _inf_value7->sname=(void*)sNullCheckNode_sname;
                _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                _inf_value7->kind=(void*)sNullCheckNode_kind;
                __dec_obj175=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=_inf_value7)));
                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional394=*((struct sInfo*)come_null_check(info, "18field.c", 1394))->p==46||(*((struct sInfo*)come_null_check(info, "18field.c", 1394))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1394))->p+1)==62),                __freed_obj__ = 0, 
                _if_conditional394) {
                    if(_if_conditional395=*((struct sInfo*)come_null_check(info, "18field.c", 1352))->p==46,                    __freed_obj__ = 0, 
                    _if_conditional395) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1344))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1348))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1352);
                    _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value335=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value333=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1352)))),((struct sNode*)(right_value334=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value8->clone=(void*)sNullCheckNode_clone;
                    _inf_value8->compile=(void*)sNullCheckNode_compile;
                    _inf_value8->sline=(void*)sNullCheckNode_sline;
                    _inf_value8->sname=(void*)sNullCheckNode_sname;
                    _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                    _inf_value8->kind=(void*)sNullCheckNode_kind;
                    __dec_obj178=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=_inf_value8)));
                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0); } 
                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    field_name_231=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1356),((struct optional$2charphbool*)(right_value340=parse_word(info))))));
                    come_pop_stackframe();
                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional403=*((struct sInfo*)come_null_check(info, "18field.c", 1384))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1384))->p+1)!=61,                    __freed_obj__ = 0, 
                    _if_conditional403) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1361))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        right_node_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1368);
                        _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value343=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value342=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1368)))),node,(struct sNode*)come_increment_ref_count(right_node_232),(char*)come_increment_ref_count(field_name_231),info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                        _inf_value9->clone=(void*)sStoreFieldNode_clone;
                        _inf_value9->compile=(void*)sStoreFieldNode_compile;
                        _inf_value9->sline=(void*)sStoreFieldNode_sline;
                        _inf_value9->sname=(void*)sStoreFieldNode_sname;
                        _inf_value9->terminated=(void*)sStoreFieldNode_terminated;
                        _inf_value9->kind=(void*)sStoreFieldNode_kind;
                        __dec_obj183=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=_inf_value9)));
                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0); }
                        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(right_node_232 && !__freed_obj__) { right_node_232 = come_decrement_ref_count(right_node_232, ((struct sNode*)right_node_232)->finalize, ((struct sNode*)right_node_232)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional414=*((struct sInfo*)come_null_check(info, "18field.c", 1384))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1384))->p==123||(*((struct sInfo*)come_null_check(info, "18field.c", 1384))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1384))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "18field.c", 1384))->p+2)==40),                        __freed_obj__ = 0, 
                        _if_conditional414) {
                            if(_if_conditional415=string_operator_equals(field_name_231,"if"),                            __freed_obj__ = 0, 
                            _if_conditional415) {
                                __dec_obj184=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(node)))),info))));
                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional416=string_operator_equals(field_name_231,"elif"),                                __freed_obj__ = 0, 
                                _if_conditional416) {
                                    __dec_obj185=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=sNode_clone(node)))),info))));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0); }
                                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj186=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_231),info))));
                                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0); }
                                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1382);
                            _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value357=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value356=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1382)))),node,(char*)come_increment_ref_count(field_name_231),info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                            _inf_value10->clone=(void*)sLoadFieldNode_clone;
                            _inf_value10->compile=(void*)sLoadFieldNode_compile;
                            _inf_value10->sline=(void*)sLoadFieldNode_sline;
                            _inf_value10->sname=(void*)sLoadFieldNode_sname;
                            _inf_value10->terminated=(void*)sLoadFieldNode_terminated;
                            _inf_value10->kind=(void*)sLoadFieldNode_kind;
                            __dec_obj190=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=_inf_value10)));
                            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(field_name_231 && !__freed_obj__) { field_name_231 = come_decrement_ref_count(field_name_231, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    node2_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(_if_conditional425=node2_235==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional425) {
                        if(node2_235 && !__freed_obj__) { node2_235 = come_decrement_ref_count(node2_235, ((struct sNode*)node2_235)->finalize, ((struct sNode*)node2_235)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj191=node;
                    node=(struct sNode*)come_increment_ref_count(node2_235);
                    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    if(node2_235 && !__freed_obj__) { node2_235 = come_decrement_ref_count(node2_235, ((struct sNode*)node2_235)->finalize, ((struct sNode*)node2_235)->_protocol_obj, 0, 0, 0); } 
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result175__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result175__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional362;
void* right_value307;
struct list_item$1sNodeph* litem_223;
struct sNode* __dec_obj160;
_Bool _if_conditional363;
void* right_value308;
struct list_item$1sNodeph* litem_224;
struct sNode* __dec_obj161;
void* right_value309;
struct list_item$1sNodeph* litem_225;
struct sNode* __dec_obj162;
struct list$1sNodeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
memset(&litem_223, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value308, 0, sizeof(void*));
memset(&litem_224, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value309, 0, sizeof(void*));
memset(&litem_225, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional362=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional362) {
                            litem_223=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_223, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_223, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj160=((struct list_item$1sNodeph*)come_null_check(litem_223, "./comelang2.h", 276))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_223, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_223;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_223;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional363=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional363) {
                                litem_224=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                                if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_224, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_224, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj161=((struct list_item$1sNodeph*)come_null_check(litem_224, "./comelang2.h", 286))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_224, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_224;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_224;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_225=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value309=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_225, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_225, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj162=((struct list_item$1sNodeph*)come_null_check(litem_225, "./comelang2.h", 296))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_225, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_225;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_225;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result162__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result162__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional366=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional366) {
                        if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional367=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional367) {
                        if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional368=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional368) {
                        if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional369=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 4))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional369) {
                        if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional370;
struct sStoreArrayNode* __result163__;
void* right_value313;
struct sStoreArrayNode* result_227;
_Bool _if_conditional371;
void* right_value314;
struct sNode* __dec_obj163;
_Bool _if_conditional372;
void* right_value315;
struct sNode* __dec_obj164;
_Bool _if_conditional373;
void* right_value316;
struct list$1sNodeph* __dec_obj165;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
void* right_value317;
char* __dec_obj166;
struct sStoreArrayNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
memset(&result_227, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
                    if(_if_conditional370=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional370) {
                        __result163__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result163__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_227=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value313=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional371=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional371) {
                        __dec_obj163=((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 4))->mLeft;
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft))));
                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0); }
                        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional372=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional372) {
                        __dec_obj164=((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 5))->mRight;
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight))));
                        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0); }
                        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional373=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional373) {
                        __dec_obj165=((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 6))->mArrayNum;
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 6))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value316=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum))));
                        if(__dec_obj165) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional374=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional374) {
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 7))->mQuote=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional375=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional375) {
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 8))->sline=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional376=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 10))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional376) {
                        __dec_obj166=((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 9))->sname;
                        ((struct sStoreArrayNode*)come_null_check(result_227, "sStoreArrayNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value317=string_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname))));
                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result164__ = __result_obj__ = result_227;
                    if(result_227 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_227, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result164__;
                    __freed_obj__ = 0;
                    if(result_227 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_227, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional377=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional377) {
                        if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional378=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional378) {
                        if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional379=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional379) {
                        if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional380;
struct sLoadArrayNode* __result165__;
void* right_value321;
struct sLoadArrayNode* result_228;
_Bool _if_conditional381;
void* right_value322;
struct sNode* __dec_obj168;
_Bool _if_conditional382;
void* right_value323;
struct list$1sNodeph* __dec_obj169;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value324;
char* __dec_obj170;
struct sLoadArrayNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value321, 0, sizeof(void*));
memset(&result_228, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
                    if(_if_conditional380=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional380) {
                        __result165__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result165__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_228=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value321=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional381=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional381) {
                        __dec_obj168=((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 4))->mLeft;
                        ((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft))));
                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional382=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional382) {
                        __dec_obj169=((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 5))->mArrayNum;
                        ((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value323=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum))));
                        if(__dec_obj169) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional383=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional383) {
                        ((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 6))->mQuote=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional384=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        ((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 7))->sline=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional385=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        __dec_obj170=((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 8))->sname;
                        ((struct sLoadArrayNode*)come_null_check(result_228, "sLoadArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value324=string_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname))));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
                        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result166__ = __result_obj__ = result_228;
                    if(result_228 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result166__;
                    __freed_obj__ = 0;
                    if(result_228 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional396=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional396) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional397=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional397) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional398;
struct sNullCheckNode* __result169__;
void* right_value336;
struct sNullCheckNode* result_230;
_Bool _if_conditional399;
void* right_value337;
struct sNode* __dec_obj176;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value338;
char* __dec_obj177;
struct sNullCheckNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value336, 0, sizeof(void*));
memset(&result_230, 0, sizeof(struct sNullCheckNode*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
                        if(_if_conditional398=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional398) {
                            __result169__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result169__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_230=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value336=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional399=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            __dec_obj176=((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 4))->mLeft;
                            ((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=sNode_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft))));
                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            ((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 5))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mOnlyNullCecker;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional401=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional401) {
                            ((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 6))->sline=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional402=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional402) {
                            __dec_obj177=((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 7))->sname;
                            ((struct sNullCheckNode*)come_null_check(result_230, "sNullCheckNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value338=string_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname))));
                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result170__ = __result_obj__ = result_230;
                        if(result_230 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result170__;
                        __freed_obj__ = 0;
                        if(result_230 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional404=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional404) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional405=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional405) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional406=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional406) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional407=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 4))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional407) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional408;
struct sStoreFieldNode* __result171__;
void* right_value344;
struct sStoreFieldNode* result_233;
_Bool _if_conditional409;
void* right_value345;
struct sNode* __dec_obj179;
_Bool _if_conditional410;
void* right_value346;
struct sNode* __dec_obj180;
_Bool _if_conditional411;
void* right_value347;
char* __dec_obj181;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value348;
char* __dec_obj182;
struct sStoreFieldNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value344, 0, sizeof(void*));
memset(&result_233, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
                            if(_if_conditional408=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional408) {
                                __result171__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result171__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_233=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value344=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                            if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional409=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional409) {
                                __dec_obj179=((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 4))->mLeft;
                                ((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional410=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional410) {
                                __dec_obj180=((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 5))->mRight;
                                ((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight))));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional411=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional411) {
                                __dec_obj181=((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 6))->mName;
                                ((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 6))->mName=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName))));
                                if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
                                if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional412=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional412) {
                                ((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 7))->sline=((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional413=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional413) {
                                __dec_obj182=((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 8))->sname;
                                ((struct sStoreFieldNode*)come_null_check(result_233, "sStoreFieldNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value348=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname))));
                                if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
                                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result172__ = __result_obj__ = result_233;
                            if(result_233 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_233, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result172__;
                            __freed_obj__ = 0;
                            if(result_233 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_233, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional417=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional417) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional418=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional418) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional419=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional419) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional420;
struct sLoadFieldNode* __result173__;
void* right_value358;
struct sLoadFieldNode* result_234;
_Bool _if_conditional421;
void* right_value359;
struct sNode* __dec_obj187;
_Bool _if_conditional422;
void* right_value360;
char* __dec_obj188;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value361;
char* __dec_obj189;
struct sLoadFieldNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value358, 0, sizeof(void*));
memset(&result_234, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
                                if(_if_conditional420=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional420) {
                                    __result173__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result173__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_234=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value358=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional421=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional421) {
                                    __dec_obj187=((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 4))->mLeft;
                                    ((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft))));
                                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional422=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional422) {
                                    __dec_obj188=((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 5))->mName;
                                    ((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 5))->mName=(char*)come_increment_ref_count(((char*)(right_value360=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName))));
                                    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional423=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional423) {
                                    ((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional424=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional424) {
                                    __dec_obj189=((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 7))->sname;
                                    ((struct sLoadFieldNode*)come_null_check(result_234, "sLoadFieldNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname))));
                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result174__ = __result_obj__ = result_234;
                                if(result_234 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_234, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result174__;
                                __freed_obj__ = 0;
                                if(result_234 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_234, (void*)0, (void*)0, 0, 0, 0, 0); }
}

