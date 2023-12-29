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
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
int gRightValueNum=0;
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sGenericsFunpbool
{
    struct sGenericsFun* v1;
    _Bool v2;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

static char* optional$2charphbool_expect(struct optional$2charphbool* self);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2);
static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self);
static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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







struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
struct sType* result_24;
_Bool _if_conditional87;
struct sType* __result25__;
_Bool _if_conditional88;
struct sType* __result27__;
struct sClass* klass_25;
_Bool _if_conditional89;
void* right_value35;
struct sType* result_type_26;
void* right_value36;
void* right_value38;
struct tuple1$1sTypeph* __dec_obj24;
void* right_value39;
void* right_value40;
struct list$1sTypeph* new_param_types_27;
struct list$1sTypeph* o2_saved_28;
struct sType* it_31;
_Bool _for_condtionalA1;
void* right_value41;
struct sType* new_param_type_34;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional96;
int generics_number_38;
_Bool _if_conditional97;
void* right_value49;
struct sClass* klass2_43;
int generics_number2_44;
_Bool _if_conditional102;
void* right_value50;
struct list$1sNodeph* array_num_45;
_Bool immutable__46;
int pointer_num_47;
_Bool heap_48;
_Bool no_heap_49;
_Bool no_calling_destructor_50;
_Bool exception__51;
_Bool null_value_52;
void* right_value51;
void* right_value52;
struct sType* __dec_obj30;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1sTypeph* o2_saved_55;
struct sType* it_56;
_Bool _for_condtionalA2;
void* right_value53;
struct sType* type_57;
void* right_value54;
_Bool _if_conditional111;
void* right_value55;
char* new_name_58;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct sType*));
memset(&klass_25, 0, sizeof(struct sClass*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_type_26, 0, sizeof(struct sType*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&new_param_types_27, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_28, 0, sizeof(struct list$1sTypeph*));
memset(&it_31, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&new_param_type_34, 0, sizeof(struct sType*));
memset(&generics_number_38, 0, sizeof(int));
memset(&right_value49, 0, sizeof(void*));
memset(&klass2_43, 0, sizeof(struct sClass*));
memset(&generics_number2_44, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&array_num_45, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__46, 0, sizeof(_Bool));
memset(&pointer_num_47, 0, sizeof(int));
memset(&heap_48, 0, sizeof(_Bool));
memset(&no_heap_49, 0, sizeof(_Bool));
memset(&no_calling_destructor_50, 0, sizeof(_Bool));
memset(&exception__51, 0, sizeof(_Bool));
memset(&null_value_52, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&o2_saved_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_57, 0, sizeof(struct sType*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&new_name_58, 0, sizeof(char*));
    result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    if(_if_conditional87=generics_type==((void*)0),    __freed_obj__ = 0, 
    _if_conditional87) {
        __result25__ = __result_obj__ = result_24;
        if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result25__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional88=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 13))->mGenericsTypes, "04heap.c", 13)))==0,    __freed_obj__ = 0, 
    _if_conditional88) {
        __result27__ = __result_obj__ = result_24;
        if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result27__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_25=((struct sType*)come_null_check(type, "04heap.c", 13))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional89=string_operator_equals(((struct sClass*)come_null_check(klass_25, "04heap.c", 101))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional89) {
        result_type_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 16))->mResultType, "04heap.c", 16))->v1,generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        __dec_obj24=((struct sType*)come_null_check(result_24, "04heap.c", 18))->mResultType;
        ((struct sType*)come_null_check(result_24, "04heap.c", 18))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value38=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value36=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 18)))),(struct sType*)come_increment_ref_count(result_type_26)))));
        if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value36;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value38;
        __freed_obj__ = 0;
        new_param_types_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "04heap.c", 20))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value39;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value40;
        __freed_obj__ = 0;
        for(
        o2_saved_28=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 28))->mParamTypes)),it_31=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_31=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0        ){
            new_param_type_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=solve_generics(it_31,generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(new_param_types_27, "04heap.c", 25)),(struct sType*)come_increment_ref_count(new_param_type_34));
            __freed_obj__ = 0;
            if(new_param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_28 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj28=((struct sType*)come_null_check(result_24, "04heap.c", 28))->mParamTypes;
        ((struct sType*)come_null_check(result_24, "04heap.c", 28))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(new_param_types_27);
        if(__dec_obj28) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(result_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_param_types_27 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,new_param_types_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional96=((struct sClass*)come_null_check(klass_25, "04heap.c", 101))->mGenerics,        __freed_obj__ = 0, 
        _if_conditional96) {
            generics_number_38=((struct sClass*)come_null_check(klass_25, "04heap.c", 31))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional97=generics_number_38>=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes, "04heap.c", 39))),            __freed_obj__ = 0, 
            _if_conditional97) {
                err_msg(info,"invalid generics parametor number");
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            klass2_43=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 39),((struct optional$2sTypephbool*)(right_value49=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes,generics_number_38))))), "04heap.c", 39))->mClass;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value49;
            __freed_obj__ = 0;
            generics_number2_44=((struct sClass*)come_null_check(klass2_43, "04heap.c", 41))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional102=generics_number_38!=generics_number2_44,            __freed_obj__ = 0, 
            _if_conditional102) {
                array_num_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value50=list$1sNodephp_clone(((struct sType*)come_null_check(type, "04heap.c", 45))->mArrayNum))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value50;
                __freed_obj__ = 0;
                immutable__46=((struct sType*)come_null_check(type, "04heap.c", 46))->mImmutable;
                __freed_obj__ = 0;
                pointer_num_47=((struct sType*)come_null_check(type, "04heap.c", 47))->mPointerNum;
                __freed_obj__ = 0;
                heap_48=((struct sType*)come_null_check(type, "04heap.c", 48))->mHeap;
                __freed_obj__ = 0;
                no_heap_49=((struct sType*)come_null_check(type, "04heap.c", 50))->mNoHeap;
                __freed_obj__ = 0;
                no_calling_destructor_50=((struct sType*)come_null_check(type, "04heap.c", 51))->mNoCallingDestructor;
                __freed_obj__ = 0;
                exception__51=((struct sType*)come_null_check(type, "04heap.c", 52))->mException;
                __freed_obj__ = 0;
                null_value_52=((struct sType*)come_null_check(type, "04heap.c", 53))->mNullValue;
                __freed_obj__ = 0;
                come_clear_stackframe();
                __dec_obj30=result_24;
                result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 55),((struct optional$2sTypephbool*)(right_value51=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 55))->mGenericsTypes,generics_number_38)))))))));
                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value51;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value52;
                __freed_obj__ = 0;
                if(_if_conditional103=heap_48,                __freed_obj__ = 0, 
                _if_conditional103) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 58))->mHeap=heap_48;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=exception__51,                __freed_obj__ = 0, 
                _if_conditional104) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 61))->mException=exception__51;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=no_heap_49,                __freed_obj__ = 0, 
                _if_conditional105) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 64))->mNoHeap=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(result_24, "04heap.c", 65))->mHeap=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional106=no_calling_destructor_50,                __freed_obj__ = 0, 
                _if_conditional106) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 68))->mNoCallingDestructor=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional107=immutable__46,                __freed_obj__ = 0, 
                _if_conditional107) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 71))->mImmutable=immutable__46;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(array_num_45, "04heap.c", 77)))>0,                __freed_obj__ = 0, 
                _if_conditional108) {
                    __dec_obj31=((struct sType*)come_null_check(result_24, "04heap.c", 74))->mArrayNum;
                    ((struct sType*)come_null_check(result_24, "04heap.c", 74))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_45);
                    if(__dec_obj31) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=null_value_52,                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 78))->mNullValue=null_value_52;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional110=pointer_num_47>0,                __freed_obj__ = 0, 
                _if_conditional110) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 82))->mPointerNum+=pointer_num_47;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_45 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_45, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_24, "04heap.c", 87))->mGenericsTypes, "04heap.c", 87)));
            __freed_obj__ = 0;
            for(
            o2_saved_55=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 93))->mGenericsTypes)),it_56=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_55), "04heap.c", 93))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_55), "04heap.c", 93))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            it_56=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_55), "04heap.c", 93))) ,            __freed_obj__ = 0, 
            0            ){
                type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(it_56,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_24, "04heap.c", 90))->mGenericsTypes, "04heap.c", 90)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(type_57)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value54;
                __freed_obj__ = 0;
                if(type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_55 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_55, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional111=!output_generics_struct(result_24,generics_type,info),            __freed_obj__ = 0, 
            _if_conditional111) {
                new_name_58=(char*)come_increment_ref_count(((char*)(right_value55=create_generics_name(type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
                printf("output generics is failed(%s)",new_name_58);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
                if(new_name_58 && !__freed_obj__) { new_name_58 = come_decrement_ref_count(new_name_58, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result44__ = __result_obj__ = result_24;
    if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
    if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value0;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value3;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value4;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value5;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj8=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj12=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj17=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value28;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value29;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value30;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value32;
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
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value33;
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value1;
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __dec_obj1=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value2;
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value6;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value7;
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value11;
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value8;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value9;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value10;
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value13;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value14;
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value15;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value16;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
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
void* __right_value_freed_obj[1024];
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
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value18;
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value23;
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value24;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value25;
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
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result26__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result26__;
        __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
            __dec_obj23=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(v1))));
            if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value37;
            __freed_obj__ = 0;
            __result28__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result28__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct sType* result_29;
struct sType* __result29__;
_Bool _if_conditional91;
struct sType* __result30__;
struct sType* result_30;
struct sType* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sType*));
memset(&result_30, 0, sizeof(struct sType*));
            if(_if_conditional90=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                __freed_obj__ = 0;
                memset(&result_29,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = result_29;
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional91=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional91) {
                __result30__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_30,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result31__ = __result_obj__ = result_30;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result32__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
struct sType* result_32;
struct sType* __result33__;
_Bool _if_conditional93;
struct sType* __result34__;
struct sType* result_33;
struct sType* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_32, 0, sizeof(struct sType*));
memset(&result_33, 0, sizeof(struct sType*));
            if(_if_conditional92=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                __freed_obj__ = 0;
                memset(&result_32,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result33__ = __result_obj__ = result_32;
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional93=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional93) {
                __result34__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result34__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_33,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result35__ = __result_obj__ = result_33;
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
void* right_value42;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj25;
_Bool _if_conditional95;
void* right_value43;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj26;
void* right_value44;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj27;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional94=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional94) {
                    litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value42=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj25=((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_35;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_35;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional95=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional95) {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value43=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value43;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj26=((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_36;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_36;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value44=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj27=((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_37;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_37;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result36__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result36__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
struct list_item$1sTypeph* it_39;
int i_40;
_Bool _while_condtional7;
_Bool _if_conditional99;
void* right_value45;
void* right_value46;
struct optional$2sTypephbool* __result38__;
struct sType* default_value_41;
void* right_value47;
void* right_value48;
struct optional$2sTypephbool* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_40, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&default_value_41, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
                if(_if_conditional98=position<0,                __freed_obj__ = 0, 
                _if_conditional98) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_39=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_40=0;
                __freed_obj__ = 0;
                while(_while_condtional7=it_39!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    if(_if_conditional99=position==i_40,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        __result38__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value46=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value45=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 742))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value45;
                        __freed_obj__ = 0;
                        return __result38__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_39=((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_40++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_41,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result39__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value48=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value47=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_41),(_Bool)0))));
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value47;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value48;
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj29;
struct optional$2sTypephbool* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj29=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result37__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result37__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional100=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
struct sType* default_value_42;
struct sType* __result40__;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_42, 0, sizeof(struct sType*));
                if(_if_conditional101=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    __freed_obj__ = 0;
                    memset(&default_value_42,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result40__ = __result_obj__ = default_value_42;
                    __freed_obj__ = 0;
                    return __result40__;
                    __freed_obj__ = 0;
                }
                else {
                    __result41__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result42__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result42__;
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_53;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_54;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sTypeph*));
                it_53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_53!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    prev_it_54=it_53;
                    __freed_obj__ = 0;
                    it_53=((struct list_item$1sTypeph*)come_null_check(it_53, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_54 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value56;
struct sType* result_59;
_Bool _if_conditional112;
void* right_value57;
struct sType* __dec_obj32;
struct sType* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
    result_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value56;
    __freed_obj__ = 0;
    if(_if_conditional112=generics_type,    __freed_obj__ = 0, 
    _if_conditional112) {
        __dec_obj32=result_59;
        result_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=solve_generics(result_59,generics_type,info))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result45__ = __result_obj__ = result_59;
    if(result_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
    if(result_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_60;
_Bool _if_conditional113;
_Bool _while_condtional9;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
int n_61;
_Bool _while_condtional10;
int __result46__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_60, 0, sizeof(char*));
memset(&n_61, 0, sizeof(int));
    p_60=obj;
    __freed_obj__ = 0;
    if(_if_conditional113=*p_60==40,    __freed_obj__ = 0, 
    _if_conditional113) {
        p_60++;
        __freed_obj__ = 0;
        while(_while_condtional9=*p_60!=41,        __freed_obj__ = 0, 
        _while_condtional9) {
            p_60++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_60++;
        __freed_obj__ = 0;
        if(_if_conditional114=*p_60==40,        __freed_obj__ = 0, 
        _if_conditional114) {
            p_60++;
            __freed_obj__ = 0;
            if(_if_conditional115=memcmp(p_60,"right_value",strlen("right_value"))==0,            __freed_obj__ = 0, 
            _if_conditional115) {
                p_60+=strlen("right_value");
                __freed_obj__ = 0;
                if(_if_conditional116=xisdigit(*p_60),                __freed_obj__ = 0, 
                _if_conditional116) {
                    n_61=0;
                    __freed_obj__ = 0;
                    while(_while_condtional10=xisdigit(*p_60),                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        n_61=n_61*10+*p_60-48;
                        __freed_obj__ = 0;
                        p_60++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result46__ = n_61;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result47__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
void* right_value58;
char* __result48__;
void* right_value59;
struct sRightValueObject* new_value_62;
struct sType* __dec_obj33;
void* right_value60;
char* __dec_obj34;
void* right_value61;
char* __dec_obj35;
void* right_value65;
char* buf_66;
void* right_value66;
void* right_value67;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&new_value_62, 0, sizeof(struct sRightValueObject*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&buf_66, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    if(_if_conditional117=((struct sInfo*)come_null_check(info, "04heap.c", 150))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional117) {
        __result48__ = __result_obj__ = ((char*)(right_value58=__builtin_string("")));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result48__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    new_value_62=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value59=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 150))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
    __freed_obj__ = 0;
    __dec_obj33=((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 151))->mType;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 151))->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 152))->mFreed=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 153))->mID=gRightValueNum;
    __freed_obj__ = 0;
    __dec_obj34=((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 154))->mVarName;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 154))->mVarName=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value60;
    __freed_obj__ = 0;
    __dec_obj35=((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 155))->mFunName;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 155))->mFunName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 155))->come_fun, "04heap.c", 155))->mName))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value61;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 156))->mBlockLevel=((struct sInfo*)come_null_check(info, "04heap.c", 156))->block_level;
    __freed_obj__ = 0;
    list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 158))->right_value_objects, "04heap.c", 158)),(struct sRightValueObject*)come_increment_ref_count(new_value_62));
    __freed_obj__ = 0;
    buf_66=(char*)come_increment_ref_count(((char*)(right_value65=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value65;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf_66);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result52__ = __result_obj__ = ((char*)come_null_check(((char*)(right_value67=xsprintf("((%s)(%s=%s))",optional$2charphbool_value((come_push_stackframe("04heap.c", 164),((struct optional$2charphbool*)(right_value66=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))))),((struct sRightValueObject*)come_null_check(new_value_62, "04heap.c", 164))->mVarName,obj))), "04heap.c", 164));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_62 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_66 && !__freed_obj__) { buf_66 = come_decrement_ref_count(buf_66, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value66;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value67;
    __freed_obj__ = 0;
    return __result52__;
    come_pop_stackframe();
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_62 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_66 && !__freed_obj__) { buf_66 = come_decrement_ref_count(buf_66, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional118=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional120=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional120) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
void* right_value62;
struct list_item$1sRightValueObjectph* litem_63;
struct sRightValueObject* __dec_obj36;
_Bool _if_conditional123;
void* right_value63;
struct list_item$1sRightValueObjectph* litem_64;
struct sRightValueObject* __dec_obj37;
void* right_value64;
struct list_item$1sRightValueObjectph* litem_65;
struct sRightValueObject* __dec_obj38;
struct list$1sRightValueObjectph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional121=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional121) {
            litem_63=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value62=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj36=((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 276))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 276))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj36) { come_call_finalizer(sRightValueObject_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_63;
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 279))->head=litem_63;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional123=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional123) {
                litem_64=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value63=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 284))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj37=((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 286))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 286))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj37) { come_call_finalizer(sRightValueObject_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_64;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_64;
                __freed_obj__ = 0;
            }
            else {
                litem_65=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value64=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value64;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_65, "./comelang2.h", 294))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_65, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj38=((struct list_item$1sRightValueObjectph*)come_null_check(litem_65, "./comelang2.h", 296))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_65, "./comelang2.h", 296))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj38) { come_call_finalizer(sRightValueObject_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_65;
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_65;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional122=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional122) {
                    if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
char* default_value_67;
char* __result50__;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_67, 0, sizeof(char*));
        if(_if_conditional124=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            __freed_obj__ = 0;
            memset(&default_value_67,0,sizeof(char*));
            __freed_obj__ = 0;
            __result50__ = __result_obj__ = default_value_67;
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
        }
        else {
            __result51__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional125=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_68;
struct list$1sRightValueObjectph* o2_saved_69;
struct sRightValueObject* it_72;
_Bool _for_condtionalA3;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_68, 0, sizeof(int));
memset(&o2_saved_69, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_72, 0, sizeof(struct sRightValueObject*));
    i_68=0;
    __freed_obj__ = 0;
    for(
    o2_saved_69=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 177))->right_value_objects)),it_72=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_69), "04heap.c", 177))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_69), "04heap.c", 177))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_72=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_69), "04heap.c", 177))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional130=((struct sRightValueObject*)come_null_check(it_72, "04heap.c", 174))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional130) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_68++;
        __freed_obj__ = 0;
    }
    if(o2_saved_69 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 177))->right_value_objects, "04heap.c", 177)),i_68,i_68+1);
    __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
