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
struct sComeStackFrame
{
    char mSName[256];
    int mSLine;
};
struct list_item$1sComeStackFrameph
{
    struct sComeStackFrame* item;
    struct list_item$1sComeStackFrameph* prev;
    struct list_item$1sComeStackFrameph* next;
};
struct list$1sComeStackFrameph
{
    struct list_item$1sComeStackFrameph* head;
    struct list_item$1sComeStackFrameph* tail;
    int len;
    struct list_item$1sComeStackFrameph* it;
};
struct list$1sComeStackFrameph* gComeStackFrame=((void*)0);
struct buffer* gComeStackFrameBuffer=((void*)0);
int gNumComeStackFrame=0;
_Bool gComeMalloc=(_Bool)0;
struct sMemHeader
{
    long int size;
    int freed;
    char* sname;
    int sline;
    struct sMemHeader* next;
    struct sMemHeader* alloc_next;
};
struct sHeapPool
{
    char** mem_pages;
    int size_pages;
    int num_pages;
    char* top;
    struct sMemHeader* free_mem;
    struct sMemHeader* malloced_free_mem;
    struct sMemHeader* alloc_mem;
};
struct sHeapPool gHeapPool;
struct optional$2_IO_FILEpbool
{
    struct _IO_FILE* v1;
    _Bool v2;
};

// header function
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

char* dirname(char* __path);

char* __xpg_basename(char* __path);

void come_push_stackframe(char* sname, int sline);

static void sComeStackFrame_finalize(struct sComeStackFrame* self);
static int list$1sComeStackFrameph_length(struct list$1sComeStackFrameph* self);
static void list$1sComeStackFrameph_pop_front(struct list$1sComeStackFrameph* self);
static void list_item$1sComeStackFramephp_finalize(struct list_item$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_add(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item);
static struct sComeStackFrame* sComeStackFrame_clone(struct sComeStackFrame* self);
void come_pop_stackframe();

void come_clear_stackframe();

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reset(struct list$1sComeStackFrameph* self);
void come_save_stackframe(char* sname, int sline);

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reverse(struct list$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_initialize(struct list$1sComeStackFrameph* self);
static void list$1sComeStackFramephp_finalize(struct list$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_push_back(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item);
static struct sComeStackFrame* list$1sComeStackFrameph_begin(struct list$1sComeStackFrameph* self);
static _Bool list$1sComeStackFrameph_end(struct list$1sComeStackFrameph* self);
static struct sComeStackFrame* list$1sComeStackFrameph_next(struct list$1sComeStackFrameph* self);
void come_show_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(_Bool come_malloc);

void come_heap_final(int check_mem_leak);

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline);
static void come_free_mem_of_heap_pool(char* mem);
void* come_calloc(long int count, long int size, char* sname, int sline);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long int self, long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void list$1charph_finalize(struct list$1charph* self);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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







void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
void* right_value0;
struct sComeStackFrame* come_stackframe_0;
_Bool _if_conditional2;
void* right_value5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&come_stackframe_0, 0, sizeof(struct sComeStackFrame*));
memset(&right_value5, 0, sizeof(void*));
    if(_if_conditional1=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional1) {
        come_stackframe_0=(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value0=(struct sComeStackFrame*)come_calloc(1, sizeof(struct sComeStackFrame)*(1), "libcomelang2.c", 23))));
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        strncpy(((struct sComeStackFrame*)come_null_check(come_stackframe_0, "libcomelang2.c", 25))->mSName,sname,256);
        __freed_obj__ = 0;
        ((struct sComeStackFrame*)come_null_check(come_stackframe_0, "libcomelang2.c", 26))->mSLine=sline;
        __freed_obj__ = 0;
        if(_if_conditional2=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 32)))>=7,        __freed_obj__ = 0, 
        _if_conditional2) {
            list$1sComeStackFrameph_pop_front(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 29)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1sComeStackFrameph_add(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 32)),(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value5=sComeStackFrame_clone(come_stackframe_0)))));
        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_stackframe_0 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,come_stackframe_0, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static void sComeStackFrame_finalize(struct sComeStackFrame* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sComeStackFrameph_length(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result7__ = ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
}

static void list$1sComeStackFrameph_pop_front(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
struct list_item$1sComeStackFrameph* litem_1;
_Bool _if_conditional5;
struct list_item$1sComeStackFrameph* litem_2;
_Bool _if_conditional6;
struct list_item$1sComeStackFrameph* litem_3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_1, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&litem_2, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&litem_3, 0, sizeof(struct list_item$1sComeStackFrameph*));
                if(_if_conditional3=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 268))->len==1,                __freed_obj__ = 0, 
                _if_conditional3) {
                    litem_1=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 238))->head;
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 239))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 240))->tail=((void*)0);
                    __freed_obj__ = 0;
                    if(litem_1 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 244))->len--;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional5=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 268))->len==2,                    __freed_obj__ = 0, 
                    _if_conditional5) {
                        litem_2=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 247))->head;
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 249))->head=((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 249))->head, "./comelang2.h", 249))->next;
                        __freed_obj__ = 0;
                        ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 250))->head, "./comelang2.h", 250))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 251))->head, "./comelang2.h", 251))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 252))->tail=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 252))->head;
                        __freed_obj__ = 0;
                        if(litem_2 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 256))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional6=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 268))->len>=3,                        __freed_obj__ = 0, 
                        _if_conditional6) {
                            litem_3=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 259))->head;
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 261))->head=((struct list_item$1sComeStackFrameph*)come_null_check(litem_3, "./comelang2.h", 261))->next;
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 262))->head, "./comelang2.h", 262))->prev=((void*)0);
                            __freed_obj__ = 0;
                            if(litem_3 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_3, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 266))->len--;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1sComeStackFramephp_finalize(struct list_item$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional4=self!=((void*)0)&&((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional4) {
                            if(((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_add(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
void* right_value1;
struct list_item$1sComeStackFrameph* litem_4;
struct sComeStackFrame* __dec_obj1;
_Bool _if_conditional8;
void* right_value2;
struct list_item$1sComeStackFrameph* litem_5;
struct sComeStackFrame* __dec_obj2;
void* right_value3;
struct list_item$1sComeStackFrameph* litem_6;
struct sComeStackFrame* __dec_obj3;
struct list$1sComeStackFrameph* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&litem_4, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value2, 0, sizeof(void*));
memset(&litem_5, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value3, 0, sizeof(void*));
memset(&litem_6, 0, sizeof(struct list_item$1sComeStackFrameph*));
            if(_if_conditional7=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 232))->len==0,            __freed_obj__ = 0, 
            _if_conditional7) {
                litem_4=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value1=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 202))));
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_4, "./comelang2.h", 204))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_4, "./comelang2.h", 205))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj1=((struct list_item$1sComeStackFrameph*)come_null_check(litem_4, "./comelang2.h", 206))->item;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_4, "./comelang2.h", 206))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                if(__dec_obj1) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_4;
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 209))->head=litem_4;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional8=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 232))->len==1,                __freed_obj__ = 0, 
                _if_conditional8) {
                    litem_5=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value2=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 212))));
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_5, "./comelang2.h", 214))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 214))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_5, "./comelang2.h", 215))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj2=((struct list_item$1sComeStackFrameph*)come_null_check(litem_5, "./comelang2.h", 216))->item;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_5, "./comelang2.h", 216))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                    if(__dec_obj2) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_5;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_5;
                    __freed_obj__ = 0;
                }
                else {
                    litem_6=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value3=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 222))));
                    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_6, "./comelang2.h", 224))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 224))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_6, "./comelang2.h", 225))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj3=((struct list_item$1sComeStackFrameph*)come_null_check(litem_6, "./comelang2.h", 226))->item;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_6, "./comelang2.h", 226))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_6;
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_6;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 232))->len++;
            __freed_obj__ = 0;
            __result8__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result8__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sComeStackFrame* sComeStackFrame_clone(struct sComeStackFrame* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
struct sComeStackFrame* __result9__;
void* right_value4;
struct sComeStackFrame* result_7;
_Bool _if_conditional10;
_Bool _if_conditional11;
struct sComeStackFrame* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct sComeStackFrame*));
            if(_if_conditional9=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional9) {
                __result9__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result9__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_7=(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value4=(struct sComeStackFrame*)come_calloc(1, sizeof(struct sComeStackFrame)*(1), "sComeStackFrame_clone", 3))));
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                memcpy(((struct sComeStackFrame*)come_null_check(result_7, "sComeStackFrame_clone", 4))->mSName,((struct sComeStackFrame*)come_null_check(self, "sComeStackFrame_clone", 4))->mSName,sizeof(((struct sComeStackFrame*)come_null_check(result_7, "sComeStackFrame_clone", 4))->mSName));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                ((struct sComeStackFrame*)come_null_check(result_7, "sComeStackFrame_clone", 5))->mSLine=((struct sComeStackFrame*)come_null_check(self, "sComeStackFrame_clone", 5))->mSLine;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result10__ = __result_obj__ = result_7;
            if(result_7 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result10__;
            __freed_obj__ = 0;
            if(result_7 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional12=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional12) {
        list$1sComeStackFrameph_pop_front(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 39)));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void come_clear_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    buffer_reset(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 45)));
    __freed_obj__ = 0;
    list$1sComeStackFrameph_reset(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 46)));
    __freed_obj__ = 0;
    gNumComeStackFrame=0;
    __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reset(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sComeStackFrameph* it_8;
_Bool _while_condtional1;
struct list_item$1sComeStackFrameph* prev_it_9;
struct list$1sComeStackFrameph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sComeStackFrameph*));
        it_8=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 476))->head;
        __freed_obj__ = 0;
        while(_while_condtional1=it_8!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional1) {
            prev_it_9=it_8;
            __freed_obj__ = 0;
            it_8=((struct list_item$1sComeStackFrameph*)come_null_check(it_8, "./comelang2.h", 479))->next;
            __freed_obj__ = 0;
            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 486))->len=0;
        __freed_obj__ = 0;
        __result11__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result11__;
        __freed_obj__ = 0;
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional13;
_Bool _if_conditional14;
void* right_value6;
void* right_value13;
struct list$1sComeStackFrameph* o2_saved_17;
struct sComeStackFrame* it_20;
_Bool _for_condtionalA1;
void* right_value14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&o2_saved_17, 0, sizeof(struct list$1sComeStackFrameph*));
memset(&it_20, 0, sizeof(struct sComeStackFrame*));
memset(&right_value14, 0, sizeof(void*));
    if(_if_conditional13=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional13) {
        if(_if_conditional14=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 61)))>gNumComeStackFrame,        __freed_obj__ = 0, 
        _if_conditional14) {
            buffer_reset(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 54)));
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 55)),((char*)(right_value6=xsprintf("%s %d\n",sname,sline))));
            if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            for(
            o2_saved_17=(struct list$1sComeStackFrameph*)come_increment_ref_count((((struct list$1sComeStackFrameph*)(right_value13=list$1sComeStackFrameph_reverse(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 59))))))),it_20=list$1sComeStackFrameph_begin(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_17), "libcomelang2.c", 59))) ,            (right_value13 && right_value13 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(list$1sComeStackFramephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            0;            _for_condtionalA1=            !list$1sComeStackFrameph_end(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_17), "libcomelang2.c", 59))) ,            __freed_obj__ = 0, 
            _for_condtionalA1;            it_20=list$1sComeStackFrameph_next(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_17), "libcomelang2.c", 59))) ,            __freed_obj__ = 0, 
            0            ){
                buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 57)),((char*)(right_value14=xsprintf("%s %d\n",((struct sComeStackFrame*)come_null_check(it_20, "libcomelang2.c", 57))->mSName,((struct sComeStackFrame*)come_null_check(it_20, "libcomelang2.c", 57))->mSLine))));
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            if(o2_saved_17 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,o2_saved_17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            gNumComeStackFrame=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 59)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reverse(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value7;
void* right_value8;
struct list$1sComeStackFrameph* result_12;
struct list_item$1sComeStackFrameph* it_13;
_Bool _while_condtional3;
void* right_value12;
struct list$1sComeStackFrameph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct list$1sComeStackFrameph*));
memset(&it_13, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value12, 0, sizeof(void*));
                result_12=(struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value8=list$1sComeStackFrameph_initialize((struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value7=(struct list$1sComeStackFrameph*)come_calloc(1, sizeof(struct list$1sComeStackFrameph)*(1), "./comelang2.h", 995))))))));
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_13=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 997))->tail;
                __freed_obj__ = 0;
                while(_while_condtional3=it_13!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional3) {
                    list$1sComeStackFrameph_push_back(((struct list$1sComeStackFrameph*)come_null_check(result_12, "./comelang2.h", 999)),(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value12=sComeStackFrame_clone(((struct list_item$1sComeStackFrameph*)come_null_check(it_13, "./comelang2.h", 999))->item)))));
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_13=((struct list_item$1sComeStackFrameph*)come_null_check(it_13, "./comelang2.h", 1000))->prev;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result14__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
                if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_initialize(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sComeStackFrameph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result12__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result12__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sComeStackFramephp_finalize(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sComeStackFrameph* it_10;
_Bool _while_condtional2;
struct list_item$1sComeStackFrameph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sComeStackFrameph*));
                        it_10=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_10!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_11=it_10;
                            __freed_obj__ = 0;
                            it_10=((struct list_item$1sComeStackFrameph*)come_null_check(it_10, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_push_back(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional15;
void* right_value9;
struct list_item$1sComeStackFrameph* litem_14;
struct sComeStackFrame* __dec_obj4;
_Bool _if_conditional16;
void* right_value10;
struct list_item$1sComeStackFrameph* litem_15;
struct sComeStackFrame* __dec_obj5;
void* right_value11;
struct list_item$1sComeStackFrameph* litem_16;
struct sComeStackFrame* __dec_obj6;
struct list$1sComeStackFrameph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sComeStackFrameph*));
                        if(_if_conditional15=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional15) {
                            litem_14=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value9=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 272))));
                            if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_14, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_14, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj4=((struct list_item$1sComeStackFrameph*)come_null_check(litem_14, "./comelang2.h", 276))->item;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_14, "./comelang2.h", 276))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                            if(__dec_obj4) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_14;
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 279))->head=litem_14;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional16=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                litem_15=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value10=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 282))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_15, "./comelang2.h", 284))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_15, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj5=((struct list_item$1sComeStackFrameph*)come_null_check(litem_15, "./comelang2.h", 286))->item;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_15, "./comelang2.h", 286))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                                if(__dec_obj5) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_15;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_16=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value11=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 292))));
                                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_16, "./comelang2.h", 294))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_16, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sComeStackFrameph*)come_null_check(litem_16, "./comelang2.h", 296))->item;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_16, "./comelang2.h", 296))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_16;
                                __freed_obj__ = 0;
                                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_16;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result13__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result13__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sComeStackFrame* list$1sComeStackFrameph_begin(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional17;
struct sComeStackFrame* result_18;
struct sComeStackFrame* __result15__;
_Bool _if_conditional18;
struct sComeStackFrame* __result16__;
struct sComeStackFrame* result_19;
struct sComeStackFrame* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_18, 0, sizeof(struct sComeStackFrame*));
memset(&result_19, 0, sizeof(struct sComeStackFrame*));
                if(_if_conditional17=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    __freed_obj__ = 0;
                    memset(&result_18,0,sizeof(struct sComeStackFrame*));
                    __freed_obj__ = 0;
                    __result15__ = __result_obj__ = result_18;
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional18=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional18) {
                    __result16__ = __result_obj__ = ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_19,0,sizeof(struct sComeStackFrame*));
                __freed_obj__ = 0;
                __result17__ = __result_obj__ = result_19;
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
}

