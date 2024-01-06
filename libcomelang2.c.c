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
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
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
extern _Bool gComeMalloc;
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
char* gComeStackFrameSName[10];
int gComeStackFrameSLine[10];
int gNumComeStackFrame=0;
struct buffer* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
struct sMemHeader
{
    void* mem;
    char* caller_sname[10];
    int caller_sline[10];
};
struct sMemHeader* gMemHeaderTable;
unsigned int gSizeMemHeaders=0;
unsigned int gNumMemHeaders=0;
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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

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

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

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

void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

static void come_mem_header_rehash();
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
static inline _Bool die(char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("./comelang2.h", 107),perror(msg),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 108),stackframe(),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 109),exit(4),come_pop_stackframe());
    __freed_obj__ = 0;
    __result7__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1994))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->memory, "./comelang2.h", 1997))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2004))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->memory, "./comelang2.h", 2007))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2014))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->memory, "./comelang2.h", 2017))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2024))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->memory, "./comelang2.h", 2027))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2034))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->memory, "./comelang2.h", 2037))->buf;
    __freed_obj__ = 0;
    __result12__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void come_push_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_5, 0, sizeof(int));
    if(_if_conditional5=gNumComeStackFrame==10,    __freed_obj__ = 0, 
    _if_conditional5) {
        __freed_obj__ = 0;
        for(
        i_5=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_5<10-1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_5++ ,        __freed_obj__ = 0, 
        0        ){
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            __freed_obj__ = 0;
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        gComeStackFrameSName[i_5]=sname;
        __freed_obj__ = 0;
        gComeStackFrameSLine[i_5]=sline;
        __freed_obj__ = 0;
    }
    else {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        __freed_obj__ = 0;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        __freed_obj__ = 0;
        gNumComeStackFrame++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void come_pop_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional6=gNumComeStackFrame>0,    __freed_obj__ = 0, 
    _if_conditional6) {
        gNumComeStackFrame--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void come_save_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
void* right_value10;
char* __exception_result_var_b1;
struct buffer* __exception_result_var_b2;
int i_6;
_Bool _for_condtionalA2;
void* right_value11;
char* __exception_result_var_b3;
struct buffer* __exception_result_var_b4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
memset(&right_value11, 0, sizeof(void*));
    if(_if_conditional7=gComeStackFrameBuffer,    __freed_obj__ = 0, 
    _if_conditional7) {
        (come_push_stackframe("libcomelang2.c", 44),buffer_reset(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 44))),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 45),__exception_result_var_b2=buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 45)),(come_push_stackframe("libcomelang2.c", 45),__exception_result_var_b1=((char*)(right_value10=xsprintf("%s %d\n",sname,sline))), come_pop_stackframe(), __exception_result_var_b1)), come_pop_stackframe(), __exception_result_var_b2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        for(
        i_6=gNumComeStackFrame-2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_6>=0 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_6-- ,        __freed_obj__ = 0, 
        0        ){
            (come_push_stackframe("libcomelang2.c", 47),__exception_result_var_b4=buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 47)),(come_push_stackframe("libcomelang2.c", 47),__exception_result_var_b3=((char*)(right_value11=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))), come_pop_stackframe(), __exception_result_var_b3)), come_pop_stackframe(), __exception_result_var_b4);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void exception_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __exception_result_var_b5;
int __exception_result_var_b6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    (come_push_stackframe("libcomelang2.c", 54),__exception_result_var_b6=printf("%s",(come_push_stackframe("libcomelang2.c", 54),__exception_result_var_b5=((char*)(right_value12=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 54))))), come_pop_stackframe(), __exception_result_var_b5)), come_pop_stackframe(), __exception_result_var_b6);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
}

void stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_7;
_Bool _for_condtionalA3;
int __exception_result_var_b7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    i_7>=0 ,    __freed_obj__ = 0, 
    _for_condtionalA3;    i_7-- ,    __freed_obj__ = 0, 
    0    ){
        (come_push_stackframe("libcomelang2.c", 60),__exception_result_var_b7=printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]), come_pop_stackframe(), __exception_result_var_b7);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* come_get_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* __exception_result_var_b8;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result13__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 66),__exception_result_var_b8=((char*)(right_value13=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 66))))), come_pop_stackframe(), __exception_result_var_b8);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}

void* come_null_check(void* mem, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
int __exception_result_var_b9;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional8=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        (come_push_stackframe("libcomelang2.c", 72),__exception_result_var_b9=printf("%s %d: null check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b9);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 73),stackframe(),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 74),exit(2),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool __result15__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional9=!self,    __freed_obj__ = 0, 
    _if_conditional9) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional10=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 84))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional10) {
            __result15__ = self;
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 87),stackframe(),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 88),exit(1),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result16__ = self;
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}

_Bool bool_value(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = self;
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

int int_catch(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
_Bool _if_conditional12;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional11=self<0,    __freed_obj__ = 0, 
    _if_conditional11) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional12=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 104))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional12) {
            __result18__ = self;
            __freed_obj__ = 0;
            return __result18__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result19__ = self;
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}

int int_expect(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
_Bool _if_conditional14;
int __result20__;
int __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional13=self<0,    __freed_obj__ = 0, 
    _if_conditional13) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional14=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 116))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional14) {
            __result20__ = self;
            __freed_obj__ = 0;
            return __result20__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 119),stackframe(),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 120),exit(1),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result21__ = self;
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
}

int int_value(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = self;
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

int int_except(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
_Bool _if_conditional16;
int __result23__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional15=self<0,    __freed_obj__ = 0, 
    _if_conditional15) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional16=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 135))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional16) {
            __result23__ = self;
            __freed_obj__ = 0;
            return __result23__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result24__ = self;
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional17=!self,    __freed_obj__ = 0, 
    _if_conditional17) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional18=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 147))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional18) {
            __result25__ = self;
            __freed_obj__ = 0;
            return __result25__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result26__ = self;
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional19=!self,    __freed_obj__ = 0, 
    _if_conditional19) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional20=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 160))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional20) {
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

void xassert(char* msg, _Bool test){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b10;
_Bool _if_conditional21;
int __exception_result_var_b11;
int __exception_result_var_b12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("libcomelang2.c", 170),__exception_result_var_b10=printf("%s...",msg), come_pop_stackframe(), __exception_result_var_b10);
    __freed_obj__ = 0;
    if(_if_conditional21=!test,    __freed_obj__ = 0, 
    _if_conditional21) {
        (come_push_stackframe("libcomelang2.c", 172),__exception_result_var_b11=puts("false"), come_pop_stackframe(), __exception_result_var_b11);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 173),exit(2),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 175),__exception_result_var_b12=puts("ok"), come_pop_stackframe(), __exception_result_var_b12);
    __freed_obj__ = 0;
}

void come_heap_init(int come_malloc, int come_debug){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value14;
void* right_value15;
struct buffer* __exception_result_var_b13;
_Bool _if_conditional22;
void* __exception_result_var_b14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 202),__exception_result_var_b13=((struct buffer*)(right_value15=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 202))))))), come_pop_stackframe(), __exception_result_var_b13));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value15;
    __freed_obj__ = 0;
    gComeMallocLib=come_malloc;
    __freed_obj__ = 0;
    gComeDebugLib=come_debug;
    __freed_obj__ = 0;
    if(_if_conditional22=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional22) {
        gSizeMemHeaders=1024;
        __freed_obj__ = 0;
        gMemHeaderTable=(come_push_stackframe("libcomelang2.c", 210),__exception_result_var_b14=calloc(1,sizeof(struct sMemHeader)*gSizeMemHeaders), come_pop_stackframe(), __exception_result_var_b14);
        __freed_obj__ = 0;
        gNumMemHeaders=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void come_heap_final(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
void* right_value16;
struct _IO_FILE* __exception_result_var_b15;
struct _IO_FILE* f_8;
_Bool _and_conditional1;
_Bool __exception_result_var_b16;
struct sMemHeader* it_9;
_Bool _while_condtional1;
_Bool _if_conditional24;
int i_10;
_Bool _for_condtionalA4;
_Bool _if_conditional25;
int __exception_result_var_b17;
_Bool _if_conditional26;
int __exception_result_var_b18;
int __exception_result_var_b19;
int __exception_result_var_b20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&f_8, 0, sizeof(struct _IO_FILE*));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&i_10, 0, sizeof(int));
    if(gComeStackFrameBuffer && !__freed_obj__) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional23=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional23) {
        if(_and_conditional1=f_8=(come_push_stackframe("libcomelang2.c", 220),__exception_result_var_b15=fopen(((char*)(right_value16=xsprintf("memleak.log"))),"a"), come_pop_stackframe(), __exception_result_var_b15),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16),
        (right_value16 && right_value16 != __result_obj__ && !__freed_obj__) ? right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value16, 
        __freed_obj__ = 0, 
        _and_conditional1 == 0) {
            (come_push_stackframe("libcomelang2.c", 220),__exception_result_var_b16=die("fopen"), come_pop_stackframe(), __exception_result_var_b16);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_9=gMemHeaderTable;
        __freed_obj__ = 0;
        while(_while_condtional1=it_9<gMemHeaderTable+gSizeMemHeaders,        __freed_obj__ = 0, 
        _while_condtional1) {
            if(_if_conditional24=((struct sMemHeader*)come_null_check(it_9, "libcomelang2.c", 224))->mem,            __freed_obj__ = 0, 
            _if_conditional24) {
                for(
                i_10=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA4=                i_10<10 ,                __freed_obj__ = 0, 
                _for_condtionalA4;                i_10++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional25=((struct sMemHeader*)come_null_check(it_9, "libcomelang2.c", 226))->caller_sname[i_10],                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        (come_push_stackframe("libcomelang2.c", 227),__exception_result_var_b17=fprintf(f_8,"%s %d",((struct sMemHeader*)come_null_check(it_9, "libcomelang2.c", 227))->caller_sname[i_10],((struct sMemHeader*)come_null_check(it_9, "libcomelang2.c", 227))->caller_sline[i_10]), come_pop_stackframe(), __exception_result_var_b17);
                        __freed_obj__ = 0;
                        if(_if_conditional26=i_10==10-1,                        __freed_obj__ = 0, 
                        _if_conditional26) {
                        }
                        else {
                            (come_push_stackframe("libcomelang2.c", 231),__exception_result_var_b18=fprintf(f_8,", "), come_pop_stackframe(), __exception_result_var_b18);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (come_push_stackframe("libcomelang2.c", 235),__exception_result_var_b19=fprintf(f_8,": detecting memory leak(%p)\n",(char*)((struct sMemHeader*)come_null_check(it_9, "libcomelang2.c", 235))->mem), come_pop_stackframe(), __exception_result_var_b19);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_9++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 241),__exception_result_var_b20=fclose(f_8), come_pop_stackframe(), __exception_result_var_b20);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void come_mem_header_rehash(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int new_size_11;
void* __exception_result_var_b21;
struct sMemHeader* new_table_12;
struct sMemHeader* it_13;
_Bool _while_condtional2;
_Bool _if_conditional27;
unsigned int key_14;
struct sMemHeader* it2_15;
_Bool _while_condtional3;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __exception_result_var_b22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&new_size_11, 0, sizeof(int));
memset(&new_table_12, 0, sizeof(struct sMemHeader*));
memset(&it_13, 0, sizeof(struct sMemHeader*));
memset(&key_14, 0, sizeof(unsigned int));
memset(&it2_15, 0, sizeof(struct sMemHeader*));
    new_size_11=gSizeMemHeaders*3;
    __freed_obj__ = 0;
    new_table_12=(come_push_stackframe("libcomelang2.c", 248),__exception_result_var_b21=calloc(1,sizeof(struct sMemHeader)*new_size_11), come_pop_stackframe(), __exception_result_var_b21);
    __freed_obj__ = 0;
    it_13=gMemHeaderTable;
    __freed_obj__ = 0;
    while(_while_condtional2=it_13<gMemHeaderTable+gSizeMemHeaders,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional27=((struct sMemHeader*)come_null_check(it_13, "libcomelang2.c", 252))->mem,        __freed_obj__ = 0, 
        _if_conditional27) {
            key_14=(long)((struct sMemHeader*)come_null_check(it_13, "libcomelang2.c", 253))->mem%new_size_11;
            __freed_obj__ = 0;
            it2_15=new_table_12+key_14;
            __freed_obj__ = 0;
            while(_while_condtional3=((struct sMemHeader*)come_null_check(it2_15, "libcomelang2.c", 257))->mem,            __freed_obj__ = 0, 
            _while_condtional3) {
                it2_15++;
                __freed_obj__ = 0;
                if(_if_conditional28=it2_15==new_table_12+new_size_11,                __freed_obj__ = 0, 
                _if_conditional28) {
                    it2_15=new_table_12;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional29=it2_15==new_table_12+key_14,                    __freed_obj__ = 0, 
                    _if_conditional29) {
                        (come_push_stackframe("libcomelang2.c", 264),__exception_result_var_b22=puts("mem header unexpected error"), come_pop_stackframe(), __exception_result_var_b22);
                        __freed_obj__ = 0;
                        (come_push_stackframe("libcomelang2.c", 265),stackframe(),come_pop_stackframe());
                        __freed_obj__ = 0;
                        (come_push_stackframe("libcomelang2.c", 266),exit(2),come_pop_stackframe());
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            *it2_15=*it_13;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_13++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 276),free(gMemHeaderTable),come_pop_stackframe());
    __freed_obj__ = 0;
    gMemHeaderTable=new_table_12;
    __freed_obj__ = 0;
    gSizeMemHeaders=new_size_11;
    __freed_obj__ = 0;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* __exception_result_var_b23;
void* __result29__;
void* __exception_result_var_b24;
void* result_16;
_Bool _if_conditional31;
unsigned int key_17;
struct sMemHeader* it_18;
_Bool _while_condtional4;
_Bool _if_conditional32;
_Bool _if_conditional33;
int __exception_result_var_b25;
void* __exception_result_var_b26;
void* __exception_result_var_b27;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_16, 0, sizeof(void*));
memset(&key_17, 0, sizeof(unsigned int));
memset(&it_18, 0, sizeof(struct sMemHeader*));
    if(_if_conditional30=!gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional30) {
        __result29__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 285),__exception_result_var_b23=calloc(1,size), come_pop_stackframe(), __exception_result_var_b23);
        __freed_obj__ = 0;
        return __result29__;
        __freed_obj__ = 0;
    }
    else {
        result_16=(come_push_stackframe("libcomelang2.c", 288),__exception_result_var_b24=calloc(1,size), come_pop_stackframe(), __exception_result_var_b24);
        __freed_obj__ = 0;
        if(_if_conditional31=gNumMemHeaders>=gSizeMemHeaders/3,        __freed_obj__ = 0, 
        _if_conditional31) {
            (come_push_stackframe("libcomelang2.c", 291),come_mem_header_rehash(),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        key_17=(long)result_16%gSizeMemHeaders;
        __freed_obj__ = 0;
        it_18=gMemHeaderTable+key_17;
        __freed_obj__ = 0;
        while(_while_condtional4=((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 298))->mem,        __freed_obj__ = 0, 
        _while_condtional4) {
            it_18++;
            __freed_obj__ = 0;
            if(_if_conditional32=it_18==gMemHeaderTable+gSizeMemHeaders,            __freed_obj__ = 0, 
            _if_conditional32) {
                it_18=gMemHeaderTable;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional33=it_18==gMemHeaderTable+key_17,                __freed_obj__ = 0, 
                _if_conditional33) {
                    (come_push_stackframe("libcomelang2.c", 305),__exception_result_var_b25=puts("mem header unexpected error"), come_pop_stackframe(), __exception_result_var_b25);
                    __freed_obj__ = 0;
                    (come_push_stackframe("libcomelang2.c", 306),stackframe(),come_pop_stackframe());
                    __freed_obj__ = 0;
                    (come_push_stackframe("libcomelang2.c", 307),exit(2),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 311))->mem=result_16;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 313),__exception_result_var_b26=memcpy(((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 313))->caller_sname,gComeStackFrameSName,sizeof(char*)*10), come_pop_stackframe(), __exception_result_var_b26);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 314),__exception_result_var_b27=memcpy(((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 314))->caller_sline,gComeStackFrameSLine,sizeof(int)*10), come_pop_stackframe(), __exception_result_var_b27);
        __freed_obj__ = 0;
        gNumMemHeaders++;
        __freed_obj__ = 0;
        __result30__ = __result_obj__ = result_16;
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void come_free_mem_of_heap_pool(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
_Bool _if_conditional35;
unsigned int key_19;
struct sMemHeader* it_20;
_Bool _while_condtional5;
_Bool _if_conditional36;
_Bool _if_conditional37;
void* __exception_result_var_b28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&key_19, 0, sizeof(unsigned int));
memset(&it_20, 0, sizeof(struct sMemHeader*));
    if(_if_conditional34=mem,    __freed_obj__ = 0, 
    _if_conditional34) {
        if(_if_conditional35=!gComeMallocLib,        __freed_obj__ = 0, 
        _if_conditional35) {
            (come_push_stackframe("libcomelang2.c", 326),free(mem),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            key_19=(long)mem%gSizeMemHeaders;
            __freed_obj__ = 0;
            it_20=gMemHeaderTable+key_19;
            __freed_obj__ = 0;
            while(_while_condtional5=((struct sMemHeader*)come_null_check(it_20, "libcomelang2.c", 333))->mem!=mem,            __freed_obj__ = 0, 
            _while_condtional5) {
                it_20++;
                __freed_obj__ = 0;
                if(_if_conditional36=it_20==gMemHeaderTable+gSizeMemHeaders,                __freed_obj__ = 0, 
                _if_conditional36) {
                    it_20=gMemHeaderTable;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional37=it_20==gMemHeaderTable+key_19,                    __freed_obj__ = 0, 
                    _if_conditional37) {
                        __freed_obj__ = 0;
                        return;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 344),__exception_result_var_b28=memset(it_20,0,sizeof(struct sMemHeader)), come_pop_stackframe(), __exception_result_var_b28);
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 346),free(mem),come_pop_stackframe());
            __freed_obj__ = 0;
            gNumMemHeaders--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_21;
long int* ref_count_22;
long int* size2_23;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_21, 0, sizeof(char*));
memset(&ref_count_22, 0, sizeof(long int*));
memset(&size2_23, 0, sizeof(long int*));
    mem_21=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    __freed_obj__ = 0;
    ref_count_22=(long int*)mem_21;
    __freed_obj__ = 0;
    *ref_count_22=0;
    __freed_obj__ = 0;
    size2_23=(long int*)(mem_21+sizeof(long int));
    __freed_obj__ = 0;
    *size2_23=size*count+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = mem_21+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

void come_free_object(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
long int* ref_count_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_24, 0, sizeof(long int*));
    if(_if_conditional38=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional38) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_24=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 376),come_free_mem_of_heap_pool((char*)ref_count_24),come_pop_stackframe());
    __freed_obj__ = 0;
}