struct sRightValueObject* result_70;
struct sRightValueObject* __result53__;
_Bool _if_conditional127;
struct sRightValueObject* __result54__;
struct sRightValueObject* result_71;
struct sRightValueObject* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_70, 0, sizeof(struct sRightValueObject*));
memset(&result_71, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional126=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional126) {
            __freed_obj__ = 0;
            memset(&result_70,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result53__ = __result_obj__ = result_70;
            __freed_obj__ = 0;
            return __result53__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional127=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional127) {
            __result54__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result54__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_71,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result55__ = __result_obj__ = result_71;
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result56__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
struct sRightValueObject* result_73;
struct sRightValueObject* __result57__;
_Bool _if_conditional129;
struct sRightValueObject* __result58__;
struct sRightValueObject* result_74;
struct sRightValueObject* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct sRightValueObject*));
memset(&result_74, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional128=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional128) {
            __freed_obj__ = 0;
            memset(&result_73,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result57__ = __result_obj__ = result_73;
            __freed_obj__ = 0;
            return __result57__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional129=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional129) {
            __result58__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_74,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result59__ = __result_obj__ = result_74;
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_75;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_75, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_75=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_75!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_76=it_75;
            __freed_obj__ = 0;
            it_75=((struct list_item$1sRightValueObjectph*)come_null_check(it_75, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_76 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
int tmp_77;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list$1sRightValueObjectph* __result60__;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct list_item$1sRightValueObjectph* it_80;
int i_81;
_Bool _while_condtional13;
_Bool _if_conditional139;
struct list_item$1sRightValueObjectph* prev_it_82;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list_item$1sRightValueObjectph* it_83;
int i_84;
_Bool _while_condtional14;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list_item$1sRightValueObjectph* prev_it_85;
struct list_item$1sRightValueObjectph* it_86;
struct list_item$1sRightValueObjectph* head_prev_it_87;
struct list_item$1sRightValueObjectph* tail_it_88;
int i_89;
_Bool _while_condtional15;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1sRightValueObjectph* prev_it_90;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list$1sRightValueObjectph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_77, 0, sizeof(int));
memset(&it_80, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_81, 0, sizeof(int));
memset(&prev_it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_84, 0, sizeof(int));
memset(&prev_it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional131=head<0,        __freed_obj__ = 0, 
        _if_conditional131) {
            head+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 508))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional132=tail<0,        __freed_obj__ = 0, 
        _if_conditional132) {
            tail+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 511))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional133=head>tail,        __freed_obj__ = 0, 
        _if_conditional133) {
            tmp_77=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_77;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional134=head<0,        __freed_obj__ = 0, 
        _if_conditional134) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional135=tail>((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 528))->len,        __freed_obj__ = 0, 
        _if_conditional135) {
            tail=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 525))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=head==tail,        __freed_obj__ = 0, 
        _if_conditional136) {
            __result60__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional137=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,        __freed_obj__ = 0, 
        _if_conditional137) {
            list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 534)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional138=head==0,            __freed_obj__ = 0, 
            _if_conditional138) {
                it_80=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 537))->head;
                __freed_obj__ = 0;
                i_81=0;
                __freed_obj__ = 0;
                while(_while_condtional13=it_80!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional13) {
                    if(_if_conditional139=i_81<tail,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        prev_it_82=it_80;
                        __freed_obj__ = 0;
                        it_80=((struct list_item$1sRightValueObjectph*)come_null_check(it_80, "./comelang2.h", 543))->next;
                        __freed_obj__ = 0;
                        i_81++;
                        __freed_obj__ = 0;
                        if(prev_it_82 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 548))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional140=i_81==tail,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 551))->head=it_80;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_80=((struct list_item$1sRightValueObjectph*)come_null_check(it_80, "./comelang2.h", 556))->next;
                            __freed_obj__ = 0;
                            i_81++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional141=tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,                __freed_obj__ = 0, 
                _if_conditional141) {
                    it_83=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 562))->head;
                    __freed_obj__ = 0;
                    i_84=0;
                    __freed_obj__ = 0;
                    while(_while_condtional14=it_83!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional142=i_84==head,                        __freed_obj__ = 0, 
                        _if_conditional142) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(it_83, "./comelang2.h", 566))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional143=i_84>=head,                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            prev_it_85=it_83;
                            __freed_obj__ = 0;
                            it_83=((struct list_item$1sRightValueObjectph*)come_null_check(it_83, "./comelang2.h", 573))->next;
                            __freed_obj__ = 0;
                            i_84++;
                            __freed_obj__ = 0;
                            if(prev_it_85 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 578))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_83=((struct list_item$1sRightValueObjectph*)come_null_check(it_83, "./comelang2.h", 581))->next;
                            __freed_obj__ = 0;
                            i_84++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_86=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 587))->head;
                    __freed_obj__ = 0;
                    head_prev_it_87=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_88=((void*)0);
                    __freed_obj__ = 0;
                    i_89=0;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_86!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        if(_if_conditional144=i_89==head,                        __freed_obj__ = 0, 
                        _if_conditional144) {
                            head_prev_it_87=((struct list_item$1sRightValueObjectph*)come_null_check(it_86, "./comelang2.h", 596))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional145=i_89==tail,                        __freed_obj__ = 0, 
                        _if_conditional145) {
                            tail_it_88=it_86;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional146=i_89>=head&&i_89<tail,                        __freed_obj__ = 0, 
                        _if_conditional146) {
                            prev_it_90=it_86;
                            __freed_obj__ = 0;
                            it_86=((struct list_item$1sRightValueObjectph*)come_null_check(it_86, "./comelang2.h", 606))->next;
                            __freed_obj__ = 0;
                            i_89++;
                            __freed_obj__ = 0;
                            if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 611))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_86=((struct list_item$1sRightValueObjectph*)come_null_check(it_86, "./comelang2.h", 614))->next;
                            __freed_obj__ = 0;
                            i_89++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional147=head_prev_it_87!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional147) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_87, "./comelang2.h", 620))->next=tail_it_88;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional148=tail_it_88!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional148) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_88, "./comelang2.h", 623))->prev=head_prev_it_87;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result62__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_78;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_79;