static _Bool list$1sComeStackFrameph_end(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result18__ = self==((void*)0)||((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result18__;
                __freed_obj__ = 0;
}

static struct sComeStackFrame* list$1sComeStackFrameph_next(struct list$1sComeStackFrameph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional19;
struct sComeStackFrame* result_21;
struct sComeStackFrame* __result19__;
_Bool _if_conditional20;
struct sComeStackFrame* __result20__;
struct sComeStackFrame* result_22;
struct sComeStackFrame* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_21, 0, sizeof(struct sComeStackFrame*));
memset(&result_22, 0, sizeof(struct sComeStackFrame*));
                if(_if_conditional19=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    __freed_obj__ = 0;
                    memset(&result_21,0,sizeof(struct sComeStackFrame*));
                    __freed_obj__ = 0;
                    __result19__ = __result_obj__ = result_21;
                    __freed_obj__ = 0;
                    return __result19__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional20=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional20) {
                    __result20__ = __result_obj__ = ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_22,0,sizeof(struct sComeStackFrame*));
                __freed_obj__ = 0;
                __result21__ = __result_obj__ = result_22;
                __freed_obj__ = 0;
                return __result21__;
                __freed_obj__ = 0;
}

void come_show_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    printf("%s",((char*)(right_value15=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 66))))));
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    printf("%s",((char*)(right_value16=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 71))))));
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value17;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    __result22__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 76)))));
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
void* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional21=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional21) {
        printf("%s %d: null check error\n",sname,sline);
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result23__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result24__;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional22=!self,    __freed_obj__ = 0, 
    _if_conditional22) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional23=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 96))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional23) {
            __result24__ = self;
            __freed_obj__ = 0;
            return __result24__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result25__ = self;
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result26__ = self;
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result27__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional24=self<0,    __freed_obj__ = 0, 
    _if_conditional24) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional25=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 115))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional25) {
            __result27__ = self;
            __freed_obj__ = 0;
            return __result27__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result28__ = self;
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
int __result29__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional26=self<0,    __freed_obj__ = 0, 
    _if_conditional26) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional27=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 127))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional27) {
            __result29__ = self;
            __freed_obj__ = 0;
            return __result29__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result30__ = self;
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}

int int_value(int self){
void* __result_obj__;
_Bool __freed_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = self;
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __result32__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional28=self<0,    __freed_obj__ = 0, 
    _if_conditional28) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional29=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 145))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional29) {
            __result32__ = self;
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result33__ = self;
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool __result34__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional30=!self,    __freed_obj__ = 0, 
    _if_conditional30) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional31=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 157))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional31) {
            __result34__ = self;
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result35__ = self;
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool __result36__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional32=!self,    __freed_obj__ = 0, 
    _if_conditional32) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional33=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 170))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional33) {
            __result36__ = self;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result37__ = self;
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    __freed_obj__ = 0;
    if(_if_conditional34=!test,    __freed_obj__ = 0, 
    _if_conditional34) {
        puts("false");
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts("ok");
    __freed_obj__ = 0;
}

void come_heap_init(_Bool come_malloc){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional35;
const int size_pages_23=4;
int i_24;
_Bool _for_condtionalA2;
void* right_value18;
void* right_value19;
void* right_value20;
void* right_value21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_24, 0, sizeof(int));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
    gComeMalloc=come_malloc;
    __freed_obj__ = 0;
    if(_if_conditional35=!gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional35) {
        memset(&gHeapPool,0,sizeof(struct sHeapPool));
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        gHeapPool.size_pages=size_pages_23;
        __freed_obj__ = 0;
        gHeapPool.mem_pages=calloc(1,sizeof(void*)*size_pages_23);
        __freed_obj__ = 0;
        for(
        i_24=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_24<size_pages_23 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_24++ ,        __freed_obj__ = 0, 
        0        ){
            gHeapPool.mem_pages[i_24]=calloc(1,sizeof(char)*4048*2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        gHeapPool.top=gHeapPool.mem_pages[0];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    gComeStackFrame=(struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value19=list$1sComeStackFrameph_initialize((struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value18=(struct list$1sComeStackFrameph*)come_calloc(1, sizeof(struct list$1sComeStackFrameph)*(1), "libcomelang2.c", 242))))))));
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 243))))))));
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
}

void come_heap_final(int check_mem_leak){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
struct sMemHeader* it_25;
_Bool _while_condtional4;
struct sMemHeader* next_it_26;
_Bool _if_conditional38;
int i_27;
_Bool _for_condtionalA3;
struct sMemHeader* it_28;
_Bool _while_condtional5;
struct sMemHeader* next_it_29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_25, 0, sizeof(struct sMemHeader*));
memset(&next_it_26, 0, sizeof(struct sMemHeader*));
memset(&i_27, 0, sizeof(int));
memset(&it_28, 0, sizeof(struct sMemHeader*));
memset(&next_it_29, 0, sizeof(struct sMemHeader*));
    if(gComeStackFrame && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,gComeStackFrame, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(gComeStackFrameBuffer && !__freed_obj__) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional36=!gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional36) {
        if(_if_conditional37=check_mem_leak,        __freed_obj__ = 0, 
        _if_conditional37) {
            it_25=gHeapPool.alloc_mem;
            __freed_obj__ = 0;
            while(_while_condtional4=it_25,            __freed_obj__ = 0, 
            _while_condtional4) {
                next_it_26=((struct sMemHeader*)come_null_check(it_25, "libcomelang2.c", 255))->alloc_next;
                __freed_obj__ = 0;
                if(_if_conditional38=!((struct sMemHeader*)come_null_check(it_25, "libcomelang2.c", 261))->freed,                __freed_obj__ = 0, 
                _if_conditional38) {
                    printf("%s %d: detecting memory leak(%p)\n",((struct sMemHeader*)come_null_check(it_25, "libcomelang2.c", 258))->sname,((struct sMemHeader*)come_null_check(it_25, "libcomelang2.c", 258))->sline,(char*)it_25+sizeof(struct sMemHeader)+sizeof(long int)+sizeof(long int));
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_25=next_it_26;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_27=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_27<gHeapPool.size_pages ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_27++ ,        __freed_obj__ = 0, 
        0        ){
            free(gHeapPool.mem_pages[i_27]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(gHeapPool.mem_pages);
        __freed_obj__ = 0;
        it_28=gHeapPool.malloced_free_mem;
        __freed_obj__ = 0;
        while(_while_condtional5=it_28,        __freed_obj__ = 0, 
        _while_condtional5) {
            next_it_29=((struct sMemHeader*)come_null_check(it_28, "libcomelang2.c", 272))->next;
            __freed_obj__ = 0;
            free(it_28);
            __freed_obj__ = 0;
            it_28=next_it_29;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional39;
void* __result38__;
void* result_30;
_Bool _if_conditional40;
struct sMemHeader* it_31;
struct sMemHeader* prev_it_32;
_Bool _while_condtional6;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* __result39__;
struct sMemHeader* header_33;
void* __result40__;
struct sMemHeader* it_34;
struct sMemHeader* prev_it_35;
_Bool _while_condtional7;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* __result41__;
_Bool _if_conditional45;
_Bool _if_conditional46;
int new_size_pages_36;
char** new_mem_pages_37;
int i_38;
_Bool _for_condtionalA4;
int i_39;
_Bool _for_condtionalA5;
struct sMemHeader* header_40;
void* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_30, 0, sizeof(void*));
memset(&it_31, 0, sizeof(struct sMemHeader*));
memset(&prev_it_32, 0, sizeof(struct sMemHeader*));
memset(&header_33, 0, sizeof(struct sMemHeader*));
memset(&it_34, 0, sizeof(struct sMemHeader*));
memset(&prev_it_35, 0, sizeof(struct sMemHeader*));
memset(&new_size_pages_36, 0, sizeof(int));
memset(&new_mem_pages_37, 0, sizeof(char**));
memset(&i_38, 0, sizeof(int));
memset(&i_39, 0, sizeof(int));
memset(&header_40, 0, sizeof(struct sMemHeader*));
    if(_if_conditional39=gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional39) {
        __result38__ = __result_obj__ = calloc(1,size);
        __freed_obj__ = 0;
        return __result38__;
        __freed_obj__ = 0;
    }
    else {
        result_30=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional40=size+sizeof(struct sMemHeader)>=4048*2,        __freed_obj__ = 0, 
        _if_conditional40) {
            it_31=gHeapPool.malloced_free_mem;
            __freed_obj__ = 0;
            prev_it_32=it_31;
            __freed_obj__ = 0;
            while(_while_condtional6=it_31,            __freed_obj__ = 0, 
            _while_condtional6) {
                if(_if_conditional41=size<=((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 319))->size,                __freed_obj__ = 0, 
                _if_conditional41) {
                    result_30=(char*)it_31+sizeof(struct sMemHeader);
                    __freed_obj__ = 0;
                    if(_if_conditional42=it_31==gHeapPool.malloced_free_mem,                    __freed_obj__ = 0, 
                    _if_conditional42) {
                        gHeapPool.malloced_free_mem=((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 303))->next;
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sMemHeader*)come_null_check(prev_it_32, "libcomelang2.c", 306))->next=((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 306))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    memset(result_30,0,size);
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 311))->freed=(_Bool)0;
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 312))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 313))->sname=sname;
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 314))->sline=sline;
                    __freed_obj__ = 0;
                    __result39__ = __result_obj__ = result_30;
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                prev_it_32=it_31;
                __freed_obj__ = 0;
                it_31=((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 320))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            header_33=calloc(1,size+sizeof(struct sMemHeader));
            __freed_obj__ = 0;
            result_30=(char*)header_33+sizeof(struct sMemHeader);
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_33, "libcomelang2.c", 327))->size=size;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_33, "libcomelang2.c", 328))->freed=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_33, "libcomelang2.c", 329))->sname=sname;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_33, "libcomelang2.c", 330))->sline=sline;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_33, "libcomelang2.c", 332))->alloc_next=gHeapPool.alloc_mem;
            __freed_obj__ = 0;
            gHeapPool.alloc_mem=header_33;
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = result_30;
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_34=gHeapPool.free_mem;
        __freed_obj__ = 0;
        prev_it_35=it_34;
        __freed_obj__ = 0;
        while(_while_condtional7=it_34,        __freed_obj__ = 0, 
        _while_condtional7) {
            if(_if_conditional43=size<=((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 362))->size,            __freed_obj__ = 0, 
            _if_conditional43) {
                result_30=(char*)it_34+sizeof(struct sMemHeader);
                __freed_obj__ = 0;
                if(_if_conditional44=it_34==gHeapPool.free_mem,                __freed_obj__ = 0, 
                _if_conditional44) {
                    gHeapPool.free_mem=((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 346))->next;
                    __freed_obj__ = 0;
                }
                else {
                    ((struct sMemHeader*)come_null_check(prev_it_35, "libcomelang2.c", 349))->next=((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 349))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                memset(result_30,0,size);
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 354))->freed=(_Bool)0;
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 355))->next=((void*)0);
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 356))->sname=sname;
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 357))->sline=sline;
                __freed_obj__ = 0;
                __result41__ = __result_obj__ = result_30;
                __freed_obj__ = 0;
                return __result41__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            prev_it_35=it_34;
            __freed_obj__ = 0;
            it_34=((struct sMemHeader*)come_null_check(it_34, "libcomelang2.c", 363))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional45=gHeapPool.top+size+sizeof(struct sMemHeader)-gHeapPool.mem_pages[gHeapPool.num_pages]>=4048*2,        __freed_obj__ = 0, 
        _if_conditional45) {
            gHeapPool.num_pages++;
            __freed_obj__ = 0;
            if(_if_conditional46=gHeapPool.num_pages==gHeapPool.size_pages,            __freed_obj__ = 0, 
            _if_conditional46) {
                new_size_pages_36=gHeapPool.size_pages*2;
                __freed_obj__ = 0;
                new_mem_pages_37=calloc(1,sizeof(char*)*new_size_pages_36);
                __freed_obj__ = 0;
                for(
                i_38=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA4=                i_38<gHeapPool.size_pages ,                __freed_obj__ = 0, 
                _for_condtionalA4;                i_38++ ,                __freed_obj__ = 0, 
                0                ){
                    new_mem_pages_37[i_38]=gHeapPool.mem_pages[i_38];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_39=gHeapPool.size_pages ,                __freed_obj__ = 0, 
                0;                _for_condtionalA5=                i_39<new_size_pages_36 ,                __freed_obj__ = 0, 
                _for_condtionalA5;                i_39++ ,                __freed_obj__ = 0, 
                0                ){
                    new_mem_pages_37[i_39]=calloc(1,sizeof(char)*4048*2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                free(gHeapPool.mem_pages);
                __freed_obj__ = 0;
                gHeapPool.mem_pages=new_mem_pages_37;
                __freed_obj__ = 0;
                gHeapPool.size_pages=new_size_pages_36;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            gHeapPool.top=gHeapPool.mem_pages[gHeapPool.num_pages];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        header_40=(struct sMemHeader*)gHeapPool.top;
        __freed_obj__ = 0;
        result_30=gHeapPool.top+sizeof(struct sMemHeader);
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 395))->size=size;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 396))->freed=(_Bool)0;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 397))->sname=sname;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 398))->sline=sline;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 399))->next=((void*)0);
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 401))->alloc_next=gHeapPool.alloc_mem;
        __freed_obj__ = 0;
        gHeapPool.alloc_mem=header_40;
        __freed_obj__ = 0;
        gHeapPool.top+=size+sizeof(struct sMemHeader);
        __freed_obj__ = 0;
        memset(result_30,0,size);
        __freed_obj__ = 0;
        __result42__ = __result_obj__ = result_30;
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct sMemHeader* header_41;
long int size_42;
int freed_43;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_41, 0, sizeof(struct sMemHeader*));
memset(&size_42, 0, sizeof(long int));
memset(&freed_43, 0, sizeof(int));
    if(_if_conditional47=gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional47) {
        if(_if_conditional48=mem,        __freed_obj__ = 0, 
        _if_conditional48) {
            free(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        header_41=(struct sMemHeader*)(mem-sizeof(struct sMemHeader));
        __freed_obj__ = 0;
        size_42=((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 426))->size;
        __freed_obj__ = 0;
        freed_43=((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 427))->freed;
        __freed_obj__ = 0;
        if(_if_conditional49=size_42+sizeof(struct sMemHeader)>=4048*2,        __freed_obj__ = 0, 
        _if_conditional49) {
            if(_if_conditional50=freed_43,            __freed_obj__ = 0, 
            _if_conditional50) {
                __freed_obj__ = 0;
                return;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 436))->next=gHeapPool.malloced_free_mem;
            __freed_obj__ = 0;
            gHeapPool.malloced_free_mem=header_41;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 439))->freed=(_Bool)1;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional51=freed_43,            __freed_obj__ = 0, 
            _if_conditional51) {
                __freed_obj__ = 0;
                return;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 447))->next=gHeapPool.free_mem;
            __freed_obj__ = 0;
            gHeapPool.free_mem=header_41;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_41, "libcomelang2.c", 450))->freed=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