void* come_memdup(void* block, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
void* __result32__;
char* mem_25;
long int* size_p_26;
long int size_27;
void* __exception_result_var_b29;
void* result_28;
void* __exception_result_var_b30;
void* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_25, 0, sizeof(char*));
memset(&size_p_26, 0, sizeof(long int*));
memset(&size_27, 0, sizeof(long int));
memset(&result_28, 0, sizeof(void*));
    if(_if_conditional39=!block,    __freed_obj__ = 0, 
    _if_conditional39) {
        __result32__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_25=(char*)block-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    size_p_26=(long int*)(mem_25+sizeof(long int));
    __freed_obj__ = 0;
    size_27=*size_p_26-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    result_28=(come_push_stackframe("libcomelang2.c", 391),__exception_result_var_b29=come_calloc(1,size_27,sname,sline), come_pop_stackframe(), __exception_result_var_b29);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 393),__exception_result_var_b30=memcpy(result_28,block,size_27), come_pop_stackframe(), __exception_result_var_b30);
    __freed_obj__ = 0;
    __result33__ = __result_obj__ = result_28;
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

void* come_increment_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* __result34__;
long int* ref_count_29;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_29, 0, sizeof(long int*));
    if(_if_conditional40=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional40) {
        __result34__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result34__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_29=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (*ref_count_29)++;
    __freed_obj__ = 0;
    __result35__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

void* come_print_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* __result36__;
long int* ref_count_30;
int __exception_result_var_b31;
void* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_30, 0, sizeof(long int*));
    if(_if_conditional41=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional41) {
        __result36__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result36__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_30=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 419),__exception_result_var_b31=printf("ref_count %ld\n",*ref_count_30), come_pop_stackframe(), __exception_result_var_b31);
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
void* __result38__;
long int* ref_count_31;
_Bool _if_conditional43;
long int count_32;
_Bool _if_conditional44;
_Bool _if_conditional45;
void (*finalizer_33)(void*);
void* __result39__;
void* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_31, 0, sizeof(long int*));
memset(&count_32, 0, sizeof(long int));
memset(&finalizer_33, 0, sizeof(void (*)(void*)));
    if(_if_conditional42=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional42) {
        __result38__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result38__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_31=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    if(_if_conditional43=!no_decrement,    __freed_obj__ = 0, 
    _if_conditional43) {
        (*ref_count_31)--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    count_32=*ref_count_31;
    __freed_obj__ = 0;
    if(_if_conditional44=!no_free&&(count_32<=0||force_delete_),    __freed_obj__ = 0, 
    _if_conditional44) {
        if(_if_conditional45=protocol_obj&&protocol_fun,        __freed_obj__ = 0, 
        _if_conditional45) {
            finalizer_33=protocol_fun;
            __freed_obj__ = 0;
            finalizer_33(protocol_obj);
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 442),come_free_object(protocol_obj),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 444),come_free_object(mem),come_pop_stackframe());
        __freed_obj__ = 0;
        __result39__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result39__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result40__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
void (*finalizer_34)(void*);
void (*finalizer_35)(void*);
long int* ref_count_36;
_Bool _if_conditional50;
long int count_37;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void (*finalizer_38)(void*);
_Bool _if_conditional54;
void (*finalizer_39)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_34, 0, sizeof(void (*)(void*)));
memset(&finalizer_35, 0, sizeof(void (*)(void*)));
memset(&ref_count_36, 0, sizeof(long int*));
memset(&count_37, 0, sizeof(long int));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&finalizer_39, 0, sizeof(void (*)(void*)));
    if(_if_conditional46=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional46) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional47=call_finalizer_only,    __freed_obj__ = 0, 
    _if_conditional47) {
        if(_if_conditional48=fun,        __freed_obj__ = 0, 
        _if_conditional48) {
            if(_if_conditional49=protocol_obj&&protocol_fun,            __freed_obj__ = 0, 
            _if_conditional49) {
                finalizer_34=protocol_fun;
                __freed_obj__ = 0;
                finalizer_34(protocol_obj);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            finalizer_35=fun;
            __freed_obj__ = 0;
            finalizer_35(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        ref_count_36=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        __freed_obj__ = 0;
        if(_if_conditional50=!no_decrement,        __freed_obj__ = 0, 
        _if_conditional50) {
            (*ref_count_36)--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        count_37=*ref_count_36;
        __freed_obj__ = 0;
        if(_if_conditional51=!no_free&&(count_37<=0||force_delete_),        __freed_obj__ = 0, 
        _if_conditional51) {
            if(_if_conditional52=mem,            __freed_obj__ = 0, 
            _if_conditional52) {
                if(_if_conditional53=protocol_obj&&protocol_fun,                __freed_obj__ = 0, 
                _if_conditional53) {
                    finalizer_38=protocol_fun;
                    __freed_obj__ = 0;
                    finalizer_38(protocol_obj);
                    __freed_obj__ = 0;
                    (come_push_stackframe("libcomelang2.c", 480),come_free_object(protocol_obj),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional54=fun,                __freed_obj__ = 0, 
                _if_conditional54) {
                    finalizer_39=fun;
                    __freed_obj__ = 0;
                    finalizer_39(mem);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (come_push_stackframe("libcomelang2.c", 486),come_free_object(mem),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* __builtin_string(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
char* __result41__;
long int __exception_result_var_b32;
int len_40;
void* right_value17;
char* result_41;
char* __exception_result_var_b33;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_40, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&result_41, 0, sizeof(char*));
    if(_if_conditional55=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional55) {
        __result41__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_40=(come_push_stackframe("libcomelang2.c", 497),__exception_result_var_b32=strlen(str), come_pop_stackframe(), __exception_result_var_b32)+1;
    __freed_obj__ = 0;
    result_41=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(len_40)), "libcomelang2.c", 499))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 501),__exception_result_var_b33=strncpy(result_41,str,len_40), come_pop_stackframe(), __exception_result_var_b33);
    __freed_obj__ = 0;
    __result42__ = __result_obj__ = result_41;
    if(result_41 && !__freed_obj__) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
    if(result_41 && !__freed_obj__) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_42;
int i_43;
_Bool _for_condtionalA5;
_Bool _if_conditional56;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_42, 0, sizeof(_Bool));
memset(&i_43, 0, sizeof(int));
    found_42=(_Bool)0;
    __freed_obj__ = 0;
    for(
    i_43=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    i_43<len ,    __freed_obj__ = 0, 
    _for_condtionalA5;    i_43++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional56=array[i_43]==element,        __freed_obj__ = 0, 
        _if_conditional56) {
            found_42=(_Bool)1;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result43__ = found_42;
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}

struct buffer* buffer_initialize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
char* __dec_obj6;
struct buffer* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 523))->size=128;
    __freed_obj__ = 0;
    __dec_obj6=((struct buffer*)come_null_check(self, "libcomelang2.c", 524))->buf;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 524))->buf=(char*)come_increment_ref_count(((char*)(right_value18=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 524))->size)), "libcomelang2.c", 524))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 525))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 526))->len=0;
    __freed_obj__ = 0;
    __result44__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional57=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 533))->buf,    __freed_obj__ = 0, 
    _if_conditional57) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 533))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 533))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 533))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void buffer_force_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional58=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 537))->buf,    __freed_obj__ = 0, 
    _if_conditional58) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 537))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 537))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 537))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct buffer* buffer_clone(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct buffer* __result45__;
void* right_value19;
struct buffer* result_44;
void* right_value20;
char* __dec_obj7;
void* __exception_result_var_b34;
struct buffer* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct buffer*));
memset(&right_value20, 0, sizeof(void*));
    if(_if_conditional59=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional59) {
        __result45__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result45__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 546))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_44, "libcomelang2.c", 548))->size=((struct buffer*)come_null_check(self, "libcomelang2.c", 548))->size;
    __freed_obj__ = 0;
    __dec_obj7=((struct buffer*)come_null_check(result_44, "libcomelang2.c", 549))->buf;
    ((struct buffer*)come_null_check(result_44, "libcomelang2.c", 549))->buf=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 549))->size)), "libcomelang2.c", 549))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value20;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_44, "libcomelang2.c", 550))->len=((struct buffer*)come_null_check(self, "libcomelang2.c", 550))->len;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 551),__exception_result_var_b34=memcpy(((struct buffer*)come_null_check(result_44, "libcomelang2.c", 551))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 551))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 551))->len), come_pop_stackframe(), __exception_result_var_b34);
    __freed_obj__ = 0;
    __result46__ = __result_obj__ = result_44;
    if(result_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(result_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
int __result47__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional60=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional60) {
        __result47__ = 0;
        __freed_obj__ = 0;
        return __result47__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result48__ = ((struct buffer*)come_null_check(self, "libcomelang2.c", 561))->len;
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

void buffer_reset(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional61=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional61) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 569))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 570))->len=0;
    __freed_obj__ = 0;
}

void buffer_trim(struct buffer* self, int len){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional62=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional62) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 578))->len-=len;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 579))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 579))->len]=0;
    __freed_obj__ = 0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct buffer* __result49__;
_Bool _if_conditional64;
void* right_value21;
char* old_buf_45;
void* __exception_result_var_b35;
int old_len_46;
int new_size_47;
void* right_value22;
char* __dec_obj8;
void* __exception_result_var_b36;
void* __exception_result_var_b37;
struct buffer* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
    if(_if_conditional63=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional63) {
        __result49__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional64=((struct buffer*)come_null_check(self, "libcomelang2.c", 587))->len+size+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 587))->size,    __freed_obj__ = 0, 
    _if_conditional64) {
        old_buf_45=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 588))->size)), "libcomelang2.c", 588))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value21;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 589),__exception_result_var_b35=memcpy(old_buf_45,((struct buffer*)come_null_check(self, "libcomelang2.c", 589))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 589))->size), come_pop_stackframe(), __exception_result_var_b35);
        __freed_obj__ = 0;
        old_len_46=((struct buffer*)come_null_check(self, "libcomelang2.c", 590))->len;
        __freed_obj__ = 0;
        new_size_47=(((struct buffer*)come_null_check(self, "libcomelang2.c", 591))->size+size+1)*2;
        __freed_obj__ = 0;
        __dec_obj8=((struct buffer*)come_null_check(self, "libcomelang2.c", 592))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 592))->buf=(char*)come_increment_ref_count(((char*)(right_value22=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2.c", 592))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value22;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 593),__exception_result_var_b36=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 593))->buf,old_buf_45,old_len_46), come_pop_stackframe(), __exception_result_var_b36);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 594))->buf[old_len_46]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 595))->size=new_size_47;
        __freed_obj__ = 0;
        if(old_buf_45 && !__freed_obj__) { old_buf_45 = come_decrement_ref_count(old_buf_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 598),__exception_result_var_b37=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 598))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 598))->len,mem,size), come_pop_stackframe(), __exception_result_var_b37);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 599))->len+=size;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 600))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 600))->len]=0;
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct buffer* __result51__;
_Bool _if_conditional66;
void* right_value23;
char* old_buf_48;
int old_len_49;
int new_size_50;
void* right_value24;
char* __dec_obj9;
void* __exception_result_var_b38;
struct buffer* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&old_buf_48, 0, sizeof(char*));
memset(&old_len_49, 0, sizeof(int));
memset(&new_size_50, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
    if(_if_conditional65=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional65) {
        __result51__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional66=((struct buffer*)come_null_check(self, "libcomelang2.c", 610))->len+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 610))->size,    __freed_obj__ = 0, 
    _if_conditional66) {
        old_buf_48=(char*)come_increment_ref_count(((char*)(right_value23=charp_clone(((struct buffer*)come_null_check(self, "libcomelang2.c", 611))->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23;
        __freed_obj__ = 0;
        old_len_49=((struct buffer*)come_null_check(self, "libcomelang2.c", 612))->len;
        __freed_obj__ = 0;
        new_size_50=(((struct buffer*)come_null_check(self, "libcomelang2.c", 614))->size+10+1)*2;
        __freed_obj__ = 0;
        __dec_obj9=((struct buffer*)come_null_check(self, "libcomelang2.c", 615))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 615))->buf=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(new_size_50)), "libcomelang2.c", 615))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value24;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 616),__exception_result_var_b38=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 616))->buf,old_buf_48,old_len_49), come_pop_stackframe(), __exception_result_var_b38);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 617))->buf[old_len_49]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 618))->size=new_size_50;
        __freed_obj__ = 0;
        if(old_buf_48 && !__freed_obj__) { old_buf_48 = come_decrement_ref_count(old_buf_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 621))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 621))->len]=c;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 622))->len++;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 624))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 624))->len]=0;
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
struct buffer* __result53__;
long int __exception_result_var_b39;
int size_51;
_Bool _if_conditional68;
void* right_value25;
char* old_buf_52;
void* __exception_result_var_b40;
int old_len_53;
int new_size_54;
void* right_value26;
char* __dec_obj10;
void* __exception_result_var_b41;
void* __exception_result_var_b42;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_51, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
memset(&old_buf_52, 0, sizeof(char*));
memset(&old_len_53, 0, sizeof(int));
memset(&new_size_54, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
    if(_if_conditional67=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional67) {
        __result53__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_51=(come_push_stackframe("libcomelang2.c", 635),__exception_result_var_b39=strlen(mem), come_pop_stackframe(), __exception_result_var_b39);
    __freed_obj__ = 0;
    if(_if_conditional68=((struct buffer*)come_null_check(self, "libcomelang2.c", 636))->len+size_51+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 636))->size,    __freed_obj__ = 0, 
    _if_conditional68) {
        old_buf_52=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 637))->size)), "libcomelang2.c", 637))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 638),__exception_result_var_b40=memcpy(old_buf_52,((struct buffer*)come_null_check(self, "libcomelang2.c", 638))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 638))->size), come_pop_stackframe(), __exception_result_var_b40);
        __freed_obj__ = 0;
        old_len_53=((struct buffer*)come_null_check(self, "libcomelang2.c", 639))->len;
        __freed_obj__ = 0;
        new_size_54=(((struct buffer*)come_null_check(self, "libcomelang2.c", 640))->size+size_51+1)*2;
        __freed_obj__ = 0;
        __dec_obj10=((struct buffer*)come_null_check(self, "libcomelang2.c", 641))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 641))->buf=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(new_size_54)), "libcomelang2.c", 641))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 642),__exception_result_var_b41=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 642))->buf,old_buf_52,old_len_53), come_pop_stackframe(), __exception_result_var_b41);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 643))->buf[old_len_53]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 644))->size=new_size_54;
        __freed_obj__ = 0;
        if(old_buf_52 && !__freed_obj__) { old_buf_52 = come_decrement_ref_count(old_buf_52, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 647),__exception_result_var_b42=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 647))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 647))->len,mem,size_51), come_pop_stackframe(), __exception_result_var_b42);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 648))->len+=size_51;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 649))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 649))->len]=0;
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
struct buffer* __result55__;
long int __exception_result_var_b43;
int size_55;
_Bool _if_conditional70;
void* right_value27;
char* old_buf_56;
void* __exception_result_var_b44;
int old_len_57;
int new_size_58;
void* right_value28;
char* __dec_obj11;
void* __exception_result_var_b45;
void* __exception_result_var_b46;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_55, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
memset(&old_buf_56, 0, sizeof(char*));
memset(&old_len_57, 0, sizeof(int));
memset(&new_size_58, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
    if(_if_conditional69=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional69) {
        __result55__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_55=(come_push_stackframe("libcomelang2.c", 659),__exception_result_var_b43=strlen(mem), come_pop_stackframe(), __exception_result_var_b43)+1;
    __freed_obj__ = 0;
    if(_if_conditional70=((struct buffer*)come_null_check(self, "libcomelang2.c", 660))->len+size_55+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 660))->size,    __freed_obj__ = 0, 
    _if_conditional70) {
        old_buf_56=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 661))->size)), "libcomelang2.c", 661))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 662),__exception_result_var_b44=memcpy(old_buf_56,((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->size), come_pop_stackframe(), __exception_result_var_b44);
        __freed_obj__ = 0;
        old_len_57=((struct buffer*)come_null_check(self, "libcomelang2.c", 663))->len;
        __freed_obj__ = 0;
        new_size_58=(((struct buffer*)come_null_check(self, "libcomelang2.c", 664))->size+size_55+1)*2;
        __freed_obj__ = 0;
        __dec_obj11=((struct buffer*)come_null_check(self, "libcomelang2.c", 665))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 665))->buf=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58)), "libcomelang2.c", 665))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value28;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 666),__exception_result_var_b45=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 666))->buf,old_buf_56,old_len_57), come_pop_stackframe(), __exception_result_var_b45);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 667))->buf[old_len_57]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 668))->size=new_size_58;
        __freed_obj__ = 0;
        if(old_buf_56 && !__freed_obj__) { old_buf_56 = come_decrement_ref_count(old_buf_56, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 671),__exception_result_var_b46=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->len,mem,size_55), come_pop_stackframe(), __exception_result_var_b46);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 672))->len+=size_55;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 673))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 673))->len]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 674))->len++;
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct buffer* __result57__;
int* mem_59;
int size_60;
_Bool _if_conditional72;
void* right_value29;
char* old_buf_61;
void* __exception_result_var_b47;
int old_len_62;
int new_size_63;
void* right_value30;
char* __dec_obj12;
void* __exception_result_var_b48;
void* __exception_result_var_b49;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_59, 0, sizeof(int*));
memset(&size_60, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
memset(&old_buf_61, 0, sizeof(char*));
memset(&old_len_62, 0, sizeof(int));
memset(&new_size_63, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
    if(_if_conditional71=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional71) {
        __result57__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_59=&value;
    __freed_obj__ = 0;
    size_60=sizeof(int);
    __freed_obj__ = 0;
    if(_if_conditional72=((struct buffer*)come_null_check(self, "libcomelang2.c", 687))->len+size_60+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 687))->size,    __freed_obj__ = 0, 
    _if_conditional72) {
        old_buf_61=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 688))->size)), "libcomelang2.c", 688))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value29;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 689),__exception_result_var_b47=memcpy(old_buf_61,((struct buffer*)come_null_check(self, "libcomelang2.c", 689))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 689))->size), come_pop_stackframe(), __exception_result_var_b47);
        __freed_obj__ = 0;
        old_len_62=((struct buffer*)come_null_check(self, "libcomelang2.c", 690))->len;
        __freed_obj__ = 0;
        new_size_63=(((struct buffer*)come_null_check(self, "libcomelang2.c", 691))->size+size_60+1)*2;
        __freed_obj__ = 0;
        __dec_obj12=((struct buffer*)come_null_check(self, "libcomelang2.c", 692))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 692))->buf=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(new_size_63)), "libcomelang2.c", 692))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value30;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 693),__exception_result_var_b48=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 693))->buf,old_buf_61,old_len_62), come_pop_stackframe(), __exception_result_var_b48);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 694))->buf[old_len_62]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 695))->size=new_size_63;
        __freed_obj__ = 0;
        if(old_buf_61 && !__freed_obj__) { old_buf_61 = come_decrement_ref_count(old_buf_61, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 698),__exception_result_var_b49=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 698))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 698))->len,mem_59,size_60), come_pop_stackframe(), __exception_result_var_b49);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 699))->len+=size_60;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 700))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 700))->len]=0;
    __freed_obj__ = 0;
    __result58__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_64;