struct list$1sRightValueObjectph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_78=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional12=it_78!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional12) {
                    prev_it_79=it_78;
                    __freed_obj__ = 0;
                    it_78=((struct list_item$1sRightValueObjectph*)come_null_check(it_78, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_79 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result61__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result61__;
                __freed_obj__ = 0;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_91;
void* right_value68;
char* type_name_92;
void* right_value69;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_91, 0, sizeof(struct sClass*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_name_92, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
    klass_91=((struct sType*)come_null_check(type, "04heap.c", 182))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_92=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 184),((struct optional$2charphbool*)(right_value68=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = ((char*)(right_value69=xsprintf("(%s)come_increment_ref_count(%s)",type_name_92,obj)));
    if(type_name_92 && !__freed_obj__) { type_name_92 = come_decrement_ref_count(type_name_92, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
    if(type_name_92 && !__freed_obj__) { type_name_92 = come_decrement_ref_count(type_name_92, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional149=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional149) {
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
        __result63__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* stack_saved_93;
struct list$1sRightValueObjectph* right_value_objects_94;
struct sClass* klass_95;
static int dec_num_96=0;
void* right_value70;
char* name_97;
void* right_value71;
_Bool no_decrement_98;
_Bool no_free_99;
_Bool _if_conditional150;
void* right_value72;
char* c_value_100;
struct sClass* klass_101;
char* class_name_102;
char* fun_name_103;
void* right_value73;
struct sType* type2_104;
void* right_value74;
char* fun_name2_105;
struct sFun* finalizer_106;
_Bool _if_conditional151;
void* right_value84;
_Bool _if_conditional158;
void* right_value85;
char* none_generics_name_112;
void* right_value86;
char* generics_fun_name_113;
void* right_value96;
struct sGenericsFun* generics_fun_118;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value97;
int i_119;
_Bool _for_condtionalA4;
void* right_value98;
char* new_fun_name_120;
void* right_value99;
_Bool _if_conditional166;
void* right_value100;
char* __dec_obj39;
_Bool _if_conditional167;
void* right_value101;
_Bool _if_conditional168;
void* right_value102;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_121;
char* new_fun_name_122;
char* __dec_obj40;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value103;
char* type_name_123;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value104;
_Bool _if_conditional174;
void* right_value105;
char* type_name_124;
void* right_value106;
void* right_value107;
struct list$1sRightValueObjectph* __dec_obj41;
struct list$1CVALUEph* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_93, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_94, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_95, 0, sizeof(struct sClass*));
memset(&right_value70, 0, sizeof(void*));
memset(&name_97, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&no_decrement_98, 0, sizeof(_Bool));
memset(&no_free_99, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&klass_101, 0, sizeof(struct sClass*));
memset(&class_name_102, 0, sizeof(char*));
memset(&fun_name_103, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&type2_104, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&fun_name2_105, 0, sizeof(char*));
memset(&finalizer_106, 0, sizeof(struct sFun*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&none_generics_name_112, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&generics_fun_name_113, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&generics_fun_118, 0, sizeof(struct sGenericsFun*));
memset(&right_value97, 0, sizeof(void*));
memset(&i_119, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&new_fun_name_120, 0, sizeof(char*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&new_fun_name_122, 0, sizeof(char*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&new_fun_name_122, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&type_name_123, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&type_name_124, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    stack_saved_93=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 191))->stack);
    __freed_obj__ = 0;
    right_value_objects_94=((struct sInfo*)come_null_check(info, "04heap.c", 192))->right_value_objects;
    __freed_obj__ = 0;
    klass_95=((struct sType*)come_null_check(type, "04heap.c", 194))->mClass;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    name_97=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("__dec_obj%d",++dec_num_96))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70;
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 199),((struct optional$2charphbool*)(right_value71=make_define_var(type,name_97,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value71;
    __freed_obj__ = 0;
    add_come_code(info,"%s=%s;\n",name_97,obj);
    __freed_obj__ = 0;
    obj=name_97;
    __freed_obj__ = 0;
    no_decrement_98=(_Bool)0;
    __freed_obj__ = 0;
    no_free_99=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional150=((struct sType*)come_null_check(type, "04heap.c", 291))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional150) {
        c_value_100=(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(obj))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value72;
        __freed_obj__ = 0;
        klass_101=((struct sType*)come_null_check(type, "04heap.c", 210))->mClass;
        __freed_obj__ = 0;
        class_name_102=((struct sClass*)come_null_check(klass_101, "04heap.c", 212))->mName;
        __freed_obj__ = 0;
        fun_name_103="finalize";
        __freed_obj__ = 0;
        type2_104=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value73;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_104, "04heap.c", 217))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        fun_name2_105=(char*)come_increment_ref_count(((char*)(right_value74=create_method_name(type,(_Bool)0,fun_name_103,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value74;
        __freed_obj__ = 0;
        finalizer_106=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional151=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 258))->mGenericsTypes, "04heap.c", 258)))>0,        __freed_obj__ = 0, 
        _if_conditional151) {
            come_clear_stackframe();
            finalizer_106=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 223),((struct optional$2sFunpbool*)(right_value84=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 223))->funcs,fun_name2_105)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value84;
            __freed_obj__ = 0;
            if(_if_conditional158=finalizer_106==((void*)0),            __freed_obj__ = 0, 
            _if_conditional158) {
                none_generics_name_112=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_104, "04heap.c", 226))->mClass, "04heap.c", 226))->mName))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = 0;
                generics_fun_name_113=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s_%s",none_generics_name_112,fun_name_103))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value86;
                __freed_obj__ = 0;
                come_clear_stackframe();
                generics_fun_118=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 229),((struct optional$2sGenericsFunpbool*)(right_value96=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 229))->generics_funcs,generics_fun_name_113)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value96;
                __freed_obj__ = 0;
                if(_if_conditional164=generics_fun_118,                __freed_obj__ = 0, 
                _if_conditional164) {
                    if(_if_conditional165=!create_generics_fun((char*)come_increment_ref_count(fun_name2_105),generics_fun_118,type,info),                    __freed_obj__ = 0, 
                    _if_conditional165) {
                        printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 234))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 234))->sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_106=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 237),((struct optional$2sFunpbool*)(right_value97=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 237))->funcs,fun_name2_105)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value97;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(none_generics_name_112 && !__freed_obj__) { none_generics_name_112 = come_decrement_ref_count(none_generics_name_112, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_113 && !__freed_obj__) { generics_fun_name_113 = come_decrement_ref_count(generics_fun_name_113, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            __freed_obj__ = 0;
            for(
            i_119=128-1 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_119>=1 ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_119-- ,            __freed_obj__ = 0, 
            0            ){
                new_fun_name_120=(char*)come_increment_ref_count(((char*)(right_value98=xsprintf("%s_v%d",fun_name2_105,i_119))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
                come_clear_stackframe();
                finalizer_106=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 245),((struct optional$2sFunpbool*)(right_value99=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 245))->funcs,new_fun_name_120)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value99;
                __freed_obj__ = 0;
                if(_if_conditional166=finalizer_106,                __freed_obj__ = 0, 
                _if_conditional166) {
                    __dec_obj39=fun_name2_105;
                    fun_name2_105=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(new_fun_name_120))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100;
                    __freed_obj__ = 0;
                    if(new_fun_name_120 && !__freed_obj__) { new_fun_name_120 = come_decrement_ref_count(new_fun_name_120, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(new_fun_name_120 && !__freed_obj__) { new_fun_name_120 = come_decrement_ref_count(new_fun_name_120, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional167=finalizer_106==((void*)0),            __freed_obj__ = 0, 
            _if_conditional167) {
                come_clear_stackframe();
                finalizer_106=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 254),((struct optional$2sFunpbool*)(right_value101=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 254))->funcs,fun_name2_105)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value101;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional168=finalizer_106==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 267))->mClass, "04heap.c", 267))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 267))->mClass, "04heap.c", 267))->mNumber,        __freed_obj__ = 0, 
        _if_conditional168) {
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value102=create_finalizer_automatically(type,fun_name_103,info)));
            fun_121=multiple_assgin_var1->v1;
            new_fun_name_122=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value102;
            __freed_obj__ = 0;
            __dec_obj40=fun_name2_105;
            fun_name2_105=(char*)come_increment_ref_count(new_fun_name_122);
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            finalizer_106=fun_121;
            __freed_obj__ = 0;
            if(new_fun_name_122 && !__freed_obj__) { new_fun_name_122 = come_decrement_ref_count(new_fun_name_122, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional170=finalizer_106!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional170) {
            if(_if_conditional171=((struct sClass*)come_null_check(klass_101, "04heap.c", 279))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 279))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional171) {
                come_clear_stackframe();
                type_name_123=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 269),((struct optional$2charphbool*)(right_value103=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value103;
                __freed_obj__ = 0;
                if(_if_conditional172=c_value_100,                __freed_obj__ = 0, 
                _if_conditional172) {
                    add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_100,fun_name2_105,c_value_100,type_name_123,c_value_100,type_name_123,c_value_100,((struct sType*)come_null_check(type, "04heap.c", 271))->mAllocaValue,no_decrement_98,no_free_99,force_delete_);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type_name_123 && !__freed_obj__) { type_name_123 = come_decrement_ref_count(type_name_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional173=c_value_100,                __freed_obj__ = 0, 
                _if_conditional173) {
                    add_come_last_code2(info,((char*)(right_value104=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_100,fun_name2_105,c_value_100,((struct sType*)come_null_check(type, "04heap.c", 276))->mAllocaValue,no_decrement_98,no_free_99,force_delete_))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value104;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional174=((struct sClass*)come_null_check(klass_101, "04heap.c", 288))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 288))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional174) {
                come_clear_stackframe();
                type_name_124=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 282),((struct optional$2charphbool*)(right_value105=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                add_come_last_code2(info,((char*)(right_value106=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_97,name_97,name_97,type_name_124,name_97,type_name_124,name_97))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value106;
                __freed_obj__ = 0;
                if(type_name_124 && !__freed_obj__) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                add_come_last_code2(info,((char*)(right_value107=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_97,name_97,name_97))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_105 && !__freed_obj__) { fun_name2_105 = come_decrement_ref_count(fun_name2_105, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj41=((struct sInfo*)come_null_check(info, "04heap.c", 291))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 291))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_94);
    if(__dec_obj41) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj42=((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_93);
    if(__dec_obj42) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_93 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_97 && !__freed_obj__) { name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_107;
unsigned int hash_108;
unsigned int it_109;
_Bool _while_condtional16;
_Bool _if_conditional152;
void* right_value75;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional154;
void* right_value76;
void* right_value77;
struct optional$2sFunpbool* __result68__;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value78;
void* right_value79;
struct optional$2sFunpbool* __result69__;
void* right_value80;
void* right_value81;
struct optional$2sFunpbool* __result70__;
void* right_value82;
void* right_value83;
struct optional$2sFunpbool* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_107, 0, sizeof(struct sFun*));
memset(&hash_108, 0, sizeof(unsigned int));
memset(&it_109, 0, sizeof(unsigned int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_107,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_108=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_109=hash_108;
                __freed_obj__ = 0;
                while(_while_condtional16=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional16) {
                    if(_if_conditional152=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_109],                    __freed_obj__ = 0, 
                    _if_conditional152) {
                        if(_if_conditional154=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value75=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_109], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75),
                        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value75, 
                        __freed_obj__ = 0, 
                        _if_conditional154) {
                            __result68__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value77=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value76=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_109],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                            return __result68__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_109++;
                        __freed_obj__ = 0;
                        if(_if_conditional155=it_109>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional155) {
                            it_109=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional156=it_109==hash_108,                            __freed_obj__ = 0, 
                            _if_conditional156) {
                                __result69__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value79=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value78=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_107,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value78;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
                                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value79;
                                __freed_obj__ = 0;
                                return __result69__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result70__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value81=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value80=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_107,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value80;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value81;
                        __freed_obj__ = 0;
                        return __result70__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result71__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value83=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value82=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_107,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value82;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value83;
                __freed_obj__ = 0;
                return __result71__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
_Bool default_value_110;
_Bool __result65__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_110, 0, sizeof(_Bool));
                            if(_if_conditional153=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional153) {
                                __freed_obj__ = 0;
                                memset(&default_value_110,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result65__ = default_value_110;
                                __freed_obj__ = 0;
                                return __result65__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result66__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result66__;
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

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result67__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result67__;
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
_Bool _if_conditional157;
struct sFun* default_value_111;
struct sFun* __result72__;
struct sFun* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_111, 0, sizeof(struct sFun*));
                if(_if_conditional157=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional157) {
                    __freed_obj__ = 0;
                    memset(&default_value_111,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result72__ = __result_obj__ = default_value_111;
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
                }
                else {
                    __result73__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result73__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sGenericsFun* default_value_114;
unsigned int hash_115;
unsigned int it_116;
_Bool _while_condtional17;
_Bool _if_conditional159;
void* right_value87;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional160;
void* right_value88;
void* right_value89;
struct optional$2sGenericsFunpbool* __result75__;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value90;
void* right_value91;
struct optional$2sGenericsFunpbool* __result76__;
void* right_value92;
void* right_value93;
struct optional$2sGenericsFunpbool* __result77__;
void* right_value94;
void* right_value95;
struct optional$2sGenericsFunpbool* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_114, 0, sizeof(struct sGenericsFun*));
memset(&hash_115, 0, sizeof(unsigned int));
memset(&it_116, 0, sizeof(unsigned int));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_114,0,sizeof(struct sGenericsFun*));
                    __freed_obj__ = 0;
                    hash_115=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                    __freed_obj__ = 0;
                    it_116=hash_115;
                    __freed_obj__ = 0;
                    while(_while_condtional17=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional17) {
                        if(_if_conditional159=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_116],                        __freed_obj__ = 0, 
                        _if_conditional159) {
                            if(_if_conditional160=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value87=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_116], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87),
                            (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value87, 
                            __freed_obj__ = 0, 
                            _if_conditional160) {
                                __result75__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value89=optional$2sGenericsFunpbool_initialize((struct optional$2sGenericsFunpbool*)come_increment_ref_count(((struct optional$2sGenericsFunpbool*)(right_value88=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_116],(_Bool)1)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value88;
                                __freed_obj__ = 0;
                                return __result75__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_116++;
                            __freed_obj__ = 0;
                            if(_if_conditional161=it_116>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                            __freed_obj__ = 0, 
                            _if_conditional161) {
                                it_116=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional162=it_116==hash_115,                                __freed_obj__ = 0, 
                                _if_conditional162) {
                                    __result76__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1601))),default_value_114,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value90;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value91;
                                    __freed_obj__ = 0;
                                    return __result76__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result77__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sGenericsFunpbool*)(right_value93=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value92=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1605))),default_value_114,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value92;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value93);
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value93;
                            __freed_obj__ = 0;
                            return __result77__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result78__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sGenericsFunpbool*)(right_value95=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value94=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1609))),default_value_114,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value95;
                    __freed_obj__ = 0;
                    return __result78__;
                    __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sGenericsFunpbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result74__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result74__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct sGenericsFun* default_value_117;
struct sGenericsFun* __result79__;
struct sGenericsFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_117, 0, sizeof(struct sGenericsFun*));
                    if(_if_conditional163=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional163) {
                        __freed_obj__ = 0;
                        memset(&default_value_117,0,sizeof(struct sGenericsFun*));
                        __freed_obj__ = 0;
                        __result79__ = __result_obj__ = default_value_117;
                        __freed_obj__ = 0;
                        return __result79__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result80__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result80__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional169=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional169) {
                    if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_125;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_125, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1CVALUEph*));
        it_125=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional18=it_125!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional18) {
            prev_it_126=it_125;
            __freed_obj__ = 0;
            it_125=((struct list_item$1CVALUEph*)come_null_check(it_125, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_126 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional175=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional175) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional176=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional176) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional177=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional177) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* stack_saved_127;