char* mem_44;
long int* ref_count_45;
long int* size2_46;
void* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_44, 0, sizeof(char*));
memset(&ref_count_45, 0, sizeof(long int*));
memset(&size2_46, 0, sizeof(long int*));
    mem_44=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    __freed_obj__ = 0;
    ref_count_45=(long int*)mem_44;
    __freed_obj__ = 0;
    *ref_count_45=0;
    __freed_obj__ = 0;
    size2_46=(long int*)(mem_44+sizeof(long int));
    __freed_obj__ = 0;
    *size2_46=size*count+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    __result43__ = __result_obj__ = mem_44+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional52;
long int* ref_count_47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_47, 0, sizeof(long int*));
    if(_if_conditional52=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional52) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_47=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    come_free_mem_of_heap_pool((char*)ref_count_47);
    __freed_obj__ = 0;
}

void* come_memdup(void* block, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional53;
void* __result44__;
char* mem_48;
long int* size_p_49;
long int size_50;
void* result_51;
void* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_48, 0, sizeof(char*));
memset(&size_p_49, 0, sizeof(long int*));
memset(&size_50, 0, sizeof(long int));
memset(&result_51, 0, sizeof(void*));
    if(_if_conditional53=!block,    __freed_obj__ = 0, 
    _if_conditional53) {
        __result44__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_48=(char*)block-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    size_p_49=(long int*)(mem_48+sizeof(long int));
    __freed_obj__ = 0;
    size_50=*size_p_49-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    result_51=come_calloc(1,size_50,sname,sline);
    __freed_obj__ = 0;
    memcpy(result_51,block,size_50);
    __freed_obj__ = 0;
    __result45__ = __result_obj__ = result_51;
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional54;
void* __result46__;
long int* ref_count_52;
void* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_52, 0, sizeof(long int*));
    if(_if_conditional54=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional54) {
        __result46__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result46__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_52=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (*ref_count_52)++;
    __freed_obj__ = 0;
    __result47__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional55;
void* __result48__;
long int* ref_count_53;
void* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_53, 0, sizeof(long int*));
    if(_if_conditional55=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional55) {
        __result48__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result48__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_53=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    printf("ref_count %ld\n",*ref_count_53);
    __freed_obj__ = 0;
    __result49__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional56;
void* __result50__;
long int* ref_count_54;
_Bool _if_conditional57;
long int count_55;
_Bool _if_conditional58;
_Bool _if_conditional59;
void (*finalizer_56)(void*);
void* __result51__;
void* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_54, 0, sizeof(long int*));
memset(&count_55, 0, sizeof(long int));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(_if_conditional56=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional56) {
        __result50__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result50__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_54=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    if(_if_conditional57=!no_decrement,    __freed_obj__ = 0, 
    _if_conditional57) {
        (*ref_count_54)--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    count_55=*ref_count_54;
    __freed_obj__ = 0;
    if(_if_conditional58=!no_free&&(count_55<=0||force_delete_),    __freed_obj__ = 0, 
    _if_conditional58) {
        if(_if_conditional59=protocol_obj&&protocol_fun,        __freed_obj__ = 0, 
        _if_conditional59) {
            finalizer_56=protocol_fun;
            __freed_obj__ = 0;
            finalizer_56(protocol_obj);
            __freed_obj__ = 0;
            come_free_object(protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_free_object(mem);
        __freed_obj__ = 0;
        __result51__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
void (*finalizer_57)(void*);
void (*finalizer_58)(void*);
long int* ref_count_59;
_Bool _if_conditional64;
long int count_60;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
void (*finalizer_61)(void*);
_Bool _if_conditional68;
void (*finalizer_62)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&ref_count_59, 0, sizeof(long int*));
memset(&count_60, 0, sizeof(long int));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    if(_if_conditional60=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional60) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional61=call_finalizer_only,    __freed_obj__ = 0, 
    _if_conditional61) {
        if(_if_conditional62=fun,        __freed_obj__ = 0, 
        _if_conditional62) {
            if(_if_conditional63=protocol_obj&&protocol_fun,            __freed_obj__ = 0, 
            _if_conditional63) {
                finalizer_57=protocol_fun;
                __freed_obj__ = 0;
                finalizer_57(protocol_obj);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            finalizer_58=fun;
            __freed_obj__ = 0;
            finalizer_58(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        ref_count_59=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        __freed_obj__ = 0;
        if(_if_conditional64=!no_decrement,        __freed_obj__ = 0, 
        _if_conditional64) {
            (*ref_count_59)--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        count_60=*ref_count_59;
        __freed_obj__ = 0;
        if(_if_conditional65=!no_free&&(count_60<=0||force_delete_),        __freed_obj__ = 0, 
        _if_conditional65) {
            if(_if_conditional66=mem,            __freed_obj__ = 0, 
            _if_conditional66) {
                if(_if_conditional67=protocol_obj&&protocol_fun,                __freed_obj__ = 0, 
                _if_conditional67) {
                    finalizer_61=protocol_fun;
                    __freed_obj__ = 0;
                    finalizer_61(protocol_obj);
                    __freed_obj__ = 0;
                    come_free_object(protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional68=fun,                __freed_obj__ = 0, 
                _if_conditional68) {
                    finalizer_62=fun;
                    __freed_obj__ = 0;
                    finalizer_62(mem);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object(mem);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional69;
char* __result53__;
int len_63;
void* right_value22;
char* result_64;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_63, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
memset(&result_64, 0, sizeof(char*));
    if(_if_conditional69=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional69) {
        __result53__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_63=strlen(str)+1;
    __freed_obj__ = 0;
    result_64=(char*)come_increment_ref_count(((char*)(right_value22=(char*)come_calloc(1, sizeof(char)*(1*(len_63)), "libcomelang2.c", 605))));
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    strncpy(result_64,str,len_63);
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = result_64;
    if(result_64 && !__freed_obj__) { result_64 = come_decrement_ref_count(result_64, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(result_64 && !__freed_obj__) { result_64 = come_decrement_ref_count(result_64, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
_Bool found_65;
int i_66;
_Bool _for_condtionalA6;
_Bool _if_conditional70;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_65, 0, sizeof(_Bool));
memset(&i_66, 0, sizeof(int));
    found_65=(_Bool)0;
    __freed_obj__ = 0;
    for(
    i_66=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    i_66<len ,    __freed_obj__ = 0, 
    _for_condtionalA6;    i_66++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional70=array[i_66]==element,        __freed_obj__ = 0, 
        _if_conditional70) {
            found_65=(_Bool)1;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result55__ = found_65;
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value23;
char* __dec_obj7;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 629))->size=128;
    __freed_obj__ = 0;
    __dec_obj7=((struct buffer*)come_null_check(self, "libcomelang2.c", 630))->buf;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 630))->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 630))->size)), "libcomelang2.c", 630))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 631))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 632))->len=0;
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional71=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 639))->buf,    __freed_obj__ = 0, 
    _if_conditional71) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 639))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 639))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 639))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional72=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 643))->buf,    __freed_obj__ = 0, 
    _if_conditional72) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 643))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 643))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 643))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional73;
struct buffer* __result57__;
void* right_value24;
struct buffer* result_67;
void* right_value25;
char* __dec_obj8;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct buffer*));
memset(&right_value25, 0, sizeof(void*));
    if(_if_conditional73=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional73) {
        __result57__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_67=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 652))));
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_67, "libcomelang2.c", 654))->size=((struct buffer*)come_null_check(self, "libcomelang2.c", 654))->size;
    __freed_obj__ = 0;
    __dec_obj8=((struct buffer*)come_null_check(result_67, "libcomelang2.c", 655))->buf;
    ((struct buffer*)come_null_check(result_67, "libcomelang2.c", 655))->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 655))->size)), "libcomelang2.c", 655))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_67, "libcomelang2.c", 656))->len=((struct buffer*)come_null_check(self, "libcomelang2.c", 656))->len;
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(result_67, "libcomelang2.c", 657))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 657))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 657))->len);
    __freed_obj__ = 0;
    __result58__ = __result_obj__ = result_67;
    if(result_67 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
    if(result_67 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional74;
int __result59__;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional74=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional74) {
        __result59__ = 0;
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result60__ = ((struct buffer*)come_null_check(self, "libcomelang2.c", 667))->len;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional75=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional75) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 675))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 676))->len=0;
    __freed_obj__ = 0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional76=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional76) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 684))->len-=len;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 685))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 685))->len]=0;
    __freed_obj__ = 0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional77;
struct buffer* __result61__;
_Bool _if_conditional78;
void* right_value26;
char* old_buf_68;
int old_len_69;
int new_size_70;
void* right_value27;
char* __dec_obj9;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&old_buf_68, 0, sizeof(char*));
memset(&old_len_69, 0, sizeof(int));
memset(&new_size_70, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
    if(_if_conditional77=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional77) {
        __result61__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional78=((struct buffer*)come_null_check(self, "libcomelang2.c", 704))->len+size+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 704))->size,    __freed_obj__ = 0, 
    _if_conditional78) {
        old_buf_68=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 694))->size)), "libcomelang2.c", 694))));
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_68,((struct buffer*)come_null_check(self, "libcomelang2.c", 695))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 695))->size);
        __freed_obj__ = 0;
        old_len_69=((struct buffer*)come_null_check(self, "libcomelang2.c", 696))->len;
        __freed_obj__ = 0;
        new_size_70=(((struct buffer*)come_null_check(self, "libcomelang2.c", 697))->size+size+1)*2;
        __freed_obj__ = 0;
        __dec_obj9=((struct buffer*)come_null_check(self, "libcomelang2.c", 698))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 698))->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libcomelang2.c", 698))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 699))->buf,old_buf_68,old_len_69);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 700))->buf[old_len_69]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 701))->size=new_size_70;
        __freed_obj__ = 0;
        if(old_buf_68 && !__freed_obj__) { old_buf_68 = come_decrement_ref_count(old_buf_68, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 704))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 704))->len,mem,size);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 705))->len+=size;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 706))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 706))->len]=0;
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional79;
struct buffer* __result63__;
_Bool _if_conditional80;
void* right_value28;
char* old_buf_71;
int old_len_72;
int new_size_73;
void* right_value29;
char* __dec_obj10;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional79) {
        __result63__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional80=((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->len+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->size,    __freed_obj__ = 0, 
    _if_conditional80) {
        old_buf_71=(char*)come_increment_ref_count(((char*)(right_value28=charp_clone(((struct buffer*)come_null_check(self, "libcomelang2.c", 717))->buf))));
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        old_len_72=((struct buffer*)come_null_check(self, "libcomelang2.c", 718))->len;
        __freed_obj__ = 0;
        new_size_73=(((struct buffer*)come_null_check(self, "libcomelang2.c", 720))->size+10+1)*2;
        __freed_obj__ = 0;
        __dec_obj10=((struct buffer*)come_null_check(self, "libcomelang2.c", 721))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 721))->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libcomelang2.c", 721))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 722))->buf,old_buf_71,old_len_72);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 723))->buf[old_len_72]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 724))->size=new_size_73;
        __freed_obj__ = 0;
        if(old_buf_71 && !__freed_obj__) { old_buf_71 = come_decrement_ref_count(old_buf_71, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->len]=c;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 728))->len++;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 730))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 730))->len]=0;
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional81;
struct buffer* __result65__;
int size_74;
_Bool _if_conditional82;
void* right_value30;
char* old_buf_75;
int old_len_76;
int new_size_77;
void* right_value31;
char* __dec_obj11;
struct buffer* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_74, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
    if(_if_conditional81=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional81) {
        __result65__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_74=strlen(mem);
    __freed_obj__ = 0;
    if(_if_conditional82=((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->len+size_74+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->size,    __freed_obj__ = 0, 
    _if_conditional82) {
        old_buf_75=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 743))->size)), "libcomelang2.c", 743))));
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_75,((struct buffer*)come_null_check(self, "libcomelang2.c", 744))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 744))->size);
        __freed_obj__ = 0;
        old_len_76=((struct buffer*)come_null_check(self, "libcomelang2.c", 745))->len;
        __freed_obj__ = 0;
        new_size_77=(((struct buffer*)come_null_check(self, "libcomelang2.c", 746))->size+size_74+1)*2;
        __freed_obj__ = 0;
        __dec_obj11=((struct buffer*)come_null_check(self, "libcomelang2.c", 747))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 747))->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libcomelang2.c", 747))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->buf,old_buf_75,old_len_76);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 749))->buf[old_len_76]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 750))->size=new_size_77;
        __freed_obj__ = 0;
        if(old_buf_75 && !__freed_obj__) { old_buf_75 = come_decrement_ref_count(old_buf_75, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->len,mem,size_74);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 754))->len+=size_74;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 755))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 755))->len]=0;
    __freed_obj__ = 0;
    __result66__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional83;