int size_65;
_Bool _if_conditional73;
void* right_value31;
char* old_buf_66;
void* __exception_result_var_b50;
int old_len_67;
int new_size_68;
void* right_value32;
char* __dec_obj13;
void* __exception_result_var_b51;
void* __exception_result_var_b52;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_64, 0, sizeof(long*));
memset(&size_65, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
memset(&old_buf_66, 0, sizeof(char*));
memset(&old_len_67, 0, sizeof(int));
memset(&new_size_68, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
    mem_64=&value;
    __freed_obj__ = 0;
    size_65=sizeof(long);
    __freed_obj__ = 0;
    if(_if_conditional73=((struct buffer*)come_null_check(self, "libcomelang2.c", 710))->len+size_65+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 710))->size,    __freed_obj__ = 0, 
    _if_conditional73) {
        old_buf_66=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 711))->size)), "libcomelang2.c", 711))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 712),__exception_result_var_b50=memcpy(old_buf_66,((struct buffer*)come_null_check(self, "libcomelang2.c", 712))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 712))->size), come_pop_stackframe(), __exception_result_var_b50);
        __freed_obj__ = 0;
        old_len_67=((struct buffer*)come_null_check(self, "libcomelang2.c", 713))->len;
        __freed_obj__ = 0;
        new_size_68=(((struct buffer*)come_null_check(self, "libcomelang2.c", 714))->size+size_65+1)*2;
        __freed_obj__ = 0;
        __dec_obj13=((struct buffer*)come_null_check(self, "libcomelang2.c", 715))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 715))->buf=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(new_size_68)), "libcomelang2.c", 715))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value32;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 716),__exception_result_var_b51=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 716))->buf,old_buf_66,old_len_67), come_pop_stackframe(), __exception_result_var_b51);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 717))->buf[old_len_67]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 718))->size=new_size_68;
        __freed_obj__ = 0;
        if(old_buf_66 && !__freed_obj__) { old_buf_66 = come_decrement_ref_count(old_buf_66, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 721),__exception_result_var_b52=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 721))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 721))->len,mem_64,size_65), come_pop_stackframe(), __exception_result_var_b52);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 722))->len+=size_65;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 723))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 723))->len]=0;
    __freed_obj__ = 0;
    __result59__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
struct buffer* __result60__;
short short* mem_69;
int size_70;
_Bool _if_conditional75;
void* right_value33;
char* old_buf_71;
void* __exception_result_var_b53;
int old_len_72;
int new_size_73;
void* right_value34;
char* __dec_obj14;
void* __exception_result_var_b54;
void* __exception_result_var_b55;
struct buffer* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_69, 0, sizeof(short short*));
memset(&size_70, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
    if(_if_conditional74=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional74) {
        __result60__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result60__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_69=&value;
    __freed_obj__ = 0;
    size_70=sizeof(short short);
    __freed_obj__ = 0;
    if(_if_conditional75=((struct buffer*)come_null_check(self, "libcomelang2.c", 737))->len+size_70+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 737))->size,    __freed_obj__ = 0, 
    _if_conditional75) {
        old_buf_71=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 738))->size)), "libcomelang2.c", 738))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value33;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 739),__exception_result_var_b53=memcpy(old_buf_71,((struct buffer*)come_null_check(self, "libcomelang2.c", 739))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 739))->size), come_pop_stackframe(), __exception_result_var_b53);
        __freed_obj__ = 0;
        old_len_72=((struct buffer*)come_null_check(self, "libcomelang2.c", 740))->len;
        __freed_obj__ = 0;
        new_size_73=(((struct buffer*)come_null_check(self, "libcomelang2.c", 741))->size+size_70+1)*2;
        __freed_obj__ = 0;
        __dec_obj14=((struct buffer*)come_null_check(self, "libcomelang2.c", 742))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 742))->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libcomelang2.c", 742))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value34;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 743),__exception_result_var_b54=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 743))->buf,old_buf_71,old_len_72), come_pop_stackframe(), __exception_result_var_b54);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 744))->buf[old_len_72]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 745))->size=new_size_73;
        __freed_obj__ = 0;
        if(old_buf_71 && !__freed_obj__) { old_buf_71 = come_decrement_ref_count(old_buf_71, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 748),__exception_result_var_b55=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->len,mem_69,size_70), come_pop_stackframe(), __exception_result_var_b55);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 749))->len+=size_70;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 750))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 750))->len]=0;
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
}

struct buffer* buffer_alignment(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional76;
struct buffer* __result62__;
int len_74;
_Bool _if_conditional77;
int new_size_75;
void* right_value35;
char* __dec_obj15;
int i_76;
_Bool _for_condtionalA6;
struct buffer* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_74, 0, sizeof(int));
memset(&new_size_75, 0, sizeof(int));
memset(&right_value35, 0, sizeof(void*));
memset(&i_76, 0, sizeof(int));
    if(_if_conditional76=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional76) {
        __result62__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_74=((struct buffer*)come_null_check(self, "libcomelang2.c", 761))->len;
    __freed_obj__ = 0;
    len_74=(len_74+3)&~3;
    __freed_obj__ = 0;
    if(_if_conditional77=len_74>=((struct buffer*)come_null_check(self, "libcomelang2.c", 764))->size,    __freed_obj__ = 0, 
    _if_conditional77) {
        new_size_75=(((struct buffer*)come_null_check(self, "libcomelang2.c", 765))->size+1+1)*2;
        __freed_obj__ = 0;
        __dec_obj15=((struct buffer*)come_null_check(self, "libcomelang2.c", 766))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 766))->buf=(char*)come_increment_ref_count(((char*)(right_value35=(char*)come_calloc(1, sizeof(char)*(1*(new_size_75)), "libcomelang2.c", 766))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 767))->size=new_size_75;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    i_76=((struct buffer*)come_null_check(self, "libcomelang2.c", 770))->len ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    i_76<len_74 ,    __freed_obj__ = 0, 
    _for_condtionalA6;    i_76++ ,    __freed_obj__ = 0, 
    0    ){
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 771))->buf[i_76]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 774))->len=len_74;
    __freed_obj__ = 0;
    __result63__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
void* right_value36;
void* right_value37;
struct optional$2intbool* __result65__;
_Bool _if_conditional79;
void* right_value38;
void* right_value39;
struct optional$2intbool* __result66__;
_Bool _if_conditional80;
void* right_value40;
void* right_value41;
struct optional$2intbool* __result67__;
int __exception_result_var_b56;
void* right_value42;
void* right_value43;
struct optional$2intbool* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
    if(_if_conditional78=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional78) {
        __result65__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 782), ((struct optional$2intbool*)(right_value37=optional$2intbool_initialize(((struct optional$2intbool*)(right_value36=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 782))),0,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value36;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value37;
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional79=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            __result66__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 785), ((struct optional$2intbool*)(right_value39=optional$2intbool_initialize(((struct optional$2intbool*)(right_value38=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 785))),-1,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value39;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional80=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                __result67__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 788), ((struct optional$2intbool*)(right_value41=optional$2intbool_initialize(((struct optional$2intbool*)(right_value40=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 788))),1,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value41;
                __freed_obj__ = 0;
                return __result67__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result68__ = __result_obj__ = ((struct optional$2intbool*)(right_value43=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value42=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 791)))),(come_push_stackframe("libcomelang2.c", 791),__exception_result_var_b56=strcmp(((struct buffer*)come_null_check(left, "libcomelang2.c", 791))->buf,((struct buffer*)come_null_check(right, "libcomelang2.c", 791))->buf), come_pop_stackframe(), __exception_result_var_b56),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct buffer* string_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
void* right_value45;
struct buffer* __exception_result_var_b57;
struct buffer* result_77;
_Bool _if_conditional81;
struct buffer* __result69__;
struct buffer* __exception_result_var_b58;
struct buffer* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct buffer*));
    result_77=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 796),__exception_result_var_b57=((struct buffer*)(right_value45=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value44=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 796))), "libcomelang2.c", 796)))))), come_pop_stackframe(), __exception_result_var_b57));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value45;
    __freed_obj__ = 0;
    if(_if_conditional81=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional81) {
        __result69__ = __result_obj__ = result_77;
        if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 802),__exception_result_var_b58=buffer_append_str(((struct buffer*)come_null_check(result_77, "libcomelang2.c", 802)),self), come_pop_stackframe(), __exception_result_var_b58);
    __freed_obj__ = 0;
    __result70__ = __result_obj__ = result_77;
    if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value46;
void* right_value47;
struct buffer* __exception_result_var_b59;
struct buffer* result_78;
_Bool _if_conditional82;
struct buffer* __result71__;
struct buffer* __exception_result_var_b60;
struct buffer* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct buffer*));
    result_78=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 809),__exception_result_var_b59=((struct buffer*)(right_value47=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value46=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 809))), "libcomelang2.c", 809)))))), come_pop_stackframe(), __exception_result_var_b59));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value46;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value47;
    __freed_obj__ = 0;
    if(_if_conditional82=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional82) {
        __result71__ = __result_obj__ = result_78;
        if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result71__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 815),__exception_result_var_b60=buffer_append_str(((struct buffer*)come_null_check(result_78, "libcomelang2.c", 815)),self), come_pop_stackframe(), __exception_result_var_b60);
    __freed_obj__ = 0;
    __result72__ = __result_obj__ = result_78;
    if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
    if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
void* right_value48;
char* __exception_result_var_b61;
char* __result73__;
void* right_value49;
char* __exception_result_var_b62;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    if(_if_conditional83=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional83) {
        __result73__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 823),__exception_result_var_b61=((char*)(right_value48=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b61);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result74__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 826),__exception_result_var_b62=((char*)(right_value49=__builtin_string(((struct buffer*)come_null_check(self, "libcomelang2.c", 826))->buf))), come_pop_stackframe(), __exception_result_var_b62);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value49;
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

_Bool bool_equals(_Bool self, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self==right;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

_Bool int_equals(int self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self==right;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

_Bool char_equals(char self, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self==right;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

_Bool short_equals(short short self, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = self==right;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

_Bool long_equals(long self, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = self==right;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

_Bool size_t_equals(long int self, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self==right;
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

_Bool float_equals(float self, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = self==right;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

_Bool double_equals(double self, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = self==right;
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

struct optional$2boolbool* string_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
void* right_value50;
void* right_value51;
struct optional$2boolbool* __result84__;
_Bool _if_conditional85;
void* right_value52;
void* right_value53;
struct optional$2boolbool* __result85__;
_Bool _if_conditional86;
void* right_value54;
void* right_value55;
struct optional$2boolbool* __result86__;
int __exception_result_var_b63;
void* right_value56;
void* right_value57;
struct optional$2boolbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
    if(_if_conditional84=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional84) {
        __result84__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 875), ((struct optional$2boolbool*)(right_value51=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value50=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 875))),(_Bool)1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value51;
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional85=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            __result85__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 878), ((struct optional$2boolbool*)(right_value53=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value52=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 878))),(_Bool)0,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value53;
            __freed_obj__ = 0;
            return __result85__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional86=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                __result86__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 881), ((struct optional$2boolbool*)(right_value55=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value54=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 881))),(_Bool)0,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value55;
                __freed_obj__ = 0;
                return __result86__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = ((struct optional$2intbool*)(right_value57=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value56=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 884)))),(come_push_stackframe("libcomelang2.c", 884),__exception_result_var_b63=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b63)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value56;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
void* right_value58;
void* right_value59;
struct optional$2boolbool* __result88__;
_Bool _if_conditional88;
void* right_value60;
void* right_value61;
struct optional$2boolbool* __result89__;
_Bool _if_conditional89;
void* right_value62;
void* right_value63;
struct optional$2boolbool* __result90__;
int __exception_result_var_b64;
void* right_value64;
void* right_value65;
struct optional$2boolbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    if(_if_conditional87=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional87) {
        __result88__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 890), ((struct optional$2boolbool*)(right_value59=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value58=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 890))),(_Bool)1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value58;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value59;
        __freed_obj__ = 0;
        return __result88__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional88=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            __result89__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 893), ((struct optional$2boolbool*)(right_value61=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value60=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 893))),(_Bool)0,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value61;
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional89=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                __result90__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 896), ((struct optional$2boolbool*)(right_value63=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value62=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 896))),(_Bool)0,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value63;
                __freed_obj__ = 0;
                return __result90__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result91__ = __result_obj__ = ((struct optional$2intbool*)(right_value65=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value64=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 899)))),(come_push_stackframe("libcomelang2.c", 899),__exception_result_var_b64=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b64)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value64;
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