struct list$1sRightValueObjectph* right_value_objects_128;
struct sType* type_before_129;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value108;
char* c_value_130;
struct sClass* klass_131;
char* class_name_132;
char* fun_name_133;
void* right_value109;
struct sType* type2_134;
void* right_value110;
char* fun_name2_135;
struct sFun* finalizer_136;
_Bool _if_conditional181;
void* right_value111;
_Bool _if_conditional182;
void* right_value112;
char* none_generics_name_137;
void* right_value113;
char* generics_fun_name_138;
void* right_value114;
struct sGenericsFun* generics_fun_139;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value115;
int i_140;
_Bool _for_condtionalA5;
void* right_value116;
char* new_fun_name_141;
void* right_value117;
_Bool _if_conditional185;
void* right_value118;
char* __dec_obj43;
_Bool _if_conditional186;
void* right_value119;
_Bool _if_conditional187;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_142;
char* new_fun_name_143;
char* __dec_obj44;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value121;
char* type_name_144;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value122;
void* right_value123;
_Bool _if_conditional197;
void* right_value124;
void* right_value125;
_Bool _if_conditional198;
struct list$1tuple2$2charphsTypephph* o2_saved_145;
struct tuple2$2charphsTypeph* it_148;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_151;
struct sType* field_type_152;
_Bool _if_conditional203;
void* right_value126;
void* right_value127;
char* obj_153;
_Bool _if_conditional207;
struct list$1tuple2$2charphsTypephph* o2_saved_156;
struct tuple2$2charphsTypeph* it_157;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_158;
struct sType* field_type_159;
_Bool _if_conditional208;
void* right_value128;
void* right_value129;
char* obj_160;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value130;
char* type_name_161;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value131;
char* c_value_162;
struct sClass* klass_163;
char* class_name_164;
char* fun_name_165;
void* right_value132;
struct sType* type2_166;
void* right_value133;
char* fun_name2_167;
struct sFun* finalizer_168;
_Bool _if_conditional219;
void* right_value134;
_Bool _if_conditional220;
void* right_value135;
char* none_generics_name_169;
void* right_value136;
char* generics_fun_name_170;
void* right_value137;
struct sGenericsFun* generics_fun_171;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value138;
int i_172;
_Bool _for_condtionalA8;
void* right_value139;
char* new_fun_name_173;
void* right_value140;
_Bool _if_conditional223;
void* right_value141;
char* __dec_obj45;
_Bool _if_conditional224;
void* right_value142;
_Bool _if_conditional225;
void* right_value143;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_174;
char* new_fun_name_175;
char* __dec_obj46;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value144;
char* type_name_176;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value145;
void* right_value146;
_Bool _if_conditional235;
void* right_value147;
void* right_value148;
_Bool _if_conditional236;
struct list$1tuple2$2charphsTypephph* o2_saved_177;
struct tuple2$2charphsTypeph* it_178;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_179;
struct sType* field_type_180;
_Bool _if_conditional237;
void* right_value149;
void* right_value150;
char* obj_181;
_Bool _if_conditional238;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* it_183;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_184;
struct sType* field_type_185;
_Bool _if_conditional239;
void* right_value151;
void* right_value152;
char* obj_186;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value153;
char* type_name_187;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct list$1sRightValueObjectph* __dec_obj47;
struct list$1CVALUEph* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_127, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_128, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_129, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&c_value_130, 0, sizeof(char*));
memset(&klass_131, 0, sizeof(struct sClass*));
memset(&class_name_132, 0, sizeof(char*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&type2_134, 0, sizeof(struct sType*));
memset(&right_value110, 0, sizeof(void*));
memset(&fun_name2_135, 0, sizeof(char*));
memset(&finalizer_136, 0, sizeof(struct sFun*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&none_generics_name_137, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&generics_fun_name_138, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
memset(&generics_fun_139, 0, sizeof(struct sGenericsFun*));
memset(&right_value115, 0, sizeof(void*));
memset(&i_140, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&new_fun_name_141, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&new_fun_name_143, 0, sizeof(char*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&new_fun_name_143, 0, sizeof(char*));
memset(&right_value121, 0, sizeof(void*));
memset(&type_name_144, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&o2_saved_145, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_151, 0, sizeof(char*));
memset(&field_type_152, 0, sizeof(struct sType*));
memset(&name_151, 0, sizeof(char*));
memset(&field_type_152, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&obj_153, 0, sizeof(char*));
memset(&o2_saved_156, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_157, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&obj_160, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
memset(&type_name_161, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&c_value_162, 0, sizeof(char*));
memset(&klass_163, 0, sizeof(struct sClass*));
memset(&class_name_164, 0, sizeof(char*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&type2_166, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&fun_name2_167, 0, sizeof(char*));
memset(&finalizer_168, 0, sizeof(struct sFun*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&none_generics_name_169, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
memset(&generics_fun_name_170, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&generics_fun_171, 0, sizeof(struct sGenericsFun*));
memset(&right_value138, 0, sizeof(void*));
memset(&i_172, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&new_fun_name_173, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&fun_174, 0, sizeof(struct sFun*));
memset(&new_fun_name_175, 0, sizeof(char*));
memset(&fun_174, 0, sizeof(struct sFun*));
memset(&new_fun_name_175, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&type_name_176, 0, sizeof(char*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&o2_saved_177, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_178, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_179, 0, sizeof(char*));
memset(&field_type_180, 0, sizeof(struct sType*));
memset(&name_179, 0, sizeof(char*));
memset(&field_type_180, 0, sizeof(struct sType*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&obj_181, 0, sizeof(char*));
memset(&o2_saved_182, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_183, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&obj_186, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&type_name_187, 0, sizeof(char*));
    stack_saved_127=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 297))->stack);
    __freed_obj__ = 0;
    right_value_objects_128=((struct sInfo*)come_null_check(info, "04heap.c", 298))->right_value_objects;
    __freed_obj__ = 0;
    type_before_129=type;
    __freed_obj__ = 0;
    if(_if_conditional178=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 307))->mNoSolvedGenericsType, "04heap.c", 307))->v1,    __freed_obj__ = 0, 
    _if_conditional178) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 304))->mNoSolvedGenericsType, "04heap.c", 304))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional179=((struct sType*)come_null_check(type, "04heap.c", 656))->mPointerNum>0||((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 656))->mClass, "04heap.c", 656))->mProtocol||list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 656))->mGenericsTypes, "04heap.c", 656)))>0||(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 656))->come_fun, "04heap.c", 656))->mCloner&&ret_value),    __freed_obj__ = 0, 
    _if_conditional179) {
        if(_if_conditional180=force_delete_,        __freed_obj__ = 0, 
        _if_conditional180) {
            c_value_130=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value108;
            __freed_obj__ = 0;
            klass_131=((struct sType*)come_null_check(type, "04heap.c", 311))->mClass;
            __freed_obj__ = 0;
            class_name_132=((struct sClass*)come_null_check(klass_131, "04heap.c", 313))->mName;
            __freed_obj__ = 0;
            fun_name_133="force_finalize";
            __freed_obj__ = 0;
            type2_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value109;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_134, "04heap.c", 318))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_135=(char*)come_increment_ref_count(((char*)(right_value110=create_method_name(type,(_Bool)0,fun_name_133,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value110;
            __freed_obj__ = 0;
            finalizer_136=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional181=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 359))->mGenericsTypes, "04heap.c", 359)))>0,            __freed_obj__ = 0, 
            _if_conditional181) {
                come_clear_stackframe();
                finalizer_136=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 324),((struct optional$2sFunpbool*)(right_value111=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 324))->funcs,fun_name2_135)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value111;
                __freed_obj__ = 0;
                if(_if_conditional182=finalizer_136==((void*)0),                __freed_obj__ = 0, 
                _if_conditional182) {
                    none_generics_name_137=(char*)come_increment_ref_count(((char*)(right_value112=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_134, "04heap.c", 327))->mClass, "04heap.c", 327))->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value112;
                    __freed_obj__ = 0;
                    generics_fun_name_138=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s_%s",none_generics_name_137,fun_name_133))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value113;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_139=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 330),((struct optional$2sGenericsFunpbool*)(right_value114=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 330))->generics_funcs,generics_fun_name_138)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value114;
                    __freed_obj__ = 0;
                    if(_if_conditional183=generics_fun_139,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                        if(_if_conditional184=!create_generics_fun((char*)come_increment_ref_count(fun_name2_135),generics_fun_139,type,info),                        __freed_obj__ = 0, 
                        _if_conditional184) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 335))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 335))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_136=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 338),((struct optional$2sFunpbool*)(right_value115=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 338))->funcs,fun_name2_135)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value115;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_137 && !__freed_obj__) { none_generics_name_137 = come_decrement_ref_count(none_generics_name_137, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_138 && !__freed_obj__) { generics_fun_name_138 = come_decrement_ref_count(generics_fun_name_138, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_140=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA5=                i_140>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA5;                i_140-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_141=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s_v%d",fun_name2_135,i_140))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_136=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 346),((struct optional$2sFunpbool*)(right_value117=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 346))->funcs,new_fun_name_141)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value117);
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value117;
                    __freed_obj__ = 0;
                    if(_if_conditional185=finalizer_136,                    __freed_obj__ = 0, 
                    _if_conditional185) {
                        __dec_obj43=fun_name2_135;
                        fun_name2_135=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(new_fun_name_141))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118;
                        __freed_obj__ = 0;
                        if(new_fun_name_141 && !__freed_obj__) { new_fun_name_141 = come_decrement_ref_count(new_fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_141 && !__freed_obj__) { new_fun_name_141 = come_decrement_ref_count(new_fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional186=finalizer_136==((void*)0),                __freed_obj__ = 0, 
                _if_conditional186) {
                    come_clear_stackframe();
                    finalizer_136=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 355),((struct optional$2sFunpbool*)(right_value119=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 355))->funcs,fun_name2_135)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional187=finalizer_136==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 368))->mClass, "04heap.c", 368))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 368))->mClass, "04heap.c", 368))->mNumber,            __freed_obj__ = 0, 
            _if_conditional187) {
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value120=create_force_finalizer_automatically(type,fun_name_133,info)));
                fun_142=multiple_assgin_var2->v1;
                new_fun_name_143=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120;
                __freed_obj__ = 0;
                __dec_obj44=fun_name2_135;
                fun_name2_135=(char*)come_increment_ref_count(new_fun_name_143);
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_136=fun_142;
                __freed_obj__ = 0;
                if(new_fun_name_143 && !__freed_obj__) { new_fun_name_143 = come_decrement_ref_count(new_fun_name_143, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional188=finalizer_136!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                if(_if_conditional189=((struct sClass*)come_null_check(klass_131, "04heap.c", 410))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 410))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional189) {
                    come_clear_stackframe();
                    type_name_144=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 370),((struct optional$2charphbool*)(right_value121=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    if(_if_conditional190=c_value_130,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        if(_if_conditional191=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                            if(_if_conditional192=comma,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_130,c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 374))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_130,c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 377))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional193=comma,                            __freed_obj__ = 0, 
                            _if_conditional193) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 382))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 385))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_144 && !__freed_obj__) { type_name_144 = come_decrement_ref_count(type_name_144, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional194=c_value_130,                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        if(_if_conditional195=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional195) {
                            if(_if_conditional196=comma,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                add_come_code(info,((char*)(right_value122=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_130,c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 394))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value122;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value123=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_130,c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 397))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value123;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional197=comma,                            __freed_obj__ = 0, 
                            _if_conditional197) {
                                add_come_code(info,((char*)(right_value124=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 402))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value124;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value125=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 405))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value125;
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
                if(_if_conditional198=((struct sClass*)come_null_check(klass_131, "04heap.c", 436))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 436))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional198) {
                    for(
                    o2_saved_145=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "04heap.c", 422))->mFields)),it_148=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 422))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 422))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_148=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 422))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var3=it_148;
                        name_151=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_152=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional203=((struct sType*)come_null_check(field_type_152, "04heap.c", 421))->mHeap&&((struct sType*)come_null_check(field_type_152, "04heap.c", 421))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional203) {
                            come_clear_stackframe();
                            obj_153=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 418),((struct optional$2charphbool*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_130,name_151))));
                            come_pop_stackframe();
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value126;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
                            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value127;
                            __freed_obj__ = 0;
                            free_object(field_type_152,obj_153,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_153 && !__freed_obj__) { obj_153 = come_decrement_ref_count(obj_153, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_151 && !__freed_obj__) { name_151 = come_decrement_ref_count(name_151, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_145 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional207=((struct sClass*)come_null_check(klass_131, "04heap.c", 436))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 436))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        for(
                        o2_saved_156=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "04heap.c", 433))->mFields)),it_157=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 433))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA7=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 433))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA7;                        it_157=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 433))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var4=it_157;
                            name_158=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_159=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional208=((struct sType*)come_null_check(field_type_159, "04heap.c", 432))->mHeap&&((struct sType*)come_null_check(field_type_159, "04heap.c", 432))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional208) {
                                come_clear_stackframe();
                                obj_160=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 429),((struct optional$2charphbool*)(right_value128=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_130,name_158))));
                                come_pop_stackframe();
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value129;
                                __freed_obj__ = 0;
                                free_object(field_type_159,obj_160,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_160 && !__freed_obj__) { obj_160 = come_decrement_ref_count(obj_160, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_158 && !__freed_obj__) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_156 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional209=!((struct sType*)come_null_check(type, "04heap.c", 479))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional209) {
                    if(_if_conditional210=((struct sClass*)come_null_check(klass_131, "04heap.c", 478))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 478))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        if(_if_conditional211=c_value_130,                        __freed_obj__ = 0, 
                        _if_conditional211) {
                            come_clear_stackframe();
                            type_name_161=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 439),((struct optional$2charphbool*)(right_value130=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value130;
                            __freed_obj__ = 0;
                            if(_if_conditional212=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional212) {
                                if(_if_conditional213=comma,                                __freed_obj__ = 0, 
                                _if_conditional213) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_130,c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_130,c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional214=comma,                                __freed_obj__ = 0, 
                                _if_conditional214) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_161 && !__freed_obj__) { type_name_161 = come_decrement_ref_count(type_name_161, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional215=c_value_130,                        __freed_obj__ = 0, 
                        _if_conditional215) {
                            if(_if_conditional216=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional216) {
                                if(_if_conditional217=comma,                                __freed_obj__ = 0, 
                                _if_conditional217) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_130,c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional218=comma,                                __freed_obj__ = 0, 
                                _if_conditional218) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_);
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
            if(c_value_130 && !__freed_obj__) { c_value_130 = come_decrement_ref_count(c_value_130, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_135 && !__freed_obj__) { fun_name2_135 = come_decrement_ref_count(fun_name2_135, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            c_value_162=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value131;
            __freed_obj__ = 0;
            klass_163=((struct sType*)come_null_check(type, "04heap.c", 484))->mClass;
            __freed_obj__ = 0;
            class_name_164=((struct sClass*)come_null_check(klass_163, "04heap.c", 486))->mName;
            __freed_obj__ = 0;
            fun_name_165="finalize";
            __freed_obj__ = 0;
            type2_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value132;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_166, "04heap.c", 491))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value133=create_method_name(type,(_Bool)0,fun_name_165,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value133;
            __freed_obj__ = 0;
            finalizer_168=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional219=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 532))->mGenericsTypes, "04heap.c", 532)))>0,            __freed_obj__ = 0, 
            _if_conditional219) {
                come_clear_stackframe();
                finalizer_168=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 497),((struct optional$2sFunpbool*)(right_value134=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 497))->funcs,fun_name2_167)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                if(_if_conditional220=finalizer_168==((void*)0),                __freed_obj__ = 0, 
                _if_conditional220) {
                    none_generics_name_169=(char*)come_increment_ref_count(((char*)(right_value135=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_166, "04heap.c", 500))->mClass, "04heap.c", 500))->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value135;
                    __freed_obj__ = 0;
                    generics_fun_name_170=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("%s_%s",none_generics_name_169,fun_name_165))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value136;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_171=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 503),((struct optional$2sGenericsFunpbool*)(right_value137=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 503))->generics_funcs,generics_fun_name_170)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value137;
                    __freed_obj__ = 0;
                    if(_if_conditional221=generics_fun_171,                    __freed_obj__ = 0, 
                    _if_conditional221) {
                        if(_if_conditional222=!create_generics_fun((char*)come_increment_ref_count(fun_name2_167),generics_fun_171,type,info),                        __freed_obj__ = 0, 
                        _if_conditional222) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 508))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 508))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_168=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 511),((struct optional$2sFunpbool*)(right_value138=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 511))->funcs,fun_name2_167)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value138;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_169 && !__freed_obj__) { none_generics_name_169 = come_decrement_ref_count(none_generics_name_169, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_170 && !__freed_obj__) { generics_fun_name_170 = come_decrement_ref_count(generics_fun_name_170, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_172=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA8=                i_172>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA8;                i_172-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_173=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s_v%d",fun_name2_167,i_172))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value139;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_168=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 519),((struct optional$2sFunpbool*)(right_value140=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 519))->funcs,new_fun_name_173)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value140);
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value140;
                    __freed_obj__ = 0;
                    if(_if_conditional223=finalizer_168,                    __freed_obj__ = 0, 
                    _if_conditional223) {
                        __dec_obj45=fun_name2_167;
                        fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(new_fun_name_173))));
                        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value141;
                        __freed_obj__ = 0;
                        if(new_fun_name_173 && !__freed_obj__) { new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_173 && !__freed_obj__) { new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional224=finalizer_168==((void*)0),                __freed_obj__ = 0, 
                _if_conditional224) {
                    come_clear_stackframe();
                    finalizer_168=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 528),((struct optional$2sFunpbool*)(right_value142=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 528))->funcs,fun_name2_167)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value142;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=finalizer_168==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 541))->mClass, "04heap.c", 541))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 541))->mClass, "04heap.c", 541))->mNumber,            __freed_obj__ = 0, 
            _if_conditional225) {
                multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value143=create_finalizer_automatically(type,fun_name_165,info)));
                fun_174=multiple_assgin_var5->v1;
                new_fun_name_175=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143;
                __freed_obj__ = 0;
                __dec_obj46=fun_name2_167;
                fun_name2_167=(char*)come_increment_ref_count(new_fun_name_175);
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_168=fun_174;
                __freed_obj__ = 0;
                if(new_fun_name_175 && !__freed_obj__) { new_fun_name_175 = come_decrement_ref_count(new_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional226=finalizer_168!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(_if_conditional227=((struct sClass*)come_null_check(klass_163, "04heap.c", 583))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 583))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional227) {
                    come_clear_stackframe();
                    type_name_176=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 543),((struct optional$2charphbool*)(right_value144=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value144;
                    __freed_obj__ = 0;
                    if(_if_conditional228=c_value_162,                    __freed_obj__ = 0, 
                    _if_conditional228) {
                        if(_if_conditional229=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional229) {
                            if(_if_conditional230=comma,                            __freed_obj__ = 0, 
                            _if_conditional230) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_162,c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 547))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_162,c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 550))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional231=comma,                            __freed_obj__ = 0, 
                            _if_conditional231) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 555))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 558))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_176 && !__freed_obj__) { type_name_176 = come_decrement_ref_count(type_name_176, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional232=c_value_162,                    __freed_obj__ = 0, 
                    _if_conditional232) {
                        if(_if_conditional233=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional233) {
                            if(_if_conditional234=comma,                            __freed_obj__ = 0, 
                            _if_conditional234) {
                                add_come_code(info,((char*)(right_value145=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_162,c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 567))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value145;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value146=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_162,c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 570))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value146;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional235=comma,                            __freed_obj__ = 0, 
                            _if_conditional235) {
                                add_come_code(info,((char*)(right_value147=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 575))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value147;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value148=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 578))->mAllocaValue,no_decrement,no_free,force_delete_))));
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
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional236=((struct sClass*)come_null_check(klass_163, "04heap.c", 609))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 609))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional236) {
                    for(
                    o2_saved_177=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_163, "04heap.c", 595))->mFields)),it_178=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 595))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA9=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 595))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA9;                    it_178=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 595))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var6=it_178;
                        name_179=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_180=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional237=((struct sType*)come_null_check(field_type_180, "04heap.c", 594))->mHeap&&((struct sType*)come_null_check(field_type_180, "04heap.c", 594))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            come_clear_stackframe();
                            obj_181=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 591),((struct optional$2charphbool*)(right_value149=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_162,name_179))));
                            come_pop_stackframe();
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value150;
                            __freed_obj__ = 0;
                            free_object(field_type_180,obj_181,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_181 && !__freed_obj__) { obj_181 = come_decrement_ref_count(obj_181, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_179 && !__freed_obj__) { name_179 = come_decrement_ref_count(name_179, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_177 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional238=((struct sClass*)come_null_check(klass_163, "04heap.c", 609))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 609))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional238) {
                        for(
                        o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_163, "04heap.c", 606))->mFields)),it_183=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 606))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 606))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_183=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 606))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var7=it_183;
                            name_184=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_185=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional239=((struct sType*)come_null_check(field_type_185, "04heap.c", 605))->mHeap&&((struct sType*)come_null_check(field_type_185, "04heap.c", 605))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional239) {
                                come_clear_stackframe();
                                obj_186=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 602),((struct optional$2charphbool*)(right_value151=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_162,name_184))));
                                come_pop_stackframe();
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value151;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value152;
                                __freed_obj__ = 0;
                                free_object(field_type_185,obj_186,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_186 && !__freed_obj__) { obj_186 = come_decrement_ref_count(obj_186, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_184 && !__freed_obj__) { name_184 = come_decrement_ref_count(name_184, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_182 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional240=!((struct sType*)come_null_check(type, "04heap.c", 652))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(_if_conditional241=((struct sClass*)come_null_check(klass_163, "04heap.c", 651))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 651))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        if(_if_conditional242=c_value_162,                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            come_clear_stackframe();
                            type_name_187=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 612),((struct optional$2charphbool*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value153;
                            __freed_obj__ = 0;
                            if(_if_conditional243=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                if(_if_conditional244=comma,                                __freed_obj__ = 0, 
                                _if_conditional244) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_162,c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_162,c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional245=comma,                                __freed_obj__ = 0, 
                                _if_conditional245) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_187 && !__freed_obj__) { type_name_187 = come_decrement_ref_count(type_name_187, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional246=c_value_162,                        __freed_obj__ = 0, 
                        _if_conditional246) {
                            if(_if_conditional247=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional247) {
                                if(_if_conditional248=comma,                                __freed_obj__ = 0, 
                                _if_conditional248) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_162,c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional249=comma,                                __freed_obj__ = 0, 
                                _if_conditional249) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_);
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
            if(c_value_162 && !__freed_obj__) { c_value_162 = come_decrement_ref_count(c_value_162, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_166, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_167 && !__freed_obj__) { fun_name2_167 = come_decrement_ref_count(fun_name2_167, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj47=((struct sInfo*)come_null_check(info, "04heap.c", 656))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 656))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_128);
    if(__dec_obj47) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sInfo*)come_null_check(info, "04heap.c", 657))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 657))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_127);
    if(__dec_obj48) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_127 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result81__;