struct buffer* __result67__;
int size_78;
_Bool _if_conditional84;
void* right_value32;
char* old_buf_79;
int old_len_80;
int new_size_81;
void* right_value33;
char* __dec_obj12;
struct buffer* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_78, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&old_buf_79, 0, sizeof(char*));
memset(&old_len_80, 0, sizeof(int));
memset(&new_size_81, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    if(_if_conditional83=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional83) {
        __result67__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_78=strlen(mem)+1;
    __freed_obj__ = 0;
    if(_if_conditional84=((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->len+size_78+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->size,    __freed_obj__ = 0, 
    _if_conditional84) {
        old_buf_79=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 767))->size)), "libcomelang2.c", 767))));
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_79,((struct buffer*)come_null_check(self, "libcomelang2.c", 768))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 768))->size);
        __freed_obj__ = 0;
        old_len_80=((struct buffer*)come_null_check(self, "libcomelang2.c", 769))->len;
        __freed_obj__ = 0;
        new_size_81=(((struct buffer*)come_null_check(self, "libcomelang2.c", 770))->size+size_78+1)*2;
        __freed_obj__ = 0;
        __dec_obj12=((struct buffer*)come_null_check(self, "libcomelang2.c", 771))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 771))->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libcomelang2.c", 771))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 772))->buf,old_buf_79,old_len_80);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 773))->buf[old_len_80]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 774))->size=new_size_81;
        __freed_obj__ = 0;
        if(old_buf_79 && !__freed_obj__) { old_buf_79 = come_decrement_ref_count(old_buf_79, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->len,mem,size_78);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 778))->len+=size_78;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 779))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 779))->len]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 780))->len++;
    __freed_obj__ = 0;
    __result68__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional85;
struct buffer* __result69__;
int* mem_82;
int size_83;
_Bool _if_conditional86;
void* right_value34;
char* old_buf_84;
int old_len_85;
int new_size_86;
void* right_value35;
char* __dec_obj13;
struct buffer* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_82, 0, sizeof(int*));
memset(&size_83, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
memset(&old_buf_84, 0, sizeof(char*));
memset(&old_len_85, 0, sizeof(int));
memset(&new_size_86, 0, sizeof(int));
memset(&right_value35, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional85) {
        __result69__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_82=&value;
    __freed_obj__ = 0;
    size_83=sizeof(int);
    __freed_obj__ = 0;
    if(_if_conditional86=((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->len+size_83+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->size,    __freed_obj__ = 0, 
    _if_conditional86) {
        old_buf_84=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 794))->size)), "libcomelang2.c", 794))));
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_84,((struct buffer*)come_null_check(self, "libcomelang2.c", 795))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 795))->size);
        __freed_obj__ = 0;
        old_len_85=((struct buffer*)come_null_check(self, "libcomelang2.c", 796))->len;
        __freed_obj__ = 0;
        new_size_86=(((struct buffer*)come_null_check(self, "libcomelang2.c", 797))->size+size_83+1)*2;
        __freed_obj__ = 0;
        __dec_obj13=((struct buffer*)come_null_check(self, "libcomelang2.c", 798))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 798))->buf=(char*)come_increment_ref_count(((char*)(right_value35=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libcomelang2.c", 798))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 799))->buf,old_buf_84,old_len_85);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 800))->buf[old_len_85]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 801))->size=new_size_86;
        __freed_obj__ = 0;
        if(old_buf_84 && !__freed_obj__) { old_buf_84 = come_decrement_ref_count(old_buf_84, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->len,mem_82,size_83);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 805))->len+=size_83;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 806))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 806))->len]=0;
    __freed_obj__ = 0;
    __result70__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
long* mem_87;
int size_88;
_Bool _if_conditional87;
void* right_value36;
char* old_buf_89;
int old_len_90;
int new_size_91;
void* right_value37;
char* __dec_obj14;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_87, 0, sizeof(long*));
memset(&size_88, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&old_buf_89, 0, sizeof(char*));
memset(&old_len_90, 0, sizeof(int));
memset(&new_size_91, 0, sizeof(int));
memset(&right_value37, 0, sizeof(void*));
    mem_87=&value;
    __freed_obj__ = 0;
    size_88=sizeof(long);
    __freed_obj__ = 0;
    if(_if_conditional87=((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->len+size_88+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->size,    __freed_obj__ = 0, 
    _if_conditional87) {
        old_buf_89=(char*)come_increment_ref_count(((char*)(right_value36=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 817))->size)), "libcomelang2.c", 817))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_89,((struct buffer*)come_null_check(self, "libcomelang2.c", 818))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 818))->size);
        __freed_obj__ = 0;
        old_len_90=((struct buffer*)come_null_check(self, "libcomelang2.c", 819))->len;
        __freed_obj__ = 0;
        new_size_91=(((struct buffer*)come_null_check(self, "libcomelang2.c", 820))->size+size_88+1)*2;
        __freed_obj__ = 0;
        __dec_obj14=((struct buffer*)come_null_check(self, "libcomelang2.c", 821))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 821))->buf=(char*)come_increment_ref_count(((char*)(right_value37=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libcomelang2.c", 821))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 822))->buf,old_buf_89,old_len_90);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 823))->buf[old_len_90]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 824))->size=new_size_91;
        __freed_obj__ = 0;
        if(old_buf_89 && !__freed_obj__) { old_buf_89 = come_decrement_ref_count(old_buf_89, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->len,mem_87,size_88);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 828))->len+=size_88;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 829))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 829))->len]=0;
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional88;
struct buffer* __result72__;
short short* mem_92;
int size_93;
_Bool _if_conditional89;
void* right_value38;
char* old_buf_94;
int old_len_95;
int new_size_96;
void* right_value39;
char* __dec_obj15;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_92, 0, sizeof(short short*));
memset(&size_93, 0, sizeof(int));
memset(&right_value38, 0, sizeof(void*));
memset(&old_buf_94, 0, sizeof(char*));
memset(&old_len_95, 0, sizeof(int));
memset(&new_size_96, 0, sizeof(int));
memset(&right_value39, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional88) {
        __result72__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result72__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_92=&value;
    __freed_obj__ = 0;
    size_93=sizeof(short short);
    __freed_obj__ = 0;
    if(_if_conditional89=((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->len+size_93+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->size,    __freed_obj__ = 0, 
    _if_conditional89) {
        old_buf_94=(char*)come_increment_ref_count(((char*)(right_value38=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 844))->size)), "libcomelang2.c", 844))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(old_buf_94,((struct buffer*)come_null_check(self, "libcomelang2.c", 845))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 845))->size);
        __freed_obj__ = 0;
        old_len_95=((struct buffer*)come_null_check(self, "libcomelang2.c", 846))->len;
        __freed_obj__ = 0;
        new_size_96=(((struct buffer*)come_null_check(self, "libcomelang2.c", 847))->size+size_93+1)*2;
        __freed_obj__ = 0;
        __dec_obj15=((struct buffer*)come_null_check(self, "libcomelang2.c", 848))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 848))->buf=(char*)come_increment_ref_count(((char*)(right_value39=(char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "libcomelang2.c", 848))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 849))->buf,old_buf_94,old_len_95);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 850))->buf[old_len_95]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 851))->size=new_size_96;
        __freed_obj__ = 0;
        if(old_buf_94 && !__freed_obj__) { old_buf_94 = come_decrement_ref_count(old_buf_94, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->len,mem_92,size_93);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 855))->len+=size_93;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 856))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 856))->len]=0;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional90;
