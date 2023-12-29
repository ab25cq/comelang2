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
struct sEnumNode
{
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    int sline;
    char* sname;
    _Bool mOutput;
    char* mDeclareSName;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
_Bool sEnumNode_terminated();

char* sEnumNode_kind();

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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







struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
void* right_value12;
struct list$1tuple2$2charphsNodephph* __dec_obj8;
void* right_value13;
char* __dec_obj9;
struct sEnumNode* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 18))->sline=((struct sInfo*)come_null_check(info, "16enum.c", 18))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sEnumNode*)come_null_check(self, "16enum.c", 19))->sname;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 19))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "16enum.c", 19))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj2=((struct sEnumNode*)come_null_check(self, "16enum.c", 21))->mTypeName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 21))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(type_name))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    __dec_obj8=((struct sEnumNode*)come_null_check(self, "16enum.c", 22))->mElements;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 22))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value12=list$1tuple2$2charphsNodephphp_clone(elements))));
    if(__dec_obj8) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value12;
    __freed_obj__ = 0;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 24))->mOutput=output;
    __freed_obj__ = 0;
    __dec_obj9=((struct sEnumNode*)come_null_check(self, "16enum.c", 26))->mDeclareSName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 26))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(((struct sInfo*)come_null_check(info, "16enum.c", 26))->sname))));
    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value13;
    __freed_obj__ = 0;
    __result15__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
struct list$1tuple2$2charphsNodephph* __result7__;
void* right_value2;
void* right_value3;
struct list$1tuple2$2charphsNodephph* result_2;
struct list_item$1tuple2$2charphsNodephph* it_3;
_Bool _while_condtional2;
void* right_value11;
struct list$1tuple2$2charphsNodephph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_3, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value11, 0, sizeof(void*));
        if(_if_conditional1=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            __result7__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_2=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value3=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value2=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
        if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value2;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value3;
        __freed_obj__ = 0;
        it_3=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional2=it_3!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional2) {
            list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_2, "./comelang2.h", 192)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value11=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_3, "./comelang2.h", 192))->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
            it_3=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_3, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result14__ = __result_obj__ = result_2;
        if(result_2 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result14__;
        __freed_obj__ = 0;
        if(result_2 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result8__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result8__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_0;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsNodephph* prev_it_1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_0, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_1, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_0=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional1=it_0!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional1) {
                    prev_it_1=it_0;
                    __freed_obj__ = 0;
                    it_0=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_0, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_1 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional2=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional2) {
                            if(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional3=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional3) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional4=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional4) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
void* right_value4;
struct list_item$1tuple2$2charphsNodephph* litem_4;
struct tuple2$2charphsNodeph* __dec_obj3;
_Bool _if_conditional8;
void* right_value5;
struct list_item$1tuple2$2charphsNodephph* litem_5;
struct tuple2$2charphsNodeph* __dec_obj4;
void* right_value6;
struct list_item$1tuple2$2charphsNodephph* litem_6;
struct tuple2$2charphsNodeph* __dec_obj5;
struct list$1tuple2$2charphsNodephph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&litem_4, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_5, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_6, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional5=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional5) {
                    litem_4=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value4=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 202))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
                    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value4;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj3=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 206))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 206))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_4;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_4;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional8=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional8) {
                        litem_5=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value5=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
                        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value5;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj4=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 216))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 216))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj4) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_5;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_5;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_6=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value6=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
                        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value6;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 226))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 226))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj5) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_6;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_6;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result9__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result9__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional6=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional6) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional7=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional7) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
struct tuple2$2charphsNodeph* __result10__;
void* right_value7;
struct tuple2$2charphsNodeph* result_7;
_Bool _if_conditional10;
void* right_value8;
char* __dec_obj6;
_Bool _if_conditional11;
void* right_value10;
struct sNode* __dec_obj7;
struct tuple2$2charphsNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
                if(_if_conditional9=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional9) {
                    __result10__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result10__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value7=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value7;
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    __dec_obj6=((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 4))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value8=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
                    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value8;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 6))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    __dec_obj7=((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 5))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 5))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value10=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2))));
                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, ((struct sNode*)right_value10)->finalize, ((struct sNode*)right_value10)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value10;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result13__ = __result_obj__ = result_7;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result13__;
                __freed_obj__ = 0;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
struct sNode* __result11__;
void* right_value9;
struct sNode* result_8;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
struct sNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sNode*));
                        if(_if_conditional12=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional12) {
                            __result11__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result11__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_8=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
                        if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, ((struct sNode*)right_value9)->finalize, ((struct sNode*)right_value9)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value9;
                        __freed_obj__ = 0;
                        if(_if_conditional13=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional13) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional14=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional14) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional15=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional15) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional16=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional16) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional17=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional17) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional18=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional18) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional19=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional19) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional20=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional20) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result12__ = __result_obj__ = result_8;
                        if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result12__;
                        __freed_obj__ = 0;
                        if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 0, 0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}

char* sEnumNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value14;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value14=__builtin_string("sEnumNode")));
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* type_name_9;
struct list$1tuple2$2charphsNodephph* elements_10;
void* right_value15;
void* right_value16;
struct buffer* buf_11;
_Bool _if_conditional25;
void* right_value17;
void* right_value18;
int i_12;
int n_13;
struct list$1tuple2$2charphsNodephph* o2_saved_14;
struct tuple2$2charphsNodeph* it_17;
_Bool _for_condtionalA1;
struct tuple2$2charphsNodeph* multiple_assgin_var1;
char* name_20;
struct sNode* value_21;
_Bool _if_conditional30;
_Bool _if_conditional31;
void* right_value19;
char* c_value_22;
void* right_value20;
void* right_value21;
_Bool _if_conditional48;
_Bool __result26__;
void* right_value22;
struct CVALUE* right_value_29;
void* right_value23;
void* right_value24;
void* right_value25;
_Bool _if_conditional51;
void* right_value26;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value27;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_9, 0, sizeof(char*));
memset(&elements_10, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&i_12, 0, sizeof(int));
memset(&n_13, 0, sizeof(int));
memset(&o2_saved_14, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_17, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_20, 0, sizeof(char*));
memset(&value_21, 0, sizeof(struct sNode*));
memset(&name_20, 0, sizeof(char*));
memset(&value_21, 0, sizeof(struct sNode*));
memset(&right_value19, 0, sizeof(void*));
memset(&c_value_22, 0, sizeof(char*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value_29, 0, sizeof(struct CVALUE*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
    type_name_9=(char*)come_increment_ref_count(((struct sEnumNode*)come_null_check(self, "16enum.c", 43))->mTypeName);
    __freed_obj__ = 0;
    elements_10=((struct sEnumNode*)come_null_check(self, "16enum.c", 44))->mElements;
    __freed_obj__ = 0;
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value16;
    __freed_obj__ = 0;
    if(_if_conditional25=string_operator_equals(type_name_9,""),    __freed_obj__ = 0, 
    _if_conditional25) {
        buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 49)),((char*)(right_value17=xsprintf("enum { ",type_name_9))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value17;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 52)),((char*)(right_value18=xsprintf("enum %s { ",type_name_9))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value18;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    i_12=0;
    __freed_obj__ = 0;
    n_13=0;
    __freed_obj__ = 0;
    for(
    o2_saved_14=(elements_10),it_17=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_17=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_17;
        name_20=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        value_21=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional30=value_21==((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 61)),name_20);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 62)),"\n");
            __freed_obj__ = 0;
            if(_if_conditional31=i_12!=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_10, "16enum.c", 68)))-1,            __freed_obj__ = 0, 
            _if_conditional31) {
                buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 65)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            c_value_22=(char*)come_increment_ref_count(((char*)(right_value19=xsprintf("%d",n_13))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
            add_variable_to_global_table_with_int_value(name_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70)))),"int",(_Bool)0,info)))),c_value_22,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value20;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value21;
            __freed_obj__ = 0;
            if(c_value_22 && !__freed_obj__) { c_value_22 = come_decrement_ref_count(c_value_22, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional48=!((struct sNode*)come_null_check(value_21, "16enum.c", 77))->compile(((struct sNode*)come_null_check(value_21, "16enum.c", 77))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional48) {
                __result26__ = (_Bool)0;
                if(name_20 && !__freed_obj__) { name_20 = come_decrement_ref_count(name_20, (void*)0, (void*)0, 0, 0, 0); }
                if(value_21 && !__freed_obj__) { value_21 = come_decrement_ref_count(value_21, ((struct sNode*)value_21)->finalize, ((struct sNode*)value_21)->_protocol_obj, 0, 0, 0); } 
                if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
                if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_29=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value22=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            add_variable_to_global_table_with_int_value(name_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value23=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80)))),"int",(_Bool)0,info)))),((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 80))->c_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value23;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value24;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 82)),((char*)(right_value25=xsprintf("%s=%s",name_20,((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 82))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value25);
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value25;
            __freed_obj__ = 0;
            if(_if_conditional51=i_12!=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_10, "16enum.c", 88)))-1,            __freed_obj__ = 0, 
            _if_conditional51) {
                buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 85)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 88)),"\n");
            __freed_obj__ = 0;
            n_13=atoi(((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 90))->c_value);
            __freed_obj__ = 0;
            if(right_value_29 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        i_12++;
        __freed_obj__ = 0;
        n_13++;
        __freed_obj__ = 0;
        if(name_20 && !__freed_obj__) { name_20 = come_decrement_ref_count(name_20, (void*)0, (void*)0, 0, 0, 0); }
        if(value_21 && !__freed_obj__) { value_21 = come_decrement_ref_count(value_21, ((struct sNode*)value_21)->finalize, ((struct sNode*)value_21)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 96)),((char*)(right_value26=xsprintf("};\n",type_name_9))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value26;
    __freed_obj__ = 0;
    if(_if_conditional52=((struct sInfo*)come_null_check(info, "16enum.c", 106))->output_header_file&&string_operator_not_equals(((struct sEnumNode*)come_null_check(self, "16enum.c", 106))->mDeclareSName,((struct sInfo*)come_null_check(info, "16enum.c", 106))->base_sname),    __freed_obj__ = 0, 
    _if_conditional52) {
    }
    else {
        if(_if_conditional53=((struct sEnumNode*)come_null_check(self, "16enum.c", 104))->mOutput,        __freed_obj__ = 0, 
        _if_conditional53) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value27=buffer_to_string(((struct buffer*)come_null_check(buf_11, "16enum.c", 102))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result27__ = (_Bool)1;
    if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
    if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
struct tuple2$2charphsNodeph* result_15;
struct tuple2$2charphsNodeph* __result18__;
_Bool _if_conditional27;
struct tuple2$2charphsNodeph* __result19__;
struct tuple2$2charphsNodeph* result_16;
struct tuple2$2charphsNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_15, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_16, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional26=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional26) {
            __freed_obj__ = 0;
            memset(&result_15,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result18__ = __result_obj__ = result_15;
            __freed_obj__ = 0;
            return __result18__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional27=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional27) {
            __result19__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result19__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_16,0,sizeof(struct tuple2$2charphsNodeph*));
        __freed_obj__ = 0;
        __result20__ = __result_obj__ = result_16;
        __freed_obj__ = 0;
        return __result20__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result21__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result21__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
struct tuple2$2charphsNodeph* result_18;
struct tuple2$2charphsNodeph* __result22__;
_Bool _if_conditional29;
struct tuple2$2charphsNodeph* __result23__;
struct tuple2$2charphsNodeph* result_19;
struct tuple2$2charphsNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_18, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_19, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional28=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            __freed_obj__ = 0;
            memset(&result_18,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result22__ = __result_obj__ = result_18;
            __freed_obj__ = 0;
            return __result22__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional29=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional29) {
            __result23__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result23__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_19,0,sizeof(struct tuple2$2charphsNodeph*));
        __freed_obj__ = 0;
        __result24__ = __result_obj__ = result_19;
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result25__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result25__;
                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional32) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional35) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional38) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional41) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional43) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional44) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional46) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional47) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional33=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_23;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_23, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1sTypeph*));
                        it_23=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_23!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_24=it_23;
                            __freed_obj__ = 0;
                            it_23=((struct list_item$1sTypeph*)come_null_check(it_23, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_24 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional37=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_25;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_26, 0, sizeof(struct list_item$1sNodeph*));
                        it_25=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_25!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
                            prev_it_26=it_25;
                            __freed_obj__ = 0;
                            it_25=((struct list_item$1sNodeph*)come_null_check(it_25, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_26 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional39=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional39) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_27;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_28, 0, sizeof(struct list_item$1charph*));
                        it_27=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional5=it_27!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional5) {
                            prev_it_28=it_27;
                            __freed_obj__ = 0;
                            it_27=((struct list_item$1charph*)come_null_check(it_27, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_28 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional42=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional42) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional49=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional49) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional50=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional50) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result28__ = ((struct sEnumNode*)come_null_check(self, "16enum.c", 111))->sline;
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value28;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
    __result29__ = __result_obj__ = ((char*)(right_value28=__builtin_string(((struct sEnumNode*)come_null_check(self, "16enum.c", 116))->sname)));
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_30;
_Bool output_31;
void* right_value30;
_Bool _if_conditional59;
void* right_value31;
void* right_value32;
struct sClass* __dec_obj10;
void* right_value44;
void* right_value95;
struct sClass* __dec_obj43;
void* right_value96;
void* right_value97;
void* right_value98;
struct list$1tuple2$2charphsNodephph* elements_106;
_Bool _while_condtional19;
void* right_value99;
char* element_name_108;
_Bool _if_conditional200;
_Bool no_comma_109;
void* right_value100;
struct sNode* element_value_110;
_Bool _if_conditional201;
void* right_value104;
void* right_value107;
_Bool _if_conditional204;
void* right_value108;
void* right_value109;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value110;
void* right_value111;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value117;
struct sNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&output_31, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&elements_106, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value99, 0, sizeof(void*));
memset(&element_name_108, 0, sizeof(char*));
memset(&no_comma_109, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&element_value_110, 0, sizeof(struct sNode*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional59=((struct sClass*)(right_value30=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 133))->classes, "16enum.c", 133)),type_name,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30),
    (right_value30 && right_value30 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value30, 
    __freed_obj__ = 0, 
    _if_conditional59) {
        output_31=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj10=klass_30;
        klass_30=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value32=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value31=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 125)))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        if(__dec_obj10) { come_call_finalizer(sClass_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value32;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 126))->classes, "16enum.c", 126)),(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_30));
        __freed_obj__ = 0;
    }
    else {
        output_31=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj43=klass_30;
        klass_30=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value95=sClass_clone(((struct sClass*)(right_value44=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 130))->classes, "16enum.c", 130)),type_name,((void*)0))))))));
        if(__dec_obj43) { come_call_finalizer(sClass_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value44;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value95;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("16enum.c", 133),((struct optional$2intbool*)(right_value96=expected_next_character(123,info)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value96;
    __freed_obj__ = 0;
    elements_106=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value98=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value97=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 135))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value97;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value98;
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        element_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 140),((struct optional$2charphbool*)(right_value99=parse_word(info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional200=*((struct sInfo*)come_null_check(info, "16enum.c", 164))->p==61,        __freed_obj__ = 0, 
        _if_conditional200) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 145))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            no_comma_109=((struct sInfo*)come_null_check(info, "16enum.c", 148))->no_comma;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "16enum.c", 149))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            element_value_110=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "16enum.c", 152))->no_comma=no_comma_109;
            __freed_obj__ = 0;
            if(_if_conditional201=!((struct sInfo*)come_null_check(info, "16enum.c", 157))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional201) {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_106, "16enum.c", 155)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value107=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value104=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 155)))),(char*)come_increment_ref_count(element_name_108),(struct sNode*)come_increment_ref_count(element_value_110))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value104;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value107;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(element_value_110 && !__freed_obj__) { element_value_110 = come_decrement_ref_count(element_value_110, ((struct sNode*)element_value_110)->finalize, ((struct sNode*)element_value_110)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional204=!((struct sInfo*)come_null_check(info, "16enum.c", 162))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional204) {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_106, "16enum.c", 160)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value109=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value108=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 160)))),(char*)come_increment_ref_count(element_name_108),((void*)0))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value108;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value109;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional205=*((struct sInfo*)come_null_check(info, "16enum.c", 171))->p==44,        __freed_obj__ = 0, 
        _if_conditional205) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 167))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional206=*((struct sInfo*)come_null_check(info, "16enum.c", 178))->p==125,        __freed_obj__ = 0, 
        _if_conditional206) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 174))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(element_name_108 && !__freed_obj__) { element_name_108 = come_decrement_ref_count(element_name_108, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(element_name_108 && !__freed_obj__) { element_name_108 = come_decrement_ref_count(element_name_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 180);
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value111=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value110=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 180)))),(char*)come_increment_ref_count(type_name),elements_106,output_31,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result92__ = __result_obj__ = ((struct sNode*)(right_value117=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_30 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_106 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value110;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value111;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_30 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_106 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_32;
unsigned int it_33;
_Bool _while_condtional6;
_Bool _if_conditional54;
void* right_value29;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional56;
struct sClass* __result32__;
_Bool _if_conditional57;
_Bool _if_conditional58;
struct sClass* __result33__;
struct sClass* __result34__;
struct sClass* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_32, 0, sizeof(unsigned int));
memset(&it_33, 0, sizeof(unsigned int));
memset(&right_value29, 0, sizeof(void*));
        hash_32=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
        __freed_obj__ = 0;
        it_33=hash_32;
        __freed_obj__ = 0;
        while(_while_condtional6=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional6) {
            if(_if_conditional54=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_33],            __freed_obj__ = 0, 
            _if_conditional54) {
                if(_if_conditional56=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value29=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_33], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value29, 
                __freed_obj__ = 0, 
                _if_conditional56) {
                    __result32__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_33];
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_33++;
                __freed_obj__ = 0;
                if(_if_conditional57=it_33>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                __freed_obj__ = 0, 
                _if_conditional57) {
                    it_33=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional58=it_33==hash_32,                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        __result33__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result33__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result34__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result34__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result35__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result35__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
_Bool default_value_34;
_Bool __result30__;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_34, 0, sizeof(_Bool));
                    if(_if_conditional55=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional55) {
                        __freed_obj__ = 0;
                        memset(&default_value_34,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result30__ = default_value_34;
                        __freed_obj__ = 0;
                        return __result30__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result31__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result31__;
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

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional60=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_35;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_35, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_35=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_35!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    prev_it_36=it_35;
                    __freed_obj__ = 0;
                    it_35=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_35, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_36 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional62=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional62) {
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional63=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional63) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional64=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional64) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
unsigned int hash_52;
unsigned int it_53;
_Bool _while_condtional9;
_Bool _if_conditional74;
void* right_value38;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool same_key_exist_70;
char* it2_73;
_Bool _for_condtionalA3;
void* right_value40;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct map$2charphsClassph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_52, 0, sizeof(unsigned int));
memset(&it_53, 0, sizeof(unsigned int));
memset(&right_value38, 0, sizeof(void*));
memset(&same_key_exist_70, 0, sizeof(_Bool));
memset(&it2_73, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
            if(_if_conditional66=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional66) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_52=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_53=hash_52;
            __freed_obj__ = 0;
            while(_while_condtional9=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional74=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_53],                __freed_obj__ = 0, 
                _if_conditional74) {
                    if(_if_conditional75=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value38=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_53], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38),
                    (right_value38 && right_value38 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value38, 
                    __freed_obj__ = 0, 
                    _if_conditional75) {
                        if(_if_conditional76=1,                        __freed_obj__ = 0, 
                        _if_conditional76) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_53]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_53]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_53]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_53]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional96=1,                        __freed_obj__ = 0, 
                        _if_conditional96) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_53] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_53], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_53]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_53]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_53++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_53>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional97) {
                        it_53=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional98=it_53==hash_52,                        __freed_obj__ = 0, 
                        _if_conditional98) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_53]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional99=1,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_53]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_53]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional100=1,                    __freed_obj__ = 0, 
                    _if_conditional100) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_53]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_53]=item;
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
            same_key_exist_70=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_73=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA3;            it2_73=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional105=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value40=string_equals(((char*)come_null_check(it2_73, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
                (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value40, 
                __freed_obj__ = 0, 
                _if_conditional105) {
                    same_key_exist_70=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=!same_key_exist_70,            __freed_obj__ = 0, 
            _if_conditional106) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result55__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result55__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_37;
void* right_value33;
char** keys_38;
void* right_value34;
struct sClass** items_39;
void* right_value35;
_Bool* item_existance_40;
int len_41;
char* it_44;
_Bool _for_condtionalA2;
struct sClass* default_value_47;
void* right_value36;
struct sClass* it2_48;
unsigned int hash_49;
int n_50;
_Bool _while_condtional8;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct sClass* default_value_51;
void* right_value37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_37, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&keys_38, 0, sizeof(char**));
memset(&right_value34, 0, sizeof(void*));
memset(&items_39, 0, sizeof(struct sClass**));
memset(&right_value35, 0, sizeof(void*));
memset(&item_existance_40, 0, sizeof(_Bool*));
memset(&len_41, 0, sizeof(int));
memset(&it_44, 0, sizeof(char*));
memset(&default_value_47, 0, sizeof(struct sClass*));
memset(&right_value36, 0, sizeof(void*));
memset(&it2_48, 0, sizeof(struct sClass*));
memset(&hash_49, 0, sizeof(unsigned int));
memset(&n_50, 0, sizeof(int));
memset(&default_value_51, 0, sizeof(struct sClass*));
memset(&right_value37, 0, sizeof(void*));
                    size_37=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_38=(char**)come_increment_ref_count(((char**)(right_value33=(char**)come_calloc(1, sizeof(char*)*(1*(size_37)), "./comelang2.h", 1370))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    items_39=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value34=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_37)), "./comelang2.h", 1371))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34;
                    __freed_obj__ = 0;
                    item_existance_40=(_Bool*)come_increment_ref_count(((_Bool*)(right_value35=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_37)), "./comelang2.h", 1372))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value35;
                    __freed_obj__ = 0;
                    len_41=0;
                    __freed_obj__ = 0;
                    for(
                    it_44=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA2=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA2;                    it_44=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_47,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_48=((struct sClass*)(right_value36=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_44,default_value_47)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value36;
                        __freed_obj__ = 0;
                        hash_49=string_get_hash_key(((char*)come_null_check(it_44, "./comelang2.h", 1380)))%size_37;
                        __freed_obj__ = 0;
                        n_50=hash_49;
                        __freed_obj__ = 0;
                        while(_while_condtional8=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional8) {
                            if(_if_conditional71=item_existance_40[n_50],                            __freed_obj__ = 0, 
                            _if_conditional71) {
                                n_50++;
                                __freed_obj__ = 0;
                                if(_if_conditional72=n_50>=size_37,                                __freed_obj__ = 0, 
                                _if_conditional72) {
                                    n_50=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional73=n_50==hash_49,                                    __freed_obj__ = 0, 
                                    _if_conditional73) {
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
                                item_existance_40[n_50]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_38[n_50]=it_44;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_39[n_50]=((struct sClass*)(right_value37=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_44,default_value_51)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value37;
                                __freed_obj__ = 0;
                                len_41++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_38;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_39;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_40;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_37;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_41;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
char* result_42;
char* __result36__;
_Bool _if_conditional68;
char* __result37__;
char* result_43;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_42, 0, sizeof(char*));
memset(&result_43, 0, sizeof(char*));
                        if(_if_conditional67=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional67) {
                            __freed_obj__ = 0;
                            memset(&result_42,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result36__ = __result_obj__ = result_42;
                            __freed_obj__ = 0;
                            return __result36__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional68=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional68) {
                            __result37__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result37__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_43,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result38__ = __result_obj__ = result_43;
                        __freed_obj__ = 0;
                        return __result38__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result39__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result39__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
char* result_45;
char* __result40__;
_Bool _if_conditional70;
char* __result41__;
char* result_46;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_45, 0, sizeof(char*));
memset(&result_46, 0, sizeof(char*));
                        if(_if_conditional69=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional69) {
                            __freed_obj__ = 0;
                            memset(&result_45,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result40__ = __result_obj__ = result_45;
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional70=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional70) {
                            __result41__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_46,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result42__ = __result_obj__ = result_46;
                        __freed_obj__ = 0;
                        return __result42__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_54;
struct list_item$1charp* it_55;
_Bool _while_condtional10;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional77;
struct list$1charp* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct list_item$1charp*));
memset(&right_value39, 0, sizeof(void*));
                                it2_54=0;
                                __freed_obj__ = 0;
                                it_55=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional10=it_55!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional10) {
                                    if(_if_conditional77=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_55, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39),
                                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value39, 
                                    __freed_obj__ = 0, 
                                    _if_conditional77) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_54,it2_54+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_54++;
                                    __freed_obj__ = 0;
                                    it_55=((struct list_item$1charp*)come_null_check(it_55, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result46__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result46__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
int tmp_56;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result43__;
_Bool _if_conditional84;
_Bool _if_conditional85;
struct list_item$1charp* it_59;
int i_60;
_Bool _while_condtional12;
_Bool _if_conditional86;
struct list_item$1charp* prev_it_61;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list_item$1charp* it_62;
int i_63;
_Bool _while_condtional13;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct list_item$1charp* prev_it_64;
struct list_item$1charp* it_65;
struct list_item$1charp* head_prev_it_66;
struct list_item$1charp* tail_it_67;
int i_68;
_Bool _while_condtional14;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* prev_it_69;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct list$1charp* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_56, 0, sizeof(int));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&i_60, 0, sizeof(int));
memset(&prev_it_61, 0, sizeof(struct list_item$1charp*));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
memset(&i_63, 0, sizeof(int));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
memset(&it_65, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_66, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_67, 0, sizeof(struct list_item$1charp*));
memset(&i_68, 0, sizeof(int));
memset(&prev_it_69, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional78=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional78) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional79=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional79) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional80=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional80) {
                                                tmp_56=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_56;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional81=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional81) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional82=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional82) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional83=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional83) {
                                                __result43__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result43__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional84=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional84) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional85=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional85) {
                                                    it_59=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_60=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional12=it_59!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional12) {
                                                        if(_if_conditional86=i_60<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional86) {
                                                            prev_it_61=it_59;
                                                            __freed_obj__ = 0;
                                                            it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_60++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_61 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional87=i_60==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional87) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_59;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_60++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional88=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional88) {
                                                        it_62=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_63=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional13=it_62!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional13) {
                                                            if(_if_conditional89=i_63==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional89) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional90=i_63>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional90) {
                                                                prev_it_64=it_62;
                                                                __freed_obj__ = 0;
                                                                it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_63++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_64 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_63++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_65=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_66=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_67=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_68=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional14=it_65!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional14) {
                                                            if(_if_conditional91=i_68==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional91) {
                                                                head_prev_it_66=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional92=i_68==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional92) {
                                                                tail_it_67=it_65;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional93=i_68>=head&&i_68<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional93) {
                                                                prev_it_69=it_65;
                                                                __freed_obj__ = 0;
                                                                it_65=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_68++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_69 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_65=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_68++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional94=head_prev_it_66!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional94) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_66, "./comelang2.h", 620))->next=tail_it_67;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional95=tail_it_67!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional95) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_67, "./comelang2.h", 623))->prev=head_prev_it_66;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result45__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result45__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_57;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_58;