_Bool _if_conditional200;
struct tuple2$2charphsTypeph* __result82__;
struct tuple2$2charphsTypeph* result_147;
struct tuple2$2charphsTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional199=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional199) {
                            __freed_obj__ = 0;
                            memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result81__ = __result_obj__ = result_146;
                            __freed_obj__ = 0;
                            return __result81__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional200=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional200) {
                            __result82__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result82__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result83__ = __result_obj__ = result_147;
                        __freed_obj__ = 0;
                        return __result83__;
                        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result84__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result84__;
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result85__;
_Bool _if_conditional202;
struct tuple2$2charphsTypeph* __result86__;
struct tuple2$2charphsTypeph* result_150;
struct tuple2$2charphsTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_150, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional201=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional201) {
                            __freed_obj__ = 0;
                            memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result85__ = __result_obj__ = result_149;
                            __freed_obj__ = 0;
                            return __result85__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional202=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            __result86__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result86__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_150,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result87__ = __result_obj__ = result_150;
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_154;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_154, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_155, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_154=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_154!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            prev_it_155=it_154;
                            __freed_obj__ = 0;
                            it_154=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_154, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_155 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional204=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional204) {
                                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional205=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional205) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional206=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional206) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value154;
struct sType* type2_188;
_Bool _if_conditional250;
char* result_189;
struct sType* result_type_190;
struct list$1CVALUEph* stack_saved_191;
struct list$1sRightValueObjectph* right_value_objects_192;
void* right_value155;
char* c_value_193;
struct sClass* klass_194;
char* class_name_195;
char* fun_name_196;
struct sFun* cloner_197;
char* fun_name2_198;
_Bool _if_conditional251;
void* right_value156;
char* none_generics_name_199;
void* right_value157;
struct sType* obj_type_200;
void* right_value158;
char* __dec_obj49;
void* right_value159;
char* fun_name3_201;
void* right_value161;
struct sGenericsFun* generics_fun_204;
_Bool _if_conditional265;
void* right_value162;
_Bool _if_conditional266;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value169;
struct tuple2$2sTypephcharph* __result93__;
void* right_value170;
void* right_value171;
char* __dec_obj52;
int i_205;
_Bool _for_condtionalA11;
void* right_value172;
char* new_fun_name_206;
void* right_value173;
_Bool _if_conditional269;
void* right_value174;
char* __dec_obj53;
_Bool _if_conditional270;
void* right_value175;
_Bool _if_conditional271;
void* right_value176;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_207;
char* new_fun_name_208;
char* __dec_obj54;
_Bool _if_conditional272;
void* right_value177;
char* __dec_obj55;
struct sType* __dec_obj56;
void* right_value178;
struct sType* __dec_obj57;
void* right_value179;
char* type_name_209;
void* right_value180;
char* __dec_obj58;
void* right_value181;
struct sType* __dec_obj59;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
void* right_value182;
void* right_value183;
struct tuple2$2sTypephcharph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&type2_188, 0, sizeof(struct sType*));
memset(&result_189, 0, sizeof(char*));
memset(&result_type_190, 0, sizeof(struct sType*));
memset(&stack_saved_191, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_192, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_193, 0, sizeof(char*));
memset(&klass_194, 0, sizeof(struct sClass*));
memset(&class_name_195, 0, sizeof(char*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&cloner_197, 0, sizeof(struct sFun*));
memset(&fun_name2_198, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&none_generics_name_199, 0, sizeof(char*));
memset(&right_value157, 0, sizeof(void*));
memset(&obj_type_200, 0, sizeof(struct sType*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&fun_name3_201, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&generics_fun_204, 0, sizeof(struct sGenericsFun*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&i_205, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&new_fun_name_206, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&type_name_209, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    type2_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154;
    __freed_obj__ = 0;
    if(_if_conditional250=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 667))->mNoSolvedGenericsType, "04heap.c", 667))->v1,    __freed_obj__ = 0, 
    _if_conditional250) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 664))->mNoSolvedGenericsType, "04heap.c", 664))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_189=((void*)0);
    __freed_obj__ = 0;
    result_type_190=((void*)0);
    __freed_obj__ = 0;
    stack_saved_191=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 669))->stack);
    __freed_obj__ = 0;
    right_value_objects_192=((struct sInfo*)come_null_check(info, "04heap.c", 670))->right_value_objects;
    __freed_obj__ = 0;
    c_value_193=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(obj))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value155;
    __freed_obj__ = 0;
    klass_194=((struct sType*)come_null_check(type, "04heap.c", 674))->mClass;
    __freed_obj__ = 0;
    class_name_195=((struct sClass*)come_null_check(klass_194, "04heap.c", 676))->mName;
    __freed_obj__ = 0;
    fun_name_196="clone";
    __freed_obj__ = 0;
    cloner_197=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional251=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 719))->mGenericsTypes, "04heap.c", 719)))>0,    __freed_obj__ = 0, 
    _if_conditional251) {
        none_generics_name_199=(char*)come_increment_ref_count(((char*)(right_value156=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 683))->mClass, "04heap.c", 683))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156;
        __freed_obj__ = 0;
        obj_type_200=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 685))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value157;
        __freed_obj__ = 0;
        __dec_obj49=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count(((char*)(right_value158=create_method_name(obj_type_200,(_Bool)0,fun_name_196,info))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value158;
        __freed_obj__ = 0;
        fun_name3_201=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s_%s",none_generics_name_199,fun_name_196))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value159;
        __freed_obj__ = 0;
        generics_fun_204=((struct sGenericsFun*)(right_value161=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 690))->generics_funcs, "04heap.c", 690)),fun_name3_201,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value161;
        __freed_obj__ = 0;
        if(_if_conditional265=generics_fun_204,        __freed_obj__ = 0, 
        _if_conditional265) {
            if(_if_conditional266=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(fun_name2_198)))),generics_fun_204,obj_type_200,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162),
            (right_value162 && right_value162 != __result_obj__ && !__freed_obj__) ? right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value162, 
            __freed_obj__ = 0, 
            _if_conditional266) {
                __result93__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value169=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value166=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 694)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 694)))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("")))))));
                if(none_generics_name_199 && !__freed_obj__) { none_generics_name_199 = come_decrement_ref_count(none_generics_name_199, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_200 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_201 && !__freed_obj__) { fun_name3_201 = come_decrement_ref_count(fun_name3_201, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value163;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value164;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value165);
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value165;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value166;
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_197=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 698),((struct optional$2sFunpbool*)(right_value170=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 698))->funcs,fun_name2_198)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value170;
        __freed_obj__ = 0;
        if(none_generics_name_199 && !__freed_obj__) { none_generics_name_199 = come_decrement_ref_count(none_generics_name_199, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_200 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_201 && !__freed_obj__) { fun_name3_201 = come_decrement_ref_count(fun_name3_201, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj52=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count(((char*)(right_value171=create_method_name(type,(_Bool)0,fun_name_196,info))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_205=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        i_205>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA11;        i_205-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_206=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s_v%d",fun_name2_198,i_205))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value172;
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_197=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 706),((struct optional$2sFunpbool*)(right_value173=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 706))->funcs,new_fun_name_206)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value173;
            __freed_obj__ = 0;
            if(_if_conditional269=cloner_197,            __freed_obj__ = 0, 
            _if_conditional269) {
                __dec_obj53=fun_name2_198;
                fun_name2_198=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(new_fun_name_206))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value174;
                __freed_obj__ = 0;
                if(new_fun_name_206 && !__freed_obj__) { new_fun_name_206 = come_decrement_ref_count(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_206 && !__freed_obj__) { new_fun_name_206 = come_decrement_ref_count(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional270=cloner_197==((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            come_clear_stackframe();
            cloner_197=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 715),((struct optional$2sFunpbool*)(right_value175=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 715))->funcs,fun_name2_198)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value175;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional271=cloner_197==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 728))->mClass, "04heap.c", 728))->mNumber,    __freed_obj__ = 0, 
    _if_conditional271) {
        multiple_assgin_var8=((struct tuple2$2sFunpcharph*)(right_value176=create_cloner_automatically(type,fun_name_196,info)));
        fun_207=multiple_assgin_var8->v1;
        new_fun_name_208=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value176;
        __freed_obj__ = 0;
        __dec_obj54=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count(new_fun_name_208);
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_197=fun_207;
        __freed_obj__ = 0;
        if(new_fun_name_208 && !__freed_obj__) { new_fun_name_208 = come_decrement_ref_count(new_fun_name_208, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional272=cloner_197!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional272) {
        __dec_obj55=result_189;
        result_189=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s(%s)",fun_name2_198,c_value_193))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value177;
        __freed_obj__ = 0;
        __dec_obj56=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(cloner_197, "04heap.c", 730))->mResultType);
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj57=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=solve_generics(result_type_190,type,info))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value178;
        __freed_obj__ = 0;
    }
    else {
        ((struct sType*)come_null_check(type2_188, "04heap.c", 734))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_209=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 735),((struct optional$2charphbool*)(right_value179=make_type_name_string(type2_188,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value179;
        __freed_obj__ = 0;
        __dec_obj58=result_189;
        result_189=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_209,c_value_193,((struct sInfo*)come_null_check(info, "04heap.c", 736))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 736))->sline))));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value180;
        __freed_obj__ = 0;
        __dec_obj59=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value181;
        __freed_obj__ = 0;
        if(type_name_209 && !__freed_obj__) { type_name_209 = come_decrement_ref_count(type_name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj60=((struct sInfo*)come_null_check(info, "04heap.c", 740))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 740))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_192);
    if(__dec_obj60) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj61=((struct sInfo*)come_null_check(info, "04heap.c", 741))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 741))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_191);
    if(__dec_obj61) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result94__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value183=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value182=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 743)))),(struct sType*)come_increment_ref_count(result_type_190),(char*)come_increment_ref_count(result_189))));
    if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value182;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_202;