struct buffer* __result74__;
int len_97;
_Bool _if_conditional91;
int new_size_98;
void* right_value40;
char* __dec_obj16;
int i_99;
_Bool _for_condtionalA7;
struct buffer* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_97, 0, sizeof(int));
memset(&new_size_98, 0, sizeof(int));
memset(&right_value40, 0, sizeof(void*));
memset(&i_99, 0, sizeof(int));
    if(_if_conditional90=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional90) {
        __result74__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result74__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_97=((struct buffer*)come_null_check(self, "libcomelang2.c", 867))->len;
    __freed_obj__ = 0;
    len_97=(len_97+3)&~3;
    __freed_obj__ = 0;
    if(_if_conditional91=len_97>=((struct buffer*)come_null_check(self, "libcomelang2.c", 876))->size,    __freed_obj__ = 0, 
    _if_conditional91) {
        new_size_98=(((struct buffer*)come_null_check(self, "libcomelang2.c", 871))->size+1+1)*2;
        __freed_obj__ = 0;
        __dec_obj16=((struct buffer*)come_null_check(self, "libcomelang2.c", 872))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 872))->buf=(char*)come_increment_ref_count(((char*)(right_value40=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libcomelang2.c", 872))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 873))->size=new_size_98;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    i_99=((struct buffer*)come_null_check(self, "libcomelang2.c", 880))->len ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    i_99<len_97 ,    __freed_obj__ = 0, 
    _for_condtionalA7;    i_99++ ,    __freed_obj__ = 0, 
    0    ){
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 877))->buf[i_99]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 880))->len=len_97;
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
void* right_value41;
void* right_value42;
struct optional$2intbool* __result77__;
_Bool _if_conditional93;
void* right_value43;
void* right_value44;
struct optional$2intbool* __result78__;
_Bool _if_conditional94;
void* right_value45;
void* right_value46;
struct optional$2intbool* __result79__;
void* right_value47;
void* right_value48;
struct optional$2intbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    if(_if_conditional92=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional92) {
        __result77__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 888), ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 888))),0,(_Bool)0))));
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result77__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional93=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional93) {
            __result78__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 891), ((struct optional$2intbool*)(right_value44=optional$2intbool_initialize(((struct optional$2intbool*)(right_value43=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 891))),-1,(_Bool)0))));
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result78__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional94=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                __result79__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 894), ((struct optional$2intbool*)(right_value46=optional$2intbool_initialize(((struct optional$2intbool*)(right_value45=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 894))),1,(_Bool)0))));
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result80__ = __result_obj__ = ((struct optional$2intbool*)(right_value48=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value47=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 897)))),strcmp(((struct buffer*)come_null_check(left, "libcomelang2.c", 897))->buf,((struct buffer*)come_null_check(right, "libcomelang2.c", 897))->buf),(_Bool)1)));
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2intbool* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result76__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result76__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
void* right_value50;
struct buffer* result_100;
_Bool _if_conditional95;
struct buffer* __result81__;
struct buffer* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct buffer*));
    result_100=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 902))), "libcomelang2.c", 902)))))));
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional95=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional95) {
        __result81__ = __result_obj__ = result_100;
        if(result_100 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_100, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result81__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(result_100, "libcomelang2.c", 908)),self);
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = result_100;
    if(result_100 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_100, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(result_100 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_100, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value51;
void* right_value52;
struct buffer* result_101;
_Bool _if_conditional96;
struct buffer* __result83__;
struct buffer* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct buffer*));
    result_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value51=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 915))), "libcomelang2.c", 915)))))));
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional96=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional96) {
        __result83__ = __result_obj__ = result_101;
        if(result_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_101, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result83__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(result_101, "libcomelang2.c", 921)),self);
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = result_101;
    if(result_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_101, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
    if(result_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional97;
void* right_value53;
char* __result85__;
void* right_value54;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    if(_if_conditional97=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional97) {
        __result85__ = __result_obj__ = ((char*)(right_value53=__builtin_string("")));
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result86__ = __result_obj__ = ((char*)(right_value54=__builtin_string(((struct buffer*)come_null_check(self, "libcomelang2.c", 932))->buf)));
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = self==right;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = self==right;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = self==right;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = self==right;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = self==right;
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = self==right;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = self==right;
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = self==right;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional98;
void* right_value55;
void* right_value56;
struct optional$2boolbool* __result96__;
_Bool _if_conditional99;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result97__;
_Bool _if_conditional100;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result98__;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
    if(_if_conditional98=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional98) {
        __result96__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 981), ((struct optional$2boolbool*)(right_value56=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value55=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 981))),(_Bool)1,(_Bool)0))));
        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result96__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional99=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional99) {
            __result97__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 984), ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 984))),(_Bool)0,(_Bool)0))));
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result97__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional100=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                __result98__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 987), ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 987))),(_Bool)0,(_Bool)0))));
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result98__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = ((struct optional$2intbool*)(right_value62=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value61=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 990)))),strcmp(self,right)==0,(_Bool)1)));
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2boolbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result95__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result95__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional101;
void* right_value63;
void* right_value64;
struct optional$2boolbool* __result100__;
_Bool _if_conditional102;
void* right_value65;
void* right_value66;
struct optional$2boolbool* __result101__;
_Bool _if_conditional103;
void* right_value67;
void* right_value68;
struct optional$2boolbool* __result102__;
void* right_value69;
void* right_value70;
struct optional$2boolbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    if(_if_conditional101=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional101) {
        __result100__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 996), ((struct optional$2boolbool*)(right_value64=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value63=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 996))),(_Bool)1,(_Bool)0))));
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional102=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional102) {
            __result101__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 999), ((struct optional$2boolbool*)(right_value66=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value65=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 999))),(_Bool)0,(_Bool)0))));
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional103=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                __result102__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1002), ((struct optional$2boolbool*)(right_value68=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value67=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1002))),(_Bool)0,(_Bool)0))));
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = ((struct optional$2intbool*)(right_value70=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value69=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1005)))),strcmp(self,right)==0,(_Bool)1)));
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
_Bool __result104__;
_Bool _if_conditional105;
_Bool __result105__;
_Bool _if_conditional106;
_Bool __result106__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional104=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional104) {
        __result104__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional105=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional105) {
            __result105__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional106=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                __result106__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result106__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional107;
_Bool __result108__;
_Bool _if_conditional108;
_Bool __result109__;
_Bool _if_conditional109;
_Bool __result110__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional107=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional107) {
        __result108__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional108=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            __result109__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result109__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional109=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional109) {
                __result110__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result110__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result111__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional110;
_Bool __result112__;
_Bool _if_conditional111;
_Bool __result113__;
_Bool _if_conditional112;
_Bool __result114__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional110=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional110) {
        __result112__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional111=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional111) {
            __result113__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional112=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional112) {
                __result114__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result114__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result115__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional113;
_Bool __result116__;
_Bool _if_conditional114;
_Bool __result117__;
_Bool _if_conditional115;
_Bool __result118__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional113=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional113) {
        __result116__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result116__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional114=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional114) {
            __result117__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional115=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                __result118__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result118__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result119__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
void* right_value71;
char* __result120__;
int len_102;
void* right_value72;
char* result_103;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
    if(_if_conditional116=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional116) {
        __result120__ = __result_obj__ = ((char*)(right_value71=__builtin_string("")));
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_102=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_103=(char*)come_increment_ref_count(((char*)(right_value72=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libcomelang2.c", 1076))));
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    strncpy(result_103,self,len_102+1);
    __freed_obj__ = 0;
    strncat(result_103,right,len_102+1);
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = result_103;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
void* right_value73;
char* __result122__;
int len_104;
void* right_value74;
char* result_105;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&right_value74, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional117=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional117) {
        __result122__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_104=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_105=(char*)come_increment_ref_count(((char*)(right_value74=(char*)come_calloc(1, sizeof(char)*(1*(len_104+1)), "libcomelang2.c", 1091))));
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    strncpy(result_105,self,len_104+1);
    __freed_obj__ = 0;
    strncat(result_105,right,len_104+1);
    __freed_obj__ = 0;
    __result123__ = __result_obj__ = result_105;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional118;
void* right_value75;
char* __result124__;
void* right_value76;
void* right_value77;
struct buffer* buf_106;
int i_107;
_Bool _for_condtionalA8;
void* right_value78;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&buf_106, 0, sizeof(struct buffer*));
memset(&i_107, 0, sizeof(int));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional118=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional118) {
        __result124__ = __result_obj__ = ((char*)(right_value75=__builtin_string("")));
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_106=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1104))))))));
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_107=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    i_107<right ,    __freed_obj__ = 0, 
    _for_condtionalA8;    i_107++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_106, "libcomelang2.c", 1107)),self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result125__ = __result_obj__ = ((char*)(right_value78=buffer_to_string(((struct buffer*)come_null_check(buf_106, "libcomelang2.c", 1110)))));
    if(buf_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
    if(buf_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional119;
void* right_value79;
char* __result126__;
void* right_value80;
void* right_value81;
struct buffer* buf_108;
int i_109;
_Bool _for_condtionalA9;
void* right_value82;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&i_109, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
    if(_if_conditional119=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional119) {
        __result126__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1118))))))));
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_109=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    i_109<right ,    __freed_obj__ = 0, 
    _for_condtionalA9;    i_109++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_108, "libcomelang2.c", 1121)),self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result127__ = __result_obj__ = ((char*)(right_value82=buffer_to_string(((struct buffer*)come_null_check(buf_108, "libcomelang2.c", 1124)))));
    if(buf_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
    if(buf_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = (int_get_hash_key(((int)value)));
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = value;
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = value;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = value;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = value;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = value;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional120;
unsigned int __result136__;
int result_110;
char* p_111;
_Bool _while_condtional8;
unsigned int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_110, 0, sizeof(int));
memset(&p_111, 0, sizeof(char*));
    if(_if_conditional120=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional120) {
        __result136__ = 0;
        __freed_obj__ = 0;
        return __result136__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_110=0;
    __freed_obj__ = 0;
    p_111=value;
    __freed_obj__ = 0;
    while(_while_condtional8=*p_111,    __freed_obj__ = 0, 
    _while_condtional8) {
        result_110+=(*p_111);
        __freed_obj__ = 0;
        p_111++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result137__ = result_110;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
unsigned int __result138__;
int result_112;
char* p_113;
_Bool _while_condtional9;
unsigned int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_112, 0, sizeof(int));
memset(&p_113, 0, sizeof(char*));
    if(_if_conditional121=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional121) {
        __result138__ = 0;
        __freed_obj__ = 0;
        return __result138__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_112=0;
    __freed_obj__ = 0;
    p_113=value;
    __freed_obj__ = 0;
    while(_while_condtional9=*p_113,    __freed_obj__ = 0, 
    _while_condtional9) {
        result_112+=(*p_113);
        __freed_obj__ = 0;
        p_113++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result139__ = result_112;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = self;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
char __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = self;
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
short int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = self;
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = self;
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
long int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = self;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

long int size_t_clone(long int self){
void* __result_obj__;
_Bool __freed_obj__;
long int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = self;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
double __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = self;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
float __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = self;
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional122;
char* __result148__;
void* right_value83;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    if(_if_conditional122=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional122) {
        __result148__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result149__ = __result_obj__ = ((char*)(right_value83=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
char* __result150__;
void* right_value84;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
    if(_if_conditional123=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional123) {
        __result150__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result151__ = __result_obj__ = ((char*)(right_value84=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool result_114;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_114, 0, sizeof(_Bool));
    result_114=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result152__ = result_114;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result154__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result155__ = xiswalpha(c)||xiswdigit(c);
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool result_115;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_115, 0, sizeof(_Bool));
    result_115=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result156__ = result_115;
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result157__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result159__ = xisalpha(c)||xisdigit(c);
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool result_116;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_116, 0, sizeof(_Bool));
    result_116=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result160__ = result_116;
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool result_117;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_117, 0, sizeof(_Bool));
    result_117=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result161__ = result_117;
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
int __result162__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional124=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional124) {
        __result162__ = 0;
        __freed_obj__ = 0;
        return __result162__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result163__ = strlen(str);
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
int __result164__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional125=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional125) {
        __result164__ = 0;
        __freed_obj__ = 0;
        return __result164__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result165__ = strlen(str);
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional126;
void* right_value85;
char* __result166__;
int len_118;
void* right_value86;
char* result_119;
int i_120;
_Bool _for_condtionalA10;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&right_value86, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&i_120, 0, sizeof(int));
    if(_if_conditional126=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional126) {
        __result166__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        __freed_obj__ = 0;
        return __result166__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_118=strlen(str);
    __freed_obj__ = 0;
    result_119=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libcomelang2.c", 1335))));
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_120=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA10=    i_120<len_118 ,    __freed_obj__ = 0, 
    _for_condtionalA10;    i_120++ ,    __freed_obj__ = 0, 
    0    ){
        result_119[i_120]=str[len_118-i_120-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_119[len_118]=0;
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = result_119;
    if(result_119 && !__freed_obj__) { result_119 = come_decrement_ref_count(result_119, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(result_119 && !__freed_obj__) { result_119 = come_decrement_ref_count(result_119, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
void* right_value87;
char* __result168__;
int len_121;
void* right_value88;
char* result_122;
int i_123;
_Bool _for_condtionalA11;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
memset(&len_121, 0, sizeof(int));
memset(&right_value88, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&i_123, 0, sizeof(int));
    if(_if_conditional127=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional127) {
        __result168__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        __freed_obj__ = 0;
        return __result168__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_121=strlen(str);
    __freed_obj__ = 0;
    result_122=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "libcomelang2.c", 1352))));
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_123=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    i_123<len_121 ,    __freed_obj__ = 0, 
    _for_condtionalA11;    i_123++ ,    __freed_obj__ = 0, 
    0    ){
        result_122[i_123]=str[len_121-i_123-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_122[len_121]=0;
    __freed_obj__ = 0;
    __result169__ = __result_obj__ = result_122;
    if(result_122 && !__freed_obj__) { result_122 = come_decrement_ref_count(result_122, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
    if(result_122 && !__freed_obj__) { result_122 = come_decrement_ref_count(result_122, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional128;
void* right_value89;
char* __result170__;
int len_124;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value90;
void* right_value91;
char* __result171__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value92;
char* __result172__;
_Bool _if_conditional135;
void* right_value93;
char* __result173__;
void* right_value94;
char* result_125;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&len_124, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_125, 0, sizeof(char*));
    if(_if_conditional128=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional128) {
        __result170__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        __freed_obj__ = 0;
        return __result170__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_124=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional129=head<0,    __freed_obj__ = 0, 
    _if_conditional129) {
        head+=len_124;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional130=tail<0,    __freed_obj__ = 0, 
    _if_conditional130) {
        tail+=len_124+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional131=head>tail,    __freed_obj__ = 0, 
    _if_conditional131) {
        __result171__ = __result_obj__ = ((char*)(right_value91=string_reverse(((char*)come_null_check(((char*)(right_value90=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1378)),tail,head))), "libcomelang2.c", 1378)))));
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional132=head<0,    __freed_obj__ = 0, 
    _if_conditional132) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional133=tail>=len_124,    __freed_obj__ = 0, 
    _if_conditional133) {
        tail=len_124;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional134=head==tail,    __freed_obj__ = 0, 
    _if_conditional134) {
        __result172__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        __freed_obj__ = 0;
        return __result172__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional135=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional135) {
        __result173__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_125=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1397))));
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(result_125,str+head,tail-head);
    __freed_obj__ = 0;
    result_125[tail-head]=0;
    __freed_obj__ = 0;
    __result174__ = __result_obj__ = result_125;
    if(result_125 && !__freed_obj__) { result_125 = come_decrement_ref_count(result_125, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
    if(result_125 && !__freed_obj__) { result_125 = come_decrement_ref_count(result_125, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional136;
void* right_value95;
char* __result175__;
int len_126;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value96;
void* right_value97;
char* __result176__;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
void* right_value98;
char* __result177__;
_Bool _if_conditional143;
void* right_value99;
char* __result178__;
void* right_value100;
char* result_127;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_126, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
    if(_if_conditional136=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional136) {
        __result175__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        __freed_obj__ = 0;
        return __result175__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_126=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional137=head<0,    __freed_obj__ = 0, 
    _if_conditional137) {
        head+=len_126;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional138=tail<0,    __freed_obj__ = 0, 
    _if_conditional138) {
        tail+=len_126+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional139=head>tail,    __freed_obj__ = 0, 
    _if_conditional139) {
        __result176__ = __result_obj__ = ((char*)(right_value97=string_reverse(((char*)come_null_check(((char*)(right_value96=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1421)),tail,head))), "libcomelang2.c", 1421)))));
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result176__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional140=head<0,    __freed_obj__ = 0, 
    _if_conditional140) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional141=tail>=len_126,    __freed_obj__ = 0, 
    _if_conditional141) {
        tail=len_126;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional142=head==tail,    __freed_obj__ = 0, 
    _if_conditional142) {
        __result177__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        __freed_obj__ = 0;
        return __result177__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional143=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional143) {
        __result178__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        __freed_obj__ = 0;
        return __result178__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_127=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1440))));
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(result_127,str+head,tail-head);
    __freed_obj__ = 0;
    result_127[tail-head]=0;
    __freed_obj__ = 0;
    __result179__ = __result_obj__ = result_127;
    if(result_127 && !__freed_obj__) { result_127 = come_decrement_ref_count(result_127, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result179__;
    __freed_obj__ = 0;
    if(result_127 && !__freed_obj__) { result_127 = come_decrement_ref_count(result_127, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional144;
void* right_value101;
char* __result180__;
int len_128;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value102;
void* right_value103;
char* __result181__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value104;
char* __result182__;
_Bool _if_conditional151;
void* right_value105;
char* __result183__;
void* right_value106;
char* result_129;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&len_128, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
    if(_if_conditional144=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional144) {
        __result180__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        __freed_obj__ = 0;
        return __result180__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_128=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional145=head<0,    __freed_obj__ = 0, 
    _if_conditional145) {
        head+=len_128;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional146=tail<0,    __freed_obj__ = 0, 
    _if_conditional146) {
        tail+=len_128+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional147=head>tail,    __freed_obj__ = 0, 
    _if_conditional147) {
        __result181__ = __result_obj__ = ((char*)(right_value103=string_reverse(((char*)come_null_check(((char*)(right_value102=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1464)),tail,head))), "libcomelang2.c", 1464)))));
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional148=head<0,    __freed_obj__ = 0, 
    _if_conditional148) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional149=tail>=len_128,    __freed_obj__ = 0, 
    _if_conditional149) {
        tail=len_128;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional150=head==tail,    __freed_obj__ = 0, 
    _if_conditional150) {
        __result182__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        __freed_obj__ = 0;
        return __result182__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional151=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional151) {
        __result183__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        __freed_obj__ = 0;
        return __result183__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_129=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1483))));
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(result_129,str+head,tail-head);
    __freed_obj__ = 0;
    result_129[tail-head]=0;
    __freed_obj__ = 0;
    __result184__ = __result_obj__ = result_129;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