_Bool string_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
_Bool __result92__;
_Bool _if_conditional91;
_Bool __result93__;
_Bool _if_conditional92;
_Bool __result94__;
int __exception_result_var_b65;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional90=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional90) {
        __result92__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result92__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional91=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            __result93__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional92=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                __result94__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result94__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result95__ = (come_push_stackframe("libcomelang2.c", 914),__exception_result_var_b65=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b65)==0;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

_Bool charp_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
_Bool __result96__;
_Bool _if_conditional94;
_Bool __result97__;
_Bool _if_conditional95;
_Bool __result98__;
int __exception_result_var_b66;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional93=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional93) {
        __result96__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result96__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional94=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional94) {
            __result97__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result97__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional95=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                __result98__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result98__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result99__ = (come_push_stackframe("libcomelang2.c", 929),__exception_result_var_b66=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b66)==0;
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

_Bool string_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool __result100__;
_Bool _if_conditional97;
_Bool __result101__;
_Bool _if_conditional98;
_Bool __result102__;
int __exception_result_var_b67;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional96=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional96) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional97=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional97) {
            __result101__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional98=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                __result102__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result103__ = (come_push_stackframe("libcomelang2.c", 944),__exception_result_var_b67=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b67)!=0;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool charp_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool __result104__;
_Bool _if_conditional100;
_Bool __result105__;
_Bool _if_conditional101;
_Bool __result106__;
int __exception_result_var_b68;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional99=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional99) {
        __result104__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional100=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional100) {
            __result105__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional101=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                __result106__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result106__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = (come_push_stackframe("libcomelang2.c", 959),__exception_result_var_b68=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b68)!=0;
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

char* charp_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
void* right_value66;
char* __exception_result_var_b69;
char* __result108__;
long int __exception_result_var_b70;
long int __exception_result_var_b71;
int len_79;
void* right_value67;
char* result_80;
char* __exception_result_var_b72;
char* __exception_result_var_b73;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&len_79, 0, sizeof(int));
memset(&right_value67, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
    if(_if_conditional102=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional102) {
        __result108__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 966),__exception_result_var_b69=((char*)(right_value66=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b69);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_79=(come_push_stackframe("libcomelang2.c", 968),__exception_result_var_b70=strlen(self), come_pop_stackframe(), __exception_result_var_b70)+(come_push_stackframe("libcomelang2.c", 968),__exception_result_var_b71=strlen(right), come_pop_stackframe(), __exception_result_var_b71);
    __freed_obj__ = 0;
    result_80=(char*)come_increment_ref_count(((char*)(right_value67=(char*)come_calloc(1, sizeof(char)*(1*(len_79+1)), "libcomelang2.c", 970))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 972),__exception_result_var_b72=strncpy(result_80,self,len_79+1), come_pop_stackframe(), __exception_result_var_b72);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 973),__exception_result_var_b73=strncat(result_80,right,len_79+1), come_pop_stackframe(), __exception_result_var_b73);
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = result_80;
    if(result_80 && !__freed_obj__) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
    if(result_80 && !__freed_obj__) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value68;
char* __exception_result_var_b74;
char* __result110__;
long int __exception_result_var_b75;
long int __exception_result_var_b76;
int len_81;
void* right_value69;
char* result_82;
char* __exception_result_var_b77;
char* __exception_result_var_b78;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&len_81, 0, sizeof(int));
memset(&right_value69, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
    if(_if_conditional103=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional103) {
        __result110__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 981),__exception_result_var_b74=((char*)(right_value68=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b74);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value68;
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_81=(come_push_stackframe("libcomelang2.c", 983),__exception_result_var_b75=strlen(self), come_pop_stackframe(), __exception_result_var_b75)+(come_push_stackframe("libcomelang2.c", 983),__exception_result_var_b76=strlen(right), come_pop_stackframe(), __exception_result_var_b76);
    __freed_obj__ = 0;
    result_82=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(len_81+1)), "libcomelang2.c", 985))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value69;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 987),__exception_result_var_b77=strncpy(result_82,self,len_81+1), come_pop_stackframe(), __exception_result_var_b77);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 988),__exception_result_var_b78=strncat(result_82,right,len_81+1), come_pop_stackframe(), __exception_result_var_b78);
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = result_82;
    if(result_82 && !__freed_obj__) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(result_82 && !__freed_obj__) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
void* right_value70;
char* __exception_result_var_b79;
char* __result112__;
void* right_value71;
void* right_value72;
struct buffer* __exception_result_var_b80;
struct buffer* buf_83;
int i_84;
_Bool _for_condtionalA7;
struct buffer* __exception_result_var_b81;
void* right_value73;
char* __exception_result_var_b82;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&buf_83, 0, sizeof(struct buffer*));
memset(&i_84, 0, sizeof(int));
memset(&right_value73, 0, sizeof(void*));
    if(_if_conditional104=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional104) {
        __result112__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 996),__exception_result_var_b79=((char*)(right_value70=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b79);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value70;
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_83=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 998),__exception_result_var_b80=((struct buffer*)(right_value72=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 998))))))), come_pop_stackframe(), __exception_result_var_b80));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value72;
    __freed_obj__ = 0;
    for(
    i_84=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    i_84<right ,    __freed_obj__ = 0, 
    _for_condtionalA7;    i_84++ ,    __freed_obj__ = 0, 
    0    ){
        (come_push_stackframe("libcomelang2.c", 1001),__exception_result_var_b81=buffer_append_str(((struct buffer*)come_null_check(buf_83, "libcomelang2.c", 1001)),self), come_pop_stackframe(), __exception_result_var_b81);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result113__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1004),__exception_result_var_b82=((char*)(right_value73=buffer_to_string(((struct buffer*)come_null_check(buf_83, "libcomelang2.c", 1004))))), come_pop_stackframe(), __exception_result_var_b82);
    if(buf_83 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value73;
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(buf_83 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
void* right_value74;
char* __exception_result_var_b83;
char* __result114__;
void* right_value75;
void* right_value76;
struct buffer* __exception_result_var_b84;
struct buffer* buf_85;
int i_86;
_Bool _for_condtionalA8;
struct buffer* __exception_result_var_b85;
void* right_value77;
char* __exception_result_var_b86;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&buf_85, 0, sizeof(struct buffer*));
memset(&i_86, 0, sizeof(int));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional105=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional105) {
        __result114__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1010),__exception_result_var_b83=((char*)(right_value74=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b83);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_85=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1012),__exception_result_var_b84=((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1012))))))), come_pop_stackframe(), __exception_result_var_b84));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value75;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value76;
    __freed_obj__ = 0;
    for(
    i_86=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    i_86<right ,    __freed_obj__ = 0, 
    _for_condtionalA8;    i_86++ ,    __freed_obj__ = 0, 
    0    ){
        (come_push_stackframe("libcomelang2.c", 1015),__exception_result_var_b85=buffer_append_str(((struct buffer*)come_null_check(buf_85, "libcomelang2.c", 1015)),self), come_pop_stackframe(), __exception_result_var_b85);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result115__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1018),__exception_result_var_b86=((char*)(right_value77=buffer_to_string(((struct buffer*)come_null_check(buf_85, "libcomelang2.c", 1018))))), come_pop_stackframe(), __exception_result_var_b86);
    if(buf_85 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value77;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(buf_85 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b87;
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = ((come_push_stackframe("libcomelang2.c", 1026),__exception_result_var_b87=int_get_hash_key(((int)value)), come_pop_stackframe(), __exception_result_var_b87));
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

unsigned int char_get_hash_key(char value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = value;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

unsigned int short_get_hash_key(short int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = value;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

unsigned int int_get_hash_key(int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = value;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

unsigned int long_get_hash_key(long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = value;
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

unsigned int size_t_get_hash_key(long int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = value;
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

unsigned int float_get_hash_key(float value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

unsigned int double_get_hash_key(double value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

unsigned int string_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
unsigned int __result124__;
int result_87;
char* p_88;
_Bool _while_condtional6;
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_87, 0, sizeof(int));
memset(&p_88, 0, sizeof(char*));
    if(_if_conditional106=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional106) {
        __result124__ = 0;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_87=0;
    __freed_obj__ = 0;
    p_88=value;
    __freed_obj__ = 0;
    while(_while_condtional6=*p_88,    __freed_obj__ = 0, 
    _while_condtional6) {
        result_87+=(*p_88);
        __freed_obj__ = 0;
        p_88++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result125__ = result_87;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

unsigned int charp_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
unsigned int __result126__;
int result_89;
char* p_90;
_Bool _while_condtional7;
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_89, 0, sizeof(int));
memset(&p_90, 0, sizeof(char*));
    if(_if_conditional107=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional107) {
        __result126__ = 0;
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_89=0;
    __freed_obj__ = 0;
    p_90=value;
    __freed_obj__ = 0;
    while(_while_condtional7=*p_90,    __freed_obj__ = 0, 
    _while_condtional7) {
        result_89+=(*p_90);
        __freed_obj__ = 0;
        p_90++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result127__ = result_89;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

_Bool bool_clone(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self;
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

char char_clone(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = self;
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

short int short_clone(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = self;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

int int_clone(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = self;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

long int long_clone(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = self;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

long int size_t_clone(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = self;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

double double_clone(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = self;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

float float_clone(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = self;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

char* charp_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
char* __result136__;
void* right_value78;
char* __exception_result_var_b88;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional108=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional108) {
        __result136__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result136__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result137__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1138),__exception_result_var_b88=((char*)(right_value78=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b88);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value78;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

char* string_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
char* __result138__;
void* right_value79;
char* __exception_result_var_b89;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
    if(_if_conditional109=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional109) {
        __result138__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result138__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result139__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1145),__exception_result_var_b89=((char*)(right_value79=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b89);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value79;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

_Bool xiswalpha(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_91;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_91, 0, sizeof(_Bool));
    result_91=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result140__ = result_91;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

_Bool xiswblank(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

_Bool xiswdigit(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

_Bool xiswalnum(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b90;
_Bool __exception_result_var_b91;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = (come_push_stackframe("libcomelang2.c", 1169),__exception_result_var_b90=xiswalpha(c), come_pop_stackframe(), __exception_result_var_b90)||(come_push_stackframe("libcomelang2.c", 1169),__exception_result_var_b91=xiswdigit(c), come_pop_stackframe(), __exception_result_var_b91);
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

_Bool xisalpha(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_92;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(_Bool));
    result_92=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result144__ = result_92;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

_Bool xisblank(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

_Bool xisdigit(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

_Bool xisalnum(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b92;
_Bool __exception_result_var_b93;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = (come_push_stackframe("libcomelang2.c", 1190),__exception_result_var_b92=xisalpha(c), come_pop_stackframe(), __exception_result_var_b92)||(come_push_stackframe("libcomelang2.c", 1190),__exception_result_var_b93=xisdigit(c), come_pop_stackframe(), __exception_result_var_b93);
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

_Bool xisascii(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_93;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(_Bool));
    result_93=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result148__ = result_93;
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
}

_Bool xiswascii(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_94;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result149__ = result_94;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

int string_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
int __result150__;
long int __exception_result_var_b94;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional110=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional110) {
        __result150__ = 0;
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result151__ = (come_push_stackframe("libcomelang2.c", 1213),__exception_result_var_b94=strlen(str), come_pop_stackframe(), __exception_result_var_b94);
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

int charp_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
int __result152__;
long int __exception_result_var_b95;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional111=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional111) {
        __result152__ = 0;
        __freed_obj__ = 0;
        return __result152__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result153__ = (come_push_stackframe("libcomelang2.c", 1220),__exception_result_var_b95=strlen(str), come_pop_stackframe(), __exception_result_var_b95);
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

char* string_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
void* right_value80;
char* __exception_result_var_b96;
char* __result154__;
long int __exception_result_var_b97;
int len_95;
void* right_value81;
char* result_96;
int i_97;
_Bool _for_condtionalA9;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&len_95, 0, sizeof(int));
memset(&right_value81, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&i_97, 0, sizeof(int));
    if(_if_conditional112=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional112) {
        __result154__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1226),__exception_result_var_b96=((char*)(right_value80=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b96);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value80;
        __freed_obj__ = 0;
        return __result154__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_95=(come_push_stackframe("libcomelang2.c", 1228),__exception_result_var_b97=strlen(str), come_pop_stackframe(), __exception_result_var_b97);
    __freed_obj__ = 0;
    result_96=(char*)come_increment_ref_count(((char*)(right_value81=(char*)come_calloc(1, sizeof(char)*(1*(len_95+1)), "libcomelang2.c", 1229))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81;
    __freed_obj__ = 0;
    for(
    i_97=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    i_97<len_95 ,    __freed_obj__ = 0, 
    _for_condtionalA9;    i_97++ ,    __freed_obj__ = 0, 
    0    ){
        result_96[i_97]=str[len_95-i_97-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_96[len_95]=0;
    __freed_obj__ = 0;
    __result155__ = __result_obj__ = result_96;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
void* right_value82;
char* __exception_result_var_b98;
char* __result156__;
long int __exception_result_var_b99;
int len_98;
void* right_value83;
char* result_99;
int i_100;
_Bool _for_condtionalA10;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&right_value83, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&i_100, 0, sizeof(int));
    if(_if_conditional113=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional113) {
        __result156__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1243),__exception_result_var_b98=((char*)(right_value82=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b98);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value82;
        __freed_obj__ = 0;
        return __result156__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_98=(come_push_stackframe("libcomelang2.c", 1245),__exception_result_var_b99=strlen(str), come_pop_stackframe(), __exception_result_var_b99);
    __freed_obj__ = 0;
    result_99=(char*)come_increment_ref_count(((char*)(right_value83=(char*)come_calloc(1, sizeof(char)*(1*(len_98+1)), "libcomelang2.c", 1246))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    for(
    i_100=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA10=    i_100<len_98 ,    __freed_obj__ = 0, 
    _for_condtionalA10;    i_100++ ,    __freed_obj__ = 0, 
    0    ){
        result_99[i_100]=str[len_98-i_100-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_99[len_98]=0;
    __freed_obj__ = 0;
    __result157__ = __result_obj__ = result_99;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
void* right_value84;
char* __exception_result_var_b100;
char* __result158__;
long int __exception_result_var_b101;
int len_101;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value85;
char* __exception_result_var_b102;
void* right_value86;
char* __exception_result_var_b103;
char* __result159__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value87;
char* __exception_result_var_b104;
char* __result160__;
_Bool _if_conditional121;
void* right_value88;
char* __exception_result_var_b105;
char* __result161__;
void* right_value89;
char* result_102;
void* __exception_result_var_b106;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&len_101, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
    if(_if_conditional114=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional114) {
        __result158__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1259),__exception_result_var_b100=((char*)(right_value84=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b100);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = 0;
        return __result158__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_101=(come_push_stackframe("libcomelang2.c", 1262),__exception_result_var_b101=strlen(str), come_pop_stackframe(), __exception_result_var_b101);
    __freed_obj__ = 0;
    if(_if_conditional115=head<0,    __freed_obj__ = 0, 
    _if_conditional115) {
        head+=len_101;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional116=tail<0,    __freed_obj__ = 0, 
    _if_conditional116) {
        tail+=len_101+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional117=head>tail,    __freed_obj__ = 0, 
    _if_conditional117) {
        __result159__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1272),__exception_result_var_b103=((char*)(right_value86=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1272),__exception_result_var_b102=((char*)(right_value85=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1272)),tail,head))), come_pop_stackframe(), __exception_result_var_b102), "libcomelang2.c", 1272))))), come_pop_stackframe(), __exception_result_var_b103);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value85;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value86;
        __freed_obj__ = 0;
        return __result159__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional118=head<0,    __freed_obj__ = 0, 
    _if_conditional118) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional119=tail>=len_101,    __freed_obj__ = 0, 
    _if_conditional119) {
        tail=len_101;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional120=head==tail,    __freed_obj__ = 0, 
    _if_conditional120) {
        __result160__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1284),__exception_result_var_b104=((char*)(right_value87=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b104);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        return __result160__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional121=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional121) {
        __result161__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1288),__exception_result_var_b105=((char*)(right_value88=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b105);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88;
        __freed_obj__ = 0;
        return __result161__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_102=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1291))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1293),__exception_result_var_b106=memcpy(result_102,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b106);
    __freed_obj__ = 0;
    result_102[tail-head]=0;
    __freed_obj__ = 0;
    __result162__ = __result_obj__ = result_102;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value90;
char* __exception_result_var_b107;
char* __result163__;
long int __exception_result_var_b108;
int len_103;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value91;
char* __exception_result_var_b109;
void* right_value92;
char* __exception_result_var_b110;
char* __result164__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value93;
char* __exception_result_var_b111;
char* __result165__;
_Bool _if_conditional129;
void* right_value94;
char* __exception_result_var_b112;
char* __result166__;
void* right_value95;
char* result_104;
void* __exception_result_var_b113;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&len_103, 0, sizeof(int));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_104, 0, sizeof(char*));
    if(_if_conditional122=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional122) {
        __result163__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1302),__exception_result_var_b107=((char*)(right_value90=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b107);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = 0;
        return __result163__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_103=(come_push_stackframe("libcomelang2.c", 1305),__exception_result_var_b108=strlen(str), come_pop_stackframe(), __exception_result_var_b108);
    __freed_obj__ = 0;
    if(_if_conditional123=head<0,    __freed_obj__ = 0, 
    _if_conditional123) {
        head+=len_103;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional124=tail<0,    __freed_obj__ = 0, 
    _if_conditional124) {
        tail+=len_103+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional125=head>tail,    __freed_obj__ = 0, 
    _if_conditional125) {
        __result164__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1315),__exception_result_var_b110=((char*)(right_value92=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1315),__exception_result_var_b109=((char*)(right_value91=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1315)),tail,head))), come_pop_stackframe(), __exception_result_var_b109), "libcomelang2.c", 1315))))), come_pop_stackframe(), __exception_result_var_b110);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value91;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value92;
        __freed_obj__ = 0;
        return __result164__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional126=head<0,    __freed_obj__ = 0, 
    _if_conditional126) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional127=tail>=len_103,    __freed_obj__ = 0, 
    _if_conditional127) {
        tail=len_103;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional128=head==tail,    __freed_obj__ = 0, 
    _if_conditional128) {
        __result165__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1327),__exception_result_var_b111=((char*)(right_value93=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b111);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
        return __result165__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional129=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional129) {
        __result166__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1331),__exception_result_var_b112=((char*)(right_value94=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b112);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value94;
        __freed_obj__ = 0;
        return __result166__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_104=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1334))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1336),__exception_result_var_b113=memcpy(result_104,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b113);
    __freed_obj__ = 0;
    result_104[tail-head]=0;
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = result_104;
    if(result_104 && !__freed_obj__) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(result_104 && !__freed_obj__) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value96;
char* __exception_result_var_b114;
char* __result168__;
long int __exception_result_var_b115;
int len_105;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value97;
char* __exception_result_var_b116;
void* right_value98;
char* __exception_result_var_b117;
char* __result169__;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value99;
char* __exception_result_var_b118;
char* __result170__;
_Bool _if_conditional137;
void* right_value100;
char* __exception_result_var_b119;
char* __result171__;
void* right_value101;
char* result_106;
void* __exception_result_var_b120;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
    if(_if_conditional130=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional130) {
        __result168__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1345),__exception_result_var_b114=((char*)(right_value96=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b114);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96;
        __freed_obj__ = 0;
        return __result168__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_105=(come_push_stackframe("libcomelang2.c", 1348),__exception_result_var_b115=strlen(str), come_pop_stackframe(), __exception_result_var_b115);
    __freed_obj__ = 0;
    if(_if_conditional131=head<0,    __freed_obj__ = 0, 
    _if_conditional131) {
        head+=len_105;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional132=tail<0,    __freed_obj__ = 0, 
    _if_conditional132) {
        tail+=len_105+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional133=head>tail,    __freed_obj__ = 0, 
    _if_conditional133) {
        __result169__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1358),__exception_result_var_b117=((char*)(right_value98=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1358),__exception_result_var_b116=((char*)(right_value97=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1358)),tail,head))), come_pop_stackframe(), __exception_result_var_b116), "libcomelang2.c", 1358))))), come_pop_stackframe(), __exception_result_var_b117);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value97;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value98;
        __freed_obj__ = 0;
        return __result169__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional134=head<0,    __freed_obj__ = 0, 
    _if_conditional134) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional135=tail>=len_105,    __freed_obj__ = 0, 
    _if_conditional135) {
        tail=len_105;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional136=head==tail,    __freed_obj__ = 0, 
    _if_conditional136) {
        __result170__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1370),__exception_result_var_b118=((char*)(right_value99=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b118);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        return __result170__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional137=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional137) {
        __result171__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1374),__exception_result_var_b119=((char*)(right_value100=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b119);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value100;
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_106=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1377))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1379),__exception_result_var_b120=memcpy(result_106,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b120);
    __freed_obj__ = 0;
    result_106[tail-head]=0;
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = result_106;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
void* right_value102;
char* __exception_result_var_b121;
char* __result173__;
long int __exception_result_var_b122;
int len_107;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value103;
char* __exception_result_var_b123;
void* right_value104;
char* __exception_result_var_b124;
char* __result174__;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
void* right_value105;
char* __exception_result_var_b125;
char* __result175__;
_Bool _if_conditional145;
void* right_value106;
char* __exception_result_var_b126;
char* __result176__;
void* right_value107;
char* result_108;
void* __exception_result_var_b127;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&len_107, 0, sizeof(int));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
    if(_if_conditional138=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional138) {
        __result173__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1388),__exception_result_var_b121=((char*)(right_value102=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b121);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_107=(come_push_stackframe("libcomelang2.c", 1391),__exception_result_var_b122=strlen(str), come_pop_stackframe(), __exception_result_var_b122);
    __freed_obj__ = 0;
    if(_if_conditional139=head<0,    __freed_obj__ = 0, 
    _if_conditional139) {
        head+=len_107;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional140=tail<0,    __freed_obj__ = 0, 
    _if_conditional140) {
        tail+=len_107+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional141=head>tail,    __freed_obj__ = 0, 
    _if_conditional141) {
        __result174__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1401),__exception_result_var_b124=((char*)(right_value104=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1401),__exception_result_var_b123=((char*)(right_value103=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1401)),tail,head))), come_pop_stackframe(), __exception_result_var_b123), "libcomelang2.c", 1401))))), come_pop_stackframe(), __exception_result_var_b124);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104;
        __freed_obj__ = 0;
        return __result174__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional142=head<0,    __freed_obj__ = 0, 
    _if_conditional142) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional143=tail>=len_107,    __freed_obj__ = 0, 
    _if_conditional143) {
        tail=len_107;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional144=head==tail,    __freed_obj__ = 0, 
    _if_conditional144) {
        __result175__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1413),__exception_result_var_b125=((char*)(right_value105=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b125);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        return __result175__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional145=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional145) {
        __result176__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1417),__exception_result_var_b126=((char*)(right_value106=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b126);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value106;
        __freed_obj__ = 0;
        return __result176__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_108=(char*)come_increment_ref_count(((char*)(right_value107=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1420))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1422),__exception_result_var_b127=memcpy(result_108,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b127);
    __freed_obj__ = 0;
    result_108[tail-head]=0;
    __freed_obj__ = 0;
    __result177__ = __result_obj__ = result_108;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result177__;
    __freed_obj__ = 0;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
void* right_value108;
char* __exception_result_var_b128;
char* __result178__;
va_list args_109;
char* result_110;
int __exception_result_var_b129;
int len_111;
_Bool _if_conditional147;
void* right_value109;
char* __exception_result_var_b130;
char* __result179__;
void* right_value110;
char* __exception_result_var_b131;
char* result2_112;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
memset(&args_109, 0, sizeof(va_list));
memset(&result_110, 0, sizeof(char*));
memset(&len_111, 0, sizeof(int));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result2_112, 0, sizeof(char*));
    if(_if_conditional146=msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional146) {
        __result178__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1431),__exception_result_var_b128=((char*)(right_value108=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b128);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
        return __result178__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1434),__builtin_va_start(args_109,msg),come_pop_stackframe());
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    len_111=(come_push_stackframe("libcomelang2.c", 1436),__exception_result_var_b129=vasprintf(&result_110,msg,args_109), come_pop_stackframe(), __exception_result_var_b129);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1437),__builtin_va_end(args_109),come_pop_stackframe());
    __freed_obj__ = 0;
    if(_if_conditional147=len_111<0,    __freed_obj__ = 0, 
    _if_conditional147) {
        __result179__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1440),__exception_result_var_b130=((char*)(right_value109=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b130);
        if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = 0;
        return __result179__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_112=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1443),__exception_result_var_b131=((char*)(right_value110=__builtin_string(result_110))), come_pop_stackframe(), __exception_result_var_b131));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1445),free(result_110),come_pop_stackframe());
    __freed_obj__ = 0;
    __result180__ = __result_obj__ = result2_112;
    if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112 && !__freed_obj__) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result180__;
    __freed_obj__ = 0;
    if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112 && !__freed_obj__) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