unsigned int it_203;
_Bool _while_condtional20;
_Bool _if_conditional252;
void* right_value160;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional253;
struct sGenericsFun* __result88__;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sGenericsFun* __result89__;
struct sGenericsFun* __result90__;
struct sGenericsFun* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_202, 0, sizeof(unsigned int));
memset(&it_203, 0, sizeof(unsigned int));
memset(&right_value160, 0, sizeof(void*));
            hash_202=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_203=hash_202;
            __freed_obj__ = 0;
            while(_while_condtional20=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional252=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_203],                __freed_obj__ = 0, 
                _if_conditional252) {
                    if(_if_conditional253=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value160=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_203], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160),
                    (right_value160 && right_value160 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value160, 
                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        __result88__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_203];
                        __freed_obj__ = 0;
                        return __result88__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_203++;
                    __freed_obj__ = 0;
                    if(_if_conditional254=it_203>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional254) {
                        it_203=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional255=it_203==hash_202,                        __freed_obj__ = 0, 
                        _if_conditional255) {
                            __result89__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result89__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result90__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result91__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result91__;
            __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional256=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional256) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional257=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional257) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional258=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional258) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional259=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional260=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional261=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional261) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional262=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional262) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional263=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional263) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional264=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional264) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value167;
struct sType* __dec_obj50;
void* right_value168;
char* __dec_obj51;
struct tuple2$2sTypephcharph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
                    __dec_obj50=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(v1))));
                    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value167;
                    __freed_obj__ = 0;
                    __dec_obj51=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(v2))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value168;
                    __freed_obj__ = 0;
                    __result92__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result92__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional267=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional267) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional268=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional268) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional273;
char* result_210;
struct list$1CVALUEph* stack_saved_211;
struct list$1sRightValueObjectph* right_value_objects_212;
struct sClass* klass_213;
char* class_name_214;
char* fun_name_215;
void* right_value184;
struct sType* type2_216;
struct sFun* cloner_217;
char* fun_name2_218;
_Bool _if_conditional274;
void* right_value185;
char* none_generics_name_219;
void* right_value186;
struct sType* obj_type_220;
void* right_value187;
char* __dec_obj62;
void* right_value188;
char* fun_name3_221;
void* right_value189;
struct sGenericsFun* generics_fun_222;
_Bool _if_conditional275;
void* right_value190;
_Bool _if_conditional276;
_Bool __result95__;
void* right_value191;
void* right_value192;
char* __dec_obj63;
int i_223;
_Bool _for_condtionalA12;
void* right_value193;
char* new_fun_name_224;
void* right_value194;
_Bool _if_conditional277;
void* right_value195;
char* __dec_obj64;
_Bool _if_conditional278;
void* right_value196;
_Bool _if_conditional279;
void* right_value197;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_225;
char* new_fun_name_226;
char* __dec_obj65;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_210, 0, sizeof(char*));
memset(&stack_saved_211, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_212, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_213, 0, sizeof(struct sClass*));
memset(&class_name_214, 0, sizeof(char*));
memset(&fun_name_215, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&cloner_217, 0, sizeof(struct sFun*));
memset(&fun_name2_218, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&none_generics_name_219, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_220, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&fun_name3_221, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
memset(&generics_fun_222, 0, sizeof(struct sGenericsFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&i_223, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&new_fun_name_224, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&fun_225, 0, sizeof(struct sFun*));
memset(&new_fun_name_226, 0, sizeof(char*));
memset(&fun_225, 0, sizeof(struct sFun*));
memset(&new_fun_name_226, 0, sizeof(char*));
    if(_if_conditional273=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 751))->mNoSolvedGenericsType, "04heap.c", 751))->v1,    __freed_obj__ = 0, 
    _if_conditional273) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 749))->mNoSolvedGenericsType, "04heap.c", 749))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_210=((void*)0);
    __freed_obj__ = 0;
    stack_saved_211=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 752))->stack);
    __freed_obj__ = 0;
    right_value_objects_212=((struct sInfo*)come_null_check(info, "04heap.c", 753))->right_value_objects;
    __freed_obj__ = 0;
    klass_213=((struct sType*)come_null_check(type, "04heap.c", 755))->mClass;
    __freed_obj__ = 0;
    class_name_214=((struct sClass*)come_null_check(klass_213, "04heap.c", 757))->mName;
    __freed_obj__ = 0;
    fun_name_215="equals";
    __freed_obj__ = 0;
    type2_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_216, "04heap.c", 762))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_217=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional274=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 803))->mGenericsTypes, "04heap.c", 803)))>0,    __freed_obj__ = 0, 
    _if_conditional274) {
        none_generics_name_219=(char*)come_increment_ref_count(((char*)(right_value185=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 767))->mClass, "04heap.c", 767))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185;
        __freed_obj__ = 0;
        obj_type_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 769))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value186;
        __freed_obj__ = 0;
        __dec_obj62=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count(((char*)(right_value187=create_method_name(obj_type_220,(_Bool)0,fun_name_215,info))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value187;
        __freed_obj__ = 0;
        fun_name3_221=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s_%s",none_generics_name_219,fun_name_215))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value188;
        __freed_obj__ = 0;
        generics_fun_222=((struct sGenericsFun*)(right_value189=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 774))->generics_funcs, "04heap.c", 774)),fun_name3_221,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value189;
        __freed_obj__ = 0;
        if(_if_conditional275=generics_fun_222,        __freed_obj__ = 0, 
        _if_conditional275) {
            if(_if_conditional276=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(fun_name2_218)))),generics_fun_222,obj_type_220,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190),
            (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value190, 
            __freed_obj__ = 0, 
            _if_conditional276) {
                __result95__ = (_Bool)0;
                if(none_generics_name_219 && !__freed_obj__) { none_generics_name_219 = come_decrement_ref_count(none_generics_name_219, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_221 && !__freed_obj__) { fun_name3_221 = come_decrement_ref_count(fun_name3_221, (void*)0, (void*)0, 0, 0, 0); }
                if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result95__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_217=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 782),((struct optional$2sFunpbool*)(right_value191=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 782))->funcs,fun_name2_218)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value191;
        __freed_obj__ = 0;
        if(none_generics_name_219 && !__freed_obj__) { none_generics_name_219 = come_decrement_ref_count(none_generics_name_219, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_221 && !__freed_obj__) { fun_name3_221 = come_decrement_ref_count(fun_name3_221, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj63=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count(((char*)(right_value192=create_method_name(type,(_Bool)0,fun_name_215,info))));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value192;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_223=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_223>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_223-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_218,i_223))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value193;
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_217=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 790),((struct optional$2sFunpbool*)(right_value194=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 790))->funcs,new_fun_name_224)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value194;
            __freed_obj__ = 0;
            if(_if_conditional277=cloner_217,            __freed_obj__ = 0, 
            _if_conditional277) {
                __dec_obj64=fun_name2_218;
                fun_name2_218=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(new_fun_name_224))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value195;
                __freed_obj__ = 0;
                if(new_fun_name_224 && !__freed_obj__) { new_fun_name_224 = come_decrement_ref_count(new_fun_name_224, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_224 && !__freed_obj__) { new_fun_name_224 = come_decrement_ref_count(new_fun_name_224, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional278=cloner_217==((void*)0),        __freed_obj__ = 0, 
        _if_conditional278) {
            come_clear_stackframe();
            cloner_217=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 799),((struct optional$2sFunpbool*)(right_value196=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 799))->funcs,fun_name2_218)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value196;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional279=cloner_217==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 811))->mClass, "04heap.c", 811))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 811))->mClass, "04heap.c", 811))->mNumber,    __freed_obj__ = 0, 
    _if_conditional279) {
        multiple_assgin_var9=((struct tuple2$2sFunpcharph*)(right_value197=create_equals_automatically(type,fun_name_215,info)));
        fun_225=multiple_assgin_var9->v1;
        new_fun_name_226=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197;
        __freed_obj__ = 0;
        __dec_obj65=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count(new_fun_name_226);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_217=fun_225;
        __freed_obj__ = 0;
        if(new_fun_name_226 && !__freed_obj__) { new_fun_name_226 = come_decrement_ref_count(new_fun_name_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj66=((struct sInfo*)come_null_check(info, "04heap.c", 811))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 811))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_212);
    if(__dec_obj66) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj67=((struct sInfo*)come_null_check(info, "04heap.c", 812))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 812))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_211);
    if(__dec_obj67) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result96__ = (_Bool)1;
    if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional280;
char* result_227;
struct list$1CVALUEph* stack_saved_228;
struct list$1sRightValueObjectph* right_value_objects_229;
struct sClass* klass_230;
char* class_name_231;
char* fun_name_232;
void* right_value198;
struct sType* type2_233;
struct sFun* cloner_234;
char* fun_name2_235;
_Bool _if_conditional281;
void* right_value199;
char* none_generics_name_236;
void* right_value200;
struct sType* obj_type_237;
void* right_value201;
char* __dec_obj68;
void* right_value202;
char* fun_name3_238;
void* right_value203;
struct sGenericsFun* generics_fun_239;
_Bool _if_conditional282;
void* right_value204;
_Bool _if_conditional283;
_Bool __result97__;
void* right_value205;
void* right_value206;
char* __dec_obj69;
int i_240;
_Bool _for_condtionalA13;
void* right_value207;
char* new_fun_name_241;
void* right_value208;
_Bool _if_conditional284;
void* right_value209;
char* __dec_obj70;
_Bool _if_conditional285;
void* right_value210;
_Bool _if_conditional286;
void* right_value211;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_242;
char* new_fun_name_243;
char* __dec_obj71;
struct list$1sRightValueObjectph* __dec_obj72;
struct list$1CVALUEph* __dec_obj73;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_227, 0, sizeof(char*));
memset(&stack_saved_228, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_229, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_230, 0, sizeof(struct sClass*));
memset(&class_name_231, 0, sizeof(char*));
memset(&fun_name_232, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_233, 0, sizeof(struct sType*));
memset(&cloner_234, 0, sizeof(struct sFun*));
memset(&fun_name2_235, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
memset(&none_generics_name_236, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&obj_type_237, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&fun_name3_238, 0, sizeof(char*));
memset(&right_value203, 0, sizeof(void*));
memset(&generics_fun_239, 0, sizeof(struct sGenericsFun*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&i_240, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&new_fun_name_241, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
    if(_if_conditional280=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 822))->mNoSolvedGenericsType, "04heap.c", 822))->v1,    __freed_obj__ = 0, 
    _if_conditional280) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 820))->mNoSolvedGenericsType, "04heap.c", 820))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_227=((void*)0);
    __freed_obj__ = 0;
    stack_saved_228=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 823))->stack);
    __freed_obj__ = 0;
    right_value_objects_229=((struct sInfo*)come_null_check(info, "04heap.c", 824))->right_value_objects;
    __freed_obj__ = 0;
    klass_230=((struct sType*)come_null_check(type, "04heap.c", 826))->mClass;
    __freed_obj__ = 0;
    class_name_231=((struct sClass*)come_null_check(klass_230, "04heap.c", 828))->mName;
    __freed_obj__ = 0;
    fun_name_232="operator_equals";
    __freed_obj__ = 0;
    type2_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_233, "04heap.c", 833))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_234=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional281=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 874))->mGenericsTypes, "04heap.c", 874)))>0,    __freed_obj__ = 0, 
    _if_conditional281) {
        none_generics_name_236=(char*)come_increment_ref_count(((char*)(right_value199=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 838))->mClass, "04heap.c", 838))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value199;
        __freed_obj__ = 0;
        obj_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 840))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value200;
        __freed_obj__ = 0;
        __dec_obj68=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value201=create_method_name(obj_type_237,(_Bool)0,fun_name_232,info))));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value201;
        __freed_obj__ = 0;
        fun_name3_238=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_%s",none_generics_name_236,fun_name_232))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value202;
        __freed_obj__ = 0;
        generics_fun_239=((struct sGenericsFun*)(right_value203=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 845))->generics_funcs, "04heap.c", 845)),fun_name3_238,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value203;
        __freed_obj__ = 0;
        if(_if_conditional282=generics_fun_239,        __freed_obj__ = 0, 
        _if_conditional282) {
            if(_if_conditional283=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(fun_name2_235)))),generics_fun_239,obj_type_237,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204),
            (right_value204 && right_value204 != __result_obj__ && !__freed_obj__) ? right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value204, 
            __freed_obj__ = 0, 
            _if_conditional283) {
                __result97__ = (_Bool)0;
                if(none_generics_name_236 && !__freed_obj__) { none_generics_name_236 = come_decrement_ref_count(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_238 && !__freed_obj__) { fun_name3_238 = come_decrement_ref_count(fun_name3_238, (void*)0, (void*)0, 0, 0, 0); }
                if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result97__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_234=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 853),((struct optional$2sFunpbool*)(right_value205=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 853))->funcs,fun_name2_235)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value205;
        __freed_obj__ = 0;
        if(none_generics_name_236 && !__freed_obj__) { none_generics_name_236 = come_decrement_ref_count(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_238 && !__freed_obj__) { fun_name3_238 = come_decrement_ref_count(fun_name3_238, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj69=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name(type,(_Bool)0,fun_name_232,info))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_240=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_240>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_240-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_241=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("%s_v%d",fun_name2_235,i_240))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value207;
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_234=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 861),((struct optional$2sFunpbool*)(right_value208=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 861))->funcs,new_fun_name_241)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value208;
            __freed_obj__ = 0;
            if(_if_conditional284=cloner_234,            __freed_obj__ = 0, 
            _if_conditional284) {
                __dec_obj70=fun_name2_235;
                fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(new_fun_name_241))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value209;
                __freed_obj__ = 0;
                if(new_fun_name_241 && !__freed_obj__) { new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_241 && !__freed_obj__) { new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional285=cloner_234==((void*)0),        __freed_obj__ = 0, 
        _if_conditional285) {
            come_clear_stackframe();
            cloner_234=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 870),((struct optional$2sFunpbool*)(right_value210=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 870))->funcs,fun_name2_235)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value210;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional286=cloner_234==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 882))->mClass, "04heap.c", 882))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 882))->mClass, "04heap.c", 882))->mNumber,    __freed_obj__ = 0, 
    _if_conditional286) {
        multiple_assgin_var10=((struct tuple2$2sFunpcharph*)(right_value211=create_operator_equals_automatically(type,fun_name_232,info)));
        fun_242=multiple_assgin_var10->v1;
        new_fun_name_243=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211;
        __freed_obj__ = 0;
        __dec_obj71=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(new_fun_name_243);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_234=fun_242;
        __freed_obj__ = 0;
        if(new_fun_name_243 && !__freed_obj__) { new_fun_name_243 = come_decrement_ref_count(new_fun_name_243, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj72=((struct sInfo*)come_null_check(info, "04heap.c", 882))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 882))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_229);
    if(__dec_obj72) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj73=((struct sInfo*)come_null_check(info, "04heap.c", 883))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 883))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_228);
    if(__dec_obj73) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result98__ = (_Bool)1;
    if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