void* right_value107;
char* __result185__;
int len_130;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value108;
void* right_value109;
char* __result186__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value110;
char* __result187__;
_Bool _if_conditional159;
void* right_value111;
char* __result188__;
void* right_value112;
char* result_131;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&len_130, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&result_131, 0, sizeof(char*));
    if(_if_conditional152=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result185__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        __freed_obj__ = 0;
        return __result185__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_130=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional153=head<0,    __freed_obj__ = 0, 
    _if_conditional153) {
        head+=len_130;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional154=tail<0,    __freed_obj__ = 0, 
    _if_conditional154) {
        tail+=len_130+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional155=head>tail,    __freed_obj__ = 0, 
    _if_conditional155) {
        __result186__ = __result_obj__ = ((char*)(right_value109=string_reverse(((char*)come_null_check(((char*)(right_value108=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1507)),tail,head))), "libcomelang2.c", 1507)))));
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional156=head<0,    __freed_obj__ = 0, 
    _if_conditional156) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional157=tail>=len_130,    __freed_obj__ = 0, 
    _if_conditional157) {
        tail=len_130;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional158=head==tail,    __freed_obj__ = 0, 
    _if_conditional158) {
        __result187__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        __freed_obj__ = 0;
        return __result187__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional159=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional159) {
        __result188__ = __result_obj__ = ((char*)(right_value111=__builtin_string("")));
        __freed_obj__ = 0;
        return __result188__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_131=(char*)come_increment_ref_count(((char*)(right_value112=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1526))));
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(result_131,str+head,tail-head);
    __freed_obj__ = 0;
    result_131[tail-head]=0;
    __freed_obj__ = 0;
    __result189__ = __result_obj__ = result_131;
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result189__;
    __freed_obj__ = 0;
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional160;
void* right_value113;
char* __result190__;
va_list args_132;
char* result_133;
int len_134;
_Bool _if_conditional161;
void* right_value114;
char* __result191__;
void* right_value115;
char* result2_135;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&args_132, 0, sizeof(va_list));
memset(&result_133, 0, sizeof(char*));
memset(&len_134, 0, sizeof(int));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&result2_135, 0, sizeof(char*));
    if(_if_conditional160=msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional160) {
        __result190__ = __result_obj__ = ((char*)(right_value113=__builtin_string("")));
        __freed_obj__ = 0;
        return __result190__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_132,msg);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    len_134=vasprintf(&result_133,msg,args_132);
    __freed_obj__ = 0;
    __builtin_va_end(args_132);
    __freed_obj__ = 0;
    if(_if_conditional161=len_134<0,    __freed_obj__ = 0, 
    _if_conditional161) {
        __result191__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result191__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_135=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(result_133))));
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(result_133);
    __freed_obj__ = 0;
    __result192__ = __result_obj__ = result2_135;
    if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_135 && !__freed_obj__) { result2_135 = come_decrement_ref_count(result2_135, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
    if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_135 && !__freed_obj__) { result2_135 = come_decrement_ref_count(result2_135, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional162;
void* right_value116;
char* __result193__;
int len_136;
_Bool _if_conditional163;
void* right_value117;
char* __result194__;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value118;
char* __result195__;
_Bool _if_conditional168;
void* right_value119;
char* sub_str_137;
void* right_value120;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&len_136, 0, sizeof(int));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&sub_str_137, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
    if(_if_conditional162=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional162) {
        __result193__ = __result_obj__ = ((char*)(right_value116=__builtin_string("")));
        __freed_obj__ = 0;
        return __result193__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_136=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional163=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional163) {
        __result194__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result194__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional164=head<0,    __freed_obj__ = 0, 
    _if_conditional164) {
        head+=len_136;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional165=tail<0,    __freed_obj__ = 0, 
    _if_conditional165) {
        tail+=len_136+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional166=head<0,    __freed_obj__ = 0, 
    _if_conditional166) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional167=tail<0,    __freed_obj__ = 0, 
    _if_conditional167) {
        __result195__ = __result_obj__ = ((char*)(right_value118=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional168=tail>=len_136,    __freed_obj__ = 0, 
    _if_conditional168) {
        tail=len_136;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_137=(char*)come_increment_ref_count(((char*)(right_value119=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1588)),tail,-1))));
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_137,string_length(((char*)come_null_check(sub_str_137, "libcomelang2.c", 1590)))+1);
    __freed_obj__ = 0;
    __result196__ = __result_obj__ = ((char*)(right_value120=__builtin_string(str)));
    if(sub_str_137 && !__freed_obj__) { sub_str_137 = come_decrement_ref_count(sub_str_137, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result196__;
    __freed_obj__ = 0;
    if(sub_str_137 && !__freed_obj__) { sub_str_137 = come_decrement_ref_count(sub_str_137, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional169;
void* right_value121;
char* __result197__;
int len_138;
_Bool _if_conditional170;
void* right_value122;
char* __result198__;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value123;
char* __result199__;
_Bool _if_conditional175;
void* right_value124;
char* sub_str_139;
void* right_value125;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&len_138, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&sub_str_139, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
    if(_if_conditional169=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional169) {
        __result197__ = __result_obj__ = ((char*)(right_value121=__builtin_string("")));
        __freed_obj__ = 0;
        return __result197__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_138=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional170=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional170) {
        __result198__ = __result_obj__ = ((char*)(right_value122=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result198__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional171=head<0,    __freed_obj__ = 0, 
    _if_conditional171) {
        head+=len_138;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional172=tail<0,    __freed_obj__ = 0, 
    _if_conditional172) {
        tail+=len_138+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional173=head<0,    __freed_obj__ = 0, 
    _if_conditional173) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional174=tail<0,    __freed_obj__ = 0, 
    _if_conditional174) {
        __result199__ = __result_obj__ = ((char*)(right_value123=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result199__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional175=tail>=len_138,    __freed_obj__ = 0, 
    _if_conditional175) {
        tail=len_138;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_139=(char*)come_increment_ref_count(((char*)(right_value124=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1627)),tail,-1))));
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_139,string_length(((char*)come_null_check(sub_str_139, "libcomelang2.c", 1629)))+1);
    __freed_obj__ = 0;
    __result200__ = __result_obj__ = ((char*)(right_value125=__builtin_string(str)));
    if(sub_str_139 && !__freed_obj__) { sub_str_139 = come_decrement_ref_count(sub_str_139, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result200__;
    __freed_obj__ = 0;
    if(sub_str_139 && !__freed_obj__) { sub_str_139 = come_decrement_ref_count(sub_str_139, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional176;
void* right_value126;
void* right_value127;
struct list$1charph* __result202__;
void* right_value128;
void* right_value129;
struct list$1charph* result_142;
void* right_value130;
void* right_value131;
struct buffer* str_143;
int i_144;
_Bool _for_condtionalA12;
_Bool _if_conditional178;
void* right_value135;
_Bool _if_conditional181;
void* right_value136;
struct list$1charph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct list$1charph*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&str_143, 0, sizeof(struct buffer*));
memset(&i_144, 0, sizeof(int));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
    if(_if_conditional176=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional176) {
        __result202__ = __result_obj__ = ((struct list$1charph*)(right_value127=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1637)))))));
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result202__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_142=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1640))), "libcomelang2.c", 1640)))))));
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    str_143=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1642))), "libcomelang2.c", 1642)))))));
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_144=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA12=    i_144<charp_length(((char*)come_null_check(self, "libcomelang2.c", 1653))) ,    __freed_obj__ = 0, 
    _for_condtionalA12;    i_144++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional178=self[i_144]==c,        __freed_obj__ = 0, 
        _if_conditional178) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_142, "libcomelang2.c", 1646)),(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(((struct buffer*)come_null_check(str_143, "libcomelang2.c", 1646))->buf)))));
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(str_143, "libcomelang2.c", 1647)));
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(str_143, "libcomelang2.c", 1650)),self[i_144]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional181=buffer_length(((struct buffer*)come_null_check(str_143, "libcomelang2.c", 1657)))!=0,    __freed_obj__ = 0, 
    _if_conditional181) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_142, "libcomelang2.c", 1654)),(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(((struct buffer*)come_null_check(str_143, "libcomelang2.c", 1654))->buf)))));
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = result_142;
    if(result_142 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_143 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(result_142 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_143 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result201__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result201__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_140;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_140, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_141, 0, sizeof(struct list_item$1charph*));
                it_140=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional10=it_140!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    prev_it_141=it_140;
                    __freed_obj__ = 0;
                    it_140=((struct list_item$1charph*)come_null_check(it_140, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_141 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_141, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional177=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional177) {
                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional179;
void* right_value132;
struct list_item$1charph* litem_145;
char* __dec_obj17;
_Bool _if_conditional180;
void* right_value133;
struct list_item$1charph* litem_146;
char* __dec_obj18;
void* right_value134;
struct list_item$1charph* litem_147;
char* __dec_obj19;
struct list$1charph* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&right_value133, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1charph*));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional179=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional179) {
                    litem_145=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj17=((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_145;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_145;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional180=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        litem_146=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value133=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj18=((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_146;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_146;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value134=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj19=((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_147;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_147;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result203__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result203__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
void* right_value137;
void* right_value138;
struct list$1charph* __result205__;
void* right_value139;
void* right_value140;
struct list$1charph* result_148;
void* right_value141;
void* right_value142;
struct buffer* str_149;
int i_150;
_Bool _for_condtionalA13;
_Bool _if_conditional183;
void* right_value143;
_Bool _if_conditional184;
void* right_value144;
struct list$1charph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct list$1charph*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&str_149, 0, sizeof(struct buffer*));
memset(&i_150, 0, sizeof(int));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
    if(_if_conditional182=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional182) {
        __result205__ = __result_obj__ = ((struct list$1charph*)(right_value138=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1663)))))));
        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result205__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_148=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value140=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value139=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1666))), "libcomelang2.c", 1666)))))));
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    str_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value142=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value141=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1668))), "libcomelang2.c", 1668)))))));
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_150=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_150<charp_length(((char*)come_null_check(self, "libcomelang2.c", 1679))) ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_150++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional183=self[i_150]==c,        __freed_obj__ = 0, 
        _if_conditional183) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_148, "libcomelang2.c", 1672)),(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(((struct buffer*)come_null_check(str_149, "libcomelang2.c", 1672))->buf)))));
            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(str_149, "libcomelang2.c", 1673)));
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(str_149, "libcomelang2.c", 1676)),self[i_150]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional184=buffer_length(((struct buffer*)come_null_check(str_149, "libcomelang2.c", 1683)))!=0,    __freed_obj__ = 0, 
    _if_conditional184) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_148, "libcomelang2.c", 1680)),(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(((struct buffer*)come_null_check(str_149, "libcomelang2.c", 1680))->buf)))));
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result206__ = __result_obj__ = result_148;
    if(result_148 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_149 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result206__;
    __freed_obj__ = 0;
    if(result_148 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_149 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional185;
void* right_value145;
char* __result207__;
char* p_151;
_Bool _while_condtional11;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value146;
char* __result208__;
void* right_value147;
char* __result209__;
void* right_value148;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
memset(&p_151, 0, sizeof(char*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    if(_if_conditional185=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional185) {
        __result207__ = __result_obj__ = ((char*)(right_value145=__builtin_string("")));
        __freed_obj__ = 0;
        return __result207__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_151=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional11=p_151>=path,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional186=*p_151==47,        __freed_obj__ = 0, 
        _if_conditional186) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_151--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional187=p_151<path,    __freed_obj__ = 0, 
    _if_conditional187) {
        __result208__ = __result_obj__ = ((char*)(right_value146=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result208__;
        __freed_obj__ = 0;
    }
    else {
        __result209__ = __result_obj__ = ((char*)(right_value147=__builtin_string(p_151+1)));
        __freed_obj__ = 0;
        return __result209__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result210__ = __result_obj__ = ((char*)(right_value148=__builtin_string("")));
    __freed_obj__ = 0;
    return __result210__;
    __freed_obj__ = 0;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional188;
void* right_value149;
char* __result211__;
void* right_value150;
void* right_value151;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    if(_if_conditional188=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional188) {
        __result211__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        __freed_obj__ = 0;
        return __result211__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result212__ = __result_obj__ = ((char*)(right_value151=__builtin_string(dirname(((char*)(right_value150=__builtin_string(path)))))));
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result212__;
    __freed_obj__ = 0;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional189;
void* right_value152;
char* __result213__;
void* right_value153;
char* path2_152;
char* p_153;
_Bool _while_condtional12;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value154;
char* __result214__;
void* right_value155;
char* __result215__;
void* right_value156;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&path2_152, 0, sizeof(char*));
memset(&p_153, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
    if(_if_conditional189=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional189) {
        __result213__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        __freed_obj__ = 0;
        return __result213__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    path2_152=(char*)come_increment_ref_count(((char*)(right_value153=xbasename(path))));
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    p_153=path2_152+strlen(path2_152);
    __freed_obj__ = 0;
    while(_while_condtional12=p_153>=path2_152,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional190=*p_153==46,        __freed_obj__ = 0, 
        _if_conditional190) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_153--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional191=p_153<path2_152,    __freed_obj__ = 0, 
    _if_conditional191) {
        __result214__ = __result_obj__ = ((char*)(right_value154=__builtin_string(path2_152)));
        if(path2_152 && !__freed_obj__) { path2_152 = come_decrement_ref_count(path2_152, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result214__;
        __freed_obj__ = 0;
    }
    else {
        __result215__ = __result_obj__ = ((char*)(right_value155=string_substring(((char*)come_null_check(path2_152, "libcomelang2.c", 1745)),0,p_153-path2_152)));
        if(path2_152 && !__freed_obj__) { path2_152 = come_decrement_ref_count(path2_152, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result215__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result216__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
    if(path2_152 && !__freed_obj__) { path2_152 = come_decrement_ref_count(path2_152, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result216__;
    __freed_obj__ = 0;
    if(path2_152 && !__freed_obj__) { path2_152 = come_decrement_ref_count(path2_152, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional192;
void* right_value157;
char* __result217__;
char* p_154;
_Bool _while_condtional13;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value158;
char* __result218__;
void* right_value159;
char* __result219__;
void* right_value160;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&p_154, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    if(_if_conditional192=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional192) {
        __result217__ = __result_obj__ = ((char*)(right_value157=__builtin_string("")));
        __freed_obj__ = 0;
        return __result217__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_154=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional13=p_154>=path,    __freed_obj__ = 0, 
    _while_condtional13) {
        if(_if_conditional193=*p_154==46,        __freed_obj__ = 0, 
        _if_conditional193) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_154--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional194=p_154<path,    __freed_obj__ = 0, 
    _if_conditional194) {
        __result218__ = __result_obj__ = ((char*)(right_value158=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result218__;
        __freed_obj__ = 0;
    }
    else {
        __result219__ = __result_obj__ = ((char*)(right_value159=__builtin_string(p_154+1)));
        __freed_obj__ = 0;
        return __result219__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result220__ = __result_obj__ = ((char*)(right_value160=__builtin_string("")));
    __freed_obj__ = 0;
    return __result220__;
    __freed_obj__ = 0;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional195;
void* right_value161;
char* __result221__;
char* result_155;
void* right_value162;
char* result2_156;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&result2_156, 0, sizeof(char*));
    if(_if_conditional195=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional195) {
        __result221__ = __result_obj__ = ((char*)(right_value161=__builtin_string("")));
        __freed_obj__ = 0;
        return __result221__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_155=realpath(path,((void*)0));
    __freed_obj__ = 0;
    result2_156=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(result_155))));
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(result_155);
    __freed_obj__ = 0;
    __result222__ = __result_obj__ = result2_156;
    if(result2_156 && !__freed_obj__) { result2_156 = come_decrement_ref_count(result2_156, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result222__;
    __freed_obj__ = 0;
    if(result2_156 && !__freed_obj__) { result2_156 = come_decrement_ref_count(result2_156, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional196;
void* right_value163;
char* __result223__;
void* right_value164;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
    if(_if_conditional196=self,    __freed_obj__ = 0, 
    _if_conditional196) {
        __result223__ = __result_obj__ = ((char*)(right_value163=__builtin_string("true")));
        __freed_obj__ = 0;
        return __result223__;
        __freed_obj__ = 0;
    }
    else {
        __result224__ = __result_obj__ = ((char*)(right_value164=__builtin_string("false")));
        __freed_obj__ = 0;
        return __result224__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value165;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result225__ = __result_obj__ = ((char*)(right_value165=xsprintf("%c",self)));
    __freed_obj__ = 0;
    return __result225__;
    __freed_obj__ = 0;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value166;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
    __result226__ = __result_obj__ = ((char*)(right_value166=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result226__;
    __freed_obj__ = 0;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value167;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value167=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result227__;
    __freed_obj__ = 0;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value168;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
    __result228__ = __result_obj__ = ((char*)(right_value168=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result228__;
    __freed_obj__ = 0;
}

char* size_t_to_string(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value169;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
    __result229__ = __result_obj__ = ((char*)(right_value169=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result229__;
    __freed_obj__ = 0;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value170;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value170=xsprintf("%f",self)));
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value171;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
    __result231__ = __result_obj__ = ((char*)(right_value171=xsprintf("%lf",self)));
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional197;
void* right_value172;
char* __result232__;
void* right_value173;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
    if(_if_conditional197=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional197) {
        __result232__ = __result_obj__ = ((char*)(right_value172=__builtin_string("")));
        __freed_obj__ = 0;
        return __result232__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result233__ = __result_obj__ = ((char*)(right_value173=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result233__;
    __freed_obj__ = 0;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional198;
void* right_value174;
char* __result234__;
void* right_value175;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
    if(_if_conditional198=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional198) {
        __result234__ = __result_obj__ = ((char*)(right_value174=__builtin_string("")));
        __freed_obj__ = 0;
        return __result234__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result235__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result235__;
    __freed_obj__ = 0;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional199;
int __result236__;
_Bool _if_conditional200;
int __result237__;
_Bool _if_conditional201;
int __result238__;
int __result239__;
int __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional199=!left&&right,    __freed_obj__ = 0, 
    _if_conditional199) {
        __result236__ = -1;
        __freed_obj__ = 0;
        return __result236__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional200=left&&right,        __freed_obj__ = 0, 
        _if_conditional200) {
            __result237__ = 0;
            __freed_obj__ = 0;
            return __result237__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional201=!left&&!right,            __freed_obj__ = 0, 
            _if_conditional201) {
                __result238__ = 0;
                __freed_obj__ = 0;
                return __result238__;
                __freed_obj__ = 0;
            }
            else {
                __result239__ = 1;
                __freed_obj__ = 0;
                return __result239__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result240__ = 0;
    __freed_obj__ = 0;
    return __result240__;
    __freed_obj__ = 0;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional202;
int __result241__;
_Bool _if_conditional203;
int __result242__;
int __result243__;
int __result244__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional202=left<right,    __freed_obj__ = 0, 
    _if_conditional202) {
        __result241__ = -1;
        __freed_obj__ = 0;
        return __result241__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional203=left>right,        __freed_obj__ = 0, 
        _if_conditional203) {
            __result242__ = 1;
            __freed_obj__ = 0;
            return __result242__;
            __freed_obj__ = 0;
        }
        else {
            __result243__ = 0;
            __freed_obj__ = 0;
            return __result243__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result244__ = 0;
    __freed_obj__ = 0;
    return __result244__;
    __freed_obj__ = 0;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional204;
int __result245__;
_Bool _if_conditional205;
int __result246__;
int __result247__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional204=left<right,    __freed_obj__ = 0, 
    _if_conditional204) {
        __result245__ = -1;
        __freed_obj__ = 0;
        return __result245__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional205=left>right,        __freed_obj__ = 0, 
        _if_conditional205) {
            __result246__ = 1;
            __freed_obj__ = 0;
            return __result246__;
            __freed_obj__ = 0;
        }
        else {
            __result247__ = 0;
            __freed_obj__ = 0;
            return __result247__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result248__ = 0;
    __freed_obj__ = 0;
    return __result248__;
    __freed_obj__ = 0;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional206;
int __result249__;
_Bool _if_conditional207;
int __result250__;
int __result251__;
int __result252__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional206=left<right,    __freed_obj__ = 0, 
    _if_conditional206) {
        __result249__ = -1;
        __freed_obj__ = 0;
        return __result249__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional207=left>right,        __freed_obj__ = 0, 
        _if_conditional207) {
            __result250__ = 1;
            __freed_obj__ = 0;
            return __result250__;
            __freed_obj__ = 0;
        }
        else {
            __result251__ = 0;
            __freed_obj__ = 0;
            return __result251__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result252__ = 0;
    __freed_obj__ = 0;
    return __result252__;
    __freed_obj__ = 0;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional208;
int __result253__;
_Bool _if_conditional209;
int __result254__;
int __result255__;
int __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional208=left<right,    __freed_obj__ = 0, 
    _if_conditional208) {
        __result253__ = -1;
        __freed_obj__ = 0;
        return __result253__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional209=left>right,        __freed_obj__ = 0, 
        _if_conditional209) {
            __result254__ = 1;
            __freed_obj__ = 0;
            return __result254__;
            __freed_obj__ = 0;
        }
        else {
            __result255__ = 0;
            __freed_obj__ = 0;
            return __result255__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result256__ = 0;
    __freed_obj__ = 0;
    return __result256__;
    __freed_obj__ = 0;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional210;
int __result257__;
_Bool _if_conditional211;
int __result258__;
int __result259__;
int __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=left<right,    __freed_obj__ = 0, 
    _if_conditional210) {
        __result257__ = -1;
        __freed_obj__ = 0;
        return __result257__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional211=left>right,        __freed_obj__ = 0, 
        _if_conditional211) {
            __result258__ = 1;
            __freed_obj__ = 0;
            return __result258__;
            __freed_obj__ = 0;
        }
        else {
            __result259__ = 0;
            __freed_obj__ = 0;
            return __result259__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result260__ = 0;
    __freed_obj__ = 0;
    return __result260__;
    __freed_obj__ = 0;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional212;
int __result261__;
_Bool _if_conditional213;
int __result262__;
int __result263__;
int __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional212=left<right,    __freed_obj__ = 0, 
    _if_conditional212) {
        __result261__ = -1;
        __freed_obj__ = 0;
        return __result261__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional213=left>right,        __freed_obj__ = 0, 
        _if_conditional213) {
            __result262__ = 1;
            __freed_obj__ = 0;
            return __result262__;
            __freed_obj__ = 0;
        }
        else {
            __result263__ = 0;
            __freed_obj__ = 0;
            return __result263__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result264__ = 0;
    __freed_obj__ = 0;
    return __result264__;
    __freed_obj__ = 0;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional214;
int __result265__;
_Bool _if_conditional215;
int __result266__;
int __result267__;
int __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional214=left<right,    __freed_obj__ = 0, 
    _if_conditional214) {
        __result265__ = -1;
        __freed_obj__ = 0;
        return __result265__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional215=left>right,        __freed_obj__ = 0, 
        _if_conditional215) {
            __result266__ = 1;
            __freed_obj__ = 0;
            return __result266__;
            __freed_obj__ = 0;
        }
        else {
            __result267__ = 0;
            __freed_obj__ = 0;
            return __result267__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result268__ = 0;
    __freed_obj__ = 0;
    return __result268__;
    __freed_obj__ = 0;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional216;
int __result269__;
_Bool _if_conditional217;
int __result270__;
_Bool _if_conditional218;
int __result271__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional216=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional216) {
        __result269__ = 0;
        __freed_obj__ = 0;
        return __result269__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional217=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional217) {
            __result270__ = -1;
            __freed_obj__ = 0;
            return __result270__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional218=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                __result271__ = 1;
                __freed_obj__ = 0;
                return __result271__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result272__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result272__;
    __freed_obj__ = 0;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional219;
int __result273__;
_Bool _if_conditional220;
int __result274__;
_Bool _if_conditional221;
int __result275__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional219=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional219) {
        __result273__ = 0;
        __freed_obj__ = 0;
        return __result273__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional220=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional220) {
            __result274__ = -1;
            __freed_obj__ = 0;
            return __result274__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional221=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                __result275__ = 1;
                __freed_obj__ = 0;
                return __result275__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result276__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result276__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional222;
void* right_value176;
void* right_value177;
void* right_value178;
struct optional$2charphbool* __result278__;
void* right_value179;
void* right_value180;
struct buffer* buf_157;
_Bool _while_condtional14;
int size_159;
_Bool _if_conditional224;
void* right_value181;
void* right_value182;
void* right_value183;
struct optional$2charphbool* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&buf_157, 0, sizeof(struct buffer*));
memset(&size_159, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    if(_if_conditional222=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional222) {
        __result278__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2017), ((struct optional$2charphbool*)(right_value178=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value177=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2017))),(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("")))),(_Bool)0))));
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result278__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_157=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value179=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2019))), "libcomelang2.c", 2019)))))));
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional14=1,    __freed_obj__ = 0, 
    _while_condtional14) {
        char buf2_158[8192];
        memset(&buf2_158, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_159=fread(buf2_158,1,8192,f);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_157, "libcomelang2.c", 2026)),buf2_158,size_159);
        __freed_obj__ = 0;
        if(_if_conditional224=size_159<8192,        __freed_obj__ = 0, 
        _if_conditional224) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result279__ = __result_obj__ = ((struct optional$2charphbool*)(right_value183=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value182=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2033)))),(char*)come_increment_ref_count(((char*)(right_value181=buffer_to_string(((struct buffer*)come_null_check(buf_157, "libcomelang2.c", 2033)))))),(_Bool)1)));
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result279__;
    __freed_obj__ = 0;
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj20;
struct optional$2charphbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result277__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result277__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional223=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional223) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional225;
void* right_value184;
void* right_value185;
struct optional$2intbool* __result280__;
void* right_value186;
void* right_value187;
struct optional$2intbool* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    if(_if_conditional225=f==((void*)0)||str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional225) {
        __result280__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2039), ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2039))),-1,(_Bool)0))));
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result280__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2042)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result281__;
    __freed_obj__ = 0;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional226;