void* right_value111;
char* __exception_result_var_b132;
char* __result181__;
long int __exception_result_var_b133;
int len_113;
int __exception_result_var_b134;
_Bool _if_conditional149;
void* right_value112;
char* __exception_result_var_b135;
char* __result182__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value113;
char* __exception_result_var_b136;
char* __result183__;
_Bool _if_conditional154;
void* right_value114;
char* __exception_result_var_b137;
char* sub_str_114;
int __exception_result_var_b138;
void* __exception_result_var_b139;
void* right_value115;
char* __exception_result_var_b140;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&len_113, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&sub_str_114, 0, sizeof(char*));
memset(&right_value115, 0, sizeof(void*));
    if(_if_conditional148=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional148) {
        __result181__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1453),__exception_result_var_b132=((char*)(right_value111=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b132);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_113=(come_push_stackframe("libcomelang2.c", 1456),__exception_result_var_b133=strlen(str), come_pop_stackframe(), __exception_result_var_b133);
    __freed_obj__ = 0;
    if(_if_conditional149=(come_push_stackframe("libcomelang2.c", 1458),__exception_result_var_b134=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b134)==0,    __freed_obj__ = 0, 
    _if_conditional149) {
        __result182__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1459),__exception_result_var_b135=((char*)(right_value112=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b135);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        return __result182__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional150=head<0,    __freed_obj__ = 0, 
    _if_conditional150) {
        head+=len_113;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional151=tail<0,    __freed_obj__ = 0, 
    _if_conditional151) {
        tail+=len_113+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional152=head<0,    __freed_obj__ = 0, 
    _if_conditional152) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional153=tail<0,    __freed_obj__ = 0, 
    _if_conditional153) {
        __result183__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1475),__exception_result_var_b136=((char*)(right_value113=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b136);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value113;
        __freed_obj__ = 0;
        return __result183__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional154=tail>=len_113,    __freed_obj__ = 0, 
    _if_conditional154) {
        tail=len_113;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_114=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1482),__exception_result_var_b137=((char*)(right_value114=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1482)),tail,-1))), come_pop_stackframe(), __exception_result_var_b137));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1484),__exception_result_var_b139=memcpy(str+head,sub_str_114,(come_push_stackframe("libcomelang2.c", 1484),__exception_result_var_b138=string_length(((char*)come_null_check(sub_str_114, "libcomelang2.c", 1484))), come_pop_stackframe(), __exception_result_var_b138)+1), come_pop_stackframe(), __exception_result_var_b139);
    __freed_obj__ = 0;
    __result184__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1486),__exception_result_var_b140=((char*)(right_value115=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b140);
    if(sub_str_114 && !__freed_obj__) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value115;
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
    if(sub_str_114 && !__freed_obj__) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
void* right_value116;
char* __exception_result_var_b141;
char* __result185__;
long int __exception_result_var_b142;
int len_115;
int __exception_result_var_b143;
_Bool _if_conditional156;
void* right_value117;
char* __exception_result_var_b144;
char* __result186__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value118;
char* __exception_result_var_b145;
char* __result187__;
_Bool _if_conditional161;
void* right_value119;
char* __exception_result_var_b146;
char* sub_str_116;
int __exception_result_var_b147;
void* __exception_result_var_b148;
void* right_value120;
char* __exception_result_var_b149;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&len_115, 0, sizeof(int));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&sub_str_116, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
    if(_if_conditional155=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional155) {
        __result185__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1492),__exception_result_var_b141=((char*)(right_value116=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b141);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116;
        __freed_obj__ = 0;
        return __result185__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_115=(come_push_stackframe("libcomelang2.c", 1495),__exception_result_var_b142=strlen(str), come_pop_stackframe(), __exception_result_var_b142);
    __freed_obj__ = 0;
    if(_if_conditional156=(come_push_stackframe("libcomelang2.c", 1497),__exception_result_var_b143=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b143)==0,    __freed_obj__ = 0, 
    _if_conditional156) {
        __result186__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1498),__exception_result_var_b144=((char*)(right_value117=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b144);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional157=head<0,    __freed_obj__ = 0, 
    _if_conditional157) {
        head+=len_115;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional158=tail<0,    __freed_obj__ = 0, 
    _if_conditional158) {
        tail+=len_115+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional159=head<0,    __freed_obj__ = 0, 
    _if_conditional159) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional160=tail<0,    __freed_obj__ = 0, 
    _if_conditional160) {
        __result187__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1514),__exception_result_var_b145=((char*)(right_value118=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b145);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = 0;
        return __result187__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional161=tail>=len_115,    __freed_obj__ = 0, 
    _if_conditional161) {
        tail=len_115;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_116=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1521),__exception_result_var_b146=((char*)(right_value119=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1521)),tail,-1))), come_pop_stackframe(), __exception_result_var_b146));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1523),__exception_result_var_b148=memcpy(str+head,sub_str_116,(come_push_stackframe("libcomelang2.c", 1523),__exception_result_var_b147=string_length(((char*)come_null_check(sub_str_116, "libcomelang2.c", 1523))), come_pop_stackframe(), __exception_result_var_b147)+1), come_pop_stackframe(), __exception_result_var_b148);
    __freed_obj__ = 0;
    __result188__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1525),__exception_result_var_b149=((char*)(right_value120=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b149);
    if(sub_str_116 && !__freed_obj__) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value120;
    __freed_obj__ = 0;
    return __result188__;
    __freed_obj__ = 0;
    if(sub_str_116 && !__freed_obj__) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
void* right_value121;
void* right_value122;
struct list$1charph* __exception_result_var_b150;
struct list$1charph* __result190__;
void* right_value123;
void* right_value124;
struct list$1charph* __exception_result_var_b151;
struct list$1charph* result_119;
void* right_value125;
void* right_value126;
struct buffer* __exception_result_var_b152;
struct buffer* str_120;
int i_121;
int __exception_result_var_b153;
_Bool _for_condtionalA11;
_Bool _if_conditional164;
void* right_value130;
char* __exception_result_var_b154;
struct list$1charph* __exception_result_var_b155;
struct buffer* __exception_result_var_b156;
int __exception_result_var_b157;
_Bool _if_conditional167;
void* right_value131;
char* __exception_result_var_b158;
struct list$1charph* __exception_result_var_b159;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct list$1charph*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&str_120, 0, sizeof(struct buffer*));
memset(&i_121, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    if(_if_conditional162=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional162) {
        __result190__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1531),__exception_result_var_b150=((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1531))))))), come_pop_stackframe(), __exception_result_var_b150);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value122;
        __freed_obj__ = 0;
        return __result190__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_119=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1534),__exception_result_var_b151=((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1534))), "libcomelang2.c", 1534)))))), come_pop_stackframe(), __exception_result_var_b151));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value124;
    __freed_obj__ = 0;
    str_120=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1536),__exception_result_var_b152=((struct buffer*)(right_value126=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value125=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1536))), "libcomelang2.c", 1536)))))), come_pop_stackframe(), __exception_result_var_b152));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value125;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    for(
    i_121=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    i_121<(come_push_stackframe("libcomelang2.c", 1538),__exception_result_var_b153=charp_length(((char*)come_null_check(self, "libcomelang2.c", 1538))), come_pop_stackframe(), __exception_result_var_b153) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    i_121++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional164=self[i_121]==c,        __freed_obj__ = 0, 
        _if_conditional164) {
            (come_push_stackframe("libcomelang2.c", 1540),__exception_result_var_b155=list$1charph_push_back(((struct list$1charph*)come_null_check(result_119, "libcomelang2.c", 1540)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1540),__exception_result_var_b154=((char*)(right_value130=__builtin_string(((struct buffer*)come_null_check(str_120, "libcomelang2.c", 1540))->buf))), come_pop_stackframe(), __exception_result_var_b154))), come_pop_stackframe(), __exception_result_var_b155);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value130;
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 1541),buffer_reset(((struct buffer*)come_null_check(str_120, "libcomelang2.c", 1541))),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("libcomelang2.c", 1544),__exception_result_var_b156=buffer_append_char(((struct buffer*)come_null_check(str_120, "libcomelang2.c", 1544)),self[i_121]), come_pop_stackframe(), __exception_result_var_b156);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional167=(come_push_stackframe("libcomelang2.c", 1547),__exception_result_var_b157=buffer_length(((struct buffer*)come_null_check(str_120, "libcomelang2.c", 1547))), come_pop_stackframe(), __exception_result_var_b157)!=0,    __freed_obj__ = 0, 
    _if_conditional167) {
        (come_push_stackframe("libcomelang2.c", 1548),__exception_result_var_b159=list$1charph_push_back(((struct list$1charph*)come_null_check(result_119, "libcomelang2.c", 1548)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1548),__exception_result_var_b158=((char*)(right_value131=__builtin_string(((struct buffer*)come_null_check(str_120, "libcomelang2.c", 1548))->buf))), come_pop_stackframe(), __exception_result_var_b158))), come_pop_stackframe(), __exception_result_var_b159);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result192__ = __result_obj__ = result_119;
    if(result_119 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_120 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
    if(result_119 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_120 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 154))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->len=0;
            __freed_obj__ = 0;
            __result189__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result189__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_117;
_Bool _while_condtional8;
struct list_item$1charph* prev_it_118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_117, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1charph*));
                it_117=((struct list$1charph*)come_null_check(self, "./comelang2.h", 173))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_117!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    prev_it_118=it_117;
                    __freed_obj__ = 0;
                    it_117=((struct list_item$1charph*)come_null_check(it_117, "./comelang2.h", 176))->next;
                    __freed_obj__ = 0;
                    if(prev_it_118 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional163=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional163) {
                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
void* right_value127;
struct list_item$1charph* litem_122;
char* __dec_obj16;
_Bool _if_conditional166;
void* right_value128;
struct list_item$1charph* litem_123;
char* __dec_obj17;
void* right_value129;
struct list_item$1charph* litem_124;
char* __dec_obj18;
struct list$1charph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1charph*));
memset(&right_value129, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional165=((struct list$1charph*)come_null_check(self, "./comelang2.h", 275))->len==0,                __freed_obj__ = 0, 
                _if_conditional165) {
                    litem_122=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 276))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value127;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 278))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 279))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 280))->item;
                    ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 280))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 282))->tail=litem_122;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 283))->head=litem_122;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional166=((struct list$1charph*)come_null_check(self, "./comelang2.h", 285))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional166) {
                        litem_123=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 286))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_123, "./comelang2.h", 288))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_123, "./comelang2.h", 289))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj17=((struct list_item$1charph*)come_null_check(litem_123, "./comelang2.h", 290))->item;
                        ((struct list_item$1charph*)come_null_check(litem_123, "./comelang2.h", 290))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 292))->tail=litem_123;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 293))->head, "./comelang2.h", 293))->next=litem_123;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_124=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 296))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_124, "./comelang2.h", 298))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_124, "./comelang2.h", 299))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj18=((struct list_item$1charph*)come_null_check(litem_124, "./comelang2.h", 300))->item;
                        ((struct list_item$1charph*)come_null_check(litem_124, "./comelang2.h", 300))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->tail, "./comelang2.h", 302))->next=litem_124;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 303))->tail=litem_124;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 306))->len++;
                __freed_obj__ = 0;
                __result191__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result191__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value132;