char* result_244;
struct list$1CVALUEph* stack_saved_245;
struct list$1sRightValueObjectph* right_value_objects_246;
struct sClass* klass_247;
char* class_name_248;
char* fun_name_249;
void* right_value212;
struct sType* type2_250;
struct sFun* cloner_251;
char* fun_name2_252;
_Bool _if_conditional288;
void* right_value213;
char* none_generics_name_253;
void* right_value214;
struct sType* obj_type_254;
void* right_value215;
char* __dec_obj74;
void* right_value216;
char* fun_name3_255;
void* right_value217;
struct sGenericsFun* generics_fun_256;
_Bool _if_conditional289;
void* right_value218;
_Bool _if_conditional290;
_Bool __result99__;
void* right_value219;
void* right_value220;
char* __dec_obj75;
int i_257;
_Bool _for_condtionalA14;
void* right_value221;
char* new_fun_name_258;
void* right_value222;
_Bool _if_conditional291;
void* right_value223;
char* __dec_obj76;
_Bool _if_conditional292;
void* right_value224;
_Bool _if_conditional293;
void* right_value225;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_259;
char* new_fun_name_260;
char* __dec_obj77;
struct list$1sRightValueObjectph* __dec_obj78;
struct list$1CVALUEph* __dec_obj79;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_244, 0, sizeof(char*));
memset(&stack_saved_245, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_246, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_247, 0, sizeof(struct sClass*));
memset(&class_name_248, 0, sizeof(char*));
memset(&fun_name_249, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&type2_250, 0, sizeof(struct sType*));
memset(&cloner_251, 0, sizeof(struct sFun*));
memset(&fun_name2_252, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&none_generics_name_253, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&obj_type_254, 0, sizeof(struct sType*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&fun_name3_255, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&generics_fun_256, 0, sizeof(struct sGenericsFun*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&right_value221, 0, sizeof(void*));
memset(&new_fun_name_258, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
    if(_if_conditional287=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 893))->mNoSolvedGenericsType, "04heap.c", 893))->v1,    __freed_obj__ = 0, 
    _if_conditional287) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 891))->mNoSolvedGenericsType, "04heap.c", 891))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_244=((void*)0);
    __freed_obj__ = 0;
    stack_saved_245=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 894))->stack);
    __freed_obj__ = 0;
    right_value_objects_246=((struct sInfo*)come_null_check(info, "04heap.c", 895))->right_value_objects;
    __freed_obj__ = 0;
    klass_247=((struct sType*)come_null_check(type, "04heap.c", 897))->mClass;
    __freed_obj__ = 0;
    class_name_248=((struct sClass*)come_null_check(klass_247, "04heap.c", 899))->mName;
    __freed_obj__ = 0;
    fun_name_249="operator_not_equals";
    __freed_obj__ = 0;
    type2_250=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_250, "04heap.c", 904))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_251=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional288=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 945))->mGenericsTypes, "04heap.c", 945)))>0,    __freed_obj__ = 0, 
    _if_conditional288) {
        none_generics_name_253=(char*)come_increment_ref_count(((char*)(right_value213=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 909))->mClass, "04heap.c", 909))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213;
        __freed_obj__ = 0;
        obj_type_254=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 911))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value214;
        __freed_obj__ = 0;
        __dec_obj74=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value215=create_method_name(obj_type_254,(_Bool)0,fun_name_249,info))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value215;
        __freed_obj__ = 0;
        fun_name3_255=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s_%s",none_generics_name_253,fun_name_249))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value216;
        __freed_obj__ = 0;
        generics_fun_256=((struct sGenericsFun*)(right_value217=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 916))->generics_funcs, "04heap.c", 916)),fun_name3_255,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value217;
        __freed_obj__ = 0;
        if(_if_conditional289=generics_fun_256,        __freed_obj__ = 0, 
        _if_conditional289) {
            if(_if_conditional290=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(fun_name2_252)))),generics_fun_256,obj_type_254,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218),
            (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value218, 
            __freed_obj__ = 0, 
            _if_conditional290) {
                __result99__ = (_Bool)0;
                if(none_generics_name_253 && !__freed_obj__) { none_generics_name_253 = come_decrement_ref_count(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_254 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_255 && !__freed_obj__) { fun_name3_255 = come_decrement_ref_count(fun_name3_255, (void*)0, (void*)0, 0, 0, 0); }
                if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result99__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_251=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 924),((struct optional$2sFunpbool*)(right_value219=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 924))->funcs,fun_name2_252)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value219;
        __freed_obj__ = 0;
        if(none_generics_name_253 && !__freed_obj__) { none_generics_name_253 = come_decrement_ref_count(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_254 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_255 && !__freed_obj__) { fun_name3_255 = come_decrement_ref_count(fun_name3_255, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj75=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value220=create_method_name(type,(_Bool)0,fun_name_249,info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value220;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_257=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        i_257>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA14;        i_257-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_258=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s_v%d",fun_name2_252,i_257))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value221;
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_251=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 932),((struct optional$2sFunpbool*)(right_value222=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 932))->funcs,new_fun_name_258)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value222;
            __freed_obj__ = 0;
            if(_if_conditional291=cloner_251,            __freed_obj__ = 0, 
            _if_conditional291) {
                __dec_obj76=fun_name2_252;
                fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(new_fun_name_258))));
                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223;
                __freed_obj__ = 0;
                if(new_fun_name_258 && !__freed_obj__) { new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_258 && !__freed_obj__) { new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional292=cloner_251==((void*)0),        __freed_obj__ = 0, 
        _if_conditional292) {
            come_clear_stackframe();
            cloner_251=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 941),((struct optional$2sFunpbool*)(right_value224=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 941))->funcs,fun_name2_252)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value224;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional293=cloner_251==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 953))->mClass, "04heap.c", 953))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 953))->mClass, "04heap.c", 953))->mNumber,    __freed_obj__ = 0, 
    _if_conditional293) {
        multiple_assgin_var11=((struct tuple2$2sFunpcharph*)(right_value225=create_operator_not_equals_automatically(type,fun_name_249,info)));
        fun_259=multiple_assgin_var11->v1;
        new_fun_name_260=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
        __freed_obj__ = 0;
        __dec_obj77=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(new_fun_name_260);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_251=fun_259;
        __freed_obj__ = 0;
        if(new_fun_name_260 && !__freed_obj__) { new_fun_name_260 = come_decrement_ref_count(new_fun_name_260, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj78=((struct sInfo*)come_null_check(info, "04heap.c", 953))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 953))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_246);
    if(__dec_obj78) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj79=((struct sInfo*)come_null_check(info, "04heap.c", 954))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 954))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_245);
    if(__dec_obj79) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result100__ = (_Bool)1;
    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool free_right_value_261;