void* right_value188;
void* right_value189;
struct optional$2intbool* __result282__;
int result_160;
_Bool _if_conditional227;
void* right_value190;
void* right_value191;
struct optional$2intbool* __result283__;
void* right_value192;
void* right_value193;
struct optional$2intbool* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&result_160, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional226=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional226) {
        __result282__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2048), ((struct optional$2intbool*)(right_value189=optional$2intbool_initialize(((struct optional$2intbool*)(right_value188=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2048))),-1,(_Bool)0))));
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result282__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_160=fclose(f);
    __freed_obj__ = 0;
    if(_if_conditional227=result_160<0,    __freed_obj__ = 0, 
    _if_conditional227) {
        __result283__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2054), ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2054))),result_160,(_Bool)0))));
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result283__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result284__ = __result_obj__ = ((struct optional$2intbool*)(right_value193=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value192=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2057)))),result_160,(_Bool)1)));
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result284__;
    __freed_obj__ = 0;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional228;
void* right_value194;
void* right_value195;
struct optional$2_IO_FILEpbool* __result286__;
va_list args_162;
int result_163;
_Bool _if_conditional229;
void* right_value196;
void* right_value197;
struct optional$2_IO_FILEpbool* __result287__;
void* right_value198;
void* right_value199;
struct optional$2_IO_FILEpbool* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&args_162, 0, sizeof(va_list));
memset(&result_163, 0, sizeof(int));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
    if(_if_conditional228=f==((void*)0)||msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional228) {
        __result286__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2063), ((struct optional$2_IO_FILEpbool*)(right_value195=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value194=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2063))),f,(_Bool)0))));
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result286__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    char msg2_161[1024*2*2*2];
    memset(&msg2_161, 0, sizeof(char)    *(1024*2*2*2)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_162,msg);
    __freed_obj__ = 0;
    vsnprintf(msg2_161,1024*2*2*2,msg,args_162);
    __freed_obj__ = 0;
    __builtin_va_end(args_162);
    __freed_obj__ = 0;
    result_163=fprintf(f,"%s",msg2_161);
    __freed_obj__ = 0;
    if(_if_conditional229=result_163<0,    __freed_obj__ = 0, 
    _if_conditional229) {
        __result287__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2075), ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2075))),result_163,(_Bool)0))));
        if((&args_162) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_162), (void*)0, (void*)0, 1, 0, 0, 0); }
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result287__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result288__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value199=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value198=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2078)))),f,(_Bool)1)));
    if((&args_162) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_162), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result288__;
    __freed_obj__ = 0;
    if((&args_162) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_162), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2_IO_FILEpbool* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result285__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result285__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional230;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result289__;
struct _IO_FILE* f_164;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result290__;
int result_165;
_Bool _if_conditional233;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result291__;
int result2_166;
_Bool _if_conditional234;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result292__;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&f_164, 0, sizeof(struct _IO_FILE*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&result_165, 0, sizeof(int));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&result2_166, 0, sizeof(int));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
    if(_if_conditional230=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional230) {
        __result289__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2084), ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2084))),-1,(_Bool)0))));
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result289__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional231=append,    __freed_obj__ = 0, 
    _if_conditional231) {
        f_164=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_164=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional232=f_164==((void*)0),    __freed_obj__ = 0, 
    _if_conditional232) {
        __result290__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2096), ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2096))),-1,(_Bool)0))));
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result290__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_165=fwrite(self,strlen(self),1,f_164);
    __freed_obj__ = 0;
    if(_if_conditional233=result_165<0,    __freed_obj__ = 0, 
    _if_conditional233) {
        __result291__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2102), ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2102))),result_165,(_Bool)0))));
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result291__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_166=fclose(f_164);
    __freed_obj__ = 0;
    if(_if_conditional234=result2_166<0,    __freed_obj__ = 0, 
    _if_conditional234) {
        __result292__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2108), ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2108))),result2_166,(_Bool)0))));
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result292__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result293__ = __result_obj__ = ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2111)))),result_165,(_Bool)1)));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result293__;
    __freed_obj__ = 0;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional235;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result294__;