struct list$1charp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_57, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
                                                    it_57=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional11=it_57!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional11) {
                                                        prev_it_58=it_57;
                                                        __freed_obj__ = 0;
                                                        it_57=((struct list_item$1charp*)come_null_check(it_57, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result44__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result44__;
                                                    __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
char* result_71;
char* __result47__;
_Bool _if_conditional102;
char* __result48__;
char* result_72;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
                if(_if_conditional101=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    __freed_obj__ = 0;
                    memset(&result_71,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result47__ = __result_obj__ = result_71;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional102=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional102) {
                    __result48__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_72,0,sizeof(char*));
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = result_72;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result50__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
char* result_74;
char* __result51__;
_Bool _if_conditional104;
char* __result52__;
char* result_75;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_74, 0, sizeof(char*));
memset(&result_75, 0, sizeof(char*));
                if(_if_conditional103=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    __freed_obj__ = 0;
                    memset(&result_74,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result51__ = __result_obj__ = result_74;
                    __freed_obj__ = 0;
                    return __result51__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional104=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional104) {
                    __result52__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_75,0,sizeof(char*));
                __freed_obj__ = 0;
                __result53__ = __result_obj__ = result_75;
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value41;
struct list_item$1charp* litem_76;
_Bool _if_conditional108;
void* right_value42;
struct list_item$1charp* litem_77;
void* right_value43;
struct list_item$1charp* litem_78;
struct list$1charp* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1charp*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional107=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        litem_76=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value41=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value41;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_76;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_76;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional108=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional108) {
                            litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value42=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value42;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_77;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_77;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_78=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value43=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value43;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_78;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_78;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result54__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result54__;
                    __freed_obj__ = 0;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
struct sClass* __result56__;
void* right_value45;
struct sClass* result_79;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value46;
char* __dec_obj11;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value93;
struct list$1tuple2$2charphsTypephph* __dec_obj41;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value94;
char* __dec_obj42;
struct sClass* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct sClass*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
            if(_if_conditional109=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional109) {
                __result56__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result56__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_79=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value45=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value45;
            __freed_obj__ = 0;
            if(_if_conditional110=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional110) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional111=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional112=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional112) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional113=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional113) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional114=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional115=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional116=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional116) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional117=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional118=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 13))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                __dec_obj11=((struct sClass*)come_null_check(result_79, "sClass_clone", 12))->mName;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value46;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional120=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional120) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional121=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 16))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __dec_obj41=((struct sClass*)come_null_check(result_79, "sClass_clone", 15))->mFields;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value93=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
                if(__dec_obj41) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value93;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 18))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                __dec_obj42=((struct sClass*)come_null_check(result_79, "sClass_clone", 17))->mDeclareSName;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value94;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = result_79;
            if(result_79 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(result_79 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
struct list$1tuple2$2charphsTypephph* __result57__;
void* right_value47;
void* right_value48;
struct list$1tuple2$2charphsTypephph* result_80;
struct list_item$1tuple2$2charphsTypephph* it_81;
_Bool _while_condtional15;
void* right_value92;
struct list$1tuple2$2charphsTypephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_81, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value92, 0, sizeof(void*));
                    if(_if_conditional122=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional122) {
                        __result57__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_80=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value48=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value47=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value47;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value48;
                    __freed_obj__ = 0;
                    it_81=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_81!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_80, "./comelang2.h", 192)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value92=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_81, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value92;
                        __freed_obj__ = 0;
                        it_81=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_81, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result82__ = __result_obj__ = result_80;
                    if(result_80 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result82__;
                    __freed_obj__ = 0;
                    if(result_80 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result58__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result58__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
void* right_value49;
struct list_item$1tuple2$2charphsTypephph* litem_82;
struct tuple2$2charphsTypeph* __dec_obj12;
_Bool _if_conditional126;
void* right_value50;
struct list_item$1tuple2$2charphsTypephph* litem_83;
struct tuple2$2charphsTypeph* __dec_obj13;
void* right_value51;
struct list_item$1tuple2$2charphsTypephph* litem_84;
struct tuple2$2charphsTypeph* __dec_obj14;
struct list$1tuple2$2charphsTypephph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional123=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional123) {
                                litem_82=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value49=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value49;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 206))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 206))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_82;
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_82;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional126=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional126) {
                                    litem_83=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value50=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value50;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj13=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 216))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 216))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj13) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_83;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_83;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_84=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value51=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value51;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 226))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 226))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_84;
                                    __freed_obj__ = 0;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_84;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result59__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result59__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional124=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional124) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional125=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional125) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