struct list$1sRightValueObjectph* right_value_objects_262;
int n_263;
struct list$1sRightValueObjectph* o2_saved_264;
struct sRightValueObject* it_265;
_Bool _for_condtionalA15;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value226;
struct sType* type_266;
void* right_value227;
struct sType* __dec_obj80;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_261, 0, sizeof(_Bool));
memset(&right_value_objects_262, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_263, 0, sizeof(int));
memset(&o2_saved_264, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_265, 0, sizeof(struct sRightValueObject*));
memset(&right_value226, 0, sizeof(void*));
memset(&type_266, 0, sizeof(struct sType*));
memset(&right_value227, 0, sizeof(void*));
    free_right_value_261=(_Bool)0;
    __freed_obj__ = 0;
    right_value_objects_262=((struct sInfo*)come_null_check(info, "04heap.c", 962))->right_value_objects;
    __freed_obj__ = 0;
    n_263=0;
    __freed_obj__ = 0;
    for(
    o2_saved_264=(right_value_objects_262),it_265=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_264), "04heap.c", 1000))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_264), "04heap.c", 1000))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    it_265=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_264), "04heap.c", 1000))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional294=it_265&&!((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 997))->mFreed,        __freed_obj__ = 0, 
        _if_conditional294) {
            if(_if_conditional295=string_operator_equals(((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 995))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 995))->come_fun, "04heap.c", 995))->mName)&&((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 995))->mBlockLevel==((struct sInfo*)come_null_check(info, "04heap.c", 995))->block_level,            __freed_obj__ = 0, 
            _if_conditional295) {
                type_266=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 968))->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value226;
                __freed_obj__ = 0;
                __dec_obj80=type_266;
                type_266=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=solve_type(type_266,((struct sInfo*)come_null_check(info, "04heap.c", 970))->generics_type,((struct sInfo*)come_null_check(info, "04heap.c", 970))->method_generics_types,info))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value227;
                __freed_obj__ = 0;
                if(_if_conditional296=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional296) {
                    if(_if_conditional297=comma,                    __freed_obj__ = 0, 
                    _if_conditional297) {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_263,((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 974))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_263,((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 977))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                free_object(type_266,((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 981))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional298=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional298) {
                    if(_if_conditional299=comma,                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_263,((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 985))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_263,((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 988))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sRightValueObject*)come_null_check(it_265, "04heap.c", 992))->mFreed=(_Bool)1;
                __freed_obj__ = 0;
                free_right_value_261=(_Bool)1;
                __freed_obj__ = 0;
                if(type_266 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_263++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional300=comma,    __freed_obj__ = 0, 
    _if_conditional300) {
        add_come_code(info,"__freed_obj__ = 0, \n");
        __freed_obj__ = 0;
    }
    else {
        add_come_code(info,"__freed_obj__ = 0;\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* o2_saved_267;
struct sRightValueObject* it_268;
_Bool _for_condtionalA16;
_Bool _if_conditional301;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_267, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_268, 0, sizeof(struct sRightValueObject*));
    for(
    o2_saved_267=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 1016))->right_value_objects)),it_268=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_267), "04heap.c", 1016))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_267), "04heap.c", 1016))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    it_268=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_267), "04heap.c", 1016))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional301=((struct sRightValueObject*)come_null_check(it_268, "04heap.c", 1014))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional301) {
            __result101__ = (_Bool)1;
            if(o2_saved_267 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_267, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_267 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_267, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result102__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_269;
_Bool _while_condtional21;
void* right_value237;
struct sVar* var__274;
_Bool _if_conditional307;
struct sVar* __result110__;
struct sVar* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_269, 0, sizeof(struct sVarTable*));
memset(&right_value237, 0, sizeof(void*));
memset(&var__274, 0, sizeof(struct sVar*));
    it_269=table;
    __freed_obj__ = 0;
    while(_while_condtional21=it_269,    __freed_obj__ = 0, 
    _while_condtional21) {
        come_clear_stackframe();
        var__274=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1025),((struct optional$2sVarpbool*)(right_value237=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(it_269, "04heap.c", 1025))->mVars,name)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = 0;
        if(_if_conditional307=var__274,        __freed_obj__ = 0, 
        _if_conditional307) {
            __result110__ = __result_obj__ = var__274;
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_269=((struct sVarTable*)come_null_check(it_269, "04heap.c", 1031))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_270;
unsigned int hash_271;
unsigned int it_272;
_Bool _while_condtional22;
_Bool _if_conditional302;
void* right_value228;
struct optional$2boolbool* __exception_result_var_b3;
_Bool _if_conditional303;
void* right_value229;
void* right_value230;
struct optional$2sVarpbool* __result104__;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value231;
void* right_value232;
struct optional$2sVarpbool* __result105__;
void* right_value233;
void* right_value234;
struct optional$2sVarpbool* __result106__;
void* right_value235;
void* right_value236;
struct optional$2sVarpbool* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_270, 0, sizeof(struct sVar*));
memset(&hash_271, 0, sizeof(unsigned int));
memset(&it_272, 0, sizeof(unsigned int));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_270,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_271=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_272=hash_271;
            __freed_obj__ = 0;
            while(_while_condtional22=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional22) {
                if(_if_conditional302=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_272],                __freed_obj__ = 0, 
                _if_conditional302) {
                    if(_if_conditional303=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b3=((struct optional$2boolbool*)(right_value228=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_272], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b3)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228),
                    (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value228, 
                    __freed_obj__ = 0, 
                    _if_conditional303) {
                        __result104__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value230=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value229=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_272],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value229;
                        __freed_obj__ = 0;
                        return __result104__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_272++;
                    __freed_obj__ = 0;
                    if(_if_conditional304=it_272>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional304) {
                        it_272=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional305=it_272==hash_271,                        __freed_obj__ = 0, 
                        _if_conditional305) {
                            __result105__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value232=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value231=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_270,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value231;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value232;
                            __freed_obj__ = 0;
                            return __result105__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result106__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value234=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value233=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_270,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value233;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value234;
                    __freed_obj__ = 0;
                    return __result106__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result107__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value236=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value235=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_270,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value235;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value236;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result103__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result103__;
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
_Bool _if_conditional306;
struct sVar* default_value_273;
struct sVar* __result108__;
struct sVar* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_273, 0, sizeof(struct sVar*));
            if(_if_conditional306=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional306) {
                __freed_obj__ = 0;
                memset(&default_value_273,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result108__ = __result_obj__ = default_value_273;
                __freed_obj__ = 0;
                return __result108__;
                __freed_obj__ = 0;
            }
            else {
                __result109__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result109__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct map$2charphsVarph* o2_saved_275;
char* it_278;
_Bool _for_condtionalA17;
void* right_value238;
struct sVar* p_281;
struct sType* type_282;
struct sClass* klass_283;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value239;
char* c_value_284;
void* right_value240;
struct sType* type2_285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_275, 0, sizeof(struct map$2charphsVarph*));
memset(&it_278, 0, sizeof(char*));
memset(&right_value238, 0, sizeof(void*));
memset(&p_281, 0, sizeof(struct sVar*));
memset(&type_282, 0, sizeof(struct sType*));
memset(&klass_283, 0, sizeof(struct sClass*));
memset(&right_value239, 0, sizeof(void*));
memset(&c_value_284, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&type2_285, 0, sizeof(struct sType*));
    for(
    o2_saved_275=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(table, "04heap.c", 1063))->mVars)),it_278=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1063))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1063))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_278=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1063))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        p_281=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1040),((struct optional$2sVarpbool*)(right_value238=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(table, "04heap.c", 1040))->mVars,it_278)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238;
        __freed_obj__ = 0;
        type_282=((struct sVar*)come_null_check(p_281, "04heap.c", 1041))->mType;
        __freed_obj__ = 0;
        klass_283=((struct sType*)come_null_check(type_282, "04heap.c", 1042))->mClass;
        __freed_obj__ = 0;
        if(_if_conditional312=ret_value!=((void*)0)&&((struct sVar*)come_null_check(p_281, "04heap.c", 1062))->mCValueName!=((void*)0)&&string_operator_equals(((struct sVar*)come_null_check(p_281, "04heap.c", 1062))->mCValueName,((struct sVar*)come_null_check(ret_value, "04heap.c", 1062))->mCValueName)&&((struct sType*)come_null_check(type_282, "04heap.c", 1062))->mHeap,        __freed_obj__ = 0, 
        _if_conditional312) {
            free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1046))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1046))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional313=((struct sType*)come_null_check(type_282, "04heap.c", 1062))->mHeap&&((struct sVar*)come_null_check(p_281, "04heap.c", 1062))->mCValueName,            __freed_obj__ = 0, 
            _if_conditional313) {
                if(_if_conditional314=((struct sType*)come_null_check(type_282, "04heap.c", 1055))->mFunctionParam,                __freed_obj__ = 0, 
                _if_conditional314) {
                    free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1050))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1050))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                else {
                    free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1053))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1053))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional315=((struct sClass*)come_null_check(klass_283, "04heap.c", 1062))->mStruct&&((struct sVar*)come_null_check(p_281, "04heap.c", 1062))->mCValueName&&((struct sType*)come_null_check(type_282, "04heap.c", 1062))->mAllocaValue&&!((struct sType*)come_null_check(type_282, "04heap.c", 1062))->mNoCallingDestructor,                __freed_obj__ = 0, 
                _if_conditional315) {
                    c_value_284=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("(&%s)",((struct sVar*)come_null_check(p_281, "04heap.c", 1057))->mCValueName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value239;
                    __freed_obj__ = 0;
                    type2_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(type_282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value240;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type2_285, "04heap.c", 1059))->mPointerNum++;
                    __freed_obj__ = 0;
                    free_object(type2_285,c_value_284,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                    if(c_value_284 && !__freed_obj__) { c_value_284 = come_decrement_ref_count(c_value_284, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_285 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_275 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_275, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional308;
char* result_276;
char* __result112__;
_Bool _if_conditional309;
char* __result113__;
char* result_277;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_276, 0, sizeof(char*));
memset(&result_277, 0, sizeof(char*));
        if(_if_conditional308=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional308) {
            __freed_obj__ = 0;
            memset(&result_276,0,sizeof(char*));
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = result_276;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
        __freed_obj__ = 0;
        if(_if_conditional309=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,        __freed_obj__ = 0, 
        _if_conditional309) {
            __result113__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_277,0,sizeof(char*));
        __freed_obj__ = 0;
        __result114__ = __result_obj__ = result_277;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result115__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
char* result_279;
char* __result116__;
_Bool _if_conditional311;
char* __result117__;
char* result_280;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_279, 0, sizeof(char*));
memset(&result_280, 0, sizeof(char*));
        if(_if_conditional310=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional310) {
            __freed_obj__ = 0;
            memset(&result_279,0,sizeof(char*));
            __freed_obj__ = 0;
            __result116__ = __result_obj__ = result_279;
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
        __freed_obj__ = 0;
        if(_if_conditional311=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,        __freed_obj__ = 0, 
        _if_conditional311) {
            __result117__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_280,0,sizeof(char*));
        __freed_obj__ = 0;
        __result118__ = __result_obj__ = result_280;
        __freed_obj__ = 0;
        return __result118__;
        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_286;
_Bool _for_condtionalA18;
_Bool _if_conditional316;
_Bool _if_conditional317;
int i_287;
_Bool _for_condtionalA19;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_286, 0, sizeof(int));
memset(&i_287, 0, sizeof(int));
        for(
        i_286=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_286<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_286++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional316=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_286],            __freed_obj__ = 0, 
            _if_conditional316) {
                if(_if_conditional317=1,                __freed_obj__ = 0, 
                _if_conditional317) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_286] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_286], (void*)0, (void*)0, 0, 0, 0, 0); }
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
        i_287=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_287<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_287++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional322=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_287],            __freed_obj__ = 0, 
            _if_conditional322) {
                if(_if_conditional323=1,                __freed_obj__ = 0, 
                _if_conditional323) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_287] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_287] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_287], (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional318=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional319=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional320=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional321=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional321) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_288;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_288, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_289, 0, sizeof(struct list_item$1charp*));
            it_288=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_288!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                prev_it_289=it_288;
                __freed_obj__ = 0;
                it_288=((struct list_item$1charp*)come_null_check(it_288, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_289 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_289, (void*)0, (void*)0, 0, 0, 0, 0); }
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

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_290;
_Bool _if_conditional324;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_290, 0, sizeof(struct sVarTable*));
    it_290=((struct sInfo*)come_null_check(info, "04heap.c", 1067))->lv_table;
    __freed_obj__ = 0;
    if(_if_conditional324=it_290==((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1080))->come_fun, "04heap.c", 1080))->mBlock, "04heap.c", 1080))->mVarTable,    __freed_obj__ = 0, 
    _if_conditional324) {
        free_objects(it_290,ret_value,info);
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional24=it_290!=((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1078))->come_fun, "04heap.c", 1078))->mBlock, "04heap.c", 1078))->mVarTable,        __freed_obj__ = 0, 
        _while_condtional24) {
            free_objects(it_290,ret_value,info);
            __freed_obj__ = 0;
            it_290=((struct sVarTable*)come_null_check(it_290, "04heap.c", 1076))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_290,ret_value,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* ret_value_291;
struct sVarTable* current_loop_vtable_292;
_Bool _if_conditional325;
struct sVarTable* it_293;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_291, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_292, 0, sizeof(struct sVarTable*));
memset(&it_293, 0, sizeof(struct sVarTable*));
    ret_value_291=((void*)0);
    __freed_obj__ = 0;
    current_loop_vtable_292=((struct sInfo*)come_null_check(info, "04heap.c", 1086))->current_loop_vtable;
    __freed_obj__ = 0;
    if(_if_conditional325=current_loop_vtable_292!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional325) {
        it_293=((struct sInfo*)come_null_check(info, "04heap.c", 1089))->lv_table;
        __freed_obj__ = 0;
        while(_while_condtional25=it_293!=current_loop_vtable_292,        __freed_obj__ = 0, 
        _while_condtional25) {
            free_objects(it_293,ret_value_291,info);
            __freed_obj__ = 0;
            it_293=((struct sVarTable*)come_null_check(it_293, "04heap.c", 1093))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_293,ret_value_291,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
char* __result119__;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
char* __result120__;
_Bool _if_conditional329;
static int n_294=0;
void* right_value249;
char* var_name_295;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
char* __result121__;
static int n_296=0;
void* right_value257;
char* var_name_297;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
char* __result122__;
_Bool _if_conditional330;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
char* result_298;
char* __result123__;
void* right_value269;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&var_name_295, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&var_name_297, 0, sizeof(char*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&result_298, 0, sizeof(char*));
memset(&right_value269, 0, sizeof(void*));
    if(_if_conditional326=((struct sInfo*)come_null_check(info, "04heap.c", 1139))->without_semicolon,    __freed_obj__ = 0, 
    _if_conditional326) {
        if(_if_conditional327=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1128))->mClass, "04heap.c", 1128))->mName,"void")&&((struct sType*)come_null_check(type, "04heap.c", 1128))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional327) {
            if(_if_conditional328=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1109))->come_fun, "04heap.c", 1109))->mResultType, "04heap.c", 1109))->mException,            __freed_obj__ = 0, 
            _if_conditional328) {
                __result119__ = __result_obj__ = ((char*)(right_value244=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s, come_pop_stackframe())",((char*)(right_value241=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1104))->sname))),((char*)(right_value242=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1104))->sline))),((char*)(right_value243=charp_to_string(c_value))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value241;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
                if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value242;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value243);
                if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value243;
                __freed_obj__ = 0;
                return __result119__;
                __freed_obj__ = 0;
            }
            else {
                __result120__ = __result_obj__ = ((char*)(right_value248=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value245=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1107))->sname))),((char*)(right_value246=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1107))->sline))),((char*)(right_value247=charp_to_string(c_value))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value245;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value246;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value247;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional329=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1127))->come_fun, "04heap.c", 1127))->mResultType, "04heap.c", 1127))->mException,            __freed_obj__ = 0, 
            _if_conditional329) {
                __freed_obj__ = 0;
                ++n_294;
                __freed_obj__ = 0;
                var_name_295=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("__exception_result_var_a%d",n_294))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value249;
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1116),((struct optional$2charphbool*)(right_value250=make_define_var(type,var_name_295,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value250;
                __freed_obj__ = 0;
                __result121__ = __result_obj__ = ((char*)(right_value256=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value251=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1117))->sname))),((char*)(right_value252=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1117))->sline))),((char*)(right_value253=string_to_string(var_name_295))),((char*)(right_value254=charp_to_string(c_value))),((char*)(right_value255=string_to_string(var_name_295))))));
                if(var_name_295 && !__freed_obj__) { var_name_295 = come_decrement_ref_count(var_name_295, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value251);
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value251;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value252);
                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value252;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value253);
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value253;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value254);
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value254;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value255);
                if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value255;
                __freed_obj__ = 0;
                return __result121__;
                __freed_obj__ = 0;
                if(var_name_295 && !__freed_obj__) { var_name_295 = come_decrement_ref_count(var_name_295, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                __freed_obj__ = 0;
                ++n_296;
                __freed_obj__ = 0;
                var_name_297=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("__exception_result_var_b%d",n_296))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value257;
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1124),((struct optional$2charphbool*)(right_value258=make_define_var(type,var_name_297,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value258;
                __freed_obj__ = 0;
                __result122__ = __result_obj__ = ((char*)(right_value264=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value259=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1125))->sname))),((char*)(right_value260=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1125))->sline))),((char*)(right_value261=string_to_string(var_name_297))),((char*)(right_value262=charp_to_string(c_value))),((char*)(right_value263=string_to_string(var_name_297))))));
                if(var_name_297 && !__freed_obj__) { var_name_297 = come_decrement_ref_count(var_name_297, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value259;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value260);
                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value260;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value261);
                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value261;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value262);
                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value262;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value263);
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value263;
                __freed_obj__ = 0;
                return __result122__;
                __freed_obj__ = 0;
                if(var_name_297 && !__freed_obj__) { var_name_297 = come_decrement_ref_count(var_name_297, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional330=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1133))->come_fun, "04heap.c", 1133))->mResultType, "04heap.c", 1133))->mException,        __freed_obj__ = 0, 
        _if_conditional330) {
            add_come_code(info,"come_clear_stackframe();\n");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_298=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s)",((char*)(right_value265=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1133))->sname))),((char*)(right_value266=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1133))->sline))),((char*)(right_value267=charp_to_string(c_value)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value265;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value268;
        __freed_obj__ = 0;
        add_come_last_code2(info,"come_pop_stackframe();\n");
        __freed_obj__ = 0;
        __result123__ = __result_obj__ = result_298;
        if(result_298 && !__freed_obj__) { result_298 = come_decrement_ref_count(result_298, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
        if(result_298 && !__freed_obj__) { result_298 = come_decrement_ref_count(result_298, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result124__ = __result_obj__ = ((char*)(right_value269=__builtin_string(c_value)));
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