void* right_value133;
struct list$1charph* __exception_result_var_b160;
struct list$1charph* __result193__;
void* right_value134;
void* right_value135;
struct list$1charph* __exception_result_var_b161;
struct list$1charph* result_125;
void* right_value136;
void* right_value137;
struct buffer* __exception_result_var_b162;
struct buffer* str_126;
int i_127;
int __exception_result_var_b163;
_Bool _for_condtionalA12;
_Bool _if_conditional169;
void* right_value138;
char* __exception_result_var_b164;
struct list$1charph* __exception_result_var_b165;
struct buffer* __exception_result_var_b166;
int __exception_result_var_b167;
_Bool _if_conditional170;
void* right_value139;
char* __exception_result_var_b168;
struct list$1charph* __exception_result_var_b169;
struct list$1charph* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct list$1charph*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&str_126, 0, sizeof(struct buffer*));
memset(&i_127, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    if(_if_conditional168=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional168) {
        __result193__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1557),__exception_result_var_b160=((struct list$1charph*)(right_value133=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value132=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1557))))))), come_pop_stackframe(), __exception_result_var_b160);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value133;
        __freed_obj__ = 0;
        return __result193__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_125=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1560),__exception_result_var_b161=((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1560))), "libcomelang2.c", 1560)))))), come_pop_stackframe(), __exception_result_var_b161));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value135;
    __freed_obj__ = 0;
    str_126=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1562),__exception_result_var_b162=((struct buffer*)(right_value137=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value136=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1562))), "libcomelang2.c", 1562)))))), come_pop_stackframe(), __exception_result_var_b162));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value137;
    __freed_obj__ = 0;
    for(
    i_127=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA12=    i_127<(come_push_stackframe("libcomelang2.c", 1564),__exception_result_var_b163=charp_length(((char*)come_null_check(self, "libcomelang2.c", 1564))), come_pop_stackframe(), __exception_result_var_b163) ,    __freed_obj__ = 0, 
    _for_condtionalA12;    i_127++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional169=self[i_127]==c,        __freed_obj__ = 0, 
        _if_conditional169) {
            (come_push_stackframe("libcomelang2.c", 1566),__exception_result_var_b165=list$1charph_push_back(((struct list$1charph*)come_null_check(result_125, "libcomelang2.c", 1566)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1566),__exception_result_var_b164=((char*)(right_value138=__builtin_string(((struct buffer*)come_null_check(str_126, "libcomelang2.c", 1566))->buf))), come_pop_stackframe(), __exception_result_var_b164))), come_pop_stackframe(), __exception_result_var_b165);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138;
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 1567),buffer_reset(((struct buffer*)come_null_check(str_126, "libcomelang2.c", 1567))),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("libcomelang2.c", 1570),__exception_result_var_b166=buffer_append_char(((struct buffer*)come_null_check(str_126, "libcomelang2.c", 1570)),self[i_127]), come_pop_stackframe(), __exception_result_var_b166);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional170=(come_push_stackframe("libcomelang2.c", 1573),__exception_result_var_b167=buffer_length(((struct buffer*)come_null_check(str_126, "libcomelang2.c", 1573))), come_pop_stackframe(), __exception_result_var_b167)!=0,    __freed_obj__ = 0, 
    _if_conditional170) {
        (come_push_stackframe("libcomelang2.c", 1574),__exception_result_var_b169=list$1charph_push_back(((struct list$1charph*)come_null_check(result_125, "libcomelang2.c", 1574)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1574),__exception_result_var_b168=((char*)(right_value139=__builtin_string(((struct buffer*)come_null_check(str_126, "libcomelang2.c", 1574))->buf))), come_pop_stackframe(), __exception_result_var_b168))), come_pop_stackframe(), __exception_result_var_b169);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result194__ = __result_obj__ = result_125;
    if(result_125 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
    if(result_125 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
void* right_value140;
char* __exception_result_var_b170;
char* __result195__;
long int __exception_result_var_b171;
char* p_128;
_Bool _while_condtional9;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value141;
char* __exception_result_var_b172;
char* __result196__;
void* right_value142;
char* __exception_result_var_b173;
char* __result197__;
void* right_value143;
char* __exception_result_var_b174;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&p_128, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
    if(_if_conditional171=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional171) {
        __result195__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1586),__exception_result_var_b170=((char*)(right_value140=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b170);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_128=path+(come_push_stackframe("libcomelang2.c", 1588),__exception_result_var_b171=strlen(path), come_pop_stackframe(), __exception_result_var_b171);
    __freed_obj__ = 0;
    while(_while_condtional9=p_128>=path,    __freed_obj__ = 0, 
    _while_condtional9) {
        if(_if_conditional172=*p_128==47,        __freed_obj__ = 0, 
        _if_conditional172) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_128--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional173=p_128<path,    __freed_obj__ = 0, 
    _if_conditional173) {
        __result196__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1600),__exception_result_var_b172=((char*)(right_value141=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b172);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141;
        __freed_obj__ = 0;
        return __result196__;
        __freed_obj__ = 0;
    }
    else {
        __result197__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1603),__exception_result_var_b173=((char*)(right_value142=__builtin_string(p_128+1))), come_pop_stackframe(), __exception_result_var_b173);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = 0;
        return __result197__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result198__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1606),__exception_result_var_b174=((char*)(right_value143=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b174);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143;
    __freed_obj__ = 0;
    return __result198__;
    __freed_obj__ = 0;
}

char* xdirname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value144;
char* __exception_result_var_b175;
char* __result199__;
void* right_value145;
char* __exception_result_var_b176;
char* __exception_result_var_b177;
void* right_value146;
char* __exception_result_var_b178;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    if(_if_conditional174=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional174) {
        __result199__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1612),__exception_result_var_b175=((char*)(right_value144=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b175);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144;
        __freed_obj__ = 0;
        return __result199__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result200__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1614),__exception_result_var_b178=((char*)(right_value146=__builtin_string((come_push_stackframe("libcomelang2.c", 1614),__exception_result_var_b177=dirname((come_push_stackframe("libcomelang2.c", 1614),__exception_result_var_b176=((char*)(right_value145=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b176)), come_pop_stackframe(), __exception_result_var_b177)))), come_pop_stackframe(), __exception_result_var_b178);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value146;
    __freed_obj__ = 0;
    return __result200__;
    __freed_obj__ = 0;
}

char* xnoextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
void* right_value147;
char* __exception_result_var_b179;
char* __result201__;
void* right_value148;
char* __exception_result_var_b180;
char* path2_129;
long int __exception_result_var_b181;
char* p_130;
_Bool _while_condtional10;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value149;
char* __exception_result_var_b182;
char* __result202__;
void* right_value150;
char* __exception_result_var_b183;
char* __result203__;
void* right_value151;
char* __exception_result_var_b184;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&path2_129, 0, sizeof(char*));
memset(&p_130, 0, sizeof(char*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    if(_if_conditional175=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional175) {
        __result201__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1620),__exception_result_var_b179=((char*)(right_value147=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b179);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value147;
        __freed_obj__ = 0;
        return __result201__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    path2_129=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1622),__exception_result_var_b180=((char*)(right_value148=xbasename(path))), come_pop_stackframe(), __exception_result_var_b180));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    p_130=path2_129+(come_push_stackframe("libcomelang2.c", 1624),__exception_result_var_b181=strlen(path2_129), come_pop_stackframe(), __exception_result_var_b181);
    __freed_obj__ = 0;
    while(_while_condtional10=p_130>=path2_129,    __freed_obj__ = 0, 
    _while_condtional10) {
        if(_if_conditional176=*p_130==46,        __freed_obj__ = 0, 
        _if_conditional176) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_130--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional177=p_130<path2_129,    __freed_obj__ = 0, 
    _if_conditional177) {
        __result202__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1636),__exception_result_var_b182=((char*)(right_value149=__builtin_string(path2_129))), come_pop_stackframe(), __exception_result_var_b182);
        if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        return __result202__;
        __freed_obj__ = 0;
    }
    else {
        __result203__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1639),__exception_result_var_b183=((char*)(right_value150=string_substring(((char*)come_null_check(path2_129, "libcomelang2.c", 1639)),0,p_130-path2_129))), come_pop_stackframe(), __exception_result_var_b183);
        if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value150;
        __freed_obj__ = 0;
        return __result203__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1642),__exception_result_var_b184=((char*)(right_value151=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b184);
    if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value151;
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
void* right_value152;
char* __exception_result_var_b185;
char* __result205__;
long int __exception_result_var_b186;
char* p_131;
_Bool _while_condtional11;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value153;
char* __exception_result_var_b187;
char* __result206__;
void* right_value154;
char* __exception_result_var_b188;
char* __result207__;
void* right_value155;
char* __exception_result_var_b189;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    if(_if_conditional178=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional178) {
        __result205__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1648),__exception_result_var_b185=((char*)(right_value152=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b185);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = 0;
        return __result205__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_131=path+(come_push_stackframe("libcomelang2.c", 1650),__exception_result_var_b186=strlen(path), come_pop_stackframe(), __exception_result_var_b186);
    __freed_obj__ = 0;
    while(_while_condtional11=p_131>=path,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional179=*p_131==46,        __freed_obj__ = 0, 
        _if_conditional179) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_131--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional180=p_131<path,    __freed_obj__ = 0, 
    _if_conditional180) {
        __result206__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1662),__exception_result_var_b187=((char*)(right_value153=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b187);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = 0;
        return __result206__;
        __freed_obj__ = 0;
    }
    else {
        __result207__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1665),__exception_result_var_b188=((char*)(right_value154=__builtin_string(p_131+1))), come_pop_stackframe(), __exception_result_var_b188);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
        return __result207__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result208__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1668),__exception_result_var_b189=((char*)(right_value155=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b189);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155;
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
}

char* xrealpath(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
void* right_value156;
char* __exception_result_var_b190;
char* __result209__;
char* __exception_result_var_b191;
char* result_132;
void* right_value157;
char* __exception_result_var_b192;
char* result2_133;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&right_value157, 0, sizeof(void*));
memset(&result2_133, 0, sizeof(char*));
    if(_if_conditional181=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional181) {
        __result209__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1674),__exception_result_var_b190=((char*)(right_value156=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b190);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156;
        __freed_obj__ = 0;
        return __result209__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_132=(come_push_stackframe("libcomelang2.c", 1676),__exception_result_var_b191=realpath(path,((void*)0)), come_pop_stackframe(), __exception_result_var_b191);
    __freed_obj__ = 0;
    result2_133=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1678),__exception_result_var_b192=((char*)(right_value157=__builtin_string(result_132))), come_pop_stackframe(), __exception_result_var_b192));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1680),free(result_132),come_pop_stackframe());
    __freed_obj__ = 0;
    __result210__ = __result_obj__ = result2_133;
    if(result2_133 && !__freed_obj__) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result210__;
    __freed_obj__ = 0;
    if(result2_133 && !__freed_obj__) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
void* right_value158;
char* __exception_result_var_b193;
char* __result211__;
void* right_value159;
char* __exception_result_var_b194;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
    if(_if_conditional182=self,    __freed_obj__ = 0, 
    _if_conditional182) {
        __result211__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1691),__exception_result_var_b193=((char*)(right_value158=__builtin_string("true"))), come_pop_stackframe(), __exception_result_var_b193);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value158;
        __freed_obj__ = 0;
        return __result211__;
        __freed_obj__ = 0;
    }
    else {
        __result212__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1694),__exception_result_var_b194=((char*)(right_value159=__builtin_string("false"))), come_pop_stackframe(), __exception_result_var_b194);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = 0;
        return __result212__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* char_to_string(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
char* __exception_result_var_b195;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result213__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1700),__exception_result_var_b195=((char*)(right_value160=xsprintf("%c",self))), come_pop_stackframe(), __exception_result_var_b195);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    return __result213__;
    __freed_obj__ = 0;
}

char* short_to_string(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __exception_result_var_b196;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result214__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1705),__exception_result_var_b196=((char*)(right_value161=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b196);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    return __result214__;
    __freed_obj__ = 0;
}

char* int_to_string(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __exception_result_var_b197;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result215__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1710),__exception_result_var_b197=((char*)(right_value162=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b197);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
}

char* long_to_string(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __exception_result_var_b198;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result216__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1715),__exception_result_var_b198=((char*)(right_value163=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b198);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = 0;
    return __result216__;
    __freed_obj__ = 0;
}

char* size_t_to_string(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __exception_result_var_b199;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result217__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1720),__exception_result_var_b199=((char*)(right_value164=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b199);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164;
    __freed_obj__ = 0;
    return __result217__;
    __freed_obj__ = 0;
}

char* float_to_string(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __exception_result_var_b200;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result218__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1725),__exception_result_var_b200=((char*)(right_value165=xsprintf("%f",self))), come_pop_stackframe(), __exception_result_var_b200);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = 0;
    return __result218__;
    __freed_obj__ = 0;
}

char* double_to_string(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value166;
char* __exception_result_var_b201;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
    __result219__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1730),__exception_result_var_b201=((char*)(right_value166=xsprintf("%lf",self))), come_pop_stackframe(), __exception_result_var_b201);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value166;
    __freed_obj__ = 0;
    return __result219__;
    __freed_obj__ = 0;
}

char* string_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value167;
char* __exception_result_var_b202;
char* __result220__;
void* right_value168;
char* __exception_result_var_b203;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
    if(_if_conditional183=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional183) {
        __result220__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1736),__exception_result_var_b202=((char*)(right_value167=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b202);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value167;
        __freed_obj__ = 0;
        return __result220__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result221__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1738),__exception_result_var_b203=((char*)(right_value168=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b203);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168;
    __freed_obj__ = 0;
    return __result221__;
    __freed_obj__ = 0;
}

char* charp_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
void* right_value169;
char* __exception_result_var_b204;
char* __result222__;
void* right_value170;
char* __exception_result_var_b205;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
    if(_if_conditional184=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional184) {
        __result222__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1744),__exception_result_var_b204=((char*)(right_value169=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b204);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value169;
        __freed_obj__ = 0;
        return __result222__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result223__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1746),__exception_result_var_b205=((char*)(right_value170=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b205);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    return __result223__;
    __freed_obj__ = 0;
}

int bool_compare(_Bool left, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
int __result224__;
_Bool _if_conditional186;
int __result225__;
_Bool _if_conditional187;
int __result226__;
int __result227__;
int __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional185=!left&&right,    __freed_obj__ = 0, 
    _if_conditional185) {
        __result224__ = -1;
        __freed_obj__ = 0;
        return __result224__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional186=left&&right,        __freed_obj__ = 0, 
        _if_conditional186) {
            __result225__ = 0;
            __freed_obj__ = 0;
            return __result225__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional187=!left&&!right,            __freed_obj__ = 0, 
            _if_conditional187) {
                __result226__ = 0;
                __freed_obj__ = 0;
                return __result226__;
                __freed_obj__ = 0;
            }
            else {
                __result227__ = 1;
                __freed_obj__ = 0;
                return __result227__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result228__ = 0;
    __freed_obj__ = 0;
    return __result228__;
    __freed_obj__ = 0;
}

int char_compare(char left, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
int __result229__;
_Bool _if_conditional189;
int __result230__;
int __result231__;
int __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional188=left<right,    __freed_obj__ = 0, 
    _if_conditional188) {
        __result229__ = -1;
        __freed_obj__ = 0;
        return __result229__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional189=left>right,        __freed_obj__ = 0, 
        _if_conditional189) {
            __result230__ = 1;
            __freed_obj__ = 0;
            return __result230__;
            __freed_obj__ = 0;
        }
        else {
            __result231__ = 0;
            __freed_obj__ = 0;
            return __result231__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result232__ = 0;
    __freed_obj__ = 0;
    return __result232__;
    __freed_obj__ = 0;
}

int short_compare(short short left, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
int __result233__;
_Bool _if_conditional191;
int __result234__;
int __result235__;
int __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional190=left<right,    __freed_obj__ = 0, 
    _if_conditional190) {
        __result233__ = -1;
        __freed_obj__ = 0;
        return __result233__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional191=left>right,        __freed_obj__ = 0, 
        _if_conditional191) {
            __result234__ = 1;
            __freed_obj__ = 0;
            return __result234__;
            __freed_obj__ = 0;
        }
        else {
            __result235__ = 0;
            __freed_obj__ = 0;
            return __result235__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result236__ = 0;
    __freed_obj__ = 0;
    return __result236__;
    __freed_obj__ = 0;
}

