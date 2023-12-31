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
long int gSizeMemHeaders=0;
long int gNumMemHeaders=0;
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

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

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
static _Bool is_valid_object(char* mem);
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
    perror(msg);
    __freed_obj__ = 0;
    stackframe();
    __freed_obj__ = 0;
    exit(4);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1995))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2005))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2015))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2025))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2035))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
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
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int i_6;
_Bool _for_condtionalA2;
void* right_value11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
memset(&right_value11, 0, sizeof(void*));
    if(_if_conditional7=gComeStackFrameBuffer,    __freed_obj__ = 0, 
    _if_conditional7) {
        buffer_reset(gComeStackFrameBuffer);
        __freed_obj__ = 0;
        buffer_append_str(gComeStackFrameBuffer,((char*)(right_value10=xsprintf("%s %d\n",sname,sline))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        for(
        i_6=gNumComeStackFrame-2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_6>=0 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_6-- ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(gComeStackFrameBuffer,((char*)(right_value11=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
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
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    printf("%s",((char*)(right_value12=buffer_to_string(gComeStackFrameBuffer))));
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
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    i_7>=0 ,    __freed_obj__ = 0, 
    _for_condtionalA3;    i_7-- ,    __freed_obj__ = 0, 
    0    ){
        printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]);
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
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((char*)(right_value13=buffer_to_string(gComeStackFrameBuffer)));
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
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional8=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        printf("%s %d: null check error\n",sname,sline);
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional9=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional9) {
        printf("%s %d: null check error\n",sname,sline);
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional10=mem<begin,    __freed_obj__ = 0, 
    _if_conditional10) {
        printf("%s %d: range check error\n",sname,sline);
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional11=mem>=end,    __freed_obj__ = 0, 
    _if_conditional11) {
        printf("%s %d: range check error\n",sname,sline);
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result15__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result16__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional12=!self,    __freed_obj__ = 0, 
    _if_conditional12) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional13) {
            __result16__ = self;
            __freed_obj__ = 0;
            return __result16__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result17__ = self;
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

_Bool bool_value(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = self;
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}

int int_catch(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional14=self<0,    __freed_obj__ = 0, 
    _if_conditional14) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional15) {
            __result19__ = self;
            __freed_obj__ = 0;
            return __result19__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result20__ = self;
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}

int int_expect(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional16=self<0,    __freed_obj__ = 0, 
    _if_conditional16) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional17) {
            __result21__ = self;
            __freed_obj__ = 0;
            return __result21__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        stackframe();
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result22__ = self;
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

int int_value(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result23__ = self;
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

int int_except(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional18=self<0,    __freed_obj__ = 0, 
    _if_conditional18) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional19) {
            __result24__ = self;
            __freed_obj__ = 0;
            return __result24__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result25__ = self;
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional20=!self,    __freed_obj__ = 0, 
    _if_conditional20) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional21) {
            __result26__ = self;
            __freed_obj__ = 0;
            return __result26__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result27__ = self;
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional22=!self,    __freed_obj__ = 0, 
    _if_conditional22) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional23) {
            __result28__ = self;
            __freed_obj__ = 0;
            return __result28__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result29__ = self;
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}

void xassert(char* msg, _Bool test){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    __freed_obj__ = 0;
    if(_if_conditional24=!test,    __freed_obj__ = 0, 
    _if_conditional24) {
        puts("false");
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts("ok");
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 225))))))));
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
    if(_if_conditional25=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional25) {
        gSizeMemHeaders=1024;
        __freed_obj__ = 0;
        gMemHeaderTable=calloc(1,sizeof(struct sMemHeader)*gSizeMemHeaders);
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
_Bool _if_conditional26;
void* right_value16;
struct _IO_FILE* f_8;
_Bool _and_conditional1;
struct sMemHeader* it_9;
_Bool _while_condtional1;
_Bool _if_conditional27;
int i_10;
_Bool _for_condtionalA4;
_Bool _if_conditional28;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&f_8, 0, sizeof(struct _IO_FILE*));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&i_10, 0, sizeof(int));
    if(gComeStackFrameBuffer && !__freed_obj__) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional26=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional26) {
        if(_and_conditional1=f_8=fopen(((char*)(right_value16=xsprintf("memleak.log"))),"w"),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16),
        (right_value16 && right_value16 != __result_obj__ && !__freed_obj__) ? right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value16, 
        __freed_obj__ = 0, 
        _and_conditional1 == 0) {
            die("fopen");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_9=gMemHeaderTable;
        __freed_obj__ = 0;
        while(_while_condtional1=it_9<gMemHeaderTable+gSizeMemHeaders,        __freed_obj__ = 0, 
        _while_condtional1) {
            if(_if_conditional27=it_9->mem,            __freed_obj__ = 0, 
            _if_conditional27) {
                for(
                i_10=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA4=                i_10<10 ,                __freed_obj__ = 0, 
                _for_condtionalA4;                i_10++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional28=it_9->caller_sname[i_10],                    __freed_obj__ = 0, 
                    _if_conditional28) {
                        fprintf(f_8,"%s %d",it_9->caller_sname[i_10],it_9->caller_sline[i_10]);
                        __freed_obj__ = 0;
                        if(_if_conditional29=i_10==10-1,                        __freed_obj__ = 0, 
                        _if_conditional29) {
                        }
                        else {
                            fprintf(f_8,", ");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                fprintf(f_8,": detecting memory leak(%p)\n",(char*)it_9->mem);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_9++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_8);
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
long int new_size_11;
struct sMemHeader* new_table_12;
struct sMemHeader* it_13;
_Bool _while_condtional2;
_Bool _if_conditional30;
long int key_14;
struct sMemHeader* it2_15;
_Bool _while_condtional3;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&new_size_11, 0, sizeof(long int));
memset(&new_table_12, 0, sizeof(struct sMemHeader*));
memset(&it_13, 0, sizeof(struct sMemHeader*));
memset(&key_14, 0, sizeof(long int));
memset(&it2_15, 0, sizeof(struct sMemHeader*));
    new_size_11=gSizeMemHeaders*3;
    __freed_obj__ = 0;
    new_table_12=calloc(1,sizeof(struct sMemHeader)*new_size_11);
    __freed_obj__ = 0;
    it_13=gMemHeaderTable;
    __freed_obj__ = 0;
    while(_while_condtional2=it_13<gMemHeaderTable+gSizeMemHeaders,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional30=it_13->mem,        __freed_obj__ = 0, 
        _if_conditional30) {
            key_14=(long int)it_13->mem%(long int)new_size_11;
            __freed_obj__ = 0;
            it2_15=new_table_12+key_14;
            __freed_obj__ = 0;
            while(_while_condtional3=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional3) {
                if(_if_conditional31=it2_15->mem==((void*)0),                __freed_obj__ = 0, 
                _if_conditional31) {
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    it2_15++;
                    __freed_obj__ = 0;
                    if(_if_conditional32=it2_15==new_table_12+new_size_11,                    __freed_obj__ = 0, 
                    _if_conditional32) {
                        it2_15=new_table_12;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional33=it2_15==new_table_12+key_14,                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            puts("mem header unexpected error");
                            __freed_obj__ = 0;
                            stackframe();
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
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
    free(gMemHeaderTable);
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
_Bool _if_conditional34;
void* __result30__;
void* result_16;
_Bool _if_conditional35;
long int key_17;
struct sMemHeader* it_18;
_Bool _while_condtional4;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_16, 0, sizeof(void*));
memset(&key_17, 0, sizeof(long int));
memset(&it_18, 0, sizeof(struct sMemHeader*));
    if(_if_conditional34=!gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional34) {
        __result30__ = __result_obj__ = calloc(1,size);
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
    }
    else {
        result_16=calloc(1,size);
        __freed_obj__ = 0;
        if(_if_conditional35=gNumMemHeaders>=gSizeMemHeaders/3,        __freed_obj__ = 0, 
        _if_conditional35) {
            come_mem_header_rehash();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        key_17=(long int)result_16%gSizeMemHeaders;
        __freed_obj__ = 0;
        it_18=gMemHeaderTable+key_17;
        __freed_obj__ = 0;
        while(_while_condtional4=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional4) {
            if(_if_conditional36=it_18->mem==((void*)0),            __freed_obj__ = 0, 
            _if_conditional36) {
                break;
                __freed_obj__ = 0;
            }
            else {
                it_18++;
                __freed_obj__ = 0;
                if(_if_conditional37=it_18==gMemHeaderTable+gSizeMemHeaders,                __freed_obj__ = 0, 
                _if_conditional37) {
                    it_18=gMemHeaderTable;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional38=it_18==gMemHeaderTable+key_17,                    __freed_obj__ = 0, 
                    _if_conditional38) {
                        puts("mem header unexpected error");
                        __freed_obj__ = 0;
                        stackframe();
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_18->mem=result_16;
        __freed_obj__ = 0;
        come_push_stackframe(sname,sline);
        __freed_obj__ = 0;
        memcpy(it_18->caller_sname,gComeStackFrameSName,sizeof(char*)*10);
        __freed_obj__ = 0;
        memcpy(it_18->caller_sline,gComeStackFrameSLine,sizeof(int)*10);
        __freed_obj__ = 0;
        come_pop_stackframe();
        __freed_obj__ = 0;
        gNumMemHeaders++;
        __freed_obj__ = 0;
        __result31__ = __result_obj__ = result_16;
        __freed_obj__ = 0;
        return __result31__;
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
_Bool _if_conditional39;
_Bool _if_conditional40;
long int key_19;
struct sMemHeader* it_20;
_Bool _while_condtional5;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&key_19, 0, sizeof(long int));
memset(&it_20, 0, sizeof(struct sMemHeader*));
    if(_if_conditional39=mem,    __freed_obj__ = 0, 
    _if_conditional39) {
        if(_if_conditional40=!gComeMallocLib,        __freed_obj__ = 0, 
        _if_conditional40) {
            free(mem);
            __freed_obj__ = 0;
        }
        else {
            key_19=(long int)mem%gSizeMemHeaders;
            __freed_obj__ = 0;
            it_20=gMemHeaderTable+key_19;
            __freed_obj__ = 0;
            while(_while_condtional5=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional5) {
                if(_if_conditional41=it_20->mem==((void*)0),                __freed_obj__ = 0, 
                _if_conditional41) {
                    __freed_obj__ = 0;
                    return;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional42=it_20->mem==mem,                    __freed_obj__ = 0, 
                    _if_conditional42) {
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        it_20++;
                        __freed_obj__ = 0;
                        if(_if_conditional43=it_20==gMemHeaderTable+gSizeMemHeaders,                        __freed_obj__ = 0, 
                        _if_conditional43) {
                            it_20=gMemHeaderTable;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional44=it_20==gMemHeaderTable+key_19,                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                __freed_obj__ = 0;
                                return;
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
            memset(it_20,0,sizeof(struct sMemHeader));
            __freed_obj__ = 0;
            free(mem);
            __freed_obj__ = 0;
            gNumMemHeaders--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static _Bool is_valid_object(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool __result32__;
char* mem2_21;
long int key_22;
struct sMemHeader* it_23;
_Bool _while_condtional6;
_Bool _if_conditional47;
_Bool __result33__;
_Bool _if_conditional48;
_Bool __result34__;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool __result35__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem2_21, 0, sizeof(char*));
memset(&key_22, 0, sizeof(long int));
memset(&it_23, 0, sizeof(struct sMemHeader*));
    if(_if_conditional45=mem,    __freed_obj__ = 0, 
    _if_conditional45) {
        if(_if_conditional46=!gComeMallocLib,        __freed_obj__ = 0, 
        _if_conditional46) {
            __result32__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
        }
        else {
            mem2_21=mem-sizeof(long int)-sizeof(long int);
            __freed_obj__ = 0;
            key_22=(long int)mem2_21%gSizeMemHeaders;
            __freed_obj__ = 0;
            it_23=gMemHeaderTable+key_22;
            __freed_obj__ = 0;
            while(_while_condtional6=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional6) {
                if(_if_conditional47=it_23->mem==((void*)0),                __freed_obj__ = 0, 
                _if_conditional47) {
                    __result33__ = (_Bool)0;
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional48=it_23->mem==mem2_21,                    __freed_obj__ = 0, 
                    _if_conditional48) {
                        __result34__ = (_Bool)1;
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    else {
                        it_23++;
                        __freed_obj__ = 0;
                        if(_if_conditional49=it_23==gMemHeaderTable+gSizeMemHeaders,                        __freed_obj__ = 0, 
                        _if_conditional49) {
                            it_23=gMemHeaderTable;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional50=it_23==gMemHeaderTable+key_22,                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                __result35__ = (_Bool)0;
                                __freed_obj__ = 0;
                                return __result35__;
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
    __result36__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_24;
long int* ref_count_25;
long int* size2_26;
void* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_24, 0, sizeof(char*));
memset(&ref_count_25, 0, sizeof(long int*));
memset(&size2_26, 0, sizeof(long int*));
    mem_24=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    __freed_obj__ = 0;
    ref_count_25=(long int*)mem_24;
    __freed_obj__ = 0;
    *ref_count_25=0;
    __freed_obj__ = 0;
    size2_26=(long int*)(mem_24+sizeof(long int));
    __freed_obj__ = 0;
    *size2_26=size*count+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = mem_24+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}

void come_free_object(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
long int* ref_count_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_27, 0, sizeof(long int*));
    if(_if_conditional51=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional51) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional52=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional52) {
        if(_if_conditional53=!is_valid_object(mem),        __freed_obj__ = 0, 
        _if_conditional53) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_27=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    come_free_mem_of_heap_pool((char*)ref_count_27);
    __freed_obj__ = 0;
}

void* come_memdup(void* block, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
void* __result38__;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* __result39__;
char* mem_28;
long int* size_p_29;
long int size_30;
void* result_31;
void* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_28, 0, sizeof(char*));
memset(&size_p_29, 0, sizeof(long int*));
memset(&size_30, 0, sizeof(long int));
memset(&result_31, 0, sizeof(void*));
    if(_if_conditional54=!block,    __freed_obj__ = 0, 
    _if_conditional54) {
        __result38__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result38__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional55=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional55) {
        if(_if_conditional56=!is_valid_object(block),        __freed_obj__ = 0, 
        _if_conditional56) {
            __result39__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_28=(char*)block-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    size_p_29=(long int*)(mem_28+sizeof(long int));
    __freed_obj__ = 0;
    size_30=*size_p_29-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    result_31=come_calloc(1,size_30,sname,sline);
    __freed_obj__ = 0;
    memcpy(result_31,block,size_30);
    __freed_obj__ = 0;
    __result40__ = __result_obj__ = result_31;
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

void* come_increment_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
void* __result41__;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* __result42__;
long int* ref_count_32;
void* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_32, 0, sizeof(long int*));
    if(_if_conditional57=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional57) {
        __result41__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional58=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional58) {
        if(_if_conditional59=!is_valid_object(mem),        __freed_obj__ = 0, 
        _if_conditional59) {
            __result42__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_32=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (*ref_count_32)++;
    __freed_obj__ = 0;
    __result43__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}

void* come_print_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
void* __result44__;
_Bool _if_conditional61;
_Bool _if_conditional62;
void* __result45__;
long int* ref_count_33;
void* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_33, 0, sizeof(long int*));
    if(_if_conditional60=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional60) {
        __result44__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional61=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional61) {
        if(_if_conditional62=!is_valid_object(mem),        __freed_obj__ = 0, 
        _if_conditional62) {
            __result45__ = __result_obj__ = mem;
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_33=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    printf("ref_count %ld\n",*ref_count_33);
    __freed_obj__ = 0;
    __result46__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
void* __result47__;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* __result48__;
long int* ref_count_34;
_Bool _if_conditional66;
long int count_35;
_Bool _if_conditional67;
_Bool _if_conditional68;
void (*finalizer_36)(void*);
void* __result49__;
void* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_34, 0, sizeof(long int*));
memset(&count_35, 0, sizeof(long int));
memset(&finalizer_36, 0, sizeof(void (*)(void*)));
    if(_if_conditional63=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional63) {
        __result47__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result47__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional64=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional64) {
        if(_if_conditional65=!is_valid_object(mem),        __freed_obj__ = 0, 
        _if_conditional65) {
            __result48__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result48__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_34=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    if(_if_conditional66=!no_decrement,    __freed_obj__ = 0, 
    _if_conditional66) {
        (*ref_count_34)--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    count_35=*ref_count_34;
    __freed_obj__ = 0;
    if(_if_conditional67=!no_free&&(count_35<=0||force_delete_),    __freed_obj__ = 0, 
    _if_conditional67) {
        if(_if_conditional68=protocol_obj&&protocol_fun,        __freed_obj__ = 0, 
        _if_conditional68) {
            finalizer_36=protocol_fun;
            __freed_obj__ = 0;
            finalizer_36(protocol_obj);
            __freed_obj__ = 0;
            come_free_object(protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_free_object(mem);
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
void (*finalizer_37)(void*);
void (*finalizer_38)(void*);
long int* ref_count_39;
_Bool _if_conditional75;
long int count_40;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
void (*finalizer_41)(void*);
_Bool _if_conditional79;
void (*finalizer_42)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_37, 0, sizeof(void (*)(void*)));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&ref_count_39, 0, sizeof(long int*));
memset(&count_40, 0, sizeof(long int));
memset(&finalizer_41, 0, sizeof(void (*)(void*)));
memset(&finalizer_42, 0, sizeof(void (*)(void*)));
    if(_if_conditional69=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional69) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional70=gComeMallocLib,    __freed_obj__ = 0, 
    _if_conditional70) {
        if(_if_conditional71=!is_valid_object(mem),        __freed_obj__ = 0, 
        _if_conditional71) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional72=call_finalizer_only,    __freed_obj__ = 0, 
    _if_conditional72) {
        if(_if_conditional73=fun,        __freed_obj__ = 0, 
        _if_conditional73) {
            if(_if_conditional74=protocol_obj&&protocol_fun,            __freed_obj__ = 0, 
            _if_conditional74) {
                finalizer_37=protocol_fun;
                __freed_obj__ = 0;
                finalizer_37(protocol_obj);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            finalizer_38=fun;
            __freed_obj__ = 0;
            finalizer_38(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        ref_count_39=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        __freed_obj__ = 0;
        if(_if_conditional75=!no_decrement,        __freed_obj__ = 0, 
        _if_conditional75) {
            (*ref_count_39)--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        count_40=*ref_count_39;
        __freed_obj__ = 0;
        if(_if_conditional76=!no_free&&(count_40<=0||force_delete_),        __freed_obj__ = 0, 
        _if_conditional76) {
            if(_if_conditional77=mem,            __freed_obj__ = 0, 
            _if_conditional77) {
                if(_if_conditional78=protocol_obj&&protocol_fun,                __freed_obj__ = 0, 
                _if_conditional78) {
                    finalizer_41=protocol_fun;
                    __freed_obj__ = 0;
                    finalizer_41(protocol_obj);
                    __freed_obj__ = 0;
                    come_free_object(protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional79=fun,                __freed_obj__ = 0, 
                _if_conditional79) {
                    finalizer_42=fun;
                    __freed_obj__ = 0;
                    finalizer_42(mem);
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional80;
char* __result51__;
int len_43;
void* right_value17;
char* result_44;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_43, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
    if(_if_conditional80=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional80) {
        __result51__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_43=strlen(str)+1;
    __freed_obj__ = 0;
    result_44=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(len_43)), "libcomelang2.c", 611))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    strncpy(result_44,str,len_43);
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = result_44;
    if(result_44 && !__freed_obj__) { result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(result_44 && !__freed_obj__) { result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_45;
int i_46;
_Bool _for_condtionalA5;
_Bool _if_conditional81;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_45, 0, sizeof(_Bool));
memset(&i_46, 0, sizeof(int));
    found_45=(_Bool)0;
    __freed_obj__ = 0;
    for(
    i_46=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    i_46<len ,    __freed_obj__ = 0, 
    _for_condtionalA5;    i_46++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional81=array[i_46]==element,        __freed_obj__ = 0, 
        _if_conditional81) {
            found_45=(_Bool)1;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result53__ = found_45;
    __freed_obj__ = 0;
    return __result53__;
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
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    self->size=128;
    __freed_obj__ = 0;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value18=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 636))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    self->buf[0]=0;
    __freed_obj__ = 0;
    self->len=0;
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional82=self&&self->buf,    __freed_obj__ = 0, 
    _if_conditional82) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional83=self&&self->buf,    __freed_obj__ = 0, 
    _if_conditional83) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional84;
struct buffer* __result55__;
void* right_value19;
struct buffer* result_47;
void* right_value20;
char* __dec_obj7;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct buffer*));
memset(&right_value20, 0, sizeof(void*));
    if(_if_conditional84=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional84) {
        __result55__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 658))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19;
    __freed_obj__ = 0;
    result_47->size=self->size;
    __freed_obj__ = 0;
    __dec_obj7=result_47->buf;
    result_47->buf=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 661))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value20;
    __freed_obj__ = 0;
    result_47->len=self->len;
    __freed_obj__ = 0;
    memcpy(result_47->buf,self->buf,self->len);
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = result_47;
    if(result_47 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
    if(result_47 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional85;
int __result57__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional85=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional85) {
        __result57__ = 0;
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result58__ = self->len;
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

void buffer_reset(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional86=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional86) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self->buf[0]=0;
    __freed_obj__ = 0;
    self->len=0;
    __freed_obj__ = 0;
}

void buffer_trim(struct buffer* self, int len){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional87=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional87) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self->len-=len;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
struct buffer* __result59__;
_Bool _if_conditional89;
void* right_value21;
char* old_buf_48;
int old_len_49;
int new_size_50;
void* right_value22;
char* __dec_obj8;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&old_buf_48, 0, sizeof(char*));
memset(&old_len_49, 0, sizeof(int));
memset(&new_size_50, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional88) {
        __result59__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional89=self->len+size+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional89) {
        old_buf_48=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 700))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value21;
        __freed_obj__ = 0;
        memcpy(old_buf_48,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_49=self->len;
        __freed_obj__ = 0;
        new_size_50=(self->size+size+1)*2;
        __freed_obj__ = 0;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value22=(char*)come_calloc(1, sizeof(char)*(1*(new_size_50)), "libcomelang2.c", 704))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value22;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_48,old_len_49);
        __freed_obj__ = 0;
        self->buf[old_len_49]=0;
        __freed_obj__ = 0;
        self->size=new_size_50;
        __freed_obj__ = 0;
        if(old_buf_48 && !__freed_obj__) { old_buf_48 = come_decrement_ref_count(old_buf_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem,size);
    __freed_obj__ = 0;
    self->len+=size;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result60__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct buffer* __result61__;
_Bool _if_conditional91;
void* right_value23;
char* old_buf_51;
int old_len_52;
int new_size_53;
void* right_value24;
char* __dec_obj9;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&old_buf_51, 0, sizeof(char*));
memset(&old_len_52, 0, sizeof(int));
memset(&new_size_53, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
    if(_if_conditional90=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional90) {
        __result61__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional91=self->len+1+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional91) {
        old_buf_51=(char*)come_increment_ref_count(((char*)(right_value23=charp_clone(self->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23;
        __freed_obj__ = 0;
        old_len_52=self->len;
        __freed_obj__ = 0;
        new_size_53=(self->size+10+1)*2;
        __freed_obj__ = 0;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(new_size_53)), "libcomelang2.c", 727))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value24;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_51,old_len_52);
        __freed_obj__ = 0;
        self->buf[old_len_52]=0;
        __freed_obj__ = 0;
        self->size=new_size_53;
        __freed_obj__ = 0;
        if(old_buf_51 && !__freed_obj__) { old_buf_51 = come_decrement_ref_count(old_buf_51, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    self->buf[self->len]=c;
    __freed_obj__ = 0;
    self->len++;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
struct buffer* __result63__;
int size_54;
_Bool _if_conditional93;
void* right_value25;
char* old_buf_55;
int old_len_56;
int new_size_57;
void* right_value26;
char* __dec_obj10;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_54, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
memset(&old_buf_55, 0, sizeof(char*));
memset(&old_len_56, 0, sizeof(int));
memset(&new_size_57, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
    if(_if_conditional92=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional92) {
        __result63__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_54=strlen(mem);
    __freed_obj__ = 0;
    if(_if_conditional93=self->len+size_54+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional93) {
        old_buf_55=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 749))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = 0;
        memcpy(old_buf_55,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_56=self->len;
        __freed_obj__ = 0;
        new_size_57=(self->size+size_54+1)*2;
        __freed_obj__ = 0;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(new_size_57)), "libcomelang2.c", 753))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_55,old_len_56);
        __freed_obj__ = 0;
        self->buf[old_len_56]=0;
        __freed_obj__ = 0;
        self->size=new_size_57;
        __freed_obj__ = 0;
        if(old_buf_55 && !__freed_obj__) { old_buf_55 = come_decrement_ref_count(old_buf_55, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem,size_54);
    __freed_obj__ = 0;
    self->len+=size_54;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct buffer* __result65__;
int size_58;
_Bool _if_conditional95;
void* right_value27;
char* old_buf_59;
int old_len_60;
int new_size_61;
void* right_value28;
char* __dec_obj11;
struct buffer* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_58, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
memset(&old_buf_59, 0, sizeof(char*));
memset(&old_len_60, 0, sizeof(int));
memset(&new_size_61, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional94) {
        __result65__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_58=strlen(mem)+1;
    __freed_obj__ = 0;
    if(_if_conditional95=self->len+size_58+1+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional95) {
        old_buf_59=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 773))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27;
        __freed_obj__ = 0;
        memcpy(old_buf_59,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_60=self->len;
        __freed_obj__ = 0;
        new_size_61=(self->size+size_58+1)*2;
        __freed_obj__ = 0;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(new_size_61)), "libcomelang2.c", 777))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value28;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_59,old_len_60);
        __freed_obj__ = 0;
        self->buf[old_len_60]=0;
        __freed_obj__ = 0;
        self->size=new_size_61;
        __freed_obj__ = 0;
        if(old_buf_59 && !__freed_obj__) { old_buf_59 = come_decrement_ref_count(old_buf_59, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem,size_58);
    __freed_obj__ = 0;
    self->len+=size_58;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    self->len++;
    __freed_obj__ = 0;
    __result66__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct buffer* __result67__;
int* mem_62;
int size_63;
_Bool _if_conditional97;
void* right_value29;
char* old_buf_64;
int old_len_65;
int new_size_66;
void* right_value30;
char* __dec_obj12;
struct buffer* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_62, 0, sizeof(int*));
memset(&size_63, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
memset(&old_buf_64, 0, sizeof(char*));
memset(&old_len_65, 0, sizeof(int));
memset(&new_size_66, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
    if(_if_conditional96=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional96) {
        __result67__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_62=&value;
    __freed_obj__ = 0;
    size_63=sizeof(int);
    __freed_obj__ = 0;
    if(_if_conditional97=self->len+size_63+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional97) {
        old_buf_64=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 800))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value29;
        __freed_obj__ = 0;
        memcpy(old_buf_64,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_65=self->len;
        __freed_obj__ = 0;
        new_size_66=(self->size+size_63+1)*2;
        __freed_obj__ = 0;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(new_size_66)), "libcomelang2.c", 804))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value30;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_64,old_len_65);
        __freed_obj__ = 0;
        self->buf[old_len_65]=0;
        __freed_obj__ = 0;
        self->size=new_size_66;
        __freed_obj__ = 0;
        if(old_buf_64 && !__freed_obj__) { old_buf_64 = come_decrement_ref_count(old_buf_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem_62,size_63);
    __freed_obj__ = 0;
    self->len+=size_63;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result68__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_67;
int size_68;
_Bool _if_conditional98;
void* right_value31;
char* old_buf_69;
int old_len_70;
int new_size_71;
void* right_value32;
char* __dec_obj13;
struct buffer* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_67, 0, sizeof(long*));
memset(&size_68, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
memset(&old_buf_69, 0, sizeof(char*));
memset(&old_len_70, 0, sizeof(int));
memset(&new_size_71, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
    mem_67=&value;
    __freed_obj__ = 0;
    size_68=sizeof(long);
    __freed_obj__ = 0;
    if(_if_conditional98=self->len+size_68+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional98) {
        old_buf_69=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 823))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31;
        __freed_obj__ = 0;
        memcpy(old_buf_69,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_70=self->len;
        __freed_obj__ = 0;
        new_size_71=(self->size+size_68+1)*2;
        __freed_obj__ = 0;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(new_size_71)), "libcomelang2.c", 827))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value32;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_69,old_len_70);
        __freed_obj__ = 0;
        self->buf[old_len_70]=0;
        __freed_obj__ = 0;
        self->size=new_size_71;
        __freed_obj__ = 0;
        if(old_buf_69 && !__freed_obj__) { old_buf_69 = come_decrement_ref_count(old_buf_69, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem_67,size_68);
    __freed_obj__ = 0;
    self->len+=size_68;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result69__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
struct buffer* __result70__;
short short* mem_72;
int size_73;
_Bool _if_conditional100;
void* right_value33;
char* old_buf_74;
int old_len_75;
int new_size_76;
void* right_value34;
char* __dec_obj14;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_72, 0, sizeof(short short*));
memset(&size_73, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&old_buf_74, 0, sizeof(char*));
memset(&old_len_75, 0, sizeof(int));
memset(&new_size_76, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
    if(_if_conditional99=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional99) {
        __result70__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_72=&value;
    __freed_obj__ = 0;
    size_73=sizeof(short short);
    __freed_obj__ = 0;
    if(_if_conditional100=self->len+size_73+1+1>=self->size,    __freed_obj__ = 0, 
    _if_conditional100) {
        old_buf_74=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 850))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value33;
        __freed_obj__ = 0;
        memcpy(old_buf_74,self->buf,self->size);
        __freed_obj__ = 0;
        old_len_75=self->len;
        __freed_obj__ = 0;
        new_size_76=(self->size+size_73+1)*2;
        __freed_obj__ = 0;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_76)), "libcomelang2.c", 854))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value34;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_74,old_len_75);
        __freed_obj__ = 0;
        self->buf[old_len_75]=0;
        __freed_obj__ = 0;
        self->size=new_size_76;
        __freed_obj__ = 0;
        if(old_buf_74 && !__freed_obj__) { old_buf_74 = come_decrement_ref_count(old_buf_74, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(self->buf+self->len,mem_72,size_73);
    __freed_obj__ = 0;
    self->len+=size_73;
    __freed_obj__ = 0;
    self->buf[self->len]=0;
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

struct buffer* buffer_alignment(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
struct buffer* __result72__;
int len_77;
_Bool _if_conditional102;
int new_size_78;
void* right_value35;
char* __dec_obj15;
int i_79;
_Bool _for_condtionalA6;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_77, 0, sizeof(int));
memset(&new_size_78, 0, sizeof(int));
memset(&right_value35, 0, sizeof(void*));
memset(&i_79, 0, sizeof(int));
    if(_if_conditional101=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional101) {
        __result72__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result72__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_77=self->len;
    __freed_obj__ = 0;
    len_77=(len_77+3)&~3;
    __freed_obj__ = 0;
    if(_if_conditional102=len_77>=self->size,    __freed_obj__ = 0, 
    _if_conditional102) {
        new_size_78=(self->size+1+1)*2;
        __freed_obj__ = 0;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value35=(char*)come_calloc(1, sizeof(char)*(1*(new_size_78)), "libcomelang2.c", 878))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        self->size=new_size_78;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    i_79=self->len ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    i_79<len_77 ,    __freed_obj__ = 0, 
    _for_condtionalA6;    i_79++ ,    __freed_obj__ = 0, 
    0    ){
        self->buf[i_79]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self->len=len_77;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value36;
void* right_value37;
struct optional$2intbool* __result75__;
_Bool _if_conditional104;
void* right_value38;
void* right_value39;
struct optional$2intbool* __result76__;
_Bool _if_conditional105;
void* right_value40;
void* right_value41;
struct optional$2intbool* __result77__;
void* right_value42;
void* right_value43;
struct optional$2intbool* __result78__;
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
    if(_if_conditional103=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional103) {
        __result75__ = __result_obj__ = ((struct optional$2intbool*)(right_value37=optional$2intbool_initialize(((struct optional$2intbool*)(right_value36=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 894))),0,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value36;
        __freed_obj__ = 0;
        return __result75__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional104=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional104) {
            __result76__ = __result_obj__ = ((struct optional$2intbool*)(right_value39=optional$2intbool_initialize(((struct optional$2intbool*)(right_value38=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 897))),-1,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
            return __result76__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional105=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                __result77__ = __result_obj__ = ((struct optional$2intbool*)(right_value41=optional$2intbool_initialize(((struct optional$2intbool*)(right_value40=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 900))),1,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result78__ = __result_obj__ = ((struct optional$2intbool*)(right_value43=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value42=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 903)))),strcmp(left->buf,right->buf),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result74__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result74__;
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
struct buffer* result_80;
_Bool _if_conditional106;
struct buffer* __result79__;
struct buffer* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct buffer*));
    result_80=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 908))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value45;
    __freed_obj__ = 0;
    if(_if_conditional106=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional106) {
        __result79__ = __result_obj__ = result_80;
        if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(result_80,self);
    __freed_obj__ = 0;
    __result80__ = __result_obj__ = result_80;
    if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value46;
void* right_value47;
struct buffer* result_81;
_Bool _if_conditional107;
struct buffer* __result81__;
struct buffer* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct buffer*));
    result_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value47=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 921))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value46;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value47;
    __freed_obj__ = 0;
    if(_if_conditional107=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional107) {
        __result81__ = __result_obj__ = result_81;
        if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result81__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(result_81,self);
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = result_81;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
void* right_value48;
char* __result83__;
void* right_value49;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    if(_if_conditional108=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional108) {
        __result83__ = __result_obj__ = ((char*)(right_value48=__builtin_string("")));
        __freed_obj__ = 0;
        return __result83__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = ((char*)(right_value49=__builtin_string(self->buf)));
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

_Bool bool_equals(_Bool self, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = self==right;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

_Bool int_equals(int self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = self==right;
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

_Bool char_equals(char self, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = self==right;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

_Bool short_equals(short short self, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = self==right;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

_Bool long_equals(long self, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = self==right;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

_Bool size_t_equals(long int self, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = self==right;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool float_equals(float self, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = self==right;
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

_Bool double_equals(double self, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = self==right;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

struct optional$2boolbool* string_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
void* right_value50;
void* right_value51;
struct optional$2boolbool* __result94__;
_Bool _if_conditional110;
void* right_value52;
void* right_value53;
struct optional$2boolbool* __result95__;
_Bool _if_conditional111;
void* right_value54;
void* right_value55;
struct optional$2boolbool* __result96__;
void* right_value56;
void* right_value57;
struct optional$2boolbool* __result97__;
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
    if(_if_conditional109=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional109) {
        __result94__ = __result_obj__ = ((struct optional$2boolbool*)(right_value51=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value50=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 987))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional110=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional110) {
            __result95__ = __result_obj__ = ((struct optional$2boolbool*)(right_value53=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value52=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 990))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = 0;
            return __result95__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional111=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                __result96__ = __result_obj__ = ((struct optional$2boolbool*)(right_value55=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value54=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 993))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                return __result96__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result97__ = __result_obj__ = ((struct optional$2intbool*)(right_value57=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value56=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 996)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value56;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result93__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result93__;
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
_Bool _if_conditional112;
void* right_value58;
void* right_value59;
struct optional$2boolbool* __result98__;
_Bool _if_conditional113;
void* right_value60;
void* right_value61;
struct optional$2boolbool* __result99__;
_Bool _if_conditional114;
void* right_value62;
void* right_value63;
struct optional$2boolbool* __result100__;
void* right_value64;
void* right_value65;
struct optional$2boolbool* __result101__;
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
    if(_if_conditional112=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional112) {
        __result98__ = __result_obj__ = ((struct optional$2boolbool*)(right_value59=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value58=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1002))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value58;
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional113=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional113) {
            __result99__ = __result_obj__ = ((struct optional$2boolbool*)(right_value61=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value60=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1005))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60;
            __freed_obj__ = 0;
            return __result99__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional114=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                __result100__ = __result_obj__ = ((struct optional$2boolbool*)(right_value63=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value62=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1008))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                return __result100__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result101__ = __result_obj__ = ((struct optional$2intbool*)(right_value65=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value64=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1011)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value64;
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

_Bool string_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
_Bool __result102__;
_Bool _if_conditional116;
_Bool __result103__;
_Bool _if_conditional117;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional115=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional115) {
        __result102__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result102__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional116=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            __result103__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result103__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional117=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                __result104__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result105__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

_Bool charp_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool __result106__;
_Bool _if_conditional119;
_Bool __result107__;
_Bool _if_conditional120;
_Bool __result108__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional118=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional118) {
        __result106__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional119=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            __result107__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional120=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional120) {
                __result108__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result108__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result109__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

_Bool string_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
_Bool __result110__;
_Bool _if_conditional122;
_Bool __result111__;
_Bool _if_conditional123;
_Bool __result112__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional121=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional121) {
        __result110__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional122=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            __result111__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional123=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional123) {
                __result112__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result112__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result113__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

_Bool charp_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
_Bool __result114__;
_Bool _if_conditional125;
_Bool __result115__;
_Bool _if_conditional126;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional124=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional124) {
        __result114__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional125=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            __result115__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result115__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional126=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional126) {
                __result116__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result117__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

char* charp_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
void* right_value66;
char* __result118__;
int len_82;
void* right_value67;
char* result_83;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&len_82, 0, sizeof(int));
memset(&right_value67, 0, sizeof(void*));
memset(&result_83, 0, sizeof(char*));
    if(_if_conditional127=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional127) {
        __result118__ = __result_obj__ = ((char*)(right_value66=__builtin_string("")));
        __freed_obj__ = 0;
        return __result118__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_82=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_83=(char*)come_increment_ref_count(((char*)(right_value67=(char*)come_calloc(1, sizeof(char)*(1*(len_82+1)), "libcomelang2.c", 1082))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    strncpy(result_83,self,len_82+1);
    __freed_obj__ = 0;
    strncat(result_83,right,len_82+1);
    __freed_obj__ = 0;
    __result119__ = __result_obj__ = result_83;
    if(result_83 && !__freed_obj__) { result_83 = come_decrement_ref_count(result_83, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(result_83 && !__freed_obj__) { result_83 = come_decrement_ref_count(result_83, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
void* right_value68;
char* __result120__;
int len_84;
void* right_value69;
char* result_85;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&len_84, 0, sizeof(int));
memset(&right_value69, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
    if(_if_conditional128=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional128) {
        __result120__ = __result_obj__ = ((char*)(right_value68=__builtin_string("")));
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_84=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_85=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(len_84+1)), "libcomelang2.c", 1097))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value69;
    __freed_obj__ = 0;
    strncpy(result_85,self,len_84+1);
    __freed_obj__ = 0;
    strncat(result_85,right,len_84+1);
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = result_85;
    if(result_85 && !__freed_obj__) { result_85 = come_decrement_ref_count(result_85, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(result_85 && !__freed_obj__) { result_85 = come_decrement_ref_count(result_85, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
void* right_value70;
char* __result122__;
void* right_value71;
void* right_value72;
struct buffer* buf_86;
int i_87;
_Bool _for_condtionalA7;
void* right_value73;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&buf_86, 0, sizeof(struct buffer*));
memset(&i_87, 0, sizeof(int));
memset(&right_value73, 0, sizeof(void*));
    if(_if_conditional129=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional129) {
        __result122__ = __result_obj__ = ((char*)(right_value70=__builtin_string("")));
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_86=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1110))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value72;
    __freed_obj__ = 0;
    for(
    i_87=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    i_87<right ,    __freed_obj__ = 0, 
    _for_condtionalA7;    i_87++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(buf_86,self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result123__ = __result_obj__ = ((char*)(right_value73=buffer_to_string(buf_86)));
    if(buf_86 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
    if(buf_86 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value74;
char* __result124__;
void* right_value75;
void* right_value76;
struct buffer* buf_88;
int i_89;
_Bool _for_condtionalA8;
void* right_value77;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&buf_88, 0, sizeof(struct buffer*));
memset(&i_89, 0, sizeof(int));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional130=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional130) {
        __result124__ = __result_obj__ = ((char*)(right_value74=__builtin_string("")));
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1124))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value75;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value76;
    __freed_obj__ = 0;
    for(
    i_89=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    i_89<right ,    __freed_obj__ = 0, 
    _for_condtionalA8;    i_89++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(buf_88,self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result125__ = __result_obj__ = ((char*)(right_value77=buffer_to_string(buf_88)));
    if(buf_88 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
    if(buf_88 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = (int_get_hash_key(((int)value)));
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

unsigned int char_get_hash_key(char value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = value;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

unsigned int short_get_hash_key(short int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = value;
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

unsigned int int_get_hash_key(int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = value;
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

unsigned int long_get_hash_key(long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = value;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

unsigned int size_t_get_hash_key(long int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = value;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

unsigned int float_get_hash_key(float value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

unsigned int double_get_hash_key(double value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

unsigned int string_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
unsigned int __result134__;
int result_90;
char* p_91;
_Bool _while_condtional7;
unsigned int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(int));
memset(&p_91, 0, sizeof(char*));
    if(_if_conditional131=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional131) {
        __result134__ = 0;
        __freed_obj__ = 0;
        return __result134__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_90=0;
    __freed_obj__ = 0;
    p_91=value;
    __freed_obj__ = 0;
    while(_while_condtional7=*p_91,    __freed_obj__ = 0, 
    _while_condtional7) {
        result_90+=(*p_91);
        __freed_obj__ = 0;
        p_91++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result135__ = result_90;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

unsigned int charp_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
unsigned int __result136__;
int result_92;
char* p_93;
_Bool _while_condtional8;
unsigned int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(int));
memset(&p_93, 0, sizeof(char*));
    if(_if_conditional132=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional132) {
        __result136__ = 0;
        __freed_obj__ = 0;
        return __result136__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_92=0;
    __freed_obj__ = 0;
    p_93=value;
    __freed_obj__ = 0;
    while(_while_condtional8=*p_93,    __freed_obj__ = 0, 
    _while_condtional8) {
        result_92+=(*p_93);
        __freed_obj__ = 0;
        p_93++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result137__ = result_92;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

_Bool bool_clone(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = self;
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

char char_clone(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = self;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

short int short_clone(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = self;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

int int_clone(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = self;
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

long int long_clone(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = self;
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

long int size_t_clone(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = self;
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

double double_clone(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = self;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

float float_clone(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = self;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

char* charp_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
char* __result146__;
void* right_value78;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional133=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional133) {
        __result146__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result146__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

char* string_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* __result148__;
void* right_value79;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
    if(_if_conditional134=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional134) {
        __result148__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result149__ = __result_obj__ = ((char*)(right_value79=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

_Bool xiswalpha(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_94;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result150__ = result_94;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

_Bool xiswblank(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

_Bool xiswdigit(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result152__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

_Bool xiswalnum(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = xiswalpha(c)||xiswdigit(c);
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

_Bool xisalpha(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_95;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_95, 0, sizeof(_Bool));
    result_95=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result154__ = result_95;
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

_Bool xisblank(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result155__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

_Bool xisdigit(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

_Bool xisalnum(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result157__ = xisalpha(c)||xisdigit(c);
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool xisascii(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_96;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(_Bool));
    result_96=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result158__ = result_96;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

_Bool xiswascii(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_97;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(_Bool));
    result_97=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result159__ = result_97;
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

int string_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
int __result160__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional135=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional135) {
        __result160__ = 0;
        __freed_obj__ = 0;
        return __result160__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result161__ = strlen(str);
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

int charp_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
int __result162__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional136=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional136) {
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

char* string_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
void* right_value80;
char* __result164__;
int len_98;
void* right_value81;
char* result_99;
int i_100;
_Bool _for_condtionalA9;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&right_value81, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&i_100, 0, sizeof(int));
    if(_if_conditional137=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional137) {
        __result164__ = __result_obj__ = ((char*)(right_value80=__builtin_string("")));
        __freed_obj__ = 0;
        return __result164__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_98=strlen(str);
    __freed_obj__ = 0;
    result_99=(char*)come_increment_ref_count(((char*)(right_value81=(char*)come_calloc(1, sizeof(char)*(1*(len_98+1)), "libcomelang2.c", 1341))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81;
    __freed_obj__ = 0;
    for(
    i_100=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    i_100<len_98 ,    __freed_obj__ = 0, 
    _for_condtionalA9;    i_100++ ,    __freed_obj__ = 0, 
    0    ){
        result_99[i_100]=str[len_98-i_100-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_99[len_98]=0;
    __freed_obj__ = 0;
    __result165__ = __result_obj__ = result_99;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
void* right_value82;
char* __result166__;
int len_101;
void* right_value83;
char* result_102;
int i_103;
_Bool _for_condtionalA10;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&len_101, 0, sizeof(int));
memset(&right_value83, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
memset(&i_103, 0, sizeof(int));
    if(_if_conditional138=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional138) {
        __result166__ = __result_obj__ = ((char*)(right_value82=__builtin_string("")));
        __freed_obj__ = 0;
        return __result166__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_101=strlen(str);
    __freed_obj__ = 0;
    result_102=(char*)come_increment_ref_count(((char*)(right_value83=(char*)come_calloc(1, sizeof(char)*(1*(len_101+1)), "libcomelang2.c", 1358))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    for(
    i_103=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA10=    i_103<len_101 ,    __freed_obj__ = 0, 
    _for_condtionalA10;    i_103++ ,    __freed_obj__ = 0, 
    0    ){
        result_102[i_103]=str[len_101-i_103-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_102[len_101]=0;
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = result_102;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
void* right_value84;
char* __result168__;
int len_104;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
void* right_value85;
void* right_value86;
char* __result169__;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value87;
char* __result170__;
_Bool _if_conditional146;
void* right_value88;
char* __result171__;
void* right_value89;
char* result_105;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional139=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional139) {
        __result168__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        __freed_obj__ = 0;
        return __result168__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_104=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional140=head<0,    __freed_obj__ = 0, 
    _if_conditional140) {
        head+=len_104;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional141=tail<0,    __freed_obj__ = 0, 
    _if_conditional141) {
        tail+=len_104+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional142=head>tail,    __freed_obj__ = 0, 
    _if_conditional142) {
        __result169__ = __result_obj__ = ((char*)(right_value86=string_reverse(((char*)(right_value85=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value85;
        __freed_obj__ = 0;
        return __result169__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional143=head<0,    __freed_obj__ = 0, 
    _if_conditional143) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional144=tail>=len_104,    __freed_obj__ = 0, 
    _if_conditional144) {
        tail=len_104;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional145=head==tail,    __freed_obj__ = 0, 
    _if_conditional145) {
        __result170__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        __freed_obj__ = 0;
        return __result170__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional146=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional146) {
        __result171__ = __result_obj__ = ((char*)(right_value88=__builtin_string("")));
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_105=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1403))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    memcpy(result_105,str+head,tail-head);
    __freed_obj__ = 0;
    result_105[tail-head]=0;
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = result_105;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional147;
void* right_value90;
char* __result173__;
int len_106;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value91;
void* right_value92;
char* __result174__;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value93;
char* __result175__;
_Bool _if_conditional154;
void* right_value94;
char* __result176__;
void* right_value95;
char* result_107;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&len_106, 0, sizeof(int));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
    if(_if_conditional147=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional147) {
        __result173__ = __result_obj__ = ((char*)(right_value90=__builtin_string("")));
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_106=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional148=head<0,    __freed_obj__ = 0, 
    _if_conditional148) {
        head+=len_106;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional149=tail<0,    __freed_obj__ = 0, 
    _if_conditional149) {
        tail+=len_106+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional150=head>tail,    __freed_obj__ = 0, 
    _if_conditional150) {
        __result174__ = __result_obj__ = ((char*)(right_value92=string_reverse(((char*)(right_value91=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value91;
        __freed_obj__ = 0;
        return __result174__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional151=head<0,    __freed_obj__ = 0, 
    _if_conditional151) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional152=tail>=len_106,    __freed_obj__ = 0, 
    _if_conditional152) {
        tail=len_106;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional153=head==tail,    __freed_obj__ = 0, 
    _if_conditional153) {
        __result175__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        __freed_obj__ = 0;
        return __result175__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional154=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional154) {
        __result176__ = __result_obj__ = ((char*)(right_value94=__builtin_string("")));
        __freed_obj__ = 0;
        return __result176__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_107=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1446))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    memcpy(result_107,str+head,tail-head);
    __freed_obj__ = 0;
    result_107[tail-head]=0;
    __freed_obj__ = 0;
    __result177__ = __result_obj__ = result_107;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result177__;
    __freed_obj__ = 0;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
void* right_value96;
char* __result178__;
int len_108;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value97;
void* right_value98;
char* __result179__;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value99;
char* __result180__;
_Bool _if_conditional162;
void* right_value100;
char* __result181__;
void* right_value101;
char* result_109;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&len_108, 0, sizeof(int));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
    if(_if_conditional155=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional155) {
        __result178__ = __result_obj__ = ((char*)(right_value96=__builtin_string("")));
        __freed_obj__ = 0;
        return __result178__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_108=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional156=head<0,    __freed_obj__ = 0, 
    _if_conditional156) {
        head+=len_108;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional157=tail<0,    __freed_obj__ = 0, 
    _if_conditional157) {
        tail+=len_108+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional158=head>tail,    __freed_obj__ = 0, 
    _if_conditional158) {
        __result179__ = __result_obj__ = ((char*)(right_value98=string_reverse(((char*)(right_value97=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value97;
        __freed_obj__ = 0;
        return __result179__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional159=head<0,    __freed_obj__ = 0, 
    _if_conditional159) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional160=tail>=len_108,    __freed_obj__ = 0, 
    _if_conditional160) {
        tail=len_108;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional161=head==tail,    __freed_obj__ = 0, 
    _if_conditional161) {
        __result180__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        __freed_obj__ = 0;
        return __result180__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional162=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional162) {
        __result181__ = __result_obj__ = ((char*)(right_value100=__builtin_string("")));
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_109=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1489))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    memcpy(result_109,str+head,tail-head);
    __freed_obj__ = 0;
    result_109[tail-head]=0;
    __freed_obj__ = 0;
    __result182__ = __result_obj__ = result_109;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result182__;
    __freed_obj__ = 0;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
void* right_value102;
char* __result183__;
int len_110;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value103;
void* right_value104;
char* __result184__;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value105;
char* __result185__;
_Bool _if_conditional170;
void* right_value106;
char* __result186__;
void* right_value107;
char* result_111;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&len_110, 0, sizeof(int));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
    if(_if_conditional163=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional163) {
        __result183__ = __result_obj__ = ((char*)(right_value102=__builtin_string("")));
        __freed_obj__ = 0;
        return __result183__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_110=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional164=head<0,    __freed_obj__ = 0, 
    _if_conditional164) {
        head+=len_110;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional165=tail<0,    __freed_obj__ = 0, 
    _if_conditional165) {
        tail+=len_110+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional166=head>tail,    __freed_obj__ = 0, 
    _if_conditional166) {
        __result184__ = __result_obj__ = ((char*)(right_value104=string_reverse(((char*)(right_value103=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = 0;
        return __result184__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional167=head<0,    __freed_obj__ = 0, 
    _if_conditional167) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional168=tail>=len_110,    __freed_obj__ = 0, 
    _if_conditional168) {
        tail=len_110;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional169=head==tail,    __freed_obj__ = 0, 
    _if_conditional169) {
        __result185__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        __freed_obj__ = 0;
        return __result185__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional170=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional170) {
        __result186__ = __result_obj__ = ((char*)(right_value106=__builtin_string("")));
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_111=(char*)come_increment_ref_count(((char*)(right_value107=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1532))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    memcpy(result_111,str+head,tail-head);
    __freed_obj__ = 0;
    result_111[tail-head]=0;
    __freed_obj__ = 0;
    __result187__ = __result_obj__ = result_111;
    if(result_111 && !__freed_obj__) { result_111 = come_decrement_ref_count(result_111, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result187__;
    __freed_obj__ = 0;
    if(result_111 && !__freed_obj__) { result_111 = come_decrement_ref_count(result_111, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
void* right_value108;
char* __result188__;
va_list args_112;
char* result_113;
int len_114;
_Bool _if_conditional172;
void* right_value109;
char* __result189__;
void* right_value110;
char* result2_115;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
memset(&args_112, 0, sizeof(va_list));
memset(&result_113, 0, sizeof(char*));
memset(&len_114, 0, sizeof(int));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result2_115, 0, sizeof(char*));
    if(_if_conditional171=msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional171) {
        __result188__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        __freed_obj__ = 0;
        return __result188__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_112,msg);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    len_114=vasprintf(&result_113,msg,args_112);
    __freed_obj__ = 0;
    __builtin_va_end(args_112);
    __freed_obj__ = 0;
    if(_if_conditional172=len_114<0,    __freed_obj__ = 0, 
    _if_conditional172) {
        __result189__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
        if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result189__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_115=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(result_113))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    free(result_113);
    __freed_obj__ = 0;
    __result190__ = __result_obj__ = result2_115;
    if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_115 && !__freed_obj__) { result2_115 = come_decrement_ref_count(result2_115, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result190__;
    __freed_obj__ = 0;
    if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_115 && !__freed_obj__) { result2_115 = come_decrement_ref_count(result2_115, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional173;
void* right_value111;
char* __result191__;
int len_116;
_Bool _if_conditional174;
void* right_value112;
char* __result192__;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value113;
char* __result193__;
_Bool _if_conditional179;
void* right_value114;
char* sub_str_117;
void* right_value115;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&len_116, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&sub_str_117, 0, sizeof(char*));
memset(&right_value115, 0, sizeof(void*));
    if(_if_conditional173=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional173) {
        __result191__ = __result_obj__ = ((char*)(right_value111=__builtin_string("")));
        __freed_obj__ = 0;
        return __result191__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_116=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional174=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional174) {
        __result192__ = __result_obj__ = ((char*)(right_value112=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result192__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional175=head<0,    __freed_obj__ = 0, 
    _if_conditional175) {
        head+=len_116;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional176=tail<0,    __freed_obj__ = 0, 
    _if_conditional176) {
        tail+=len_116+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional177=head<0,    __freed_obj__ = 0, 
    _if_conditional177) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional178=tail<0,    __freed_obj__ = 0, 
    _if_conditional178) {
        __result193__ = __result_obj__ = ((char*)(right_value113=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result193__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional179=tail>=len_116,    __freed_obj__ = 0, 
    _if_conditional179) {
        tail=len_116;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_117=(char*)come_increment_ref_count(((char*)(right_value114=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_117,string_length(sub_str_117)+1);
    __freed_obj__ = 0;
    __result194__ = __result_obj__ = ((char*)(right_value115=__builtin_string(str)));
    if(sub_str_117 && !__freed_obj__) { sub_str_117 = come_decrement_ref_count(sub_str_117, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
    if(sub_str_117 && !__freed_obj__) { sub_str_117 = come_decrement_ref_count(sub_str_117, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
void* right_value116;
char* __result195__;
int len_118;
_Bool _if_conditional181;
void* right_value117;
char* __result196__;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value118;
char* __result197__;
_Bool _if_conditional186;
void* right_value119;
char* sub_str_119;
void* right_value120;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&sub_str_119, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
    if(_if_conditional180=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional180) {
        __result195__ = __result_obj__ = ((char*)(right_value116=__builtin_string("")));
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_118=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional181=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional181) {
        __result196__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result196__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional182=head<0,    __freed_obj__ = 0, 
    _if_conditional182) {
        head+=len_118;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional183=tail<0,    __freed_obj__ = 0, 
    _if_conditional183) {
        tail+=len_118+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional184=head<0,    __freed_obj__ = 0, 
    _if_conditional184) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional185=tail<0,    __freed_obj__ = 0, 
    _if_conditional185) {
        __result197__ = __result_obj__ = ((char*)(right_value118=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result197__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional186=tail>=len_118,    __freed_obj__ = 0, 
    _if_conditional186) {
        tail=len_118;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_119=(char*)come_increment_ref_count(((char*)(right_value119=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_119,string_length(sub_str_119)+1);
    __freed_obj__ = 0;
    __result198__ = __result_obj__ = ((char*)(right_value120=__builtin_string(str)));
    if(sub_str_119 && !__freed_obj__) { sub_str_119 = come_decrement_ref_count(sub_str_119, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result198__;
    __freed_obj__ = 0;
    if(sub_str_119 && !__freed_obj__) { sub_str_119 = come_decrement_ref_count(sub_str_119, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value121;
void* right_value122;
struct list$1charph* __result200__;
void* right_value123;
void* right_value124;
struct list$1charph* result_122;
void* right_value125;
void* right_value126;
struct buffer* str_123;
int i_124;
_Bool _for_condtionalA11;
_Bool _if_conditional189;
void* right_value130;
_Bool _if_conditional192;
void* right_value131;
struct list$1charph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&str_123, 0, sizeof(struct buffer*));
memset(&i_124, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    if(_if_conditional187=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional187) {
        __result200__ = __result_obj__ = ((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1643)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
        return __result200__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_122=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1646))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value124;
    __freed_obj__ = 0;
    str_123=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value126=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1648))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value125;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    for(
    i_124=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    i_124<charp_length(self) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    i_124++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional189=self[i_124]==c,        __freed_obj__ = 0, 
        _if_conditional189) {
            list$1charph_push_back(result_122,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str_123->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value130;
            __freed_obj__ = 0;
            buffer_reset(str_123);
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(str_123,self[i_124]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional192=buffer_length(str_123)!=0,    __freed_obj__ = 0, 
    _if_conditional192) {
        list$1charph_push_back(result_122,(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(str_123->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result202__ = __result_obj__ = result_122;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result202__;
    __freed_obj__ = 0;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            __freed_obj__ = 0;
            self->tail=((void*)0);
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __result199__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result199__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_120;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1charph*));
                it_120=self->head;
                __freed_obj__ = 0;
                while(_while_condtional9=it_120!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional9) {
                    prev_it_121=it_120;
                    __freed_obj__ = 0;
                    it_120=it_120->next;
                    __freed_obj__ = 0;
                    if(prev_it_121 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional188=self!=((void*)0)&&self->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional188) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional190;
void* right_value127;
struct list_item$1charph* litem_125;
char* __dec_obj16;
_Bool _if_conditional191;
void* right_value128;
struct list_item$1charph* litem_126;
char* __dec_obj17;
void* right_value129;
struct list_item$1charph* litem_127;
char* __dec_obj18;
struct list$1charph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1charph*));
memset(&right_value129, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional190=self->len==0,                __freed_obj__ = 0, 
                _if_conditional190) {
                    litem_125=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value127;
                    __freed_obj__ = 0;
                    litem_125->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_125->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj16=litem_125->item;
                    litem_125->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    self->tail=litem_125;
                    __freed_obj__ = 0;
                    self->head=litem_125;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional191=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional191) {
                        litem_126=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        litem_126->prev=self->head;
                        __freed_obj__ = 0;
                        litem_126->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj17=litem_126->item;
                        litem_126->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail=litem_126;
                        __freed_obj__ = 0;
                        self->head->next=litem_126;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129;
                        __freed_obj__ = 0;
                        litem_127->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_127->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj18=litem_127->item;
                        litem_127->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail->next=litem_127;
                        __freed_obj__ = 0;
                        self->tail=litem_127;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result201__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result201__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
void* right_value132;
void* right_value133;
struct list$1charph* __result203__;
void* right_value134;
void* right_value135;
struct list$1charph* result_128;
void* right_value136;
void* right_value137;
struct buffer* str_129;
int i_130;
_Bool _for_condtionalA12;
_Bool _if_conditional194;
void* right_value138;
_Bool _if_conditional195;
void* right_value139;
struct list$1charph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct list$1charph*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&str_129, 0, sizeof(struct buffer*));
memset(&i_130, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    if(_if_conditional193=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional193) {
        __result203__ = __result_obj__ = ((struct list$1charph*)(right_value133=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value132=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1669)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = 0;
        return __result203__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_128=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1672))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value135;
    __freed_obj__ = 0;
    str_129=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1674))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value137;
    __freed_obj__ = 0;
    for(
    i_130=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA12=    i_130<charp_length(self) ,    __freed_obj__ = 0, 
    _for_condtionalA12;    i_130++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional194=self[i_130]==c,        __freed_obj__ = 0, 
        _if_conditional194) {
            list$1charph_push_back(result_128,(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(str_129->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138;
            __freed_obj__ = 0;
            buffer_reset(str_129);
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(str_129,self[i_130]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional195=buffer_length(str_129)!=0,    __freed_obj__ = 0, 
    _if_conditional195) {
        list$1charph_push_back(result_128,(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(str_129->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = result_128;
    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_129, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
void* right_value140;
char* __result205__;
char* p_131;
_Bool _while_condtional10;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value141;
char* __result206__;
void* right_value142;
char* __result207__;
void* right_value143;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
    if(_if_conditional196=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional196) {
        __result205__ = __result_obj__ = ((char*)(right_value140=__builtin_string("")));
        __freed_obj__ = 0;
        return __result205__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_131=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional10=p_131>=path,    __freed_obj__ = 0, 
    _while_condtional10) {
        if(_if_conditional197=*p_131==47,        __freed_obj__ = 0, 
        _if_conditional197) {
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
    if(_if_conditional198=p_131<path,    __freed_obj__ = 0, 
    _if_conditional198) {
        __result206__ = __result_obj__ = ((char*)(right_value141=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result206__;
        __freed_obj__ = 0;
    }
    else {
        __result207__ = __result_obj__ = ((char*)(right_value142=__builtin_string(p_131+1)));
        __freed_obj__ = 0;
        return __result207__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result208__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
}

char* xdirname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
void* right_value144;
char* __result209__;
void* right_value145;
void* right_value146;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    if(_if_conditional199=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional199) {
        __result209__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        __freed_obj__ = 0;
        return __result209__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result210__ = __result_obj__ = ((char*)(right_value146=__builtin_string(dirname(((char*)(right_value145=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = 0;
    return __result210__;
    __freed_obj__ = 0;
}

char* xnoextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
void* right_value147;
char* __result211__;
void* right_value148;
char* path2_132;
char* p_133;
_Bool _while_condtional11;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value149;
char* __result212__;
void* right_value150;
char* __result213__;
void* right_value151;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&path2_132, 0, sizeof(char*));
memset(&p_133, 0, sizeof(char*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    if(_if_conditional200=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional200) {
        __result211__ = __result_obj__ = ((char*)(right_value147=__builtin_string("")));
        __freed_obj__ = 0;
        return __result211__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    path2_132=(char*)come_increment_ref_count(((char*)(right_value148=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    p_133=path2_132+strlen(path2_132);
    __freed_obj__ = 0;
    while(_while_condtional11=p_133>=path2_132,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional201=*p_133==46,        __freed_obj__ = 0, 
        _if_conditional201) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_133--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional202=p_133<path2_132,    __freed_obj__ = 0, 
    _if_conditional202) {
        __result212__ = __result_obj__ = ((char*)(right_value149=__builtin_string(path2_132)));
        if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result212__;
        __freed_obj__ = 0;
    }
    else {
        __result213__ = __result_obj__ = ((char*)(right_value150=string_substring(path2_132,0,p_133-path2_132)));
        if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result213__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result214__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
    if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result214__;
    __freed_obj__ = 0;
    if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
void* right_value152;
char* __result215__;
char* p_134;
_Bool _while_condtional12;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value153;
char* __result216__;
void* right_value154;
char* __result217__;
void* right_value155;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    if(_if_conditional203=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional203) {
        __result215__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        __freed_obj__ = 0;
        return __result215__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_134=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional12=p_134>=path,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional204=*p_134==46,        __freed_obj__ = 0, 
        _if_conditional204) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_134--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional205=p_134<path,    __freed_obj__ = 0, 
    _if_conditional205) {
        __result216__ = __result_obj__ = ((char*)(right_value153=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result216__;
        __freed_obj__ = 0;
    }
    else {
        __result217__ = __result_obj__ = ((char*)(right_value154=__builtin_string(p_134+1)));
        __freed_obj__ = 0;
        return __result217__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result218__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
    __freed_obj__ = 0;
    return __result218__;
    __freed_obj__ = 0;
}

char* xrealpath(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
void* right_value156;
char* __result219__;
char* result_135;
void* right_value157;
char* result2_136;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&right_value157, 0, sizeof(void*));
memset(&result2_136, 0, sizeof(char*));
    if(_if_conditional206=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional206) {
        __result219__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
        __freed_obj__ = 0;
        return __result219__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_135=realpath(path,((void*)0));
    __freed_obj__ = 0;
    result2_136=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(result_135))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    free(result_135);
    __freed_obj__ = 0;
    __result220__ = __result_obj__ = result2_136;
    if(result2_136 && !__freed_obj__) { result2_136 = come_decrement_ref_count(result2_136, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result220__;
    __freed_obj__ = 0;
    if(result2_136 && !__freed_obj__) { result2_136 = come_decrement_ref_count(result2_136, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
void* right_value158;
char* __result221__;
void* right_value159;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
    if(_if_conditional207=self,    __freed_obj__ = 0, 
    _if_conditional207) {
        __result221__ = __result_obj__ = ((char*)(right_value158=__builtin_string("true")));
        __freed_obj__ = 0;
        return __result221__;
        __freed_obj__ = 0;
    }
    else {
        __result222__ = __result_obj__ = ((char*)(right_value159=__builtin_string("false")));
        __freed_obj__ = 0;
        return __result222__;
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
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result223__ = __result_obj__ = ((char*)(right_value160=xsprintf("%c",self)));
    __freed_obj__ = 0;
    return __result223__;
    __freed_obj__ = 0;
}

char* short_to_string(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result224__ = __result_obj__ = ((char*)(right_value161=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result224__;
    __freed_obj__ = 0;
}

char* int_to_string(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result225__ = __result_obj__ = ((char*)(right_value162=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result225__;
    __freed_obj__ = 0;
}

char* long_to_string(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result226__ = __result_obj__ = ((char*)(right_value163=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result226__;
    __freed_obj__ = 0;
}

char* size_t_to_string(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value164=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result227__;
    __freed_obj__ = 0;
}

char* float_to_string(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result228__ = __result_obj__ = ((char*)(right_value165=xsprintf("%f",self)));
    __freed_obj__ = 0;
    return __result228__;
    __freed_obj__ = 0;
}

char* double_to_string(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value166;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
    __result229__ = __result_obj__ = ((char*)(right_value166=xsprintf("%lf",self)));
    __freed_obj__ = 0;
    return __result229__;
    __freed_obj__ = 0;
}

char* string_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
void* right_value167;
char* __result230__;
void* right_value168;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
    if(_if_conditional208=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional208) {
        __result230__ = __result_obj__ = ((char*)(right_value167=__builtin_string("")));
        __freed_obj__ = 0;
        return __result230__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result231__ = __result_obj__ = ((char*)(right_value168=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
}

char* charp_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
void* right_value169;
char* __result232__;
void* right_value170;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
    if(_if_conditional209=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional209) {
        __result232__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
        __freed_obj__ = 0;
        return __result232__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result233__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result233__;
    __freed_obj__ = 0;
}

int bool_compare(_Bool left, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int __result234__;
_Bool _if_conditional211;
int __result235__;
_Bool _if_conditional212;
int __result236__;
int __result237__;
int __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=!left&&right,    __freed_obj__ = 0, 
    _if_conditional210) {
        __result234__ = -1;
        __freed_obj__ = 0;
        return __result234__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional211=left&&right,        __freed_obj__ = 0, 
        _if_conditional211) {
            __result235__ = 0;
            __freed_obj__ = 0;
            return __result235__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional212=!left&&!right,            __freed_obj__ = 0, 
            _if_conditional212) {
                __result236__ = 0;
                __freed_obj__ = 0;
                return __result236__;
                __freed_obj__ = 0;
            }
            else {
                __result237__ = 1;
                __freed_obj__ = 0;
                return __result237__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result238__ = 0;
    __freed_obj__ = 0;
    return __result238__;
    __freed_obj__ = 0;
}

int char_compare(char left, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
int __result239__;
_Bool _if_conditional214;
int __result240__;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional213=left<right,    __freed_obj__ = 0, 
    _if_conditional213) {
        __result239__ = -1;
        __freed_obj__ = 0;
        return __result239__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional214=left>right,        __freed_obj__ = 0, 
        _if_conditional214) {
            __result240__ = 1;
            __freed_obj__ = 0;
            return __result240__;
            __freed_obj__ = 0;
        }
        else {
            __result241__ = 0;
            __freed_obj__ = 0;
            return __result241__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result242__ = 0;
    __freed_obj__ = 0;
    return __result242__;
    __freed_obj__ = 0;
}

int short_compare(short short left, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
int __result243__;
_Bool _if_conditional216;
int __result244__;
int __result245__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional215=left<right,    __freed_obj__ = 0, 
    _if_conditional215) {
        __result243__ = -1;
        __freed_obj__ = 0;
        return __result243__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional216=left>right,        __freed_obj__ = 0, 
        _if_conditional216) {
            __result244__ = 1;
            __freed_obj__ = 0;
            return __result244__;
            __freed_obj__ = 0;
        }
        else {
            __result245__ = 0;
            __freed_obj__ = 0;
            return __result245__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result246__ = 0;
    __freed_obj__ = 0;
    return __result246__;
    __freed_obj__ = 0;
}

int int_compare(int left, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
int __result247__;
_Bool _if_conditional218;
int __result248__;
int __result249__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional217=left<right,    __freed_obj__ = 0, 
    _if_conditional217) {
        __result247__ = -1;
        __freed_obj__ = 0;
        return __result247__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional218=left>right,        __freed_obj__ = 0, 
        _if_conditional218) {
            __result248__ = 1;
            __freed_obj__ = 0;
            return __result248__;
            __freed_obj__ = 0;
        }
        else {
            __result249__ = 0;
            __freed_obj__ = 0;
            return __result249__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result250__ = 0;
    __freed_obj__ = 0;
    return __result250__;
    __freed_obj__ = 0;
}

int long_compare(long left, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional219;
int __result251__;
_Bool _if_conditional220;
int __result252__;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional219=left<right,    __freed_obj__ = 0, 
    _if_conditional219) {
        __result251__ = -1;
        __freed_obj__ = 0;
        return __result251__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional220=left>right,        __freed_obj__ = 0, 
        _if_conditional220) {
            __result252__ = 1;
            __freed_obj__ = 0;
            return __result252__;
            __freed_obj__ = 0;
        }
        else {
            __result253__ = 0;
            __freed_obj__ = 0;
            return __result253__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result254__ = 0;
    __freed_obj__ = 0;
    return __result254__;
    __freed_obj__ = 0;
}

int size_t_compare(long int left, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
int __result255__;
_Bool _if_conditional222;
int __result256__;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional221=left<right,    __freed_obj__ = 0, 
    _if_conditional221) {
        __result255__ = -1;
        __freed_obj__ = 0;
        return __result255__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional222=left>right,        __freed_obj__ = 0, 
        _if_conditional222) {
            __result256__ = 1;
            __freed_obj__ = 0;
            return __result256__;
            __freed_obj__ = 0;
        }
        else {
            __result257__ = 0;
            __freed_obj__ = 0;
            return __result257__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result258__ = 0;
    __freed_obj__ = 0;
    return __result258__;
    __freed_obj__ = 0;
}

int float_compare(float left, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
int __result259__;
_Bool _if_conditional224;
int __result260__;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional223=left<right,    __freed_obj__ = 0, 
    _if_conditional223) {
        __result259__ = -1;
        __freed_obj__ = 0;
        return __result259__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional224=left>right,        __freed_obj__ = 0, 
        _if_conditional224) {
            __result260__ = 1;
            __freed_obj__ = 0;
            return __result260__;
            __freed_obj__ = 0;
        }
        else {
            __result261__ = 0;
            __freed_obj__ = 0;
            return __result261__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result262__ = 0;
    __freed_obj__ = 0;
    return __result262__;
    __freed_obj__ = 0;
}

int double_compare(double left, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
int __result263__;
_Bool _if_conditional226;
int __result264__;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional225=left<right,    __freed_obj__ = 0, 
    _if_conditional225) {
        __result263__ = -1;
        __freed_obj__ = 0;
        return __result263__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional226=left>right,        __freed_obj__ = 0, 
        _if_conditional226) {
            __result264__ = 1;
            __freed_obj__ = 0;
            return __result264__;
            __freed_obj__ = 0;
        }
        else {
            __result265__ = 0;
            __freed_obj__ = 0;
            return __result265__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result266__ = 0;
    __freed_obj__ = 0;
    return __result266__;
    __freed_obj__ = 0;
}

int string_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
int __result267__;
_Bool _if_conditional228;
int __result268__;
_Bool _if_conditional229;
int __result269__;
int __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional227=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional227) {
        __result267__ = 0;
        __freed_obj__ = 0;
        return __result267__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional228=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional228) {
            __result268__ = -1;
            __freed_obj__ = 0;
            return __result268__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional229=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
                __result269__ = 1;
                __freed_obj__ = 0;
                return __result269__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result270__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result270__;
    __freed_obj__ = 0;
}

int charp_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
int __result271__;
_Bool _if_conditional231;
int __result272__;
_Bool _if_conditional232;
int __result273__;
int __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional230=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional230) {
        __result271__ = 0;
        __freed_obj__ = 0;
        return __result271__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional231=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            __result272__ = -1;
            __freed_obj__ = 0;
            return __result272__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional232=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional232) {
                __result273__ = 1;
                __freed_obj__ = 0;
                return __result273__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result274__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result274__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional233;
void* right_value171;
void* right_value172;
void* right_value173;
struct optional$2charphbool* __result276__;
void* right_value174;
void* right_value175;
struct buffer* buf_137;
_Bool _while_condtional13;
int size_139;
_Bool _if_conditional235;
void* right_value176;
void* right_value177;
void* right_value178;
struct optional$2charphbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&buf_137, 0, sizeof(struct buffer*));
memset(&size_139, 0, sizeof(int));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    if(_if_conditional233=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional233) {
        __result276__ = __result_obj__ = ((struct optional$2charphbool*)(right_value173=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value172=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2023))),(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value172;
        __freed_obj__ = 0;
        return __result276__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_137=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2025))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value175;
    __freed_obj__ = 0;
    while(_while_condtional13=1,    __freed_obj__ = 0, 
    _while_condtional13) {
        char buf2_138[8192];
        memset(&buf2_138, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_139=fread(buf2_138,1,8192,f);
        __freed_obj__ = 0;
        buffer_append(buf_137,buf2_138,size_139);
        __freed_obj__ = 0;
        if(_if_conditional235=size_139<8192,        __freed_obj__ = 0, 
        _if_conditional235) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result277__ = __result_obj__ = ((struct optional$2charphbool*)(right_value178=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value177=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2039)))),(char*)come_increment_ref_count(((char*)(right_value176=buffer_to_string(buf_137)))),(_Bool)1)));
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value177;
    __freed_obj__ = 0;
    return __result277__;
    __freed_obj__ = 0;
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj19=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result275__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result275__;
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
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional234=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional234) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional236;
void* right_value179;
void* right_value180;
struct optional$2intbool* __result278__;
void* right_value181;
void* right_value182;
struct optional$2intbool* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    if(_if_conditional236=f==((void*)0)||str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional236) {
        __result278__ = __result_obj__ = ((struct optional$2intbool*)(right_value180=optional$2intbool_initialize(((struct optional$2intbool*)(right_value179=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2045))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value179;
        __freed_obj__ = 0;
        return __result278__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result279__ = __result_obj__ = ((struct optional$2intbool*)(right_value182=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value181=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2048)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = 0;
    return __result279__;
    __freed_obj__ = 0;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
void* right_value183;
void* right_value184;
struct optional$2intbool* __result280__;
int result_140;
_Bool _if_conditional238;
void* right_value185;
void* right_value186;
struct optional$2intbool* __result281__;
void* right_value187;
void* right_value188;
struct optional$2intbool* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&result_140, 0, sizeof(int));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    if(_if_conditional237=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional237) {
        __result280__ = __result_obj__ = ((struct optional$2intbool*)(right_value184=optional$2intbool_initialize(((struct optional$2intbool*)(right_value183=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2054))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = 0;
        return __result280__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_140=fclose(f);
    __freed_obj__ = 0;
    if(_if_conditional238=result_140<0,    __freed_obj__ = 0, 
    _if_conditional238) {
        __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value186=optional$2intbool_initialize(((struct optional$2intbool*)(right_value185=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2060))),result_140,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185;
        __freed_obj__ = 0;
        return __result281__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result282__ = __result_obj__ = ((struct optional$2intbool*)(right_value188=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value187=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2063)))),result_140,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = 0;
    return __result282__;
    __freed_obj__ = 0;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
void* right_value189;
void* right_value190;
struct optional$2_IO_FILEpbool* __result284__;
va_list args_142;
int result_143;
_Bool _if_conditional240;
void* right_value191;
void* right_value192;
struct optional$2_IO_FILEpbool* __result285__;
void* right_value193;
void* right_value194;
struct optional$2_IO_FILEpbool* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&args_142, 0, sizeof(va_list));
memset(&result_143, 0, sizeof(int));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    if(_if_conditional239=f==((void*)0)||msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional239) {
        __result284__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value190=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value189=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2069))),f,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value189;
        __freed_obj__ = 0;
        return __result284__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    char msg2_141[1024*2*2*2];
    memset(&msg2_141, 0, sizeof(char)    *(1024*2*2*2)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_142,msg);
    __freed_obj__ = 0;
    vsnprintf(msg2_141,1024*2*2*2,msg,args_142);
    __freed_obj__ = 0;
    __builtin_va_end(args_142);
    __freed_obj__ = 0;
    result_143=fprintf(f,"%s",msg2_141);
    __freed_obj__ = 0;
    if(_if_conditional240=result_143<0,    __freed_obj__ = 0, 
    _if_conditional240) {
        __result285__ = __result_obj__ = ((struct optional$2intbool*)(right_value192=optional$2intbool_initialize(((struct optional$2intbool*)(right_value191=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2081))),result_143,(_Bool)0)));
        if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        return __result285__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result286__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value194=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value193=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2084)))),f,(_Bool)1)));
    if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value193;
    __freed_obj__ = 0;
    return __result286__;
    __freed_obj__ = 0;
    if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result283__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result283__;
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
_Bool _if_conditional241;
void* right_value195;
void* right_value196;
struct optional$2intbool* __result287__;
struct _IO_FILE* f_144;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value197;
void* right_value198;
struct optional$2intbool* __result288__;
int result_145;
_Bool _if_conditional244;
void* right_value199;
void* right_value200;
struct optional$2intbool* __result289__;
int result2_146;
_Bool _if_conditional245;
void* right_value201;
void* right_value202;
struct optional$2intbool* __result290__;
void* right_value203;
void* right_value204;
struct optional$2intbool* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&result_145, 0, sizeof(int));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&result2_146, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    if(_if_conditional241=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result287__ = __result_obj__ = ((struct optional$2intbool*)(right_value196=optional$2intbool_initialize(((struct optional$2intbool*)(right_value195=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2090))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value195;
        __freed_obj__ = 0;
        return __result287__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional242=append,    __freed_obj__ = 0, 
    _if_conditional242) {
        f_144=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_144=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional243=f_144==((void*)0),    __freed_obj__ = 0, 
    _if_conditional243) {
        __result288__ = __result_obj__ = ((struct optional$2intbool*)(right_value198=optional$2intbool_initialize(((struct optional$2intbool*)(right_value197=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2102))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197;
        __freed_obj__ = 0;
        return __result288__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_145=fwrite(self,strlen(self),1,f_144);
    __freed_obj__ = 0;
    if(_if_conditional244=result_145<0,    __freed_obj__ = 0, 
    _if_conditional244) {
        __result289__ = __result_obj__ = ((struct optional$2intbool*)(right_value200=optional$2intbool_initialize(((struct optional$2intbool*)(right_value199=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2108))),result_145,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value199;
        __freed_obj__ = 0;
        return __result289__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_146=fclose(f_144);
    __freed_obj__ = 0;
    if(_if_conditional245=result2_146<0,    __freed_obj__ = 0, 
    _if_conditional245) {
        __result290__ = __result_obj__ = ((struct optional$2intbool*)(right_value202=optional$2intbool_initialize(((struct optional$2intbool*)(right_value201=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2114))),result2_146,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value201;
        __freed_obj__ = 0;
        return __result290__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result291__ = __result_obj__ = ((struct optional$2intbool*)(right_value204=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value203=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2117)))),result_145,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    return __result291__;
    __freed_obj__ = 0;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
void* right_value205;
void* right_value206;
struct optional$2intbool* __result292__;
struct _IO_FILE* f_147;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value207;
void* right_value208;
struct optional$2intbool* __result293__;
int result_148;
_Bool _if_conditional249;
void* right_value209;
void* right_value210;
struct optional$2intbool* __result294__;
int result2_149;
_Bool _if_conditional250;
void* right_value211;
void* right_value212;
struct optional$2intbool* __result295__;
void* right_value213;
void* right_value214;
struct optional$2intbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&f_147, 0, sizeof(struct _IO_FILE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&result_148, 0, sizeof(int));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&result2_149, 0, sizeof(int));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    if(_if_conditional246=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional246) {
        __result292__ = __result_obj__ = ((struct optional$2intbool*)(right_value206=optional$2intbool_initialize(((struct optional$2intbool*)(right_value205=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2123))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value205;
        __freed_obj__ = 0;
        return __result292__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional247=append,    __freed_obj__ = 0, 
    _if_conditional247) {
        f_147=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_147=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional248=f_147==((void*)0),    __freed_obj__ = 0, 
    _if_conditional248) {
        __result293__ = __result_obj__ = ((struct optional$2intbool*)(right_value208=optional$2intbool_initialize(((struct optional$2intbool*)(right_value207=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2135))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value207;
        __freed_obj__ = 0;
        return __result293__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_148=fwrite(self,strlen(self),1,f_147);
    __freed_obj__ = 0;
    if(_if_conditional249=result_148<0,    __freed_obj__ = 0, 
    _if_conditional249) {
        __result294__ = __result_obj__ = ((struct optional$2intbool*)(right_value210=optional$2intbool_initialize(((struct optional$2intbool*)(right_value209=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2141))),result_148,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value209;
        __freed_obj__ = 0;
        return __result294__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_149=fclose(f_147);
    __freed_obj__ = 0;
    if(_if_conditional250=result2_149<0,    __freed_obj__ = 0, 
    _if_conditional250) {
        __result295__ = __result_obj__ = ((struct optional$2intbool*)(right_value212=optional$2intbool_initialize(((struct optional$2intbool*)(right_value211=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2147))),result2_149,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211;
        __freed_obj__ = 0;
        return __result295__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result296__ = __result_obj__ = ((struct optional$2intbool*)(right_value214=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value213=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2150)))),result_148,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    return __result296__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional251;
void* right_value215;
void* right_value216;
void* right_value217;
struct optional$2charphbool* __result297__;
struct _IO_FILE* f_150;
_Bool _if_conditional252;
void* right_value218;
void* right_value219;
void* right_value220;
struct optional$2charphbool* __result298__;
void* right_value221;
void* right_value222;
struct buffer* buf_151;
_Bool _while_condtional14;
int size_153;
_Bool _if_conditional253;
void* right_value223;
char* result_154;
int result2_155;
_Bool _if_conditional254;
void* right_value224;
void* right_value225;
void* right_value226;
struct optional$2charphbool* __result299__;
void* right_value227;
void* right_value228;
struct optional$2charphbool* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&f_150, 0, sizeof(struct _IO_FILE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&buf_151, 0, sizeof(struct buffer*));
memset(&size_153, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result2_155, 0, sizeof(int));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    if(_if_conditional251=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result297__ = __result_obj__ = ((struct optional$2charphbool*)(right_value217=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value216=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2156))),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value216;
        __freed_obj__ = 0;
        return __result297__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_150=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional252=f_150==((void*)0),    __freed_obj__ = 0, 
    _if_conditional252) {
        __result298__ = __result_obj__ = ((struct optional$2charphbool*)(right_value220=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value219=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2162))),(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value218;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value219;
        __freed_obj__ = 0;
        return __result298__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2165))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value222;
    __freed_obj__ = 0;
    while(_while_condtional14=1,    __freed_obj__ = 0, 
    _while_condtional14) {
        char buf2_152[8192];
        memset(&buf2_152, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_153=fread(buf2_152,1,8192,f_150);
        __freed_obj__ = 0;
        buffer_append(buf_151,buf2_152,size_153);
        __freed_obj__ = 0;
        if(_if_conditional253=size_153<8192,        __freed_obj__ = 0, 
        _if_conditional253) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_154=(char*)come_increment_ref_count(((char*)(right_value223=buffer_to_string(buf_151))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value223;
    __freed_obj__ = 0;
    result2_155=fclose(f_150);
    __freed_obj__ = 0;
    if(_if_conditional254=result2_155<0,    __freed_obj__ = 0, 
    _if_conditional254) {
        __result299__ = __result_obj__ = ((struct optional$2charphbool*)(right_value226=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value225=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2184))),(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("")))),(_Bool)0)));
        if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value225;
        __freed_obj__ = 0;
        return __result299__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result300__ = __result_obj__ = ((struct optional$2charphbool*)(right_value228=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value227=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2187)))),(char*)come_increment_ref_count(result_154),(_Bool)1)));
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value227;
    __freed_obj__ = 0;
    return __result300__;
    __freed_obj__ = 0;
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
void* right_value229;
void* right_value230;
void* right_value231;
struct optional$2charphbool* __result301__;
struct _IO_FILE* f_156;
_Bool _if_conditional256;
void* right_value232;
void* right_value233;
void* right_value234;
struct optional$2charphbool* __result302__;
void* right_value235;
void* right_value236;
struct buffer* buf_157;
_Bool _while_condtional15;
int size_159;
_Bool _if_conditional257;
void* right_value237;
char* result_160;
int result2_161;
_Bool _if_conditional258;
void* right_value238;
void* right_value239;
void* right_value240;
struct optional$2charphbool* __result303__;
void* right_value241;
void* right_value242;
struct optional$2charphbool* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&f_156, 0, sizeof(struct _IO_FILE*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&buf_157, 0, sizeof(struct buffer*));
memset(&size_159, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result2_161, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    if(_if_conditional255=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional255) {
        __result301__ = __result_obj__ = ((struct optional$2charphbool*)(right_value231=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value230=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2193))),(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value230;
        __freed_obj__ = 0;
        return __result301__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_156=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional256=f_156==((void*)0),    __freed_obj__ = 0, 
    _if_conditional256) {
        __result302__ = __result_obj__ = ((struct optional$2charphbool*)(right_value234=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value233=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2199))),(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value232;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value233;
        __freed_obj__ = 0;
        return __result302__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_157=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2202))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value236;
    __freed_obj__ = 0;
    while(_while_condtional15=1,    __freed_obj__ = 0, 
    _while_condtional15) {
        char buf2_158[8192];
        memset(&buf2_158, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_159=fread(buf2_158,1,8192,f_156);
        __freed_obj__ = 0;
        buffer_append(buf_157,buf2_158,size_159);
        __freed_obj__ = 0;
        if(_if_conditional257=size_159<8192,        __freed_obj__ = 0, 
        _if_conditional257) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_160=(char*)come_increment_ref_count(((char*)(right_value237=buffer_to_string(buf_157))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value237;
    __freed_obj__ = 0;
    result2_161=fclose(f_156);
    __freed_obj__ = 0;
    if(_if_conditional258=result2_161<0,    __freed_obj__ = 0, 
    _if_conditional258) {
        __result303__ = __result_obj__ = ((struct optional$2charphbool*)(right_value240=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value239=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2221))),(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string("")))),(_Bool)0)));
        if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value239;
        __freed_obj__ = 0;
        return __result303__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result304__ = __result_obj__ = ((struct optional$2charphbool*)(right_value242=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value241=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2224)))),(char*)come_increment_ref_count(result_160),(_Bool)1)));
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value241;
    __freed_obj__ = 0;
    return __result304__;
    __freed_obj__ = 0;
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value243;
void* right_value244;
struct list$1charph* result_162;
_Bool _if_conditional259;
void* right_value245;
void* right_value246;
struct optional$2list$1charphphbool* __result306__;
_Bool _while_condtional16;
_Bool _if_conditional261;
void* right_value247;
void* right_value248;
void* right_value249;
struct optional$2list$1charphphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct list$1charph*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
    result_162=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value244=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2229))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value244;
    __freed_obj__ = 0;
    if(_if_conditional259=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional259) {
        __result306__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value246=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value245=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2232))),(struct list$1charph*)come_increment_ref_count(result_162),(_Bool)0)));
        if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value245;
        __freed_obj__ = 0;
        return __result306__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional16=1,    __freed_obj__ = 0, 
    _while_condtional16) {
        char buf_163[8192];
        memset(&buf_163, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        if(_if_conditional261=fgets(buf_163,8192,f)==((void*)0),        __freed_obj__ = 0, 
        _if_conditional261) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(buf_163)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result307__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value249=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value248=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2245)))),(struct list$1charph*)come_increment_ref_count(result_162),(_Bool)1)));
    if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value248;
    __freed_obj__ = 0;
    return __result307__;
    __freed_obj__ = 0;
    if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=self->v1;
            self->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result305__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result305__;
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
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional260=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional260) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional262;
void* right_value250;
void* right_value251;
struct optional$2intbool* __result308__;
struct _IO_FILE* f_164;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value252;
void* right_value253;
struct optional$2intbool* __result309__;
void* right_value254;
void* right_value255;
struct optional$2intbool* __result310__;
void* right_value256;
void* right_value257;
struct optional$2intbool* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&f_164, 0, sizeof(struct _IO_FILE*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
    if(_if_conditional262=path==((void*)0)||mode==((void*)0),    __freed_obj__ = 0, 
    _if_conditional262) {
        __result308__ = __result_obj__ = ((struct optional$2intbool*)(right_value251=optional$2intbool_initialize(((struct optional$2intbool*)(right_value250=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2251))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value250;
        __freed_obj__ = 0;
        return __result308__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_164=fopen(path,mode);
    __freed_obj__ = 0;
    if(_if_conditional263=f_164,    __freed_obj__ = 0, 
    _if_conditional263) {
        block(parent,f_164);
        __freed_obj__ = 0;
        if(_if_conditional264=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional264) {
            fclose(f_164);
            __freed_obj__ = 0;
            __result309__ = __result_obj__ = ((struct optional$2intbool*)(right_value253=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value252=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2259)))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value252;
            __freed_obj__ = 0;
            return __result309__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_164);
        __freed_obj__ = 0;
        __result310__ = __result_obj__ = ((struct optional$2intbool*)(right_value255=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value254=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2264)))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        return __result310__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result311__ = __result_obj__ = ((struct optional$2intbool*)(right_value257=optional$2intbool_initialize(((struct optional$2intbool*)(right_value256=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2267))),-1,(_Bool)0)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = 0;
    return __result311__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional265;
void* right_value258;
void* right_value259;
struct optional$2charphbool* __result312__;
void* right_value260;
void* right_value261;
void* right_value262;
struct optional$2charphbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    if(_if_conditional265=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional265) {
        __result312__ = __result_obj__ = ((struct optional$2intbool*)(right_value259=optional$2intbool_initialize(((struct optional$2intbool*)(right_value258=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2276))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258;
        __freed_obj__ = 0;
        return __result312__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result313__ = __result_obj__ = ((struct optional$2charphbool*)(right_value262=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value261=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2280)))),(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value260;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value261;
    __freed_obj__ = 0;
    return __result313__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_print(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
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
    if(_if_conditional266=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional266) {
        __result314__ = __result_obj__ = ((struct optional$2intbool*)(right_value264=optional$2intbool_initialize(((struct optional$2intbool*)(right_value263=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2286))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263;
        __freed_obj__ = 0;
        return __result314__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    printf("%s",self);
    __freed_obj__ = 0;
    __result315__ = __result_obj__ = ((struct optional$2charphbool*)(right_value267=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value266=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2290)))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value265;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value266;
    __freed_obj__ = 0;
    return __result315__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
void* right_value268;
void* right_value269;
void* right_value270;
struct optional$2charphbool* __result316__;
char* msg2_165;
va_list args_166;
void* right_value271;
void* right_value272;
void* right_value273;
struct optional$2charphbool* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&msg2_165, 0, sizeof(char*));
memset(&args_166, 0, sizeof(va_list));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
    if(_if_conditional267=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional267) {
        __result316__ = __result_obj__ = ((struct optional$2charphbool*)(right_value270=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value269=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2297))),(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value269;
        __freed_obj__ = 0;
        return __result316__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_166,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_165,self,args_166);
    __freed_obj__ = 0;
    __builtin_va_end(args_166);
    __freed_obj__ = 0;
    printf("%s",msg2_165);
    __freed_obj__ = 0;
    free(msg2_165);
    __freed_obj__ = 0;
    __result317__ = __result_obj__ = ((struct optional$2charphbool*)(right_value273=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value272=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2310)))),(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string(self)))),(_Bool)1)));
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value272;
    __freed_obj__ = 0;
    return __result317__;
    __freed_obj__ = 0;
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
void* right_value274;
void* right_value275;
void* right_value276;
struct optional$2charphbool* __result318__;
char* msg2_167;
va_list args_168;
void* right_value277;
void* right_value278;
void* right_value279;
struct optional$2charphbool* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&msg2_167, 0, sizeof(char*));
memset(&args_168, 0, sizeof(va_list));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
    if(_if_conditional268=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional268) {
        __result318__ = __result_obj__ = ((struct optional$2charphbool*)(right_value276=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value275=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2316))),(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value275;
        __freed_obj__ = 0;
        return __result318__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_168,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_167,self,args_168);
    __freed_obj__ = 0;
    __builtin_va_end(args_168);
    __freed_obj__ = 0;
    printf("%s",msg2_167);
    __freed_obj__ = 0;
    free(msg2_167);
    __freed_obj__ = 0;
    __result319__ = __result_obj__ = ((struct optional$2charphbool*)(right_value279=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value278=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2329)))),(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(self)))),(_Bool)1)));
    if((&args_168) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_168), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = 0;
    return __result319__;
    __freed_obj__ = 0;
    if((&args_168) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_168), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __freed_obj__ = 0;
    __result320__ = self;
    __freed_obj__ = 0;
    return __result320__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
void* right_value280;
void* right_value281;
void* right_value282;
struct optional$2charphbool* __result321__;
void* right_value283;
void* right_value284;
void* right_value285;
struct optional$2charphbool* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
    if(_if_conditional269=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional269) {
        __result321__ = __result_obj__ = ((struct optional$2charphbool*)(right_value282=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value281=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2342))),(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value281;
        __freed_obj__ = 0;
        return __result321__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result322__ = __result_obj__ = ((struct optional$2charphbool*)(right_value285=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value284=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2346)))),(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value284;
    __freed_obj__ = 0;
    return __result322__;
    __freed_obj__ = 0;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_169;
_Bool _for_condtionalA13;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_169, 0, sizeof(int));
    for(
    i_169=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_169<self ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_169++ ,    __freed_obj__ = 0, 
    0    ){
        block(parent,i_169);
        __freed_obj__ = 0;
        if(_if_conditional270=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional270) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