struct tuple2$2charphsTypeph* __result60__;
void* right_value52;
struct tuple2$2charphsTypeph* result_85;
_Bool _if_conditional128;
void* right_value53;
char* __dec_obj15;
_Bool _if_conditional129;
void* right_value91;
struct sType* __dec_obj40;
struct tuple2$2charphsTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
                            if(_if_conditional127=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional127) {
                                __result60__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result60__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_85=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value52=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value52;
                            __freed_obj__ = 0;
                            if(_if_conditional128=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional128) {
                                __dec_obj15=((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 4))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value53;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional129=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional129) {
                                __dec_obj40=((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 5))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                                if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value91;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result81__ = __result_obj__ = result_85;
                            if(result_85 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result81__;
                            __freed_obj__ = 0;
                            if(result_85 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct sType* __result61__;
void* right_value54;
struct sType* result_86;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional136;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional139;
void* right_value61;
char* __dec_obj20;
_Bool _if_conditional140;
void* right_value68;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional144;
void* right_value75;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional148;
_Bool _if_conditional149;
void* right_value76;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional150;
void* right_value83;
struct list$1charph* __dec_obj33;
_Bool _if_conditional154;
void* right_value86;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value87;
struct sNode* __dec_obj36;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value88;
struct sNode* __dec_obj37;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value89;
char* __dec_obj38;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value90;
char* __dec_obj39;
struct sType* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
                                    if(_if_conditional130=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional130) {
                                        __result61__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result61__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value54;
                                    __freed_obj__ = 0;
                                    if(_if_conditional131=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional131) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional132=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional132) {
                                        __dec_obj17=((struct sType*)come_null_check(result_86, "sType_clone", 5))->mNoSolvedGenericsType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                        if(__dec_obj17) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value57;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional136=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional136) {
                                        __dec_obj19=((struct sType*)come_null_check(result_86, "sType_clone", 6))->mOriginalLoadVarType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                        if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value60;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional139=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional139) {
                                        __dec_obj20=((struct sType*)come_null_check(result_86, "sType_clone", 7))->mGenericsName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value61;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional140=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional140) {
                                        __dec_obj24=((struct sType*)come_null_check(result_86, "sType_clone", 8))->mGenericsTypes;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value68=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                        if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                                        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value68;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional144=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional144) {
                                        __dec_obj28=((struct sType*)come_null_check(result_86, "sType_clone", 9))->mArrayNum;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value75=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                        if(__dec_obj28) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value75;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional148=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional148) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional149=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional149) {
                                        __dec_obj29=((struct sType*)come_null_check(result_86, "sType_clone", 11))->mParamTypes;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value76=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                        if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value76;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional150) {
                                        __dec_obj33=((struct sType*)come_null_check(result_86, "sType_clone", 12))->mParamNames;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value83=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value83;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional154) {
                                        __dec_obj35=((struct sType*)come_null_check(result_86, "sType_clone", 13))->mResultType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value86=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                        if(__dec_obj35) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value86;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional157=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional157) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional158=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional158) {
                                        __dec_obj36=((struct sType*)come_null_check(result_86, "sType_clone", 15))->mAlignas;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                                        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value87;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional159=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional159) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional160=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional160) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional161=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional161) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional162=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional162) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional163=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional163) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional164=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional164) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional165=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional165) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional166=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional166) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional167=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional167) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional168=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional168) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional169=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional169) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional170=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional170) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional171=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional171) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional172=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional172) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional173=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional173) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional174=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional174) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional175=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional175) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional176=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional176) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional177=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional177) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional178=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional178) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional179=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional179) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional180=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional180) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional181=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional181) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional182=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional182) {
                                        __dec_obj37=((struct sType*)come_null_check(result_86, "sType_clone", 39))->mSizeNum;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value88;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional183=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional183) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional184=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional184) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional185=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional185) {
                                        __dec_obj38=((struct sType*)come_null_check(result_86, "sType_clone", 42))->mOriginalTypeName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value89;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional186=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional186) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional187=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional187) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional188=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional188) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional189=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional189) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional190=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional190) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional191=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional191) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional192=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional192) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional193=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional193) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional194=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional194) {
                                        __dec_obj39=((struct sType*)come_null_check(result_86, "sType_clone", 51))->mAsmName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value90=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value90;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result80__ = __result_obj__ = result_86;
                                    if(result_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result80__;
                                    __freed_obj__ = 0;
                                    if(result_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional134=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional134) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
struct list$1sTypeph* __result66__;
void* right_value62;
void* right_value63;
struct list$1sTypeph* result_89;
struct list_item$1sTypeph* it_90;
_Bool _while_condtional16;
void* right_value67;
struct list$1sTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct list$1sTypeph*));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value67, 0, sizeof(void*));
                                            if(_if_conditional141=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional141) {
                                                __result66__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result66__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_89=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value62=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value62;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
                                            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value63;
                                            __freed_obj__ = 0;
                                            it_90=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional16=it_90!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional16) {
                                                list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_89, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_90, "./comelang2.h", 192))->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value67;
                                                __freed_obj__ = 0;
                                                it_90=((struct list_item$1sTypeph*)come_null_check(it_90, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result69__ = __result_obj__ = result_89;
                                            if(result_89 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result69__;
                                            __freed_obj__ = 0;
                                            if(result_89 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result67__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result67__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
void* right_value64;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj21;
_Bool _if_conditional143;
void* right_value65;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj22;
void* right_value66;
struct list_item$1sTypeph* litem_93;
struct sType* __dec_obj23;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value65, 0, sizeof(void*));
memset(&litem_92, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value66, 0, sizeof(void*));
memset(&litem_93, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional142=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional142) {
                                                        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value64=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value64;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_91;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_91;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional143=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional143) {
                                                            litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value65=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                                                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value65;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_92;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_92;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_93=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value66=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                                                            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value66;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_93;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_93;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result68__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result68__;
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
_Bool _if_conditional145;
struct list$1sNodeph* __result70__;
void* right_value69;
void* right_value70;
struct list$1sNodeph* result_94;
struct list_item$1sNodeph* it_95;
_Bool _while_condtional17;
void* right_value74;
struct list$1sNodeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&result_94, 0, sizeof(struct list$1sNodeph*));
memset(&it_95, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value74, 0, sizeof(void*));
                                            if(_if_conditional145=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional145) {
                                                __result70__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result70__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_94=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value69=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value69;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value70;
                                            __freed_obj__ = 0;
                                            it_95=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional17=it_95!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional17) {
                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_94, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_95, "./comelang2.h", 192))->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                                                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value74;
                                                __freed_obj__ = 0;
                                                it_95=((struct list_item$1sNodeph*)come_null_check(it_95, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result73__ = __result_obj__ = result_94;
                                            if(result_94 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_94, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result73__;
                                            __freed_obj__ = 0;
                                            if(result_94 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_94, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result71__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result71__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
void* right_value71;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj25;
_Bool _if_conditional147;
void* right_value72;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj26;
void* right_value73;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_98, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional146=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional146) {
                                                        litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value71=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value71;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj25=((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_96;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_96;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional147=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional147) {
                                                            litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value72=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value72;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj26=((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_97;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_97;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value73=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                                                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value73;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj27=((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_98;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_98;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result72__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                    __freed_obj__ = 0;
                                                    return __result72__;
                                                    __freed_obj__ = 0;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
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
_Bool _if_conditional151;
struct list$1charph* __result74__;
void* right_value77;
void* right_value78;
struct list$1charph* result_99;
struct list_item$1charph* it_100;
_Bool _while_condtional18;
void* right_value82;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct list$1charph*));
memset(&it_100, 0, sizeof(struct list_item$1charph*));
memset(&right_value82, 0, sizeof(void*));
                                            if(_if_conditional151=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional151) {
                                                __result74__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result74__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_99=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value77=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value77;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value78;
                                            __freed_obj__ = 0;
                                            it_100=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional18=it_100!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional18) {
                                                list$1charph_add(((struct list$1charph*)come_null_check(result_99, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value82=string_clone(((struct list_item$1charph*)come_null_check(it_100, "./comelang2.h", 192))->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                                                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value82;
                                                __freed_obj__ = 0;
                                                it_100=((struct list_item$1charph*)come_null_check(it_100, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result77__ = __result_obj__ = result_99;
                                            if(result_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result77__;
                                            __freed_obj__ = 0;
                                            if(result_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result75__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result75__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
void* right_value79;
struct list_item$1charph* litem_101;
char* __dec_obj30;
_Bool _if_conditional153;
void* right_value80;
struct list_item$1charph* litem_102;
char* __dec_obj31;
void* right_value81;
struct list_item$1charph* litem_103;
char* __dec_obj32;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1charph*));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1charph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional152=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional152) {
                                                        litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                                                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value79;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj30=((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_101;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_101;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional153=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional153) {
                                                            litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value80;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj31=((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_102;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_102;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value81=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value81;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj32=((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_103;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_103;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result76__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result76__;
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
_Bool _if_conditional155;
struct tuple1$1sTypeph* __result78__;
void* right_value84;
struct tuple1$1sTypeph* result_104;
_Bool _if_conditional156;
void* right_value85;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&result_104, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value85, 0, sizeof(void*));
                                            if(_if_conditional155=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional155) {
                                                __result78__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result78__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_104=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value84=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value84;
                                            __freed_obj__ = 0;
                                            if(_if_conditional156=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional156) {
                                                __dec_obj34=((struct tuple1$1sTypeph*)come_null_check(result_104, "tuple1$1sTypephp_clone", 4))->v1;
                                                ((struct tuple1$1sTypeph*)come_null_check(result_104, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                                if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value85;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result79__ = __result_obj__ = result_104;
                                            if(result_104 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result79__;
                                            __freed_obj__ = 0;
                                            if(result_104 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
int default_value_105;
int __result84__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_105, 0, sizeof(int));
        if(_if_conditional197=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            __freed_obj__ = 0;
            memset(&default_value_105,0,sizeof(int));
            __freed_obj__ = 0;
            __result84__ = default_value_105;
            __freed_obj__ = 0;
            return __result84__;
            __freed_obj__ = 0;
        }
        else {
            __result85__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result85__;
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

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
char* default_value_107;
char* __result86__;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_107, 0, sizeof(char*));
            if(_if_conditional198=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                __freed_obj__ = 0;
                memset(&default_value_107,0,sizeof(char*));
                __freed_obj__ = 0;
                __result86__ = __result_obj__ = default_value_107;
                __freed_obj__ = 0;
                return __result86__;
                __freed_obj__ = 0;
            }
            else {
                __result87__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional199=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
void* right_value101;
struct list_item$1tuple2$2charphsNodephph* litem_111;
struct tuple2$2charphsNodeph* __dec_obj44;
_Bool _if_conditional203;
void* right_value102;
struct list_item$1tuple2$2charphsNodephph* litem_112;
struct tuple2$2charphsNodeph* __dec_obj45;
void* right_value103;
struct list_item$1tuple2$2charphsNodephph* litem_113;
struct tuple2$2charphsNodeph* __dec_obj46;
struct list$1tuple2$2charphsNodephph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional202=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional202) {
                        litem_111=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value101=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 272))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value101;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj44=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 276))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 276))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj44) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_111;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_111;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional203=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional203) {
                            litem_112=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value102=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value102;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj45=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 286))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 286))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_112;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_112;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_113=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value103=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value103;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj46=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 296))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 296))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_113;
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_113;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result88__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result88__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __dec_obj47;
void* right_value106;
struct sNode* __dec_obj48;
struct tuple2$2charphsNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
                    __dec_obj47=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(v1))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value105;
                    __freed_obj__ = 0;
                    __dec_obj48=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(v2))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value106;
                    __freed_obj__ = 0;
                    __result89__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
char* type_name_115;
_Bool _if_conditional219;
void* right_value118;
char* __dec_obj53;
void* right_value119;
char* __dec_obj54;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
struct list$1tuple2$2charphsNodephph* elements_116;
_Bool _while_condtional20;
void* right_value125;
char* element_name_117;
_Bool _if_conditional220;
_Bool no_comma_118;
void* right_value126;
struct sNode* element_value_119;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value131;
void* right_value132;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value138;
struct sNode* __result95__;
void* right_value139;
void* right_value140;
struct sNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_115, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&elements_116, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value125, 0, sizeof(void*));
memset(&element_name_117, 0, sizeof(char*));
memset(&no_comma_118, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&element_value_119, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    if(_if_conditional218=string_operator_equals(buf,"enum"),    __freed_obj__ = 0, 
    _if_conditional218) {
        type_name_115=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional219=*((struct sInfo*)come_null_check(info, "16enum.c", 196))->p==123,        __freed_obj__ = 0, 
        _if_conditional219) {
            __dec_obj53=type_name_115;
            type_name_115=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(""))));
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            __dec_obj54=type_name_115;
            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 191),((struct optional$2charphbool*)(right_value119=parse_word(info))))));
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value119;
            __freed_obj__ = 0;
            map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 193))->classes, "16enum.c", 193)),(char*)come_increment_ref_count(type_name_115),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value121=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value120=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 193)))),type_name_115,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value120;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value121);
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value121;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("16enum.c", 196),((struct optional$2intbool*)(right_value122=expected_next_character(123,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value122;
        __freed_obj__ = 0;
        elements_116=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value124=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value123=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 198))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value123;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value124;
        __freed_obj__ = 0;
        while(_while_condtional20=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional20) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            element_name_117=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 202),((struct optional$2charphbool*)(right_value125=parse_word(info))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value125;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional220=*((struct sInfo*)come_null_check(info, "16enum.c", 220))->p==61,            __freed_obj__ = 0, 
            _if_conditional220) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 206))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_118=((struct sInfo*)come_null_check(info, "16enum.c", 209))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "16enum.c", 210))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                element_value_119=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value126;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "16enum.c", 213))->no_comma=no_comma_118;
                __freed_obj__ = 0;
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_116, "16enum.c", 215)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value128=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value127=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 215)))),(char*)come_increment_ref_count(element_name_117),(struct sNode*)come_increment_ref_count(element_value_119))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value127;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value128;
                __freed_obj__ = 0;
                if(element_value_119 && !__freed_obj__) { element_value_119 = come_decrement_ref_count(element_value_119, ((struct sNode*)element_value_119)->finalize, ((struct sNode*)element_value_119)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_116, "16enum.c", 218)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value130=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value129=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 218)))),(char*)come_increment_ref_count(element_name_117),((void*)0))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value130;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional221=*((struct sInfo*)come_null_check(info, "16enum.c", 226))->p==44,            __freed_obj__ = 0, 
            _if_conditional221) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 223))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional222=*((struct sInfo*)come_null_check(info, "16enum.c", 233))->p==125,            __freed_obj__ = 0, 
            _if_conditional222) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 229))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(element_name_117 && !__freed_obj__) { element_name_117 = come_decrement_ref_count(element_name_117, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(element_name_117 && !__freed_obj__) { element_name_117 = come_decrement_ref_count(element_name_117, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 235);
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value132=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value131=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 235)))),(char*)come_increment_ref_count(type_name_115),elements_116,(_Bool)1,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result95__ = __result_obj__ = ((struct sNode*)(right_value138=_inf_value2));
        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_116 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_116, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value131;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value132;
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_116 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result96__ = __result_obj__ = ((struct sNode*)(right_value140=top_level_v95((char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional223=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->mElements!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mElements && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mElements, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 4))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
struct sEnumNode* __result93__;
void* right_value133;
struct sEnumNode* result_120;
_Bool _if_conditional228;
void* right_value134;
char* __dec_obj55;
_Bool _if_conditional229;
void* right_value135;
struct list$1tuple2$2charphsNodephph* __dec_obj56;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value136;
char* __dec_obj57;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value137;
char* __dec_obj58;
struct sEnumNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sEnumNode*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
            if(_if_conditional227=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional227) {
                __result93__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_120=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value133=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value133;
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5))->mTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                __dec_obj55=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 4))->mTypeName;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 4))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value134=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 4))->mTypeName))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional229=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6))->mElements!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
                __dec_obj56=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 5))->mElements;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 5))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value135=list$1tuple2$2charphsNodephphp_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5))->mElements))));
                if(__dec_obj56) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional230=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 6))->sline=((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional231=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional231) {
                __dec_obj57=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 7))->sname;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 7))->sname))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional232=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional232) {
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 8))->mOutput=((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 8))->mOutput;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional233=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 10))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional233) {
                __dec_obj58=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 9))->mDeclareSName;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 9))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value137=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 9))->mDeclareSName))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result94__ = __result_obj__ = result_120;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result94__;
            __freed_obj__ = 0;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