int int_compare(int left, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
int __result237__;
_Bool _if_conditional193;
int __result238__;
int __result239__;
int __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional192=left<right,    __freed_obj__ = 0, 
    _if_conditional192) {
        __result237__ = -1;
        __freed_obj__ = 0;
        return __result237__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional193=left>right,        __freed_obj__ = 0, 
        _if_conditional193) {
            __result238__ = 1;
            __freed_obj__ = 0;
            return __result238__;
            __freed_obj__ = 0;
        }
        else {
            __result239__ = 0;
            __freed_obj__ = 0;
            return __result239__;
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

int long_compare(long left, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
int __result241__;
_Bool _if_conditional195;
int __result242__;
int __result243__;
int __result244__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional194=left<right,    __freed_obj__ = 0, 
    _if_conditional194) {
        __result241__ = -1;
        __freed_obj__ = 0;
        return __result241__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional195=left>right,        __freed_obj__ = 0, 
        _if_conditional195) {
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

int size_t_compare(long int left, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
int __result245__;
_Bool _if_conditional197;
int __result246__;
int __result247__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional196=left<right,    __freed_obj__ = 0, 
    _if_conditional196) {
        __result245__ = -1;
        __freed_obj__ = 0;
        return __result245__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional197=left>right,        __freed_obj__ = 0, 
        _if_conditional197) {
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

int float_compare(float left, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
int __result249__;
_Bool _if_conditional199;
int __result250__;
int __result251__;
int __result252__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional198=left<right,    __freed_obj__ = 0, 
    _if_conditional198) {
        __result249__ = -1;
        __freed_obj__ = 0;
        return __result249__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional199=left>right,        __freed_obj__ = 0, 
        _if_conditional199) {
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

int double_compare(double left, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
int __result253__;
_Bool _if_conditional201;
int __result254__;
int __result255__;
int __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional200=left<right,    __freed_obj__ = 0, 
    _if_conditional200) {
        __result253__ = -1;
        __freed_obj__ = 0;
        return __result253__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional201=left>right,        __freed_obj__ = 0, 
        _if_conditional201) {
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

int string_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
int __result257__;
_Bool _if_conditional203;
int __result258__;
_Bool _if_conditional204;
int __result259__;
int __exception_result_var_b206;
int __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional202=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional202) {
        __result257__ = 0;
        __freed_obj__ = 0;
        return __result257__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional203=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            __result258__ = -1;
            __freed_obj__ = 0;
            return __result258__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional204=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional204) {
                __result259__ = 1;
                __freed_obj__ = 0;
                return __result259__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result260__ = (come_push_stackframe("libcomelang2.c", 1887),__exception_result_var_b206=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b206);
    __freed_obj__ = 0;
    return __result260__;
    __freed_obj__ = 0;
}

int charp_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
int __result261__;
_Bool _if_conditional206;
int __result262__;
_Bool _if_conditional207;
int __result263__;
int __exception_result_var_b207;
int __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional205=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional205) {
        __result261__ = 0;
        __freed_obj__ = 0;
        return __result261__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional206=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional206) {
            __result262__ = -1;
            __freed_obj__ = 0;
            return __result262__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional207=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional207) {
                __result263__ = 1;
                __freed_obj__ = 0;
                return __result263__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result264__ = (come_push_stackframe("libcomelang2.c", 1902),__exception_result_var_b207=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b207);
    __freed_obj__ = 0;
    return __result264__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
void* right_value171;
char* __exception_result_var_b208;
void* right_value172;
void* right_value173;
struct optional$2charphbool* __result266__;
void* right_value174;
void* right_value175;
struct buffer* __exception_result_var_b209;
struct buffer* buf_134;
_Bool _while_condtional12;
long int __exception_result_var_b210;
int size_136;
struct buffer* __exception_result_var_b211;
_Bool _if_conditional210;
void* right_value176;
char* __exception_result_var_b212;
void* right_value177;
void* right_value178;
struct optional$2charphbool* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&buf_134, 0, sizeof(struct buffer*));
memset(&size_136, 0, sizeof(int));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    if(_if_conditional208=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional208) {
        __result266__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1911), ((struct optional$2charphbool*)(right_value173=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value172=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1911))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1911),__exception_result_var_b208=((char*)(right_value171=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b208)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value172;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value173;
        __freed_obj__ = 0;
        return __result266__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_134=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1913),__exception_result_var_b209=((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1913))), "libcomelang2.c", 1913)))))), come_pop_stackframe(), __exception_result_var_b209));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value175;
    __freed_obj__ = 0;
    while(_while_condtional12=1,    __freed_obj__ = 0, 
    _while_condtional12) {
        char buf2_135[8192];
        memset(&buf2_135, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_136=(come_push_stackframe("libcomelang2.c", 1918),__exception_result_var_b210=fread(buf2_135,1,8192,f), come_pop_stackframe(), __exception_result_var_b210);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 1920),__exception_result_var_b211=buffer_append(((struct buffer*)come_null_check(buf_134, "libcomelang2.c", 1920)),buf2_135,size_136), come_pop_stackframe(), __exception_result_var_b211);
        __freed_obj__ = 0;
        if(_if_conditional210=size_136<8192,        __freed_obj__ = 0, 
        _if_conditional210) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result267__ = __result_obj__ = ((struct optional$2charphbool*)(right_value178=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value177=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1927)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1927),__exception_result_var_b212=((char*)(right_value176=buffer_to_string(((struct buffer*)come_null_check(buf_134, "libcomelang2.c", 1927))))), come_pop_stackframe(), __exception_result_var_b212)),(_Bool)1)));
    if(buf_134 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value177;
    __freed_obj__ = 0;
    return __result267__;
    __freed_obj__ = 0;
    if(buf_134 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj19=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 40))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 40))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __freed_obj__ = 0;
            __result265__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result265__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional209=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional209) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
void* right_value179;
void* right_value180;
struct optional$2intbool* __result268__;
long int __exception_result_var_b213;
long int __exception_result_var_b214;
void* right_value181;
void* right_value182;
struct optional$2intbool* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    if(_if_conditional211=f==((void*)0)||str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional211) {
        __result268__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1933), ((struct optional$2intbool*)(right_value180=optional$2intbool_initialize(((struct optional$2intbool*)(right_value179=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1933))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value179;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value180;
        __freed_obj__ = 0;
        return __result268__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result269__ = __result_obj__ = ((struct optional$2intbool*)(right_value182=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value181=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1936)))),(come_push_stackframe("libcomelang2.c", 1936),__exception_result_var_b214=fwrite(str,(come_push_stackframe("libcomelang2.c", 1936),__exception_result_var_b213=strlen(str), come_pop_stackframe(), __exception_result_var_b213),1,f), come_pop_stackframe(), __exception_result_var_b214),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = 0;
    return __result269__;
    __freed_obj__ = 0;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
void* right_value183;
void* right_value184;
struct optional$2intbool* __result270__;
int __exception_result_var_b215;
int result_137;
_Bool _if_conditional213;
void* right_value185;
void* right_value186;
struct optional$2intbool* __result271__;
void* right_value187;
void* right_value188;
struct optional$2intbool* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&result_137, 0, sizeof(int));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    if(_if_conditional212=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional212) {
        __result270__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1942), ((struct optional$2intbool*)(right_value184=optional$2intbool_initialize(((struct optional$2intbool*)(right_value183=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1942))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value184;
        __freed_obj__ = 0;
        return __result270__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_137=(come_push_stackframe("libcomelang2.c", 1945),__exception_result_var_b215=fclose(f), come_pop_stackframe(), __exception_result_var_b215);
    __freed_obj__ = 0;
    if(_if_conditional213=result_137<0,    __freed_obj__ = 0, 
    _if_conditional213) {
        __result271__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1948), ((struct optional$2intbool*)(right_value186=optional$2intbool_initialize(((struct optional$2intbool*)(right_value185=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1948))),result_137,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value186;
        __freed_obj__ = 0;
        return __result271__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result272__ = __result_obj__ = ((struct optional$2intbool*)(right_value188=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value187=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1951)))),result_137,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = 0;
    return __result272__;
    __freed_obj__ = 0;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
void* right_value189;
void* right_value190;
struct optional$2_IO_FILEpbool* __result274__;
va_list args_139;
int __exception_result_var_b216;
int __exception_result_var_b217;
int result_140;
_Bool _if_conditional215;
void* right_value191;
void* right_value192;
struct optional$2_IO_FILEpbool* __result275__;
void* right_value193;
void* right_value194;
struct optional$2_IO_FILEpbool* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&args_139, 0, sizeof(va_list));
memset(&result_140, 0, sizeof(int));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    if(_if_conditional214=f==((void*)0)||msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional214) {
        __result274__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1957), ((struct optional$2_IO_FILEpbool*)(right_value190=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value189=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 1957))),f,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value189;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value190;
        __freed_obj__ = 0;
        return __result274__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    char msg2_138[1024*2*2*2];
    memset(&msg2_138, 0, sizeof(char)    *(1024*2*2*2)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1962),__builtin_va_start(args_139,msg),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1963),__exception_result_var_b216=vsnprintf(msg2_138,1024*2*2*2,msg,args_139), come_pop_stackframe(), __exception_result_var_b216);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1964),__builtin_va_end(args_139),come_pop_stackframe());
    __freed_obj__ = 0;
    result_140=(come_push_stackframe("libcomelang2.c", 1966),__exception_result_var_b217=fprintf(f,"%s",msg2_138), come_pop_stackframe(), __exception_result_var_b217);
    __freed_obj__ = 0;
    if(_if_conditional215=result_140<0,    __freed_obj__ = 0, 
    _if_conditional215) {
        __result275__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1969), ((struct optional$2intbool*)(right_value192=optional$2intbool_initialize(((struct optional$2intbool*)(right_value191=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1969))),result_140,(_Bool)0))));
        if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value192;
        __freed_obj__ = 0;
        return __result275__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result276__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value194=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value193=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 1972)))),f,(_Bool)1)));
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value193;
    __freed_obj__ = 0;
    return __result276__;
    __freed_obj__ = 0;
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __freed_obj__ = 0;
            __result273__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result273__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
void* right_value195;
void* right_value196;
struct optional$2intbool* __result277__;
struct _IO_FILE* f_141;
_Bool _if_conditional217;
struct _IO_FILE* __exception_result_var_b218;
struct _IO_FILE* __exception_result_var_b219;
_Bool _if_conditional218;
void* right_value197;
void* right_value198;
struct optional$2intbool* __result278__;
long int __exception_result_var_b220;
long int __exception_result_var_b221;
int result_142;
_Bool _if_conditional219;
void* right_value199;
void* right_value200;
struct optional$2intbool* __result279__;
int __exception_result_var_b222;
int result2_143;
_Bool _if_conditional220;
void* right_value201;
void* right_value202;
struct optional$2intbool* __result280__;
void* right_value203;
void* right_value204;
struct optional$2intbool* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&result_142, 0, sizeof(int));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&result2_143, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    if(_if_conditional216=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional216) {
        __result277__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1978), ((struct optional$2intbool*)(right_value196=optional$2intbool_initialize(((struct optional$2intbool*)(right_value195=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1978))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value195;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value196;
        __freed_obj__ = 0;
        return __result277__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional217=append,    __freed_obj__ = 0, 
    _if_conditional217) {
        f_141=(come_push_stackframe("libcomelang2.c", 1983),__exception_result_var_b218=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b218);
        __freed_obj__ = 0;
    }
    else {
        f_141=(come_push_stackframe("libcomelang2.c", 1986),__exception_result_var_b219=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b219);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional218=f_141==((void*)0),    __freed_obj__ = 0, 
    _if_conditional218) {
        __result278__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1990), ((struct optional$2intbool*)(right_value198=optional$2intbool_initialize(((struct optional$2intbool*)(right_value197=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1990))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value198;
        __freed_obj__ = 0;
        return __result278__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_142=(come_push_stackframe("libcomelang2.c", 1993),__exception_result_var_b221=fwrite(self,(come_push_stackframe("libcomelang2.c", 1993),__exception_result_var_b220=strlen(self), come_pop_stackframe(), __exception_result_var_b220),1,f_141), come_pop_stackframe(), __exception_result_var_b221);
    __freed_obj__ = 0;
    if(_if_conditional219=result_142<0,    __freed_obj__ = 0, 
    _if_conditional219) {
        __result279__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1996), ((struct optional$2intbool*)(right_value200=optional$2intbool_initialize(((struct optional$2intbool*)(right_value199=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1996))),result_142,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value199;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value200;
        __freed_obj__ = 0;
        return __result279__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_143=(come_push_stackframe("libcomelang2.c", 2001),__exception_result_var_b222=fclose(f_141), come_pop_stackframe(), __exception_result_var_b222);
    __freed_obj__ = 0;
    if(_if_conditional220=result2_143<0,    __freed_obj__ = 0, 
    _if_conditional220) {
        __result280__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2002), ((struct optional$2intbool*)(right_value202=optional$2intbool_initialize(((struct optional$2intbool*)(right_value201=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2002))),result2_143,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value201;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value202;
        __freed_obj__ = 0;
        return __result280__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value204=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value203=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2005)))),result_142,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    return __result281__;
    __freed_obj__ = 0;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
void* right_value205;
void* right_value206;
struct optional$2intbool* __result282__;
struct _IO_FILE* f_144;
_Bool _if_conditional222;
struct _IO_FILE* __exception_result_var_b223;
struct _IO_FILE* __exception_result_var_b224;
_Bool _if_conditional223;
void* right_value207;
void* right_value208;
struct optional$2intbool* __result283__;
long int __exception_result_var_b225;
long int __exception_result_var_b226;
int result_145;
_Bool _if_conditional224;
void* right_value209;
void* right_value210;
struct optional$2intbool* __result284__;
int __exception_result_var_b227;
int result2_146;
_Bool _if_conditional225;
void* right_value211;
void* right_value212;
struct optional$2intbool* __result285__;
void* right_value213;
void* right_value214;
struct optional$2intbool* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&result_145, 0, sizeof(int));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&result2_146, 0, sizeof(int));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    if(_if_conditional221=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional221) {
        __result282__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2011), ((struct optional$2intbool*)(right_value206=optional$2intbool_initialize(((struct optional$2intbool*)(right_value205=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2011))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value205;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value206;
        __freed_obj__ = 0;
        return __result282__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional222=append,    __freed_obj__ = 0, 
    _if_conditional222) {
        f_144=(come_push_stackframe("libcomelang2.c", 2016),__exception_result_var_b223=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b223);
        __freed_obj__ = 0;
    }
    else {
        f_144=(come_push_stackframe("libcomelang2.c", 2019),__exception_result_var_b224=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b224);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional223=f_144==((void*)0),    __freed_obj__ = 0, 
    _if_conditional223) {
        __result283__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2023), ((struct optional$2intbool*)(right_value208=optional$2intbool_initialize(((struct optional$2intbool*)(right_value207=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2023))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value207;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value208;
        __freed_obj__ = 0;
        return __result283__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_145=(come_push_stackframe("libcomelang2.c", 2026),__exception_result_var_b226=fwrite(self,(come_push_stackframe("libcomelang2.c", 2026),__exception_result_var_b225=strlen(self), come_pop_stackframe(), __exception_result_var_b225),1,f_144), come_pop_stackframe(), __exception_result_var_b226);
    __freed_obj__ = 0;
    if(_if_conditional224=result_145<0,    __freed_obj__ = 0, 
    _if_conditional224) {
        __result284__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2029), ((struct optional$2intbool*)(right_value210=optional$2intbool_initialize(((struct optional$2intbool*)(right_value209=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2029))),result_145,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value209;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value210;
        __freed_obj__ = 0;
        return __result284__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_146=(come_push_stackframe("libcomelang2.c", 2034),__exception_result_var_b227=fclose(f_144), come_pop_stackframe(), __exception_result_var_b227);
    __freed_obj__ = 0;
    if(_if_conditional225=result2_146<0,    __freed_obj__ = 0, 
    _if_conditional225) {
        __result285__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2035), ((struct optional$2intbool*)(right_value212=optional$2intbool_initialize(((struct optional$2intbool*)(right_value211=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2035))),result2_146,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value212;
        __freed_obj__ = 0;
        return __result285__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result286__ = __result_obj__ = ((struct optional$2intbool*)(right_value214=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value213=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2038)))),result_145,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    return __result286__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
void* right_value215;
char* __exception_result_var_b228;
void* right_value216;
void* right_value217;
struct optional$2charphbool* __result287__;
struct _IO_FILE* __exception_result_var_b229;
struct _IO_FILE* f_147;
_Bool _if_conditional227;
void* right_value218;
char* __exception_result_var_b230;
void* right_value219;
void* right_value220;
struct optional$2charphbool* __result288__;
void* right_value221;
void* right_value222;
struct buffer* __exception_result_var_b231;
struct buffer* buf_148;
_Bool _while_condtional13;
long int __exception_result_var_b232;
int size_150;
struct buffer* __exception_result_var_b233;
_Bool _if_conditional228;
void* right_value223;
char* __exception_result_var_b234;
char* result_151;
int __exception_result_var_b235;
int result2_152;
_Bool _if_conditional229;
void* right_value224;
char* __exception_result_var_b236;
void* right_value225;
void* right_value226;
struct optional$2charphbool* __result289__;
void* right_value227;
void* right_value228;
struct optional$2charphbool* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&f_147, 0, sizeof(struct _IO_FILE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&buf_148, 0, sizeof(struct buffer*));
memset(&size_150, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result2_152, 0, sizeof(int));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    if(_if_conditional226=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional226) {
        __result287__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2044), ((struct optional$2charphbool*)(right_value217=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value216=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2044))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2044),__exception_result_var_b228=((char*)(right_value215=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b228)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value216;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value217;
        __freed_obj__ = 0;
        return __result287__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_147=(come_push_stackframe("libcomelang2.c", 2047),__exception_result_var_b229=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b229);
    __freed_obj__ = 0;
    if(_if_conditional227=f_147==((void*)0),    __freed_obj__ = 0, 
    _if_conditional227) {
        __result288__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2050), ((struct optional$2charphbool*)(right_value220=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value219=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2050))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2050),__exception_result_var_b230=((char*)(right_value218=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b230)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value218;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value219;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value220;
        __freed_obj__ = 0;
        return __result288__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_148=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2053),__exception_result_var_b231=((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2053))), "libcomelang2.c", 2053)))))), come_pop_stackframe(), __exception_result_var_b231));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value222;
    __freed_obj__ = 0;
    while(_while_condtional13=1,    __freed_obj__ = 0, 
    _while_condtional13) {
        char buf2_149[8192];
        memset(&buf2_149, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_150=(come_push_stackframe("libcomelang2.c", 2058),__exception_result_var_b232=fread(buf2_149,1,8192,f_147), come_pop_stackframe(), __exception_result_var_b232);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 2060),__exception_result_var_b233=buffer_append(((struct buffer*)come_null_check(buf_148, "libcomelang2.c", 2060)),buf2_149,size_150), come_pop_stackframe(), __exception_result_var_b233);
        __freed_obj__ = 0;
        if(_if_conditional228=size_150<8192,        __freed_obj__ = 0, 
        _if_conditional228) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_151=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2067),__exception_result_var_b234=((char*)(right_value223=buffer_to_string(((struct buffer*)come_null_check(buf_148, "libcomelang2.c", 2067))))), come_pop_stackframe(), __exception_result_var_b234));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value223;
    __freed_obj__ = 0;
    result2_152=(come_push_stackframe("libcomelang2.c", 2071),__exception_result_var_b235=fclose(f_147), come_pop_stackframe(), __exception_result_var_b235);
    __freed_obj__ = 0;
    if(_if_conditional229=result2_152<0,    __freed_obj__ = 0, 
    _if_conditional229) {
        __result289__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2072), ((struct optional$2charphbool*)(right_value226=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value225=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2072))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2072),__exception_result_var_b236=((char*)(right_value224=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b236)),(_Bool)0))));
        if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value225;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value226;
        __freed_obj__ = 0;
        return __result289__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result290__ = __result_obj__ = ((struct optional$2charphbool*)(right_value228=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value227=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2075)))),(char*)come_increment_ref_count(result_151),(_Bool)1)));
    if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value227;
    __freed_obj__ = 0;
    return __result290__;
    __freed_obj__ = 0;
    if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