struct _IO_FILE* f_167;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result295__;
int result_168;
_Bool _if_conditional238;
void* right_value214;
void* right_value215;
struct optional$2intbool* __result296__;
int result2_169;
_Bool _if_conditional239;
void* right_value216;
void* right_value217;
struct optional$2intbool* __result297__;
void* right_value218;
void* right_value219;
struct optional$2intbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&f_167, 0, sizeof(struct _IO_FILE*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&result_168, 0, sizeof(int));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&result2_169, 0, sizeof(int));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    if(_if_conditional235=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional235) {
        __result294__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2117), ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2117))),-1,(_Bool)0))));
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result294__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional236=append,    __freed_obj__ = 0, 
    _if_conditional236) {
        f_167=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_167=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional237=f_167==((void*)0),    __freed_obj__ = 0, 
    _if_conditional237) {
        __result295__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2129), ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2129))),-1,(_Bool)0))));
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result295__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_168=fwrite(self,strlen(self),1,f_167);
    __freed_obj__ = 0;
    if(_if_conditional238=result_168<0,    __freed_obj__ = 0, 
    _if_conditional238) {
        __result296__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2135), ((struct optional$2intbool*)(right_value215=optional$2intbool_initialize(((struct optional$2intbool*)(right_value214=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2135))),result_168,(_Bool)0))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result296__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_169=fclose(f_167);
    __freed_obj__ = 0;
    if(_if_conditional239=result2_169<0,    __freed_obj__ = 0, 
    _if_conditional239) {
        __result297__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2141), ((struct optional$2intbool*)(right_value217=optional$2intbool_initialize(((struct optional$2intbool*)(right_value216=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2141))),result2_169,(_Bool)0))));
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result297__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result298__ = __result_obj__ = ((struct optional$2intbool*)(right_value219=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value218=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2144)))),result_168,(_Bool)1)));
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result298__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional240;
void* right_value220;
void* right_value221;
void* right_value222;
struct optional$2charphbool* __result299__;
struct _IO_FILE* f_170;
_Bool _if_conditional241;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2charphbool* __result300__;
void* right_value226;
void* right_value227;
struct buffer* buf_171;
_Bool _while_condtional15;
int size_173;
_Bool _if_conditional242;
void* right_value228;
char* result_174;
int result2_175;
_Bool _if_conditional243;
void* right_value229;
void* right_value230;
void* right_value231;
struct optional$2charphbool* __result301__;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&f_170, 0, sizeof(struct _IO_FILE*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&buf_171, 0, sizeof(struct buffer*));
memset(&size_173, 0, sizeof(int));
memset(&right_value228, 0, sizeof(void*));
memset(&result_174, 0, sizeof(char*));
memset(&result2_175, 0, sizeof(int));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
    if(_if_conditional240=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional240) {
        __result299__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2150), ((struct optional$2charphbool*)(right_value222=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value221=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2150))),(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string("")))),(_Bool)0))));
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result299__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_170=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional241=f_170==((void*)0),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result300__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2156), ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2156))),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("")))),(_Bool)0))));
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result300__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_171=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2159))), "libcomelang2.c", 2159)))))));
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional15=1,    __freed_obj__ = 0, 
    _while_condtional15) {
        char buf2_172[8192];
        memset(&buf2_172, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_173=fread(buf2_172,1,8192,f_170);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_171, "libcomelang2.c", 2166)),buf2_172,size_173);
        __freed_obj__ = 0;
        if(_if_conditional242=size_173<8192,        __freed_obj__ = 0, 
        _if_conditional242) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_174=(char*)come_increment_ref_count(((char*)(right_value228=buffer_to_string(((struct buffer*)come_null_check(buf_171, "libcomelang2.c", 2173))))));
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result2_175=fclose(f_170);
    __freed_obj__ = 0;
    if(_if_conditional243=result2_175<0,    __freed_obj__ = 0, 
    _if_conditional243) {
        __result301__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2178), ((struct optional$2charphbool*)(right_value231=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value230=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2178))),(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string("")))),(_Bool)0))));
        if(buf_171 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_174 && !__freed_obj__) { result_174 = come_decrement_ref_count(result_174, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result301__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result302__ = __result_obj__ = ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2181)))),(char*)come_increment_ref_count(result_174),(_Bool)1)));
    if(buf_171 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_174 && !__freed_obj__) { result_174 = come_decrement_ref_count(result_174, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result302__;
    __freed_obj__ = 0;
    if(buf_171 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_174 && !__freed_obj__) { result_174 = come_decrement_ref_count(result_174, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional244;
void* right_value234;
void* right_value235;
void* right_value236;
struct optional$2charphbool* __result303__;
struct _IO_FILE* f_176;
_Bool _if_conditional245;
void* right_value237;
void* right_value238;
void* right_value239;
struct optional$2charphbool* __result304__;
void* right_value240;
void* right_value241;
struct buffer* buf_177;
_Bool _while_condtional16;
int size_179;
_Bool _if_conditional246;
void* right_value242;
char* result_180;
int result2_181;
_Bool _if_conditional247;
void* right_value243;
void* right_value244;
void* right_value245;
struct optional$2charphbool* __result305__;
void* right_value246;
void* right_value247;
struct optional$2charphbool* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&f_176, 0, sizeof(struct _IO_FILE*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&buf_177, 0, sizeof(struct buffer*));
memset(&size_179, 0, sizeof(int));
memset(&right_value242, 0, sizeof(void*));
memset(&result_180, 0, sizeof(char*));
memset(&result2_181, 0, sizeof(int));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
    if(_if_conditional244=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional244) {
        __result303__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2187), ((struct optional$2charphbool*)(right_value236=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value235=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2187))),(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("")))),(_Bool)0))));
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result303__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_176=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional245=f_176==((void*)0),    __freed_obj__ = 0, 
    _if_conditional245) {
        __result304__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2193), ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2193))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),(_Bool)0))));
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result304__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_177=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value241=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value240=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2196))), "libcomelang2.c", 2196)))))));
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional16=1,    __freed_obj__ = 0, 
    _while_condtional16) {
        char buf2_178[8192];
        memset(&buf2_178, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_179=fread(buf2_178,1,8192,f_176);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_177, "libcomelang2.c", 2203)),buf2_178,size_179);
        __freed_obj__ = 0;
        if(_if_conditional246=size_179<8192,        __freed_obj__ = 0, 
        _if_conditional246) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_180=(char*)come_increment_ref_count(((char*)(right_value242=buffer_to_string(((struct buffer*)come_null_check(buf_177, "libcomelang2.c", 2210))))));
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result2_181=fclose(f_176);
    __freed_obj__ = 0;
    if(_if_conditional247=result2_181<0,    __freed_obj__ = 0, 
    _if_conditional247) {
        __result305__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2215), ((struct optional$2charphbool*)(right_value245=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value244=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2215))),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string("")))),(_Bool)0))));
        if(buf_177 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_180 && !__freed_obj__) { result_180 = come_decrement_ref_count(result_180, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result305__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result306__ = __result_obj__ = ((struct optional$2charphbool*)(right_value247=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value246=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2218)))),(char*)come_increment_ref_count(result_180),(_Bool)1)));
    if(buf_177 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_180 && !__freed_obj__) { result_180 = come_decrement_ref_count(result_180, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result306__;
    __freed_obj__ = 0;
    if(buf_177 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_180 && !__freed_obj__) { result_180 = come_decrement_ref_count(result_180, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value248;
void* right_value249;
struct list$1charph* result_182;
_Bool _if_conditional248;
void* right_value250;
void* right_value251;
struct optional$2list$1charphphbool* __result308__;
_Bool _while_condtional17;
_Bool _if_conditional250;
void* right_value252;
void* right_value253;
void* right_value254;
struct optional$2list$1charphphbool* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&result_182, 0, sizeof(struct list$1charph*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
    result_182=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value249=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value248=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2223))), "libcomelang2.c", 2223)))))));
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional248=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional248) {
        __result308__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2226), ((struct optional$2list$1charphphbool*)(right_value251=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value250=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2226))),(struct list$1charph*)come_increment_ref_count(result_182),(_Bool)0))));
        if(result_182 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result308__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional17=1,    __freed_obj__ = 0, 
    _while_condtional17) {
        char buf_183[8192];
        memset(&buf_183, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        if(_if_conditional250=fgets(buf_183,8192,f)==((void*)0),        __freed_obj__ = 0, 
        _if_conditional250) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_182, "libcomelang2.c", 2236)),(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(buf_183)))));
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result309__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value254=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value253=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2239)))),(struct list$1charph*)come_increment_ref_count(result_182),(_Bool)1)));
    if(result_182 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result309__;
    __freed_obj__ = 0;
    if(result_182 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __dec_obj21;
struct optional$2list$1charphphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj21=((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj21) { come_call_finalizer(list$1charph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result307__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result307__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional249=self!=((void*)0)&&((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional249) {
                    if(((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional251;
void* right_value255;
void* right_value256;
struct optional$2intbool* __result310__;
struct _IO_FILE* f_184;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value257;
void* right_value258;
struct optional$2intbool* __result311__;
void* right_value259;
void* right_value260;
struct optional$2intbool* __result312__;
void* right_value261;
void* right_value262;
struct optional$2intbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&f_184, 0, sizeof(struct _IO_FILE*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    if(_if_conditional251=path==((void*)0)||mode==((void*)0),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result310__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2245), ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2245))),-1,(_Bool)0))));
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result310__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_184=fopen(path,mode);
    __freed_obj__ = 0;
    if(_if_conditional252=f_184,    __freed_obj__ = 0, 
    _if_conditional252) {
        block(parent,f_184);
        __freed_obj__ = 0;
        if(_if_conditional253=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2256))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional253) {
            fclose(f_184);
            __freed_obj__ = 0;
            __result311__ = __result_obj__ = ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2253)))),0,(_Bool)1)));
            if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result311__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_184);
        __freed_obj__ = 0;
        __result312__ = __result_obj__ = ((struct optional$2intbool*)(right_value260=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value259=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2258)))),0,(_Bool)1)));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result312__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result313__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2261), ((struct optional$2intbool*)(right_value262=optional$2intbool_initialize(((struct optional$2intbool*)(right_value261=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2261))),-1,(_Bool)0))));
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result313__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional254;
void* right_value263;
void* right_value264;
struct optional$2charphbool* __result314__;
void* right_value265;
void* right_value266;
void* right_value267;
struct optional$2charphbool* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
    if(_if_conditional254=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional254) {
        __result314__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2270), ((struct optional$2intbool*)(right_value264=optional$2intbool_initialize(((struct optional$2intbool*)(right_value263=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2270))),-1,(_Bool)0))));
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result314__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result315__ = __result_obj__ = ((struct optional$2charphbool*)(right_value267=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value266=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2274)))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(self)))),(_Bool)1)));
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result315__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional255;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result316__;
void* right_value270;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional255=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional255) {
        __result316__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2280), ((struct optional$2intbool*)(right_value269=optional$2intbool_initialize(((struct optional$2intbool*)(right_value268=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2280))),-1,(_Bool)0))));
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result316__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    printf("%s",self);
    __freed_obj__ = 0;
    __result317__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2284)))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(self)))),(_Bool)1)));
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result317__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional256;
void* right_value273;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result318__;
char* msg2_185;
va_list args_186;
void* right_value276;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&msg2_185, 0, sizeof(char*));
memset(&args_186, 0, sizeof(va_list));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    if(_if_conditional256=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional256) {
        __result318__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2291), ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2291))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),(_Bool)0))));
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result318__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_186,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_185,self,args_186);
    __freed_obj__ = 0;
    __builtin_va_end(args_186);
    __freed_obj__ = 0;
    printf("%s",msg2_185);
    __freed_obj__ = 0;
    free(msg2_185);
    __freed_obj__ = 0;
    __result319__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2304)))),(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(self)))),(_Bool)1)));
    if((&args_186) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_186), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result319__;
    __freed_obj__ = 0;
    if((&args_186) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_186), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional257;
void* right_value279;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result320__;
char* msg2_187;
va_list args_188;
void* right_value282;
void* right_value283;
void* right_value284;
struct optional$2charphbool* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&msg2_187, 0, sizeof(char*));
memset(&args_188, 0, sizeof(va_list));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
    if(_if_conditional257=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional257) {
        __result320__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2310), ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2310))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("")))),(_Bool)0))));
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result320__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_188,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_187,self,args_188);
    __freed_obj__ = 0;
    __builtin_va_end(args_188);
    __freed_obj__ = 0;
    printf("%s",msg2_187);
    __freed_obj__ = 0;
    free(msg2_187);
    __freed_obj__ = 0;
    __result321__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2323)))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(self)))),(_Bool)1)));
    if((&args_188) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_188), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result321__;
    __freed_obj__ = 0;
    if((&args_188) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_188), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
int __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __freed_obj__ = 0;
    __result322__ = self;
    __freed_obj__ = 0;
    return __result322__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional258;
void* right_value285;
void* right_value286;
void* right_value287;
struct optional$2charphbool* __result323__;
void* right_value288;
void* right_value289;
void* right_value290;
struct optional$2charphbool* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
    if(_if_conditional258=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional258) {
        __result323__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2336), ((struct optional$2charphbool*)(right_value287=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value286=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2336))),(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("")))),(_Bool)0))));
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result323__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result324__ = __result_obj__ = ((struct optional$2charphbool*)(right_value290=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value289=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2340)))),(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(self)))),(_Bool)1)));
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result324__;
    __freed_obj__ = 0;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
int i_189;
_Bool _for_condtionalA14;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_189, 0, sizeof(int));
    for(
    i_189=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    i_189<self ,    __freed_obj__ = 0, 
    _for_condtionalA14;    i_189++ ,    __freed_obj__ = 0, 
    0    ){
        block(parent,i_189);
        __freed_obj__ = 0;
        if(_if_conditional259=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2354))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional259) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