void* right_value229;
char* __exception_result_var_b237;
void* right_value230;
void* right_value231;
struct optional$2charphbool* __result291__;
struct _IO_FILE* __exception_result_var_b238;
struct _IO_FILE* f_153;
_Bool _if_conditional231;
void* right_value232;
char* __exception_result_var_b239;
void* right_value233;
void* right_value234;
struct optional$2charphbool* __result292__;
void* right_value235;
void* right_value236;
struct buffer* __exception_result_var_b240;
struct buffer* buf_154;
_Bool _while_condtional14;
long int __exception_result_var_b241;
int size_156;
struct buffer* __exception_result_var_b242;
_Bool _if_conditional232;
void* right_value237;
char* __exception_result_var_b243;
char* result_157;
int __exception_result_var_b244;
int result2_158;
_Bool _if_conditional233;
void* right_value238;
char* __exception_result_var_b245;
void* right_value239;
void* right_value240;
struct optional$2charphbool* __result293__;
void* right_value241;
void* right_value242;
struct optional$2charphbool* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&f_153, 0, sizeof(struct _IO_FILE*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&buf_154, 0, sizeof(struct buffer*));
memset(&size_156, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result2_158, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    if(_if_conditional230=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional230) {
        __result291__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2081), ((struct optional$2charphbool*)(right_value231=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value230=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2081))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2081),__exception_result_var_b237=((char*)(right_value229=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b237)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value231;
        __freed_obj__ = 0;
        return __result291__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_153=(come_push_stackframe("libcomelang2.c", 2084),__exception_result_var_b238=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b238);
    __freed_obj__ = 0;
    if(_if_conditional231=f_153==((void*)0),    __freed_obj__ = 0, 
    _if_conditional231) {
        __result292__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2087), ((struct optional$2charphbool*)(right_value234=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value233=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2087))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2087),__exception_result_var_b239=((char*)(right_value232=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b239)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value232;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value233;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value234);
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value234;
        __freed_obj__ = 0;
        return __result292__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_154=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2090),__exception_result_var_b240=((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2090))), "libcomelang2.c", 2090)))))), come_pop_stackframe(), __exception_result_var_b240));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value236;
    __freed_obj__ = 0;
    while(_while_condtional14=1,    __freed_obj__ = 0, 
    _while_condtional14) {
        char buf2_155[8192];
        memset(&buf2_155, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_156=(come_push_stackframe("libcomelang2.c", 2095),__exception_result_var_b241=fread(buf2_155,1,8192,f_153), come_pop_stackframe(), __exception_result_var_b241);
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 2097),__exception_result_var_b242=buffer_append(((struct buffer*)come_null_check(buf_154, "libcomelang2.c", 2097)),buf2_155,size_156), come_pop_stackframe(), __exception_result_var_b242);
        __freed_obj__ = 0;
        if(_if_conditional232=size_156<8192,        __freed_obj__ = 0, 
        _if_conditional232) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_157=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2104),__exception_result_var_b243=((char*)(right_value237=buffer_to_string(((struct buffer*)come_null_check(buf_154, "libcomelang2.c", 2104))))), come_pop_stackframe(), __exception_result_var_b243));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value237;
    __freed_obj__ = 0;
    result2_158=(come_push_stackframe("libcomelang2.c", 2108),__exception_result_var_b244=fclose(f_153), come_pop_stackframe(), __exception_result_var_b244);
    __freed_obj__ = 0;
    if(_if_conditional233=result2_158<0,    __freed_obj__ = 0, 
    _if_conditional233) {
        __result293__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2109), ((struct optional$2charphbool*)(right_value240=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value239=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2109))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2109),__exception_result_var_b245=((char*)(right_value238=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b245)),(_Bool)0))));
        if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value239;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value240;
        __freed_obj__ = 0;
        return __result293__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result294__ = __result_obj__ = ((struct optional$2charphbool*)(right_value242=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value241=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2112)))),(char*)come_increment_ref_count(result_157),(_Bool)1)));
    if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value241;
    __freed_obj__ = 0;
    return __result294__;
    __freed_obj__ = 0;
    if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value243;
void* right_value244;
struct list$1charph* __exception_result_var_b246;
struct list$1charph* result_159;
_Bool _if_conditional234;
void* right_value245;
void* right_value246;
struct optional$2list$1charphphbool* __result296__;
_Bool _while_condtional15;
char* __exception_result_var_b247;
_Bool _if_conditional236;
void* right_value247;
char* __exception_result_var_b248;
struct list$1charph* __exception_result_var_b249;
void* right_value248;
void* right_value249;
struct optional$2list$1charphphbool* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct list$1charph*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
    result_159=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2117),__exception_result_var_b246=((struct list$1charph*)(right_value244=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value243=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2117))), "libcomelang2.c", 2117)))))), come_pop_stackframe(), __exception_result_var_b246));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value244;
    __freed_obj__ = 0;
    if(_if_conditional234=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional234) {
        __result296__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2120), ((struct optional$2list$1charphphbool*)(right_value246=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value245=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2120))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)0))));
        if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value245;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value246;
        __freed_obj__ = 0;
        return __result296__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional15=1,    __freed_obj__ = 0, 
    _while_condtional15) {
        char buf_160[8192];
        memset(&buf_160, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        if(_if_conditional236=(come_push_stackframe("libcomelang2.c", 2126),__exception_result_var_b247=fgets(buf_160,8192,f), come_pop_stackframe(), __exception_result_var_b247)==((void*)0),        __freed_obj__ = 0, 
        _if_conditional236) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 2130),__exception_result_var_b249=list$1charph_push_back(((struct list$1charph*)come_null_check(result_159, "libcomelang2.c", 2130)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2130),__exception_result_var_b248=((char*)(right_value247=__builtin_string(buf_160))), come_pop_stackframe(), __exception_result_var_b248))), come_pop_stackframe(), __exception_result_var_b249);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result297__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value249=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value248=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2133)))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)1)));
    if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value248;
    __freed_obj__ = 0;
    return __result297__;
    __freed_obj__ = 0;
    if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 40))->v1;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 40))->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __freed_obj__ = 0;
            __result295__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result295__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional235=self!=((void*)0)&&((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional235) {
                    if(((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
void* right_value250;
void* right_value251;
struct optional$2intbool* __result298__;
struct _IO_FILE* __exception_result_var_b250;
struct _IO_FILE* f_161;
_Bool _if_conditional238;
_Bool _if_conditional239;
int __exception_result_var_b251;
void* right_value252;
void* right_value253;
struct optional$2intbool* __result299__;
int __exception_result_var_b252;
void* right_value254;
void* right_value255;
struct optional$2intbool* __result300__;
void* right_value256;
void* right_value257;
struct optional$2intbool* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&f_161, 0, sizeof(struct _IO_FILE*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
    if(_if_conditional237=path==((void*)0)||mode==((void*)0),    __freed_obj__ = 0, 
    _if_conditional237) {
        __result298__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2139), ((struct optional$2intbool*)(right_value251=optional$2intbool_initialize(((struct optional$2intbool*)(right_value250=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2139))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value250;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value251;
        __freed_obj__ = 0;
        return __result298__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_161=(come_push_stackframe("libcomelang2.c", 2141),__exception_result_var_b250=fopen(path,mode), come_pop_stackframe(), __exception_result_var_b250);
    __freed_obj__ = 0;
    if(_if_conditional238=f_161,    __freed_obj__ = 0, 
    _if_conditional238) {
        block(parent,f_161);
        __freed_obj__ = 0;
        if(_if_conditional239=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2145))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional239) {
            (come_push_stackframe("libcomelang2.c", 2146),__exception_result_var_b251=fclose(f_161), come_pop_stackframe(), __exception_result_var_b251);
            __freed_obj__ = 0;
            __result299__ = __result_obj__ = ((struct optional$2intbool*)(right_value253=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value252=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2147)))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value252;
            __freed_obj__ = 0;
            return __result299__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 2150),__exception_result_var_b252=fclose(f_161), come_pop_stackframe(), __exception_result_var_b252);
        __freed_obj__ = 0;
        __result300__ = __result_obj__ = ((struct optional$2intbool*)(right_value255=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value254=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2152)))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        return __result300__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result301__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2155), ((struct optional$2intbool*)(right_value257=optional$2intbool_initialize(((struct optional$2intbool*)(right_value256=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2155))),-1,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value257;
    __freed_obj__ = 0;
    return __result301__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
void* right_value258;
void* right_value259;
struct optional$2charphbool* __result302__;
int __exception_result_var_b253;
void* right_value260;
char* __exception_result_var_b254;
void* right_value261;
void* right_value262;
struct optional$2charphbool* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    if(_if_conditional240=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional240) {
        __result302__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2164), ((struct optional$2intbool*)(right_value259=optional$2intbool_initialize(((struct optional$2intbool*)(right_value258=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2164))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value259;
        __freed_obj__ = 0;
        return __result302__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2166),__exception_result_var_b253=puts(self), come_pop_stackframe(), __exception_result_var_b253);
    __freed_obj__ = 0;
    __result303__ = __result_obj__ = ((struct optional$2charphbool*)(right_value262=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value261=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2168)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2168),__exception_result_var_b254=((char*)(right_value260=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b254)),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value260;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value261;
    __freed_obj__ = 0;
    return __result303__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_print(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
void* right_value263;
void* right_value264;
struct optional$2charphbool* __result304__;
int __exception_result_var_b255;
void* right_value265;
char* __exception_result_var_b256;
void* right_value266;
void* right_value267;
struct optional$2charphbool* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
    if(_if_conditional241=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result304__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2174), ((struct optional$2intbool*)(right_value264=optional$2intbool_initialize(((struct optional$2intbool*)(right_value263=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2174))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value264;
        __freed_obj__ = 0;
        return __result304__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2176),__exception_result_var_b255=printf("%s",self), come_pop_stackframe(), __exception_result_var_b255);
    __freed_obj__ = 0;
    __result305__ = __result_obj__ = ((struct optional$2charphbool*)(right_value267=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value266=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2178)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2178),__exception_result_var_b256=((char*)(right_value265=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b256)),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value265;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value266;
    __freed_obj__ = 0;
    return __result305__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
void* right_value268;
char* __exception_result_var_b257;
void* right_value269;
void* right_value270;
struct optional$2charphbool* __result306__;
char* msg2_162;
va_list args_163;
int __exception_result_var_b258;
int __exception_result_var_b259;
void* right_value271;
char* __exception_result_var_b260;
void* right_value272;
void* right_value273;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&msg2_162, 0, sizeof(char*));
memset(&args_163, 0, sizeof(va_list));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
    if(_if_conditional242=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional242) {
        __result306__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2185), ((struct optional$2charphbool*)(right_value270=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value269=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2185))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2185),__exception_result_var_b257=((char*)(right_value268=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b257)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value269;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value270;
        __freed_obj__ = 0;
        return __result306__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2190),__builtin_va_start(args_163,self),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2191),__exception_result_var_b258=vasprintf(&msg2_162,self,args_163), come_pop_stackframe(), __exception_result_var_b258);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2192),__builtin_va_end(args_163),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2194),__exception_result_var_b259=printf("%s",msg2_162), come_pop_stackframe(), __exception_result_var_b259);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2196),free(msg2_162),come_pop_stackframe());
    __freed_obj__ = 0;
    __result307__ = __result_obj__ = ((struct optional$2charphbool*)(right_value273=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value272=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2198)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2198),__exception_result_var_b260=((char*)(right_value271=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b260)),(_Bool)1)));
    if((&args_163) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value272;
    __freed_obj__ = 0;
    return __result307__;
    __freed_obj__ = 0;
    if((&args_163) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
void* right_value274;
char* __exception_result_var_b261;
void* right_value275;
void* right_value276;
struct optional$2charphbool* __result308__;
char* msg2_164;
va_list args_165;
int __exception_result_var_b262;
int __exception_result_var_b263;
void* right_value277;
char* __exception_result_var_b264;
void* right_value278;
void* right_value279;
struct optional$2charphbool* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&msg2_164, 0, sizeof(char*));
memset(&args_165, 0, sizeof(va_list));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
    if(_if_conditional243=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional243) {
        __result308__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2204), ((struct optional$2charphbool*)(right_value276=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value275=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2204))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2204),__exception_result_var_b261=((char*)(right_value274=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b261)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value275;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value276;
        __freed_obj__ = 0;
        return __result308__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2209),__builtin_va_start(args_165,self),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2210),__exception_result_var_b262=vasprintf(&msg2_164,self,args_165), come_pop_stackframe(), __exception_result_var_b262);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2211),__builtin_va_end(args_165),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2213),__exception_result_var_b263=printf("%s",msg2_164), come_pop_stackframe(), __exception_result_var_b263);
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2215),free(msg2_164),come_pop_stackframe());
    __freed_obj__ = 0;
    __result309__ = __result_obj__ = ((struct optional$2charphbool*)(right_value279=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value278=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2217)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2217),__exception_result_var_b264=((char*)(right_value277=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b264)),(_Bool)1)));
    if((&args_165) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = 0;
    return __result309__;
    __freed_obj__ = 0;
    if((&args_165) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b265;
int __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("libcomelang2.c", 2222),__exception_result_var_b265=printf(msg,self), come_pop_stackframe(), __exception_result_var_b265);
    __freed_obj__ = 0;
    __result310__ = self;
    __freed_obj__ = 0;
    return __result310__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
void* right_value280;
char* __exception_result_var_b266;
void* right_value281;
void* right_value282;
struct optional$2charphbool* __result311__;
int __exception_result_var_b267;
void* right_value283;
char* __exception_result_var_b268;
void* right_value284;
void* right_value285;
struct optional$2charphbool* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
    if(_if_conditional244=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional244) {
        __result311__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2230), ((struct optional$2charphbool*)(right_value282=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value281=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2230))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2230),__exception_result_var_b266=((char*)(right_value280=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b266)),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value281;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value282;
        __freed_obj__ = 0;
        return __result311__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 2232),__exception_result_var_b267=puts(self), come_pop_stackframe(), __exception_result_var_b267);
    __freed_obj__ = 0;
    __result312__ = __result_obj__ = ((struct optional$2charphbool*)(right_value285=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value284=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2234)))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2234),__exception_result_var_b268=((char*)(right_value283=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b268)),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value284;
    __freed_obj__ = 0;
    return __result312__;
    __freed_obj__ = 0;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_166;
_Bool _for_condtionalA13;
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_166, 0, sizeof(int));
    for(
    i_166=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_166<self ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_166++ ,    __freed_obj__ = 0, 
    0    ){
        block(parent,i_166);
        __freed_obj__ = 0;
        if(_if_conditional245=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2245))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional245) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

