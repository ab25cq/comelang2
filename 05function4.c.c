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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2tuple4$4voidpvoidpvoidpboolphbool
{
    struct tuple4$4voidpvoidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct optional$2sTypepbool
{
    struct sType* v1;
    _Bool v2;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
};
struct optional$2tuple3$3voidpvoidpboolphbool
{
    struct tuple3$3voidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2);
static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2);
static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self);
static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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







void skip_paren(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int nest_0;
_Bool _while_condtional1;
_Bool _if_conditional1;
_Bool _if_conditional2;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&nest_0, 0, sizeof(int));
    nest_0=0;
    __freed_obj__ = 0;
    while(_while_condtional1=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional1=*((struct sInfo*)come_null_check(info, "05function4.c", 25))->p==40,        __freed_obj__ = 0, 
        _if_conditional1) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 8))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            nest_0++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional2=*((struct sInfo*)come_null_check(info, "05function4.c", 25))->p==41,            __freed_obj__ = 0, 
            _if_conditional2) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 14))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                nest_0--;
                __freed_obj__ = 0;
                if(_if_conditional3=nest_0==0,                __freed_obj__ = 0, 
                _if_conditional3) {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 23))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional4;
_Bool _while_condtional5;
_Bool _if_conditional5;
_Bool _if_conditional6;
int line_1;
void* right_value0;
void* right_value1;
struct buffer* fname_2;
_Bool _while_condtional6;
_Bool _if_conditional7;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value2;
char* __dec_obj1;
_Bool _if_conditional8;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_1, 0, sizeof(int));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&fname_2, 0, sizeof(struct buffer*));
memset(&right_value2, 0, sizeof(void*));
    while(_while_condtional2=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 35))->p,"__attribute__",strlen("__attribute__"))==0,    __freed_obj__ = 0, 
    _while_condtional2) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 31))->p+=strlen("__attribute__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_paren(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional3=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 39))->p,"__extension__",strlen("__extension__"))==0,    __freed_obj__ = 0, 
    _while_condtional3) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 36))->p+=strlen("__extension__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional4=*((struct sInfo*)come_null_check(info, "05function4.c", 114))->p==35,    __freed_obj__ = 0, 
    _while_condtional4) {
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 55))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional4=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 111))->p,"pragma",strlen("pragma"))==0,        __freed_obj__ = 0, 
        _if_conditional4) {
            while(_while_condtional5=*((struct sInfo*)come_null_check(info, "05function4.c", 68))->p,            __freed_obj__ = 0, 
            _while_condtional5) {
                if(_if_conditional5=*((struct sInfo*)come_null_check(info, "05function4.c", 67))->p==10,                __freed_obj__ = 0, 
                _if_conditional5) {
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 65))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional6=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 111))->p),            __freed_obj__ = 0, 
            _if_conditional6) {
                line_1=0;
                __freed_obj__ = 0;
                fname_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
                if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value1;
                __freed_obj__ = 0;
                while(_while_condtional6=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 77))->p),                __freed_obj__ = 0, 
                _while_condtional6) {
                    line_1=line_1*10+(*((struct sInfo*)come_null_check(info, "05function4.c", 74))->p-48);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 75))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional7=*((struct sInfo*)come_null_check(info, "05function4.c", 93))->p==34,                __freed_obj__ = 0, 
                _if_conditional7) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 80))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional7=*((struct sInfo*)come_null_check(info, "05function4.c", 87))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        buffer_append_char(((struct buffer*)come_null_check(fname_2, "05function4.c", 83)),*((struct sInfo*)come_null_check(info, "05function4.c", 83))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 84))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional8=*((struct sInfo*)come_null_check(info, "05function4.c", 90))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional8) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 88))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 90))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 93))->sline=line_1;
                __freed_obj__ = 0;
                __dec_obj1=((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname;
                ((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname=(char*)come_increment_ref_count(((char*)(right_value2=buffer_to_string(((struct buffer*)come_null_check(fname_2, "05function4.c", 94))))));
                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value2);
                if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(fname_2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional8=*((struct sInfo*)come_null_check(info, "05function4.c", 111))->p==34,                __freed_obj__ = 0, 
                _if_conditional8) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 99))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional9=*((struct sInfo*)come_null_check(info, "05function4.c", 105))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional9) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 102))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional10=*((struct sInfo*)come_null_check(info, "05function4.c", 108))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 106))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 108))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional11=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 119))->p,"__attribute__",strlen("__attribute__"))==0,    __freed_obj__ = 0, 
    _while_condtional11) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 115))->p+=strlen("__attribute__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_paren(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional12=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 123))->p,"__extension__",strlen("__extension__"))==0,    __freed_obj__ = 0, 
    _while_condtional12) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 120))->p+=strlen("__extension__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char c_3;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_3, 0, sizeof(char));
    c_3=*(((struct sInfo*)come_null_check(info, "05function4.c", 139))->p+strlen(str));
    __freed_obj__ = 0;
    __result7__ = memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 140))->p,str,strlen(str))==0&&(c_3==59||c_3==32||c_3==9||c_3==10||c_3==10);
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* parse_word(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
void* right_value4;
struct buffer* buf_4;
_Bool _while_condtional13;
void* right_value5;
_Bool _if_conditional9;
void* right_value6;
void* right_value7;
void* right_value8;
struct optional$2charphbool* __result9__;
void* right_value9;
void* right_value10;
void* right_value11;
struct optional$2charphbool* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&buf_4, 0, sizeof(struct buffer*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    buf_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value4;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional13=(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=97&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=122)||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=65&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=90)||*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p==95||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=48&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=57)||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p==36),    __freed_obj__ = 0, 
    _while_condtional13) {
        buffer_append_char(((struct buffer*)come_null_check(buf_4, "05function4.c", 150)),*((struct sInfo*)come_null_check(info, "05function4.c", 150))->p);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 151))->p++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    skip_spaces_and_lf(info);
    __freed_obj__ = 0;
    if(_if_conditional9=string_length(((char*)come_null_check(((char*)(right_value5=buffer_to_string(((struct buffer*)come_null_check(buf_4, "05function4.c", 160))))), "05function4.c", 160)))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value5),
    (right_value5 && right_value5 != __result_obj__ && !__freed_obj__) ? right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value5, 
    __freed_obj__ = 0, 
    _if_conditional9) {
        err_msg(info,"unexpected character(%c). expected word character",*((struct sInfo*)come_null_check(info, "05function4.c", 156))->p);
        __freed_obj__ = 0;
        __result9__ = __result_obj__ = (come_save_stackframe("05function4.c", 157), ((struct optional$2charphbool*)(right_value8=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value7=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 157))),(char*)come_increment_ref_count(((char*)(right_value6=__builtin_string("")))),(_Bool)0))));
        if(buf_4 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_4, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value6;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
        if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value7;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value8);
        if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value8;
        __freed_obj__ = 0;
        return __result9__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = ((struct optional$2charphbool*)(right_value11=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value10=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 160)))),(char*)come_increment_ref_count(((char*)(right_value9=buffer_to_string(((struct buffer*)come_null_check(buf_4, "05function4.c", 160)))))),(_Bool)1)));
    if(buf_4 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value9;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value10;
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
    if(buf_4 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj2;
struct optional$2charphbool* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj2=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result8__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result8__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional10=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional11;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional14=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional14) {
        if(_if_conditional11=*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==32||*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==9,        __freed_obj__ = 0, 
        _if_conditional11) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 167))->p++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional12=*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==10,            __freed_obj__ = 0, 
            _if_conditional12) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 170))->p++;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 171))->sline++;
                __freed_obj__ = 0;
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* o2_saved_5;
struct sType* it_8;
_Bool _for_condtionalA1;
_Bool _if_conditional17;
_Bool __result18__;
_Bool _if_conditional34;
_Bool __result19__;
_Bool __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_5, 0, sizeof(struct list$1sTypeph*));
memset(&it_8, 0, sizeof(struct sType*));
    for(
    o2_saved_5=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "05function4.c", 187))->mGenericsTypes)),it_8=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_8=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional17=is_contained_generics_class(it_8,info),        __freed_obj__ = 0, 
        _if_conditional17) {
            __result18__ = (_Bool)1;
            if(o2_saved_5 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result18__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_5 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional34=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "05function4.c", 191))->mClass, "05function4.c", 191))->mGenerics,    __freed_obj__ = 0, 
    _if_conditional34) {
        __result19__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result19__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result20__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
struct sType* result_6;
struct sType* __result11__;
_Bool _if_conditional14;
struct sType* __result12__;
struct sType* result_7;
struct sType* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_6, 0, sizeof(struct sType*));
memset(&result_7, 0, sizeof(struct sType*));
        if(_if_conditional13=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional13) {
            __freed_obj__ = 0;
            memset(&result_6,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result11__ = __result_obj__ = result_6;
            __freed_obj__ = 0;
            return __result11__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional14) {
            __result12__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result12__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_7,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result13__ = __result_obj__ = result_7;
        __freed_obj__ = 0;
        return __result13__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result14__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result14__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
struct sType* result_9;
struct sType* __result15__;
_Bool _if_conditional16;
struct sType* __result16__;
struct sType* result_10;
struct sType* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_9, 0, sizeof(struct sType*));
memset(&result_10, 0, sizeof(struct sType*));
        if(_if_conditional15=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional15) {
            __freed_obj__ = 0;
            memset(&result_9,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result15__ = __result_obj__ = result_9;
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional16=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional16) {
            __result16__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result16__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_10,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result17__ = __result_obj__ = result_10;
        __freed_obj__ = 0;
        return __result17__;
        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_11;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sTypeph*));
                it_11=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional15=it_11!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional15) {
                    prev_it_12=it_11;
                    __freed_obj__ = 0;
                    it_11=((struct list_item$1sTypeph*)come_null_check(it_11, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional18=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional18) {
                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional19) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional21) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional22) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional23) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional24) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional26) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional27) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional29) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional30) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional31) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional32) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional33) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional20=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional20) {
                                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_13;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                                        it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional16=it_13!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional16) {
                                            prev_it_14=it_13;
                                            __freed_obj__ = 0;
                                            it_13=((struct list_item$1sNodeph*)come_null_check(it_13, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional25=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional25) {
                                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_15;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1charph*));
                                        it_15=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional17=it_15!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional17) {
                                            prev_it_16=it_15;
                                            __freed_obj__ = 0;
                                            it_15=((struct list_item$1charph*)come_null_check(it_15, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional28=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional28) {
                                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct list$1sTypeph* param_types_17;
void* right_value14;
void* right_value15;
struct list$1charph* param_names_18;
void* right_value16;
void* right_value17;
struct list$1charph* param_default_parametors_19;
_Bool var_args_20;
void* right_value18;
_Bool void_param_22;
char* p_23;
int sline_24;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _while_condtional18;
_Bool _if_conditional41;
void* right_value19;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_26;
char* param_name_27;
_Bool err_28;
_Bool _if_conditional46;
void* right_value20;
void* right_value21;
void* right_value22;
void* right_value23;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result29__;
void* right_value24;
struct sType* param_type2_29;
void* right_value62;
void* right_value66;
_Bool _if_conditional122;
char* p_54;
_Bool no_comma_55;
void* right_value67;
struct sNode* node_56;
char* p2_57;
void* right_value68;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value69;
_Bool _if_conditional125;
void* right_value70;
void* right_value80;
void* right_value81;
void* right_value82;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&param_types_17, 0, sizeof(struct list$1sTypeph*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&param_names_18, 0, sizeof(struct list$1charph*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&param_default_parametors_19, 0, sizeof(struct list$1charph*));
memset(&var_args_20, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&void_param_22, 0, sizeof(_Bool));
memset(&p_23, 0, sizeof(char*));
memset(&sline_24, 0, sizeof(int));
memset(&right_value19, 0, sizeof(void*));
memset(&param_type_26, 0, sizeof(struct sType*));
memset(&param_name_27, 0, sizeof(char*));
memset(&err_28, 0, sizeof(_Bool));
memset(&param_type_26, 0, sizeof(struct sType*));
memset(&param_name_27, 0, sizeof(char*));
memset(&err_28, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&param_type2_29, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&p_54, 0, sizeof(char*));
memset(&no_comma_55, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&node_56, 0, sizeof(struct sNode*));
memset(&p2_57, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    param_types_17=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    param_names_18=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value15=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value14=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value15;
    __freed_obj__ = 0;
    param_default_parametors_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value17=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value16=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value16;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value17;
    __freed_obj__ = 0;
    var_args_20=(_Bool)0;
    __freed_obj__ = 0;
    optional$2intbool_value((come_push_stackframe("05function4.c", 201),((struct optional$2intbool*)(right_value18=expected_next_character(40,info)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value18;
    __freed_obj__ = 0;
    void_param_22=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_23=((struct sInfo*)come_null_check(info, "05function4.c", 206))->p;
        __freed_obj__ = 0;
        sline_24=((struct sInfo*)come_null_check(info, "05function4.c", 207))->sline;
        __freed_obj__ = 0;
        if(_if_conditional36=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 218))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional36) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 210))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional37=*((struct sInfo*)come_null_check(info, "05function4.c", 216))->p==41,            __freed_obj__ = 0, 
            _if_conditional37) {
                void_param_22=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 218))->p=p_23;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 219))->sline=sline_24;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional38=void_param_22,    __freed_obj__ = 0, 
    _if_conditional38) {
        if(_if_conditional39=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 232))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional39) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 224))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional40=*((struct sInfo*)come_null_check(info, "05function4.c", 231))->p==41,            __freed_obj__ = 0, 
            _if_conditional40) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 228))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional18=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional18) {
            if(_if_conditional41=*((struct sInfo*)come_null_check(info, "05function4.c", 241))->p==41,            __freed_obj__ = 0, 
            _if_conditional41) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 236))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            multiple_assgin_var1=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 243),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value19=parse_type(info,(_Bool)1,(_Bool)0)))));
            param_type_26=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_27=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_28=multiple_assgin_var1->v3;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
            if(_if_conditional46=!err_28,            __freed_obj__ = 0, 
            _if_conditional46) {
                printf("%s %d: failed to function parametor\n",((struct sInfo*)come_null_check(info, "05function4.c", 246))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 246))->sline);
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = (come_save_stackframe("05function4.c", 247), ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value23=optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value22=(struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4voidpvoidpvoidpboolphbool)*(1), "05function4.c", 247))),(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value21=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value20=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247)))),((void*)0),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
                if(param_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_27 && !__freed_obj__) { param_name_27 = come_decrement_ref_count(param_name_27, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_17 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_18 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value22;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value23;
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            param_type2_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=solve_generics(param_type_26,((struct sInfo*)come_null_check(info, "05function4.c", 250))->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value24;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(param_type2_29, "05function4.c", 252))->mFunctionParam=(_Bool)1;
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_17, "05function4.c", 254)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(param_type2_29)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value62;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(param_names_18, "05function4.c", 255)),(char*)come_increment_ref_count(((char*)(right_value66=string_clone(param_name_27)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value66;
            __freed_obj__ = 0;
            if(_if_conditional122=*((struct sInfo*)come_null_check(info, "05function4.c", 284))->p==61,            __freed_obj__ = 0, 
            _if_conditional122) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 258))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                p_54=((struct sInfo*)come_null_check(info, "05function4.c", 263))->p;
                __freed_obj__ = 0;
                no_comma_55=((struct sInfo*)come_null_check(info, "05function4.c", 265))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 266))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_56=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value67;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 270))->no_comma=no_comma_55;
                __freed_obj__ = 0;
                p2_57=((struct sInfo*)come_null_check(info, "05function4.c", 272))->p;
                __freed_obj__ = 0;
                char buf_58[p2_57-p_54+1];
                memset(&buf_58, 0, sizeof(char)                *(p2_57-p_54+1)                );
                __freed_obj__ = 0;
                memcpy(buf_58,p_54,p2_57-p_54);
                __freed_obj__ = 0;
                buf_58[p2_57-p_54]=0;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_19, "05function4.c", 278)),(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(buf_58)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value68;
                __freed_obj__ = 0;
                if(node_56 && !__freed_obj__) { node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_19, "05function4.c", 281)),((void*)0));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional123=*((struct sInfo*)come_null_check(info, "05function4.c", 304))->p==44,            __freed_obj__ = 0, 
            _if_conditional123) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 287))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional124=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 298))->p,"...",strlen("..."))==0,                __freed_obj__ = 0, 
                _if_conditional124) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 291))->p+=strlen("...");
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    var_args_20=(_Bool)1;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 295),((struct optional$2intbool*)(right_value69=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                    if(param_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_27 && !__freed_obj__) { param_name_27 = come_decrement_ref_count(param_name_27, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional125=*((struct sInfo*)come_null_check(info, "05function4.c", 304))->p==41,                __freed_obj__ = 0, 
                _if_conditional125) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 300))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(param_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_27 && !__freed_obj__) { param_name_27 = come_decrement_ref_count(param_name_27, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(param_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_27 && !__freed_obj__) { param_name_27 = come_decrement_ref_count(param_name_27, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_29, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value82=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_increment_ref_count(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value81=(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool)*(1), "05function4.c", 307)))),(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value80=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value70=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_17),(struct list$1charph*)come_increment_ref_count(param_names_18),(struct list$1charph*)come_increment_ref_count(param_default_parametors_19),var_args_20)))),(_Bool)1)));
    if(param_types_17 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_17, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_18 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value81;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(param_types_17 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_17, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_18 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result21__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result21__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result22__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result22__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
int default_value_21;
int __result23__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_21, 0, sizeof(int));
        if(_if_conditional35=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional35) {
            __freed_obj__ = 0;
            memset(&default_value_21,0,sizeof(int));
            __freed_obj__ = 0;
            __result23__ = default_value_21;
            __freed_obj__ = 0;
            return __result23__;
            __freed_obj__ = 0;
        }
        else {
            __result24__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result24__;
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

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
struct tuple3$3sTypephcharphbool* default_value_25;
struct tuple3$3sTypephcharphbool* __result25__;
struct tuple3$3sTypephcharphbool* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_25, 0, sizeof(struct tuple3$3sTypephcharphbool*));
                if(_if_conditional42=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional42) {
                    __freed_obj__ = 0;
                    memset(&default_value_25,0,sizeof(struct tuple3$3sTypephcharphbool*));
                    __freed_obj__ = 0;
                    __result25__ = __result_obj__ = default_value_25;
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                }
                else {
                    __result26__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional43=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional43) {
                    if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional44=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional44) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional45=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1879))->v1=v1;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1880))->v2=v2;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1881))->v3=v3;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1882))->v4=v4;
                    __freed_obj__ = 0;
                    __result27__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __dec_obj3;
struct optional$2tuple4$4voidpvoidpvoidpboolphbool* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj3=((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(v1);
                    if(__dec_obj3) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result28__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result28__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional47=self!=((void*)0)&&((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional47) {
                            if(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
void* right_value25;
struct list_item$1sTypeph* litem_30;
struct sType* __dec_obj4;
_Bool _if_conditional49;
void* right_value26;
struct list_item$1sTypeph* litem_31;
struct sType* __dec_obj5;
void* right_value27;
struct list_item$1sTypeph* litem_32;
struct sType* __dec_obj6;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional48=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional48) {
                    litem_30=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_30, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_30, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj4=((struct list_item$1sTypeph*)come_null_check(litem_30, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_30, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_30;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_30;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional49=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional49) {
                        litem_31=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value26;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_31, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_31, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_31, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_31, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_31;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_31;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_32=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value27;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_32, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_32, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_32, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_32, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_32;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_32;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result30__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
struct sType* __result31__;
void* right_value28;
struct sType* result_33;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional56;
void* right_value32;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional57;
void* right_value33;
char* __dec_obj10;
_Bool _if_conditional58;
void* right_value40;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional62;
void* right_value48;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value49;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional77;
void* right_value56;
struct list$1charph* __dec_obj23;
_Bool _if_conditional81;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value58;
struct sNode* __dec_obj25;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value59;
struct sNode* __dec_obj26;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value60;
char* __dec_obj27;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value61;
char* __dec_obj28;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct sType*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
                if(_if_conditional50=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional50) {
                    __result31__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result31__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_33=(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
                if(_if_conditional51=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional51) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional52) {
                    __dec_obj8=((struct sType*)come_null_check(result_33, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value31;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional56) {
                    __dec_obj9=((struct sType*)come_null_check(result_33, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value32;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional57) {
                    __dec_obj10=((struct sType*)come_null_check(result_33, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional58) {
                    __dec_obj14=((struct sType*)come_null_check(result_33, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value40;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    __dec_obj18=((struct sType*)come_null_check(result_33, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value48=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value48;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional75=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional75) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional76) {
                    __dec_obj19=((struct sType*)come_null_check(result_33, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value49;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional77) {
                    __dec_obj23=((struct sType*)come_null_check(result_33, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value56;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional81) {
                    __dec_obj24=((struct sType*)come_null_check(result_33, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional82=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional82) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional83=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional83) {
                    __dec_obj25=((struct sType*)come_null_check(result_33, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value58;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional84=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional84) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional85=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional85) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional86=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional86) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional87=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional87) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional88=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional88) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional89=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional89) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional90=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional90) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional91=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional91) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional92=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional92) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional93=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional93) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional94=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional94) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional95=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional95) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional96=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional96) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional97=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional97) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional98=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional98) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional99=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional100=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional100) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional101=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional102=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional102) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional103=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional106=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional106) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional107=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional107) {
                    __dec_obj26=((struct sType*)come_null_check(result_33, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional108) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional110=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional110) {
                    __dec_obj27=((struct sType*)come_null_check(result_33, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional111=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional111) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional112=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional112) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional113=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional113) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional114=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional114) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional115=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional115) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional116=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional116) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional117=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional117) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional118=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional118) {
                    ((struct sType*)come_null_check(result_33, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional119=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional119) {
                    __dec_obj28=((struct sType*)come_null_check(result_33, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_33, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value61;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result46__ = __result_obj__ = result_33;
                if(result_33 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
                if(result_33 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
struct tuple1$1sTypeph* __result32__;
void* right_value29;
struct tuple1$1sTypeph* result_34;
_Bool _if_conditional55;
void* right_value30;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value30, 0, sizeof(void*));
                        if(_if_conditional53=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional53) {
                            __result32__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_34=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        if(_if_conditional55=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional55) {
                            __dec_obj7=((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result33__ = __result_obj__ = result_34;
                        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result33__;
                        __freed_obj__ = 0;
                        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional54=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct list$1sTypeph* __result34__;
void* right_value34;
void* right_value35;
struct list$1sTypeph* result_35;
struct list_item$1sTypeph* it_36;
_Bool _while_condtional19;
void* right_value39;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct list$1sTypeph*));
memset(&it_36, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value39, 0, sizeof(void*));
                        if(_if_conditional59=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional59) {
                            __result34__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_35=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value34=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value34;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value35);
                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value35;
                        __freed_obj__ = 0;
                        it_36=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_36!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_35, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_36, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value39;
                            __freed_obj__ = 0;
                            it_36=((struct list_item$1sTypeph*)come_null_check(it_36, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result36__ = __result_obj__ = result_35;
                        if(result_35 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result36__;
                        __freed_obj__ = 0;
                        if(result_35 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_35, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
void* right_value36;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj11;
_Bool _if_conditional61;
void* right_value37;
struct list_item$1sTypeph* litem_38;
struct sType* __dec_obj12;
void* right_value38;
struct list_item$1sTypeph* litem_39;
struct sType* __dec_obj13;
struct list$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional60=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional60) {
                                    litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_37;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_37;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional61=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional61) {
                                        litem_38=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value37;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_38;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_38;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_39=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value38=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value38;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_39;
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_39;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result35__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result35__;
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
_Bool _if_conditional63;
struct list$1sNodeph* __result37__;
void* right_value41;
void* right_value42;
struct list$1sNodeph* result_40;
struct list_item$1sNodeph* it_41;
_Bool _while_condtional20;
void* right_value47;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct list$1sNodeph*));
memset(&it_41, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value47, 0, sizeof(void*));
                        if(_if_conditional63=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional63) {
                            __result37__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result37__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_40=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value41=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value41;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value42;
                        __freed_obj__ = 0;
                        it_41=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional20=it_41!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional20) {
                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_40, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_41, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value47;
                            __freed_obj__ = 0;
                            it_41=((struct list_item$1sNodeph*)come_null_check(it_41, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result42__ = __result_obj__ = result_40;
                        if(result_40 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result42__;
                        __freed_obj__ = 0;
                        if(result_40 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result38__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result38__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
void* right_value43;
struct list_item$1sNodeph* litem_42;
struct sNode* __dec_obj15;
_Bool _if_conditional65;
void* right_value44;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj16;
void* right_value45;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value45, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional64=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional64) {
                                    litem_42=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value43=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value43;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_42, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_42, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_42, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_42, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_42;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_42;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional65=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional65) {
                                        litem_43=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value44=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value44;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_43, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_43, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_43, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_43, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_43;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_43;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_44=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value45=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value45;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_44, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_44, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_44, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_44, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_44;
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_44;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result39__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result39__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct sNode* __result40__;
void* right_value46;
struct sNode* result_45;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&result_45, 0, sizeof(struct sNode*));
                                if(_if_conditional66=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional66) {
                                    __result40__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result40__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_45=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value46;
                                __freed_obj__ = 0;
                                if(_if_conditional67=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional67) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional68=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional68) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional69=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional69) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional70=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional70) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional71=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional71) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional72=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional72) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional73=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional73) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional74=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional74) {
                                    ((struct sNode*)come_null_check(result_45, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result41__ = __result_obj__ = result_45;
                                if(result_45 && !__freed_obj__) { result_45 = come_decrement_ref_count(result_45, ((struct sNode*)result_45)->finalize, ((struct sNode*)result_45)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result41__;
                                __freed_obj__ = 0;
                                if(result_45 && !__freed_obj__) { result_45 = come_decrement_ref_count(result_45, ((struct sNode*)result_45)->finalize, ((struct sNode*)result_45)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional78;
struct list$1charph* __result43__;
void* right_value50;
void* right_value51;
struct list$1charph* result_46;
struct list_item$1charph* it_47;
_Bool _while_condtional21;
void* right_value55;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&result_46, 0, sizeof(struct list$1charph*));
memset(&it_47, 0, sizeof(struct list_item$1charph*));
memset(&right_value55, 0, sizeof(void*));
                        if(_if_conditional78=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional78) {
                            __result43__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result43__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_46=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value50=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value51;
                        __freed_obj__ = 0;
                        it_47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional21=it_47!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional21) {
                            list$1charph_add(((struct list$1charph*)come_null_check(result_46, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value55=string_clone(((struct list_item$1charph*)come_null_check(it_47, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value55;
                            __freed_obj__ = 0;
                            it_47=((struct list_item$1charph*)come_null_check(it_47, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result45__ = __result_obj__ = result_46;
                        if(result_46 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_46, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result45__;
                        __freed_obj__ = 0;
                        if(result_46 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_46, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
void* right_value52;
struct list_item$1charph* litem_48;
char* __dec_obj20;
_Bool _if_conditional80;
void* right_value53;
struct list_item$1charph* litem_49;
char* __dec_obj21;
void* right_value54;
struct list_item$1charph* litem_50;
char* __dec_obj22;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1charph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1charph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional79=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional79) {
                                    litem_48=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value52=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value52;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj20=((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 206))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_48;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_48;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional80=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional80) {
                                        litem_49=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value53=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value53;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_49, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_49, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj21=((struct list_item$1charph*)come_null_check(litem_49, "./comelang2.h", 216))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_49, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_49;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_49;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_50=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value54=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value54;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_50, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_50, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj22=((struct list_item$1charph*)come_null_check(litem_50, "./comelang2.h", 226))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_50, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_50;
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_50;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result44__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result44__;
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

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
void* right_value63;
struct list_item$1charph* litem_51;
char* __dec_obj29;
_Bool _if_conditional121;
void* right_value64;
struct list_item$1charph* litem_52;
char* __dec_obj30;
void* right_value65;
struct list_item$1charph* litem_53;
char* __dec_obj31;
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value65, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional120=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional120) {
                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj29=((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_51;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_51;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional121=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional121) {
                        litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value64;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj30=((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_52;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_52;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value65=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value65;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj31=((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_53;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_53;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result47__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value74;
struct list$1sTypeph* __dec_obj32;
void* right_value78;
struct list$1charph* __dec_obj33;
void* right_value79;
struct list$1charph* __dec_obj34;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
        __dec_obj32=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1879))->v1;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1879))->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(v1))));
        if(__dec_obj32) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74;
        __freed_obj__ = 0;
        __dec_obj33=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1880))->v2;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1880))->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_clone(v2))));
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value78;
        __freed_obj__ = 0;
        __dec_obj34=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1881))->v3;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1881))->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_clone(v3))));
        if(__dec_obj34) { come_call_finalizer(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value79;
        __freed_obj__ = 0;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1882))->v4=v4;
        __freed_obj__ = 0;
        __result52__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result52__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
struct list$1sTypeph* __result48__;
void* right_value71;
void* right_value72;
struct list$1sTypeph* result_59;
struct list_item$1sTypeph* it_60;
_Bool _while_condtional22;
void* right_value73;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct list$1sTypeph*));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value73, 0, sizeof(void*));
            if(_if_conditional126=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional126) {
                __result48__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_59=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value71=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value72;
            __freed_obj__ = 0;
            it_60=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional22=it_60!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional22) {
                list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_59, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_60, "./comelang2.h", 192))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value73;
                __freed_obj__ = 0;
                it_60=((struct list_item$1sTypeph*)come_null_check(it_60, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result49__ = __result_obj__ = result_59;
            if(result_59 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result49__;
            __freed_obj__ = 0;
            if(result_59 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
struct list$1charph* __result50__;
void* right_value75;
void* right_value76;
struct list$1charph* result_61;
struct list_item$1charph* it_62;
_Bool _while_condtional23;
void* right_value77;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&result_61, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(struct list_item$1charph*));
memset(&right_value77, 0, sizeof(void*));
            if(_if_conditional127=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional127) {
                __result50__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_61=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value76;
            __freed_obj__ = 0;
            it_62=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_62!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                list$1charph_add(((struct list$1charph*)come_null_check(result_61, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value77=string_clone(((struct list_item$1charph*)come_null_check(it_62, "./comelang2.h", 192))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                it_62=((struct list_item$1charph*)come_null_check(it_62, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = result_61;
            if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
            if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional128=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional128) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional129=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional129) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional130=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 3))->v3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional130) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __dec_obj35;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj35=((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
        ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(v1);
        if(__dec_obj35) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
        __freed_obj__ = 0;
        __result53__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional131=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional131) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional132=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional132) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional133=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 3))->v3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional133) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional134=self!=((void*)0)&&((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional134) {
                if(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
struct sType* right_type2_63;
struct sType* left_no_solved_generics_type_64;
struct sType* right_no_solved_generics_type_65;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int i_66;
_Bool _for_condtionalA2;
void* right_value88;
void* right_value89;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value90;
void* right_value91;
struct buffer* buf2_71;
void* right_value92;
void* right_value93;
void* right_value94;
void* right_value95;
void* right_value96;
char* __dec_obj37;
void* right_value97;
struct sType* __dec_obj38;
void* right_value98;
struct sType* __dec_obj39;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value99;
char* method_name_72;
void* right_value101;
_Bool _if_conditional166;
struct sType* obj_type_76;
_Bool _if_conditional182;
struct sType* obj_type2_77;
void* right_value102;
void* right_value103;
char* __dec_obj40;
void* right_value104;
void* right_value105;
struct buffer* buf2_78;
void* right_value106;
void* right_value107;
struct sType* type_79;
void* right_value108;
void* right_value109;
char* __dec_obj41;
void* right_value110;
struct sType* __dec_obj42;
void* right_value111;
struct sType* __dec_obj43;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_type2_63, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_64, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_65, 0, sizeof(struct sType*));
memset(&i_66, 0, sizeof(int));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&buf2_71, 0, sizeof(struct buffer*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&method_name_72, 0, sizeof(char*));
memset(&right_value101, 0, sizeof(void*));
memset(&obj_type_76, 0, sizeof(struct sType*));
memset(&obj_type2_77, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&buf2_78, 0, sizeof(struct buffer*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    right_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    left_no_solved_generics_type_64=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 314))->mNoSolvedGenericsType, "05function4.c", 314))->v1;
    __freed_obj__ = 0;
    right_no_solved_generics_type_65=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 315))->mNoSolvedGenericsType, "05function4.c", 315))->v1;
    __freed_obj__ = 0;
    if(_if_conditional135=left_no_solved_generics_type_64&&right_no_solved_generics_type_65,    __freed_obj__ = 0, 
    _if_conditional135) {
        if(_if_conditional136=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_64, "05function4.c", 332))->mGenericsTypes, "05function4.c", 332)))>0,        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_64, "05function4.c", 326))->mGenericsTypes, "05function4.c", 326)))!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_65, "05function4.c", 326))->mGenericsTypes, "05function4.c", 326))),            __freed_obj__ = 0, 
            _if_conditional137) {
                err_msg(info,"generics type parametor number error");
                __freed_obj__ = 0;
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_64, "05function4.c", 321))->mGenericsTypes, "05function4.c", 321))));
                __freed_obj__ = 0;
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_65, "05function4.c", 322))->mGenericsTypes, "05function4.c", 322))));
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            for(
            i_66=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            i_66<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_64, "05function4.c", 330))->mGenericsTypes, "05function4.c", 330))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            i_66++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                come_clear_stackframe();
                check_assign_type(msg,optional$2sTypephbool_value((come_push_stackframe("05function4.c", 327),((struct optional$2sTypephbool*)(right_value88=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(left_no_solved_generics_type_64, "05function4.c", 327))->mGenericsTypes,i_66))))),optional$2sTypephbool_value((come_push_stackframe("05function4.c", 327),((struct optional$2sTypephbool*)(right_value89=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_no_solved_generics_type_65, "05function4.c", 327))->mGenericsTypes,i_66))))),come_value,(_Bool)1,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value89;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            check_assign_type(msg,left_no_solved_generics_type_64,right_no_solved_generics_type_65,come_value,(_Bool)0,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional142=check_no_pointer,        __freed_obj__ = 0, 
        _if_conditional142) {
            if(_if_conditional143=((struct sType*)come_null_check(left_type, "05function4.c", 366))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional143) {
                if(_if_conditional144=((struct sType*)come_null_check(right_type2_63, "05function4.c", 353))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional144) {
                    if(_if_conditional145=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"void"),                    __freed_obj__ = 0, 
                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional146) {
                        }
                        else {
                            if(_if_conditional147=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 346))->mClass, "05function4.c", 346))->mName),                            __freed_obj__ = 0, 
                            _if_conditional147) {
                                err_msg(info,"type error1");
                                __freed_obj__ = 0;
                                printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 342))->mClass, "05function4.c", 342))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 342))->mPointerNum);
                                __freed_obj__ = 0;
                                printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 343))->mClass, "05function4.c", 343))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 343))->mPointerNum);
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
                else {
                    err_msg(info,"type error2");
                    __freed_obj__ = 0;
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 349))->mClass, "05function4.c", 349))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 349))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 350))->mClass, "05function4.c", 350))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 350))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional148=((struct sType*)come_null_check(left_type, "05function4.c", 366))->mPointerNum==0&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 366))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional148) {
                    err_msg(info,"type error3");
                    __freed_obj__ = 0;
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 356))->mClass, "05function4.c", 356))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 356))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 357))->mClass, "05function4.c", 357))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 357))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional149=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 366))->mClass, "05function4.c", 366))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 366))->mClass, "05function4.c", 366))->mName),                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        err_msg(info,"type error4");
                        __freed_obj__ = 0;
                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 362))->mClass, "05function4.c", 362))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 362))->mPointerNum);
                        __freed_obj__ = 0;
                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 363))->mClass, "05function4.c", 363))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 363))->mPointerNum);
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
        else {
            if(_if_conditional150=!((struct sType*)come_null_check(left_type, "05function4.c", 487))->mNullValue&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 487))->mNullValue,            __freed_obj__ = 0, 
            _if_conditional150) {
                if(_if_conditional151=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,"__builtin_va_list"),                __freed_obj__ = 0, 
                _if_conditional151) {
                }
                else {
                    if(_if_conditional152=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,"va_list"),                    __freed_obj__ = 0, 
                    _if_conditional152) {
                    }
                    else {
                        if(_if_conditional153=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,"void")&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 397))->mPointerNum==0,                        __freed_obj__ = 0, 
                        _if_conditional153) {
                            err_msg(info,"type error6");
                            __freed_obj__ = 0;
                            printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 382))->mClass, "05function4.c", 382))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 382))->mPointerNum);
                            __freed_obj__ = 0;
                            printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 383))->mClass, "05function4.c", 383))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 383))->mPointerNum);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            buf2_71=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value90;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value91;
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf2_71, "05function4.c", 389)),((char*)(right_value95=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value92=string_to_string(((struct CVALUE*)come_null_check(come_value, "05function4.c", 389))->c_value))),((char*)(right_value93=string_to_string(((struct sInfo*)come_null_check(info, "05function4.c", 389))->sname))),((char*)(right_value94=int_to_string(((struct sInfo*)come_null_check(info, "05function4.c", 389))->sline)))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value92;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value93);
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value93;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value94;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value95;
                            __freed_obj__ = 0;
                            __dec_obj37=((struct CVALUE*)come_null_check(come_value, "05function4.c", 391))->c_value;
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 391))->c_value=(char*)come_increment_ref_count(((char*)(right_value96=buffer_to_string(((struct buffer*)come_null_check(buf2_71, "05function4.c", 391))))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value96);
                            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value96;
                            __freed_obj__ = 0;
                            __dec_obj38=((struct CVALUE*)come_null_check(come_value, "05function4.c", 392))->type;
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 392))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(left_type))));
                            if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value97;
                            __freed_obj__ = 0;
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 393))->var=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj39=right_type2_63;
                            right_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(left_type))));
                            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value98);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[8] = right_value98;
                            __freed_obj__ = 0;
                            if(buf2_71 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional154=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 487))->mClass, "05function4.c", 487))->mName,"char")&&((struct sType*)come_null_check(left_type, "05function4.c", 487))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional154) {
                    if(_if_conditional155=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"char")&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional155) {
                    }
                    else {
                        if(_if_conditional156=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"__builtin_va_list"),                        __freed_obj__ = 0, 
                        _if_conditional156) {
                        }
                        else {
                            if(_if_conditional157=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"va_list"),                            __freed_obj__ = 0, 
                            _if_conditional157) {
                            }
                            else {
                                if(_if_conditional158=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"lambda"),                                __freed_obj__ = 0, 
                                _if_conditional158) {
                                    err_msg(info,"type error6");
                                    __freed_obj__ = 0;
                                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 407))->mClass, "05function4.c", 407))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 407))->mPointerNum);
                                    __freed_obj__ = 0;
                                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 408))->mClass, "05function4.c", 408))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 408))->mPointerNum);
                                    __freed_obj__ = 0;
                                    exit(2);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional159=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"void")&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mPointerNum>0,                                    __freed_obj__ = 0, 
                                    _if_conditional159) {
                                    }
                                    else {
                                        if(_if_conditional160=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"void"),                                        __freed_obj__ = 0, 
                                        _if_conditional160) {
                                            err_msg(info,"type error6");
                                            __freed_obj__ = 0;
                                            printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 415))->mClass, "05function4.c", 415))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 415))->mPointerNum);
                                            __freed_obj__ = 0;
                                            printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 416))->mClass, "05function4.c", 416))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 416))->mPointerNum);
                                            __freed_obj__ = 0;
                                            exit(2);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            method_name_72=(char*)come_increment_ref_count(((char*)(right_value99=create_method_name(right_type2_63,(_Bool)0,"to_string",info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value99;
                                            __freed_obj__ = 0;
                                            if(_if_conditional166=((struct sFun*)(right_value101=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 434))->funcs, "05function4.c", 434)),method_name_72,((void*)0))))==((void*)0),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101),
                                            (right_value101 && right_value101 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[1] = right_value101, 
                                            __freed_obj__ = 0, 
                                            _if_conditional166) {
                                                obj_type_76=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 423))->mNoSolvedGenericsType, "05function4.c", 423))->v1;
                                                __freed_obj__ = 0;
                                                if(_if_conditional182=obj_type_76&&list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_76, "05function4.c", 432))->mGenericsTypes, "05function4.c", 432)))>0,                                                __freed_obj__ = 0, 
                                                _if_conditional182) {
                                                    obj_type2_77=right_type2_63;
                                                    __freed_obj__ = 0;
                                                    __dec_obj40=method_name_72;
                                                    method_name_72=(char*)come_increment_ref_count(((char*)(right_value103=make_generics_function(obj_type2_77,(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("to_string")))),info))));
                                                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                                                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value102;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
                                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value103;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 429))->mClass, "05function4.c", 429))->mName);
                                                    __freed_obj__ = 0;
                                                    exit(1);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buf2_78=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value104);
                                            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value104;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value105);
                                            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value105;
                                            __freed_obj__ = 0;
                                            buffer_append_str(((struct buffer*)come_null_check(buf2_78, "05function4.c", 436)),method_name_72);
                                            __freed_obj__ = 0;
                                            buffer_append_str(((struct buffer*)come_null_check(buf2_78, "05function4.c", 437)),"(");
                                            __freed_obj__ = 0;
                                            buffer_append_str(((struct buffer*)come_null_check(buf2_78, "05function4.c", 438)),((struct CVALUE*)come_null_check(come_value, "05function4.c", 438))->c_value);
                                            __freed_obj__ = 0;
                                            buffer_append_str(((struct buffer*)come_null_check(buf2_78, "05function4.c", 439)),")");
                                            __freed_obj__ = 0;
                                            type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441)))),"char*",(_Bool)0,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value106);
                                            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value106;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value107);
                                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[5] = right_value107;
                                            __freed_obj__ = 0;
                                            ((struct sType*)come_null_check(type_79, "05function4.c", 442))->mHeap=(_Bool)1;
                                            __freed_obj__ = 0;
                                            __dec_obj41=((struct CVALUE*)come_null_check(come_value, "05function4.c", 444))->c_value;
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value109=append_object_to_right_values(((char*)(right_value108=buffer_to_string(((struct buffer*)come_null_check(buf2_78, "05function4.c", 444))))),(struct sType*)come_increment_ref_count(type_79),info))));
                                            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value108);
                                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[6] = right_value108;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value109);
                                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[7] = right_value109;
                                            __freed_obj__ = 0;
                                            __dec_obj42=((struct CVALUE*)come_null_check(come_value, "05function4.c", 445))->type;
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 445))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(type_79))));
                                            if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value110);
                                            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[8] = right_value110;
                                            __freed_obj__ = 0;
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 446))->var=((void*)0);
                                            __freed_obj__ = 0;
                                            __dec_obj43=right_type2_63;
                                            right_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(type_79))));
                                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value111);
                                            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[9] = right_value111;
                                            __freed_obj__ = 0;
                                            if(method_name_72 && !__freed_obj__) { method_name_72 = come_decrement_ref_count(method_name_72, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                else {
                    if(_if_conditional183=((struct sType*)come_null_check(left_type, "05function4.c", 487))->mPointerNum>0,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                        if(_if_conditional184=((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional184) {
                            if(_if_conditional185=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 473))->mClass, "05function4.c", 473))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 473))->mClass, "05function4.c", 473))->mName,"void"),                            __freed_obj__ = 0, 
                            _if_conditional185) {
                            }
                            else {
                                if(_if_conditional186=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 473))->mClass, "05function4.c", 473))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 473))->mClass, "05function4.c", 473))->mName,"va_list"),                                __freed_obj__ = 0, 
                                _if_conditional186) {
                                }
                                else {
                                    if(_if_conditional187=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 473))->mClass, "05function4.c", 473))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 473))->mClass, "05function4.c", 473))->mName),                                    __freed_obj__ = 0, 
                                    _if_conditional187) {
                                        err_msg(info,"type error5");
                                        __freed_obj__ = 0;
                                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 459))->mClass, "05function4.c", 459))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 459))->mPointerNum);
                                        __freed_obj__ = 0;
                                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 460))->mClass, "05function4.c", 460))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 460))->mPointerNum);
                                        __freed_obj__ = 0;
                                        exit(2);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional188=((struct sType*)come_null_check(left_type, "05function4.c", 473))->mPointerNum!=((struct sType*)come_null_check(right_type2_63, "05function4.c", 473))->mPointerNum,                                        __freed_obj__ = 0, 
                                        _if_conditional188) {
                                            printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 464))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 464))->sline);
                                            __freed_obj__ = 0;
                                            printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 465))->mClass, "05function4.c", 465))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 465))->mPointerNum);
                                            __freed_obj__ = 0;
                                            printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 466))->mClass, "05function4.c", 466))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 466))->mPointerNum);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional189=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 473))->mArrayNum, "05function4.c", 473)))>0,                                            __freed_obj__ = 0, 
                                            _if_conditional189) {
                                                printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 469))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 469))->sline);
                                                __freed_obj__ = 0;
                                                printf("left type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 470))->mClass, "05function4.c", 470))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 470))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 470))->mArrayNum, "05function4.c", 470))));
                                                __freed_obj__ = 0;
                                                printf("right type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 471))->mClass, "05function4.c", 471))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 471))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 471))->mArrayNum, "05function4.c", 471))));
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
                        else {
                            if(_if_conditional190=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"void"),                            __freed_obj__ = 0, 
                            _if_conditional190) {
                            }
                            else {
                                if(_if_conditional191=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"va_list"),                                __freed_obj__ = 0, 
                                _if_conditional191) {
                                }
                                else {
                                    if(_if_conditional192=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"__builtin_va_list"),                                    __freed_obj__ = 0, 
                                    _if_conditional192) {
                                    }
                                    else {
                                        if(_if_conditional193=!(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"lambda")&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 486))->mClass, "05function4.c", 486))->mName,"lambda"))&&((struct sType*)come_null_check(right_type2_63, "05function4.c", 486))->mPointerNum==0,                                        __freed_obj__ = 0, 
                                        _if_conditional193) {
                                            err_msg(info,"type error6");
                                            __freed_obj__ = 0;
                                            printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 482))->mClass, "05function4.c", 482))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 482))->mPointerNum);
                                            __freed_obj__ = 0;
                                            printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_63, "05function4.c", 483))->mClass, "05function4.c", 483))->mName,((struct sType*)come_null_check(right_type2_63, "05function4.c", 483))->mPointerNum);
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
    if(right_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result55__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result55__;
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
struct list_item$1sTypeph* it_67;
int i_68;
_Bool _while_condtional24;
_Bool _if_conditional139;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __result57__;
struct sType* default_value_69;
void* right_value86;
void* right_value87;
struct optional$2sTypephbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_67, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_68, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&default_value_69, 0, sizeof(struct sType*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
                    if(_if_conditional138=position<0,                    __freed_obj__ = 0, 
                    _if_conditional138) {
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_67=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                    __freed_obj__ = 0;
                    i_68=0;
                    __freed_obj__ = 0;
                    while(_while_condtional24=it_67!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional24) {
                        if(_if_conditional139=position==i_68,                        __freed_obj__ = 0, 
                        _if_conditional139) {
                            __result57__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value85=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value84=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_67, "./comelang2.h", 742))->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_67=((struct list_item$1sTypeph*)come_null_check(it_67, "./comelang2.h", 744))->next;
                        __freed_obj__ = 0;
                        i_68++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_69,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value87=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value86=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_69),(_Bool)0))));
                    if(default_value_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value86;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value87;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
                    if(default_value_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj36;
struct optional$2sTypephbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj36=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result56__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result56__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional140=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional140) {
                                        if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
struct sType* default_value_70;
struct sType* __result59__;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(struct sType*));
                    if(_if_conditional141=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional141) {
                        __freed_obj__ = 0;
                        memset(&default_value_70,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result59__ = __result_obj__ = default_value_70;
                        __freed_obj__ = 0;
                        return __result59__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result60__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_73;
unsigned int it_74;
_Bool _while_condtional25;
_Bool _if_conditional161;
void* right_value100;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional163;
struct sFun* __result63__;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sFun* __result64__;
struct sFun* __result65__;
struct sFun* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_73, 0, sizeof(unsigned int));
memset(&it_74, 0, sizeof(unsigned int));
memset(&right_value100, 0, sizeof(void*));
                                                hash_73=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                                __freed_obj__ = 0;
                                                it_74=hash_73;
                                                __freed_obj__ = 0;
                                                while(_while_condtional25=(_Bool)1,                                                __freed_obj__ = 0, 
                                                _while_condtional25) {
                                                    if(_if_conditional161=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_74],                                                    __freed_obj__ = 0, 
                                                    _if_conditional161) {
                                                        if(_if_conditional163=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value100=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_74], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100),
                                                        (right_value100 && right_value100 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value100, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional163) {
                                                            __result63__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_74];
                                                            __freed_obj__ = 0;
                                                            return __result63__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        it_74++;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional164=it_74>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                        __freed_obj__ = 0, 
                                                        _if_conditional164) {
                                                            it_74=0;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional165=it_74==hash_73,                                                            __freed_obj__ = 0, 
                                                            _if_conditional165) {
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

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool default_value_75;
_Bool __result61__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_75, 0, sizeof(_Bool));
                                                            if(_if_conditional162=self==((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional162) {
                                                                __freed_obj__ = 0;
                                                                memset(&default_value_75,0,sizeof(_Bool));
                                                                __freed_obj__ = 0;
                                                                __result61__ = default_value_75;
                                                                __freed_obj__ = 0;
                                                                return __result61__;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                __result62__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                                __freed_obj__ = 0;
                                                                return __result62__;
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

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional167=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional167) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional168=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional168) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional169=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional169) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional170=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional170) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional171=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional171) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional172=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional172) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional173=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional173) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional176=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional176) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional177=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional177) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional178=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional178) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional179=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional179) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional180=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional180) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional181=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional181) {
                                                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional174=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional174) {
                                                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional175=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional175) {
                                                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result67__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                                __freed_obj__ = 0;
                                                return __result67__;
                                                __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value112;
struct sType* result_type_80;
_Bool _if_conditional194;
char* var_name_81;
char* p_82;
int sline_83;
_Bool _if_conditional195;
void* right_value113;
char* word_85;
_Bool _if_conditional197;
_Bool between_brace_86;
char* p_87;
int sline_88;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value114;
char* word_89;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _while_condtional26;
char* p_90;
int sline_91;
_Bool _if_conditional203;
void* right_value115;
char* word_92;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value116;
char* __dec_obj44;
static int num_anonymous_var_name_93=0;
void* right_value117;
char* __dec_obj45;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool no_comma_94;
void* right_value118;
struct sNode* node_95;
struct sNode* __dec_obj46;
_Bool _while_condtional27;
char* p_96;
int sline_97;
_Bool _if_conditional209;
void* right_value119;
char* word_98;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value120;
struct sNode* node_99;
void* right_value124;
void* right_value125;
void* right_value128;
struct tuple2$2sTypephcharph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&result_type_80, 0, sizeof(struct sType*));
memset(&var_name_81, 0, sizeof(char*));
memset(&p_82, 0, sizeof(char*));
memset(&sline_83, 0, sizeof(int));
memset(&right_value113, 0, sizeof(void*));
memset(&word_85, 0, sizeof(char*));
memset(&between_brace_86, 0, sizeof(_Bool));
memset(&p_87, 0, sizeof(char*));
memset(&sline_88, 0, sizeof(int));
memset(&right_value114, 0, sizeof(void*));
memset(&word_89, 0, sizeof(char*));
memset(&p_90, 0, sizeof(char*));
memset(&sline_91, 0, sizeof(int));
memset(&right_value115, 0, sizeof(void*));
memset(&word_92, 0, sizeof(char*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&no_comma_94, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&node_95, 0, sizeof(struct sNode*));
memset(&p_96, 0, sizeof(char*));
memset(&sline_97, 0, sizeof(int));
memset(&right_value119, 0, sizeof(void*));
memset(&word_98, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&node_99, 0, sizeof(struct sNode*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    result_type_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112;
    __freed_obj__ = 0;
    if(_if_conditional194=!first,    __freed_obj__ = 0, 
    _if_conditional194) {
        ((struct sType*)come_null_check(result_type_80, "05function4.c", 493))->mPointerNum=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_81=((void*)0);
    __freed_obj__ = 0;
    {
        p_82=((struct sInfo*)come_null_check(info, "05function4.c", 498))->p;
        __freed_obj__ = 0;
        sline_83=((struct sInfo*)come_null_check(info, "05function4.c", 499))->sline;
        __freed_obj__ = 0;
        if(_if_conditional195=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 515))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 515))->p==95,        __freed_obj__ = 0, 
        _if_conditional195) {
            come_clear_stackframe();
            word_85=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 502),((struct optional$2charphbool*)(right_value113=parse_word(info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value113;
            __freed_obj__ = 0;
            if(_if_conditional197=string_operator_equals(word_85,"const")||string_operator_equals(word_85,"__restrict")||string_operator_equals(word_85,"restrict")||string_operator_equals(word_85,"__user")||string_operator_equals(word_85,"volatile")||string_operator_equals(word_85,"_Nonnull")||string_operator_equals(word_85,"_Nullable")||string_operator_equals(word_85,"_Null_unspecified")||string_operator_equals(word_85,"__user"),            __freed_obj__ = 0, 
            _if_conditional197) {
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 507))->p=p_82;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 508))->sline=sline_83;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_85 && !__freed_obj__) { word_85 = come_decrement_ref_count(word_85, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 512))->p=p_82;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 513))->sline=sline_83;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    between_brace_86=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_87=((struct sInfo*)come_null_check(info, "05function4.c", 519))->p;
        __freed_obj__ = 0;
        sline_88=((struct sInfo*)come_null_check(info, "05function4.c", 520))->sline;
        __freed_obj__ = 0;
        if(_if_conditional198=*((struct sInfo*)come_null_check(info, "05function4.c", 542))->p==40,        __freed_obj__ = 0, 
        _if_conditional198) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 523))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional199=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 540))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 540))->p==95,            __freed_obj__ = 0, 
            _if_conditional199) {
                come_clear_stackframe();
                word_89=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 527),((struct optional$2charphbool*)(right_value114=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                if(_if_conditional200=is_type_name(word_89,info),                __freed_obj__ = 0, 
                _if_conditional200) {
                }
                else {
                    if(_if_conditional201=*((struct sInfo*)come_null_check(info, "05function4.c", 539))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional201) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 532))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional202=*((struct sInfo*)come_null_check(info, "05function4.c", 538))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            between_brace_86=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_89 && !__freed_obj__) { word_89 = come_decrement_ref_count(word_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 542))->p=p_87;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 543))->sline=sline_88;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional26=*((struct sInfo*)come_null_check(info, "05function4.c", 573))->p==42,    __freed_obj__ = 0, 
    _while_condtional26) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 548))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        {
            p_90=((struct sInfo*)come_null_check(info, "05function4.c", 552))->p;
            __freed_obj__ = 0;
            sline_91=((struct sInfo*)come_null_check(info, "05function4.c", 553))->sline;
            __freed_obj__ = 0;
            if(_if_conditional203=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 569))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 569))->p==95,            __freed_obj__ = 0, 
            _if_conditional203) {
                come_clear_stackframe();
                word_92=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 556),((struct optional$2charphbool*)(right_value115=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115;
                __freed_obj__ = 0;
                if(_if_conditional204=string_operator_equals(word_92,"const")||string_operator_equals(word_92,"__restrict")||string_operator_equals(word_92,"restrict")||string_operator_equals(word_92,"__user")||string_operator_equals(word_92,"volatile")||string_operator_equals(word_92,"_Nonnull")||string_operator_equals(word_92,"_Nullable")||string_operator_equals(word_92,"_Null_unspecified")||string_operator_equals(word_92,"__user"),                __freed_obj__ = 0, 
                _if_conditional204) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 561))->p=p_90;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 562))->sline=sline_91;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_92 && !__freed_obj__) { word_92 = come_decrement_ref_count(word_92, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 566))->p=p_90;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 567))->sline=sline_91;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_80, "05function4.c", 571))->mPointerNum++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional205=between_brace_86&&*((struct sInfo*)come_null_check(info, "05function4.c", 580))->p==40,    __freed_obj__ = 0, 
    _if_conditional205) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 576))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional206=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 589))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 589))->p==95,    __freed_obj__ = 0, 
    _if_conditional206) {
        come_clear_stackframe();
        __dec_obj44=var_name_81;
        var_name_81=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 581),((struct optional$2charphbool*)(right_value116=parse_word(info))))));
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116;
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        num_anonymous_var_name_93++;
        __freed_obj__ = 0;
        __dec_obj45=var_name_81;
        var_name_81=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_93))));
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional207=between_brace_86&&*((struct sInfo*)come_null_check(info, "05function4.c", 594))->p==41,    __freed_obj__ = 0, 
    _if_conditional207) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 590))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional208=*((struct sInfo*)come_null_check(info, "05function4.c", 606))->p==58,    __freed_obj__ = 0, 
    _if_conditional208) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 595))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        no_comma_94=((struct sInfo*)come_null_check(info, "05function4.c", 598))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 599))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 601))->no_comma=no_comma_94;
        __freed_obj__ = 0;
        __dec_obj46=((struct sType*)come_null_check(result_type_80, "05function4.c", 603))->mSizeNum;
        ((struct sType*)come_null_check(result_type_80, "05function4.c", 603))->mSizeNum=(struct sNode*)come_increment_ref_count(node_95);
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
        if(node_95 && !__freed_obj__) { node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    while(_while_condtional27=*((struct sInfo*)come_null_check(info, "05function4.c", 647))->p==91,    __freed_obj__ = 0, 
    _while_condtional27) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 607))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        {
            p_96=((struct sInfo*)come_null_check(info, "05function4.c", 612))->p;
            __freed_obj__ = 0;
            sline_97=((struct sInfo*)come_null_check(info, "05function4.c", 613))->sline;
            __freed_obj__ = 0;
            if(_if_conditional209=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 629))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 629))->p==95,            __freed_obj__ = 0, 
            _if_conditional209) {
                come_clear_stackframe();
                word_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 616),((struct optional$2charphbool*)(right_value119=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119;
                __freed_obj__ = 0;
                if(_if_conditional210=string_operator_equals(word_98,"const")||string_operator_equals(word_98,"__restrict")||string_operator_equals(word_98,"restrict")||string_operator_equals(word_98,"__user")||string_operator_equals(word_98,"volatile")||string_operator_equals(word_98,"_Nonnull")||string_operator_equals(word_98,"_Nullable")||string_operator_equals(word_98,"_Null_unspecified")||string_operator_equals(word_98,"__user"),                __freed_obj__ = 0, 
                _if_conditional210) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 621))->p=p_96;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 622))->sline=sline_97;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_98 && !__freed_obj__) { word_98 = come_decrement_ref_count(word_98, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 626))->p=p_96;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 627))->sline=sline_97;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional211=*((struct sInfo*)come_null_check(info, "05function4.c", 638))->p==93,        __freed_obj__ = 0, 
        _if_conditional211) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 632))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_80, "05function4.c", 635))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_80, "05function4.c", 641))->mArrayNum, "05function4.c", 641)),(struct sNode*)come_increment_ref_count(node_99));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("05function4.c", 644),((struct optional$2intbool*)(right_value124=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value124;
        __freed_obj__ = 0;
        if(node_99 && !__freed_obj__) { node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    __result72__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value128=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value125=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647)))),(struct sType*)come_increment_ref_count(result_type_80),(char*)come_increment_ref_count(var_name_81))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_80 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_81 && !__freed_obj__) { var_name_81 = come_decrement_ref_count(var_name_81, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value125;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_80 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_81 && !__freed_obj__) { var_name_81 = come_decrement_ref_count(var_name_81, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
char* default_value_84;
char* __result68__;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_84, 0, sizeof(char*));
                if(_if_conditional196=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional196) {
                    __freed_obj__ = 0;
                    memset(&default_value_84,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result68__ = __result_obj__ = default_value_84;
                    __freed_obj__ = 0;
                    return __result68__;
                    __freed_obj__ = 0;
                }
                else {
                    __result69__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result69__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
void* right_value121;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj47;
_Bool _if_conditional213;
void* right_value122;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj48;
void* right_value123;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj49;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&litem_100, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional212=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional212) {
                litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value121=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value121;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_100, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_100, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj47=((struct list_item$1sNodeph*)come_null_check(litem_100, "./comelang2.h", 276))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_100, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_100;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_100;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional213=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional213) {
                    litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value122=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value122;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj48=((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 286))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_101;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_101;
                    __freed_obj__ = 0;
                }
                else {
                    litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj49=((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 296))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_102;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_102;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result70__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result70__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
struct sType* __dec_obj50;
void* right_value127;
char* __dec_obj51;
struct tuple2$2sTypephcharph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
        __dec_obj50=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(v1))));
        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value126;
        __freed_obj__ = 0;
        __dec_obj51=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(v2))));
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value127;
        __freed_obj__ = 0;
        __result71__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result71__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional214=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_103;
int sline_104;
_Bool _if_conditional216;
void* right_value129;
char* word_105;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_103, 0, sizeof(char*));
memset(&sline_104, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&word_105, 0, sizeof(char*));
    p_103=((struct sInfo*)come_null_check(info, "05function4.c", 652))->p;
    __freed_obj__ = 0;
    sline_104=((struct sInfo*)come_null_check(info, "05function4.c", 653))->sline;
    __freed_obj__ = 0;
    if(_if_conditional216=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 669))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 669))->p==95,    __freed_obj__ = 0, 
    _if_conditional216) {
        come_clear_stackframe();
        word_105=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 656),((struct optional$2charphbool*)(right_value129=parse_word(info))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value129;
        __freed_obj__ = 0;
        if(_if_conditional217=string_operator_equals(word_105,"const")||string_operator_equals(word_105,"__restrict")||string_operator_equals(word_105,"restrict")||string_operator_equals(word_105,"__user")||string_operator_equals(word_105,"volatile")||string_operator_equals(word_105,"_Nonnull")||string_operator_equals(word_105,"_Nullable")||string_operator_equals(word_105,"_Null_unspecified")||string_operator_equals(word_105,"__user"),        __freed_obj__ = 0, 
        _if_conditional217) {
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 661))->p=p_103;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 662))->sline=sline_104;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(word_105 && !__freed_obj__) { word_105 = come_decrement_ref_count(word_105, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        ((struct sInfo*)come_null_check(info, "05function4.c", 666))->p=p_103;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 667))->sline=sline_104;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_106;
int head_sline_107;
void* right_value130;
char* type_name_108;
_Bool _while_condtional28;
void* right_value131;
char* __dec_obj52;
_Bool constant_109;
_Bool static__110;
_Bool exception__111;
_Bool volatile__112;
_Bool register__113;
_Bool unsigned__114;
_Bool long__115;
_Bool long_long_116;
_Bool short__117;
_Bool restrict__118;
_Bool struct__119;
_Bool union__120;
_Bool enum__121;
_Bool no_heap_122;
_Bool extern__123;
_Bool inline__124;
_Bool come_mem_core__125;
struct sNode* alignas__126;
_Bool anonymous_type_127;
_Bool anonymous_name_128;
_Bool _while_condtional29;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* p_129;
int sline_130;
void* right_value132;
_Bool _if_conditional220;
void* right_value133;
char* __dec_obj53;
void* right_value134;
char* __dec_obj54;
void* right_value135;
char* __dec_obj55;
_Bool _if_conditional221;
char* p_131;
int sline_132;
_Bool _while_condtional30;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value136;
void* right_value139;
void* right_value140;
void* right_value141;
struct optional$2tuple3$3sTypephcharphboolphbool* __result75__;
_Bool _if_conditional227;
char* p_133;
int sline_134;
void* right_value142;
_Bool _if_conditional228;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
struct optional$2tuple3$3sTypephcharphboolphbool* __result76__;
_Bool _if_conditional229;
_Bool _if_conditional230;
char* p_135;
int sline_136;
void* right_value147;
_Bool _if_conditional231;
void* right_value148;
char* __dec_obj59;
void* right_value149;
char* __dec_obj60;
void* right_value150;
char* __dec_obj61;
_Bool _if_conditional232;
char* p_137;
int sline_138;
void* right_value151;
_Bool _if_conditional233;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
struct optional$2tuple3$3sTypephcharphboolphbool* __result77__;
_Bool _if_conditional234;
_Bool _if_conditional235;
char* p_139;
int sline_140;
void* right_value156;
_Bool _if_conditional236;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
struct optional$2tuple3$3sTypephcharphboolphbool* __result78__;
void* right_value161;
char* __dec_obj62;
void* right_value162;
char* __dec_obj63;
_Bool _if_conditional237;
char* p_141;
int sline_142;
void* right_value163;
_Bool _if_conditional238;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
struct optional$2tuple3$3sTypephcharphboolphbool* __result79__;
_Bool _if_conditional239;
void* right_value168;
void* right_value169;
struct sNode* exp_143;
struct sNode* __dec_obj64;
void* right_value170;
void* right_value171;
char* __dec_obj65;
_Bool _if_conditional240;
void* right_value172;
char* __dec_obj66;
_Bool _if_conditional241;
void* right_value173;
char* __dec_obj67;
_Bool _if_conditional242;
void* right_value174;
char* __dec_obj68;
_Bool _if_conditional243;
void* right_value175;
char* __dec_obj69;
_Bool _if_conditional244;
void* right_value176;
char* __dec_obj70;
_Bool _if_conditional245;
void* right_value177;
char* __dec_obj71;
_Bool _if_conditional246;
void* right_value178;
char* __dec_obj72;
_Bool _if_conditional247;
void* right_value179;
char* __dec_obj73;
_Bool _if_conditional248;
char* p_144;
int sline_145;
_Bool _if_conditional249;
void* right_value180;
char* __dec_obj74;
void* right_value181;
char* __dec_obj75;
_Bool _if_conditional250;
void* right_value182;
char* __dec_obj76;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value183;
char* __dec_obj77;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value184;
char* __dec_obj78;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value185;
char* __dec_obj79;
_Bool _if_conditional258;
_Bool _if_conditional259;
char* p_146;
int sline_147;
void* right_value186;
char* __dec_obj80;
_Bool _if_conditional260;
_Bool _if_conditional261;
char* p_148;
int sline_149;
void* right_value187;
char* __dec_obj81;
_Bool _if_conditional262;
void* right_value188;
char* __dec_obj82;
void* right_value189;
char* __dec_obj83;
_Bool _if_conditional263;
_Bool _if_conditional264;
char* p_150;
int sline_151;
void* right_value190;
char* __dec_obj84;
_Bool _if_conditional265;
void* right_value191;
char* __dec_obj85;
void* right_value192;
char* __dec_obj86;
_Bool _if_conditional266;
void* right_value193;
char* __dec_obj87;
void* right_value194;
char* __dec_obj88;
_Bool _if_conditional267;
void* right_value195;
char* __dec_obj89;
_Bool _if_conditional268;
void* right_value196;
char* __dec_obj90;
_Bool _if_conditional269;
void* right_value197;
char* __dec_obj91;
_Bool _if_conditional270;
void* right_value198;
char* __dec_obj92;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
char* p_152;
int sline_153;
void* right_value199;
char* __dec_obj93;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value200;
char* __dec_obj94;
int pointer_num_154;
_Bool _while_condtional31;
_Bool lambda_flag_155;
char* pX_156;
int slineX_157;
_Bool _if_conditional277;
void* right_value201;
_Bool _if_conditional278;
struct sType* type_158;
char* var_name_159;
_Bool function_pointer_flag_160;
char* p_161;
int sline_162;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value202;
char* word_163;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool var_name_between_brace_164;
char* p_165;
int sline_166;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value203;
char* word_167;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
static int anonymous_num_168=0;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value204;
char* __dec_obj95;
void* right_value205;
struct sNode* node_169;
_Bool _if_conditional292;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
struct optional$2tuple3$3sTypephcharphboolphbool* __result80__;
int pointer_num_170;
_Bool _while_condtional32;
void* right_value210;
void* right_value211;
struct sType* __dec_obj96;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value212;
char* __dec_obj97;
void* right_value213;
struct sNode* node_171;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
struct optional$2tuple3$3sTypephcharphboolphbool* __result81__;
void* right_value218;
void* right_value219;
struct sType* __dec_obj98;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value220;
char* __dec_obj99;
void* right_value221;
struct sNode* node_172;
_Bool _if_conditional299;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2tuple3$3sTypephcharphboolphbool* __result82__;
int pointer_num_173;
_Bool _while_condtional33;
void* right_value226;
void* right_value227;
struct sType* __dec_obj100;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
struct optional$2tuple3$3sTypephcharphboolphbool* __result83__;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value232;
char* __dec_obj101;
_Bool _if_conditional303;
static int num_anonymous_var_name_174=0;
void* right_value233;
char* __dec_obj102;
_Bool _if_conditional304;
void* right_value234;
char* __dec_obj103;
static int num_anonymous_var_name_175=0;
void* right_value235;
char* __dec_obj104;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool no_comma_176;
void* right_value236;
struct sNode* node_177;
struct sNode* __dec_obj105;
_Bool _if_conditional307;
struct sType* result_type_178;
void* right_value246;
_Bool _if_conditional313;
void* right_value247;
void* right_value248;
struct sType* __dec_obj106;
_Bool _if_conditional319;
int i_188;
_Bool _for_condtionalA4;
void* right_value253;
_Bool _if_conditional322;
void* right_value254;
void* right_value255;
void* right_value256;
struct sType* __dec_obj107;
void* right_value257;
void* right_value258;
struct sType* __dec_obj108;
struct sNode* __dec_obj109;
void* right_value259;
char* __dec_obj110;
void* right_value260;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_193;
struct list$1charph* param_names_194;
struct list$1charph* param_default_parametors_195;
_Bool var_args_196;
void* right_value261;
void* right_value262;
struct sType* __dec_obj111;
void* right_value263;
void* right_value265;
struct tuple1$1sTypeph* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
_Bool _if_conditional324;
_Bool _if_conditional325;
struct sType* result_type_197;
void* right_value266;
struct optional$2sTypepbool* __exception_result_var_b2;
_Bool _if_conditional326;
void* right_value267;
void* right_value268;
struct sType* __dec_obj116;
_Bool _if_conditional327;
int i_198;
_Bool _for_condtionalA5;
void* right_value269;
struct optional$2charphbool* __exception_result_var_b3;
_Bool _if_conditional328;
void* right_value270;
void* right_value271;
void* right_value272;
struct sType* __dec_obj117;
void* right_value273;
void* right_value274;
struct sType* __dec_obj118;
struct sNode* __dec_obj119;
_Bool _if_conditional329;
void* right_value275;
char* __dec_obj120;
_Bool _if_conditional330;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
struct optional$2tuple3$3sTypephcharphboolphbool* __result106__;
static int num_anonymous_var_name_199=0;
void* right_value280;
char* __dec_obj121;
void* right_value281;
void* right_value282;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_200;
struct list$1charph* param_names_201;
struct list$1charph* param_default_parametors_202;
_Bool var_args_203;
void* right_value283;
void* right_value284;
struct sType* __dec_obj122;
void* right_value285;
void* right_value286;
struct tuple1$1sTypeph* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
_Bool _if_conditional331;
void* right_value287;
struct sNode* exp_204;
void* right_value288;
_Bool _if_conditional332;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
struct optional$2tuple3$3sTypephcharphboolphbool* __result109__;
void* right_value293;
struct CVALUE* come_value_205;
void* right_value294;
struct sType* __dec_obj127;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value295;
char* __dec_obj128;
_Bool _if_conditional339;
static int num_anonymous_var_name_206=0;
void* right_value296;
char* __dec_obj129;
_Bool _if_conditional340;
void* right_value297;
char* __dec_obj130;
static int num_anonymous_var_name_207=0;
void* right_value298;
char* __dec_obj131;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool no_comma_208;
void* right_value299;
struct sNode* node_209;
struct sNode* __dec_obj132;
void* right_value300;
struct optional$2sTypepbool* __exception_result_var_b4;
_Bool _if_conditional343;
void* right_value301;
void* right_value302;
struct sType* __dec_obj133;
void* right_value303;
char* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _if_conditional344;
int i_210;
_Bool _for_condtionalA6;
void* right_value304;
struct optional$2charphbool* __exception_result_var_b5;
_Bool _if_conditional345;
void* right_value305;
void* right_value306;
void* right_value307;
struct sType* __dec_obj136;
struct sNode* __dec_obj137;
_Bool _if_conditional346;
void* right_value317;
_Bool _if_conditional352;
void* right_value318;
void* right_value319;
void* right_value320;
void* right_value321;
struct optional$2tuple3$3sTypephcharphboolphbool* __result117__;
void* right_value322;
void* right_value323;
struct sType* __dec_obj138;
_Bool _while_condtional37;
void* right_value324;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_215;
char* var_name_216;
_Bool err_217;
_Bool _if_conditional353;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value328;
struct optional$2tuple3$3sTypephcharphboolphbool* __result118__;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
struct optional$2tuple3$3sTypephcharphboolphbool* __result119__;
_Bool _if_conditional356;
void* right_value333;
struct sType* __dec_obj139;
_Bool _if_conditional357;
void* right_value334;
char* new_name_218;
struct sNode* __dec_obj140;
_Bool _if_conditional358;
void* right_value335;
struct sClass* klass_219;
_Bool _if_conditional359;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
struct sType* __dec_obj141;
struct sNode* __dec_obj142;
_Bool _while_condtional47;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _while_condtional48;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value352;
void* right_value353;
struct list$1sTypeph* types_266;
void* right_value354;
_Bool _while_condtional49;
void* right_value355;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_267;
char* name_268;
_Bool err_269;
_Bool _if_conditional422;
void* right_value356;
void* right_value357;
void* right_value358;
void* right_value359;
struct optional$2tuple3$3sTypephcharphboolphbool* __result144__;
void* right_value360;
int num_tuples_270;
void* right_value361;
void* right_value362;
void* right_value363;
struct sType* __dec_obj143;
struct list$1sTypeph* o2_saved_271;
struct sType* it_272;
_Bool _for_condtionalA9;
void* right_value364;
_Bool _if_conditional423;
void* right_value365;
struct sType* __dec_obj144;
_Bool _if_conditional424;
void* right_value366;
char* new_name_273;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value367;
char* __dec_obj145;
_Bool _if_conditional428;
static int num_anonymous_var_name_274=0;
void* right_value368;
char* __dec_obj146;
_Bool _if_conditional429;
void* right_value369;
char* __dec_obj147;
static int num_anonymous_var_name_275=0;
void* right_value370;
char* __dec_obj148;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool no_comma_276;
void* right_value371;
struct sNode* node_277;
struct sNode* __dec_obj149;
_Bool _while_condtional50;
_Bool _if_conditional432;
void* right_value372;
struct sNode* node_278;
void* right_value373;
void* right_value374;
char* asm_name_279;
char* __dec_obj150;
_Bool _if_conditional433;
void* right_value375;
void* right_value376;
struct sType* type2_280;
void* right_value377;
void* right_value378;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
struct optional$2tuple3$3sTypephcharphboolphbool* __result145__;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
struct optional$2tuple3$3sTypephcharphboolphbool* __result146__;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
struct optional$2tuple3$3sTypephcharphboolphbool* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_106, 0, sizeof(char*));
memset(&head_sline_107, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&type_name_108, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&constant_109, 0, sizeof(_Bool));
memset(&static__110, 0, sizeof(_Bool));
memset(&exception__111, 0, sizeof(_Bool));
memset(&volatile__112, 0, sizeof(_Bool));
memset(&register__113, 0, sizeof(_Bool));
memset(&unsigned__114, 0, sizeof(_Bool));
memset(&long__115, 0, sizeof(_Bool));
memset(&long_long_116, 0, sizeof(_Bool));
memset(&short__117, 0, sizeof(_Bool));
memset(&restrict__118, 0, sizeof(_Bool));
memset(&struct__119, 0, sizeof(_Bool));
memset(&union__120, 0, sizeof(_Bool));
memset(&enum__121, 0, sizeof(_Bool));
memset(&no_heap_122, 0, sizeof(_Bool));
memset(&extern__123, 0, sizeof(_Bool));
memset(&inline__124, 0, sizeof(_Bool));
memset(&come_mem_core__125, 0, sizeof(_Bool));
memset(&alignas__126, 0, sizeof(struct sNode*));
memset(&anonymous_type_127, 0, sizeof(_Bool));
memset(&anonymous_name_128, 0, sizeof(_Bool));
memset(&p_129, 0, sizeof(char*));
memset(&sline_130, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&sline_132, 0, sizeof(int));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&p_133, 0, sizeof(char*));
memset(&sline_134, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&p_135, 0, sizeof(char*));
memset(&sline_136, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&p_137, 0, sizeof(char*));
memset(&sline_138, 0, sizeof(int));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&p_139, 0, sizeof(char*));
memset(&sline_140, 0, sizeof(int));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&p_141, 0, sizeof(char*));
memset(&sline_142, 0, sizeof(int));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&exp_143, 0, sizeof(struct sNode*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&p_144, 0, sizeof(char*));
memset(&sline_145, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&p_146, 0, sizeof(char*));
memset(&sline_147, 0, sizeof(int));
memset(&right_value186, 0, sizeof(void*));
memset(&p_148, 0, sizeof(char*));
memset(&sline_149, 0, sizeof(int));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&p_150, 0, sizeof(char*));
memset(&sline_151, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&p_152, 0, sizeof(char*));
memset(&sline_153, 0, sizeof(int));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&pointer_num_154, 0, sizeof(int));
memset(&lambda_flag_155, 0, sizeof(_Bool));
memset(&pX_156, 0, sizeof(char*));
memset(&slineX_157, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
memset(&type_158, 0, sizeof(struct sType*));
memset(&var_name_159, 0, sizeof(char*));
memset(&function_pointer_flag_160, 0, sizeof(_Bool));
memset(&p_161, 0, sizeof(char*));
memset(&sline_162, 0, sizeof(int));
memset(&right_value202, 0, sizeof(void*));
memset(&word_163, 0, sizeof(char*));
memset(&var_name_between_brace_164, 0, sizeof(_Bool));
memset(&p_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
memset(&right_value203, 0, sizeof(void*));
memset(&word_167, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&node_169, 0, sizeof(struct sNode*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&pointer_num_170, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&node_171, 0, sizeof(struct sNode*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&pointer_num_173, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&no_comma_176, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
memset(&node_177, 0, sizeof(struct sNode*));
memset(&result_type_178, 0, sizeof(struct sType*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&i_188, 0, sizeof(int));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_194, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_195, 0, sizeof(struct list$1charph*));
memset(&var_args_196, 0, sizeof(_Bool));
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_194, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_195, 0, sizeof(struct list$1charph*));
memset(&var_args_196, 0, sizeof(_Bool));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&result_type_197, 0, sizeof(struct sType*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&i_198, 0, sizeof(int));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&param_types_200, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_201, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_202, 0, sizeof(struct list$1charph*));
memset(&var_args_203, 0, sizeof(_Bool));
memset(&param_types_200, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_201, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_202, 0, sizeof(struct list$1charph*));
memset(&var_args_203, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&exp_204, 0, sizeof(struct sNode*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&come_value_205, 0, sizeof(struct CVALUE*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&no_comma_208, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
memset(&node_209, 0, sizeof(struct sNode*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&i_210, 0, sizeof(int));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&generics_type_215, 0, sizeof(struct sType*));
memset(&var_name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
memset(&generics_type_215, 0, sizeof(struct sType*));
memset(&var_name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&new_name_218, 0, sizeof(char*));
memset(&right_value335, 0, sizeof(void*));
memset(&klass_219, 0, sizeof(struct sClass*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&types_266, 0, sizeof(struct list$1sTypeph*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&type2_267, 0, sizeof(struct sType*));
memset(&name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
memset(&type2_267, 0, sizeof(struct sType*));
memset(&name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&num_tuples_270, 0, sizeof(int));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&o2_saved_271, 0, sizeof(struct list$1sTypeph*));
memset(&it_272, 0, sizeof(struct sType*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&new_name_273, 0, sizeof(char*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&no_comma_276, 0, sizeof(_Bool));
memset(&right_value371, 0, sizeof(void*));
memset(&node_277, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
memset(&node_278, 0, sizeof(struct sNode*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&asm_name_279, 0, sizeof(char*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&type2_280, 0, sizeof(struct sType*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
    head_106=((struct sInfo*)come_null_check(info, "05function4.c", 673))->p;
    __freed_obj__ = 0;
    head_sline_107=((struct sInfo*)come_null_check(info, "05function4.c", 674))->sline;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "05function4.c", 675))->define_struct=(_Bool)0;
    __freed_obj__ = 0;
    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 677),((struct optional$2charphbool*)(right_value130=parse_word(info))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    while(_while_condtional28=string_operator_equals(type_name_108,"__extension__"),    __freed_obj__ = 0, 
    _while_condtional28) {
        __dec_obj52=type_name_108;
        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 679),((struct optional$2charphbool*)(right_value131=parse_word(info))))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    constant_109=(_Bool)0;
    __freed_obj__ = 0;
    static__110=(_Bool)0;
    __freed_obj__ = 0;
    exception__111=(_Bool)0;
    __freed_obj__ = 0;
    volatile__112=(_Bool)0;
    __freed_obj__ = 0;
    register__113=(_Bool)0;
    __freed_obj__ = 0;
    unsigned__114=(_Bool)0;
    __freed_obj__ = 0;
    long__115=(_Bool)0;
    __freed_obj__ = 0;
    long_long_116=(_Bool)0;
    __freed_obj__ = 0;
    short__117=(_Bool)0;
    __freed_obj__ = 0;
    restrict__118=(_Bool)0;
    __freed_obj__ = 0;
    struct__119=(_Bool)0;
    __freed_obj__ = 0;
    union__120=(_Bool)0;
    __freed_obj__ = 0;
    enum__121=(_Bool)0;
    __freed_obj__ = 0;
    no_heap_122=(_Bool)0;
    __freed_obj__ = 0;
    extern__123=(_Bool)0;
    __freed_obj__ = 0;
    inline__124=(_Bool)0;
    __freed_obj__ = 0;
    come_mem_core__125=(_Bool)0;
    __freed_obj__ = 0;
    alignas__126=((void*)0);
    __freed_obj__ = 0;
    anonymous_type_127=(_Bool)0;
    __freed_obj__ = 0;
    anonymous_name_128=(_Bool)0;
    __freed_obj__ = 0;
    while(_while_condtional29=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional29) {
        if(_if_conditional218=string_operator_equals(type_name_108,"struct"),        __freed_obj__ = 0, 
        _if_conditional218) {
            struct__119=(_Bool)1;
            __freed_obj__ = 0;
            if(_if_conditional219=*((struct sInfo*)come_null_check(info, "05function4.c", 732))->p==123,            __freed_obj__ = 0, 
            _if_conditional219) {
                p_129=((struct sInfo*)come_null_check(info, "05function4.c", 710))->p;
                __freed_obj__ = 0;
                sline_130=((struct sInfo*)come_null_check(info, "05function4.c", 711))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value132=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value132;
                __freed_obj__ = 0;
                if(_if_conditional220=*((struct sInfo*)come_null_check(info, "05function4.c", 730))->p==59,                __freed_obj__ = 0, 
                _if_conditional220) {
                    anonymous_name_128=(_Bool)1;
                    __freed_obj__ = 0;
                    anonymous_type_127=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj53=type_name_108;
                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(""))));
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value133;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 719))->p=p_129;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 720))->sline=sline_130;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_127=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj54=type_name_108;
                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(""))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value134;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 726))->p=p_129;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 727))->sline=sline_130;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj55=type_name_108;
            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 734),((struct optional$2charphbool*)(right_value135=parse_word(info))))));
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value135;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional221=*((struct sInfo*)come_null_check(info, "05function4.c", 768))->p==60,            __freed_obj__ = 0, 
            _if_conditional221) {
                p_131=((struct sInfo*)come_null_check(info, "05function4.c", 739))->p;
                __freed_obj__ = 0;
                sline_132=((struct sInfo*)come_null_check(info, "05function4.c", 740))->sline;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 742))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                while(_while_condtional30=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional30) {
                    if(_if_conditional222=*((struct sInfo*)come_null_check(info, "05function4.c", 765))->p==62,                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 747))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional223=*((struct sInfo*)come_null_check(info, "05function4.c", 756))->p==123,                        __freed_obj__ = 0, 
                        _if_conditional223) {
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 753))->p=p_131;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 754))->sline=sline_132;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional224=*((struct sInfo*)come_null_check(info, "05function4.c", 765))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional224) {
                            err_msg(info,"invalid struct definition");
                            __freed_obj__ = 0;
                            __result75__ = __result_obj__ = (come_save_stackframe("05function4.c", 760), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value141=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value140=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 760))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value139=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value136=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value136;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value139;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
                            if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value140;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value141);
                            if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value141;
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 763))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=*((struct sInfo*)come_null_check(info, "05function4.c", 787))->p==123,            __freed_obj__ = 0, 
            _if_conditional227) {
                p_133=((struct sInfo*)come_null_check(info, "05function4.c", 769))->p;
                __freed_obj__ = 0;
                sline_134=((struct sInfo*)come_null_check(info, "05function4.c", 770))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value142=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value142;
                __freed_obj__ = 0;
                if(_if_conditional228=*((struct sInfo*)come_null_check(info, "05function4.c", 786))->p==59,                __freed_obj__ = 0, 
                _if_conditional228) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 775))->p=head_106;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 776))->sline=head_sline_107;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 777))->define_struct=(_Bool)1;
                    __freed_obj__ = 0;
                    __result76__ = __result_obj__ = (come_save_stackframe("05function4.c", 778), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value146=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value145=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 778))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value144=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value143=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value143;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value144;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value145;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value146;
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_127=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 782))->p=p_133;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 783))->sline=sline_134;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional229=string_operator_equals(type_name_108,"union"),            __freed_obj__ = 0, 
            _if_conditional229) {
                union__120=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional230=*((struct sInfo*)come_null_check(info, "05function4.c", 817))->p==123,                __freed_obj__ = 0, 
                _if_conditional230) {
                    p_135=((struct sInfo*)come_null_check(info, "05function4.c", 792))->p;
                    __freed_obj__ = 0;
                    sline_136=((struct sInfo*)come_null_check(info, "05function4.c", 793))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value147=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value147;
                    __freed_obj__ = 0;
                    if(_if_conditional231=*((struct sInfo*)come_null_check(info, "05function4.c", 815))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional231) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 798))->p=head_106;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 799))->sline=head_sline_107;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 801))->define_struct=(_Bool)0;
                        __freed_obj__ = 0;
                        anonymous_type_127=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj59=type_name_108;
                        type_name_108=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(""))));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value148;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 804))->p=p_135;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 805))->sline=sline_136;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_127=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj60=type_name_108;
                        type_name_108=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(""))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value149;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 811))->p=p_135;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 812))->sline=sline_136;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                __dec_obj61=type_name_108;
                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 819),((struct optional$2charphbool*)(right_value150=parse_word(info))))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value150;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional232=*((struct sInfo*)come_null_check(info, "05function4.c", 842))->p==123,                __freed_obj__ = 0, 
                _if_conditional232) {
                    p_137=((struct sInfo*)come_null_check(info, "05function4.c", 824))->p;
                    __freed_obj__ = 0;
                    sline_138=((struct sInfo*)come_null_check(info, "05function4.c", 825))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value151=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value151;
                    __freed_obj__ = 0;
                    if(_if_conditional233=*((struct sInfo*)come_null_check(info, "05function4.c", 841))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional233) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 830))->p=head_106;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 831))->sline=head_sline_107;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 832))->define_struct=(_Bool)1;
                        __freed_obj__ = 0;
                        __result77__ = __result_obj__ = (come_save_stackframe("05function4.c", 833), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value155=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value154=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 833))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value153=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value152=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value152;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value153;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value154;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value155);
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value155;
                        __freed_obj__ = 0;
                        return __result77__;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_127=(_Bool)1;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 837))->p=p_137;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 838))->sline=sline_138;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional234=string_operator_equals(type_name_108,"enum"),                __freed_obj__ = 0, 
                _if_conditional234) {
                    enum__121=(_Bool)1;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional235=*((struct sInfo*)come_null_check(info, "05function4.c", 869))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional235) {
                        p_139=((struct sInfo*)come_null_check(info, "05function4.c", 849))->p;
                        __freed_obj__ = 0;
                        sline_140=((struct sInfo*)come_null_check(info, "05function4.c", 850))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value156=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value156;
                        __freed_obj__ = 0;
                        if(_if_conditional236=*((struct sInfo*)come_null_check(info, "05function4.c", 867))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 855))->p=head_106;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 856))->sline=head_sline_107;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 857))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result78__ = __result_obj__ = (come_save_stackframe("05function4.c", 858), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value160=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value159=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 858))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value158=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value157=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value157;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
                            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value158;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value159;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value160);
                            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value160;
                            __freed_obj__ = 0;
                            return __result78__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_127=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj62=type_name_108;
                            type_name_108=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(""))));
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value161;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 863))->p=p_139;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 864))->sline=sline_140;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj63=type_name_108;
                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 871),((struct optional$2charphbool*)(right_value162=parse_word(info))))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value162;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional237=*((struct sInfo*)come_null_check(info, "05function4.c", 894))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional237) {
                        p_141=((struct sInfo*)come_null_check(info, "05function4.c", 876))->p;
                        __freed_obj__ = 0;
                        sline_142=((struct sInfo*)come_null_check(info, "05function4.c", 877))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value163=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value163;
                        __freed_obj__ = 0;
                        if(_if_conditional238=*((struct sInfo*)come_null_check(info, "05function4.c", 893))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional238) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 882))->p=head_106;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 883))->sline=head_sline_107;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 884))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result79__ = __result_obj__ = (come_save_stackframe("05function4.c", 885), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value167=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value166=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 885))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value165=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value164=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value164;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
                            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value165;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value166);
                            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value166;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value167);
                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value167;
                            __freed_obj__ = 0;
                            return __result79__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_127=(_Bool)1;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 889))->p=p_141;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 890))->sline=sline_142;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional239=string_operator_equals(type_name_108,"_Alignas"),                    __freed_obj__ = 0, 
                    _if_conditional239) {
                        optional$2intbool_value((come_push_stackframe("05function4.c", 896),((struct optional$2intbool*)(right_value168=expected_next_character(40,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value168;
                        __freed_obj__ = 0;
                        exp_143=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value169;
                        __freed_obj__ = 0;
                        __dec_obj64=alignas__126;
                        alignas__126=(struct sNode*)come_increment_ref_count(exp_143);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        optional$2intbool_value((come_push_stackframe("05function4.c", 902),((struct optional$2intbool*)(right_value170=expected_next_character(41,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value170);
                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value170;
                        __freed_obj__ = 0;
                        __dec_obj65=type_name_108;
                        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 904),((struct optional$2charphbool*)(right_value171=parse_word(info))))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value171);
                        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value171;
                        __freed_obj__ = 0;
                        if(exp_143 && !__freed_obj__) { exp_143 = come_decrement_ref_count(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional240=string_operator_equals(type_name_108,"const"),                        __freed_obj__ = 0, 
                        _if_conditional240) {
                            constant_109=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj66=type_name_108;
                            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 909),((struct optional$2charphbool*)(right_value172=parse_word(info))))));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value172;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional241=string_operator_equals(type_name_108,"exception"),                            __freed_obj__ = 0, 
                            _if_conditional241) {
                                exception__111=(_Bool)1;
                                __freed_obj__ = 0;
                                __dec_obj67=type_name_108;
                                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 914),((struct optional$2charphbool*)(right_value173=parse_word(info))))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value173;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional242=string_operator_equals(type_name_108,"static"),                                __freed_obj__ = 0, 
                                _if_conditional242) {
                                    static__110=(_Bool)1;
                                    __freed_obj__ = 0;
                                    __dec_obj68=type_name_108;
                                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 919),((struct optional$2charphbool*)(right_value174=parse_word(info))))));
                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value174;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional243=string_operator_equals(type_name_108,"come_mem_core"),                                    __freed_obj__ = 0, 
                                    _if_conditional243) {
                                        come_mem_core__125=(_Bool)1;
                                        __freed_obj__ = 0;
                                        __dec_obj69=type_name_108;
                                        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 924),((struct optional$2charphbool*)(right_value175=parse_word(info))))));
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value175;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional244=string_operator_equals(type_name_108,"extern"),                                        __freed_obj__ = 0, 
                                        _if_conditional244) {
                                            extern__123=(_Bool)1;
                                            __freed_obj__ = 0;
                                            __dec_obj70=type_name_108;
                                            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 929),((struct optional$2charphbool*)(right_value176=parse_word(info))))));
                                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                            if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value176;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional245=string_operator_equals(type_name_108,"_Noreturn"),                                            __freed_obj__ = 0, 
                                            _if_conditional245) {
                                                __dec_obj71=type_name_108;
                                                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 932),((struct optional$2charphbool*)(right_value177=parse_word(info))))));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value177;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional246=string_operator_equals(type_name_108,"inline")||string_operator_equals(type_name_108,"__inline")||string_operator_equals(type_name_108,"__inline__")||string_operator_equals(type_name_108,"__always_inline"),                                                __freed_obj__ = 0, 
                                                _if_conditional246) {
                                                    inline__124=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    __dec_obj72=type_name_108;
                                                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 937),((struct optional$2charphbool*)(right_value178=parse_word(info))))));
                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value178;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional247=string_operator_equals(type_name_108,"volatile"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional247) {
                                                        volatile__112=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                        __dec_obj73=type_name_108;
                                                        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 942),((struct optional$2charphbool*)(right_value179=parse_word(info))))));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value179;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional248=string_operator_equals(type_name_108,"long"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional248) {
                                                            {
                                                                p_144=((struct sInfo*)come_null_check(info, "05function4.c", 947))->p;
                                                                __freed_obj__ = 0;
                                                                sline_145=((struct sInfo*)come_null_check(info, "05function4.c", 948))->sline;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional249=!xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1010))->p),                                                                __freed_obj__ = 0, 
                                                                _if_conditional249) {
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 951))->p=p_144;
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 952))->sline=sline_145;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj74=type_name_108;
                                                                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("long"))));
                                                                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                                                    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value180;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    __dec_obj75=type_name_108;
                                                                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 958),((struct optional$2charphbool*)(right_value181=parse_word(info))))));
                                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                                                                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value181;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional250=string_operator_equals(type_name_108,"unsigned"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional250) {
                                                                        __dec_obj76=type_name_108;
                                                                        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 961),((struct optional$2charphbool*)(right_value182=parse_word(info))))));
                                                                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                                                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value182;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional251=string_operator_equals(type_name_108,"int"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional251) {
                                                                            long__115=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional252=string_operator_equals(type_name_108,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional252) {
                                                                            p_144=((struct sInfo*)come_null_check(info, "05function4.c", 969))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_145=((struct sInfo*)come_null_check(info, "05function4.c", 970))->sline;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional253=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 980))->p),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional253) {
                                                                                long_long_116=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj77=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 973),((struct optional$2charphbool*)(right_value183=parse_word(info))))));
                                                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                                                                                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value183;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__115=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional254=string_operator_equals(type_name_108,"int"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional254) {
                                                                                long_long_116=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional255=!is_type_name(type_name_108,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional255) {
                                                                                    __dec_obj78=type_name_108;
                                                                                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string("long"))));
                                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                                                                                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value184;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_116=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 987))->p=p_144;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 988))->sline=sline_145;
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional256=is_type_name(type_name_108,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional256) {
                                                                                if(_if_conditional257=long__115,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional257) {
                                                                                    long_long_116=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    long__115=(_Bool)0;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__115=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1003))->p=p_144;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1004))->sline=sline_145;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj79=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string("long"))));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                                                                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value185;
                                                                                __freed_obj__ = 0;
                                                                                break;
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
                                                        else {
                                                            if(_if_conditional258=string_operator_equals(type_name_108,"unsigned"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional258) {
                                                                unsigned__114=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional259=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1080))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1080))->p==95,                                                                __freed_obj__ = 0, 
                                                                _if_conditional259) {
                                                                    p_146=((struct sInfo*)come_null_check(info, "05function4.c", 1016))->p;
                                                                    __freed_obj__ = 0;
                                                                    sline_147=((struct sInfo*)come_null_check(info, "05function4.c", 1017))->sline;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj80=type_name_108;
                                                                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1019),((struct optional$2charphbool*)(right_value186=parse_word(info))))));
                                                                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                                                                    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value186;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional260=string_operator_equals(type_name_108,"short"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional260) {
                                                                        if(_if_conditional261=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1044))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1044))->p==95,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional261) {
                                                                            p_148=((struct sInfo*)come_null_check(info, "05function4.c", 1023))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_149=((struct sInfo*)come_null_check(info, "05function4.c", 1024))->sline;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj81=type_name_108;
                                                                            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1026),((struct optional$2charphbool*)(right_value187=parse_word(info))))));
                                                                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                                                            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value187;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional262=is_type_name(type_name_108,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional262) {
                                                                                short__117=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                short__117=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj82=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string("int"))));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                                                                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value188;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1035))->p=p_148;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1036))->sline=sline_149;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            short__117=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj83=type_name_108;
                                                                            type_name_108=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("int"))));
                                                                            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                                                                            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value189;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional263=string_operator_equals(type_name_108,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional263) {
                                                                            if(_if_conditional264=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1068))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1068))->p==95,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional264) {
                                                                                p_150=((struct sInfo*)come_null_check(info, "05function4.c", 1047))->p;
                                                                                __freed_obj__ = 0;
                                                                                sline_151=((struct sInfo*)come_null_check(info, "05function4.c", 1048))->sline;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj84=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1050),((struct optional$2charphbool*)(right_value190=parse_word(info))))));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                                                                                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value190;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional265=is_type_name(type_name_108,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional265) {
                                                                                    long__115=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__115=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    __dec_obj85=type_name_108;
                                                                                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("int"))));
                                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                                                                                    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value191;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1059))->p=p_150;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1060))->sline=sline_151;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__115=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj86=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("int"))));
                                                                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                                                                                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value192;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional266=!is_type_name(type_name_108,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional266) {
                                                                                __dec_obj87=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("int"))));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                                                                                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value193;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1071))->p=p_146;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1072))->sline=sline_147;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    __dec_obj88=type_name_108;
                                                                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("int"))));
                                                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                                                                    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value194;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional267=string_operator_equals(type_name_108,"signed")||string_operator_equals(type_name_108,"__signed__"),                                                                __freed_obj__ = 0, 
                                                                _if_conditional267) {
                                                                    unsigned__114=(_Bool)0;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj89=type_name_108;
                                                                    type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1084),((struct optional$2charphbool*)(right_value195=parse_word(info))))));
                                                                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                                                                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value195;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional268=string_operator_equals(type_name_108,"register"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional268) {
                                                                        register__113=(_Bool)1;
                                                                        __freed_obj__ = 0;
                                                                        __dec_obj90=type_name_108;
                                                                        type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1089),((struct optional$2charphbool*)(right_value196=parse_word(info))))));
                                                                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                                                                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value196;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional269=string_operator_equals(type_name_108,"restrict"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional269) {
                                                                            restrict__118=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj91=type_name_108;
                                                                            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1094),((struct optional$2charphbool*)(right_value197=parse_word(info))))));
                                                                            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                                                                            if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value197;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional270=string_operator_equals(type_name_108,"__restrict"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional270) {
                                                                                restrict__118=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj92=type_name_108;
                                                                                type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1099),((struct optional$2charphbool*)(right_value198=parse_word(info))))));
                                                                                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                                                                                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value198;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional271=string_operator_equals(type_name_108,"short"),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional271) {
                                                                                    short__117=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional272=*((struct sInfo*)come_null_check(info, "05function4.c", 1133))->p==58,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional272) {
                                                                                        break;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional273=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1133))->p),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional273) {
                                                                                            p_152=((struct sInfo*)come_null_check(info, "05function4.c", 1108))->p;
                                                                                            __freed_obj__ = 0;
                                                                                            sline_153=((struct sInfo*)come_null_check(info, "05function4.c", 1109))->sline;
                                                                                            __freed_obj__ = 0;
                                                                                            __dec_obj93=type_name_108;
                                                                                            type_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1110),((struct optional$2charphbool*)(right_value199=parse_word(info))))));
                                                                                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                                                                                            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value199;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional274=string_operator_equals(type_name_108,"int"),                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional274) {
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional275=string_operator_equals(type_name_108,"short"),                                                                                                __freed_obj__ = 0, 
                                                                                                _if_conditional275) {
                                                                                                    short__117=(_Bool)0;
                                                                                                    __freed_obj__ = 0;
                                                                                                    break;
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional276=is_type_name(type_name_108,info),                                                                                                    __freed_obj__ = 0, 
                                                                                                    _if_conditional276) {
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1120))->p=p_152;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1121))->sline=sline_153;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj94=type_name_108;
                                                                                                        type_name_108=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("short"))));
                                                                                                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                                                                                                        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value200;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1125))->p=p_152;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1126))->sline=sline_153;
                                                                                                        __freed_obj__ = 0;
                                                                                                        break;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        else {
                                                                                            break;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    break;
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
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    skip_pointer_attribute(info);
    __freed_obj__ = 0;
    pointer_num_154=0;
    __freed_obj__ = 0;
    while(_while_condtional31=*((struct sInfo*)come_null_check(info, "05function4.c", 1151))->p==42,    __freed_obj__ = 0, 
    _while_condtional31) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1143))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        pointer_num_154++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    lambda_flag_155=(_Bool)0;
    __freed_obj__ = 0;
    {
        pX_156=((struct sInfo*)come_null_check(info, "05function4.c", 1153))->p;
        __freed_obj__ = 0;
        slineX_157=((struct sInfo*)come_null_check(info, "05function4.c", 1154))->sline;
        __freed_obj__ = 0;
        if(_if_conditional277=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1164))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1164))->p==95,        __freed_obj__ = 0, 
        _if_conditional277) {
            (void)optional$2charphbool_value((come_push_stackframe("05function4.c", 1157),((struct optional$2charphbool*)(right_value201=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value201;
            __freed_obj__ = 0;
            if(_if_conditional278=*((struct sInfo*)come_null_check(info, "05function4.c", 1162))->p==40&&((struct sInfo*)come_null_check(info, "05function4.c", 1162))->in_typedef,            __freed_obj__ = 0, 
            _if_conditional278) {
                lambda_flag_155=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1164))->p=pX_156;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1165))->sline=slineX_157;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    function_pointer_flag_160=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_161=((struct sInfo*)come_null_check(info, "05function4.c", 1173))->p;
        __freed_obj__ = 0;
        sline_162=((struct sInfo*)come_null_check(info, "05function4.c", 1174))->sline;
        __freed_obj__ = 0;
        if(_if_conditional279=*((struct sInfo*)come_null_check(info, "05function4.c", 1199))->p==40,        __freed_obj__ = 0, 
        _if_conditional279) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1177))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional280=*((struct sInfo*)come_null_check(info, "05function4.c", 1197))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1197))->p==94,            __freed_obj__ = 0, 
            _if_conditional280) {
                function_pointer_flag_160=(_Bool)1;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional281=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1197))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1197))->p==95,                __freed_obj__ = 0, 
                _if_conditional281) {
                    word_163=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1186),((struct optional$2charphbool*)(right_value202=parse_word(info))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value202;
                    __freed_obj__ = 0;
                    if(_if_conditional282=*((struct sInfo*)come_null_check(info, "05function4.c", 1196))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1189))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional283=*((struct sInfo*)come_null_check(info, "05function4.c", 1195))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional283) {
                            function_pointer_flag_160=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(word_163 && !__freed_obj__) { word_163 = come_decrement_ref_count(word_163, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1199))->p=p_161;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1200))->sline=sline_162;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_between_brace_164=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_165=((struct sInfo*)come_null_check(info, "05function4.c", 1205))->p;
        __freed_obj__ = 0;
        sline_166=((struct sInfo*)come_null_check(info, "05function4.c", 1206))->sline;
        __freed_obj__ = 0;
        if(_if_conditional284=*((struct sInfo*)come_null_check(info, "05function4.c", 1230))->p==40,        __freed_obj__ = 0, 
        _if_conditional284) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1209))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional285=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1228))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1228))->p==95,            __freed_obj__ = 0, 
            _if_conditional285) {
                word_167=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1215),((struct optional$2charphbool*)(right_value203=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value203;
                __freed_obj__ = 0;
                if(_if_conditional286=is_type_name(word_167,info),                __freed_obj__ = 0, 
                _if_conditional286) {
                }
                else {
                    if(_if_conditional287=*((struct sInfo*)come_null_check(info, "05function4.c", 1227))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional287) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1220))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional288=*((struct sInfo*)come_null_check(info, "05function4.c", 1226))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            var_name_between_brace_164=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_167 && !__freed_obj__) { word_167 = come_decrement_ref_count(word_167, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1230))->p=p_165;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1231))->sline=sline_166;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional289=anonymous_type_127&&*((struct sInfo*)come_null_check(info, "05function4.c", 1799))->p==123,    __freed_obj__ = 0, 
    _if_conditional289) {
        __freed_obj__ = 0;
        if(_if_conditional290=struct__119,        __freed_obj__ = 0, 
        _if_conditional290) {
            if(_if_conditional291=string_operator_equals(type_name_108,""),            __freed_obj__ = 0, 
            _if_conditional291) {
                __dec_obj95=type_name_108;
                type_name_108=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("anonymous_typeX%d",++anonymous_num_168))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value204;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            node_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=parse_struct((char*)come_increment_ref_count(type_name_108),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value205;
            __freed_obj__ = 0;
            if(_if_conditional292=!((struct sNode*)come_null_check(node_169, "05function4.c", 1248))->compile(((struct sNode*)come_null_check(node_169, "05function4.c", 1248))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional292) {
                err_msg(info,"parse_struct is failed");
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = (come_save_stackframe("05function4.c", 1245), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value209=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value208=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1245))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value207=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value206=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1245)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(node_169 && !__freed_obj__) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0); } 
                if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value206;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value207;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value208;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value209;
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            pointer_num_170=0;
            __freed_obj__ = 0;
            while(_while_condtional32=*((struct sInfo*)come_null_check(info, "05function4.c", 1255))->p==42,            __freed_obj__ = 0, 
            _while_condtional32) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1251))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                pointer_num_170++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj96=type_158;
            type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1255)))),type_name_108,(_Bool)0,info))));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value210;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value211;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1257))->mPointerNum=pointer_num_170;
            __freed_obj__ = 0;
            if(node_169 && !__freed_obj__) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional293=enum__121,            __freed_obj__ = 0, 
            _if_conditional293) {
                if(_if_conditional294=string_operator_equals(type_name_108,""),                __freed_obj__ = 0, 
                _if_conditional294) {
                    __dec_obj97=type_name_108;
                    type_name_108=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("anonymous_typeY%d",++anonymous_num_168))));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value212;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                node_171=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=parse_enum((char*)come_increment_ref_count(type_name_108),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value213;
                __freed_obj__ = 0;
                if(_if_conditional295=!((struct sInfo*)come_null_check(info, "05function4.c", 1273))->no_output_err,                __freed_obj__ = 0, 
                _if_conditional295) {
                    if(_if_conditional296=!((struct sNode*)come_null_check(node_171, "05function4.c", 1271))->compile(((struct sNode*)come_null_check(node_171, "05function4.c", 1271))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1268))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1268))->sline);
                        __freed_obj__ = 0;
                        __result81__ = __result_obj__ = (come_save_stackframe("05function4.c", 1269), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value217=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value216=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1269))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value215=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value214=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1269)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_171 && !__freed_obj__) { node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value214;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value215;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value216;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value217;
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj98=type_158;
                type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value218=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273)))),type_name_108,(_Bool)0,info))));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
                if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value218;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value219);
                if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value219;
                __freed_obj__ = 0;
                if(node_171 && !__freed_obj__) { node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional297=union__120,                __freed_obj__ = 0, 
                _if_conditional297) {
                    if(_if_conditional298=string_operator_equals(type_name_108,""),                    __freed_obj__ = 0, 
                    _if_conditional298) {
                        __dec_obj99=type_name_108;
                        type_name_108=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("anonymous_typeZ%d",++anonymous_num_168))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value220;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=parse_union((char*)come_increment_ref_count(type_name_108),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value221;
                    __freed_obj__ = 0;
                    if(_if_conditional299=!((struct sNode*)come_null_check(node_172, "05function4.c", 1289))->compile(((struct sNode*)come_null_check(node_172, "05function4.c", 1289))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1284))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1284))->sline);
                        __freed_obj__ = 0;
                        __result82__ = __result_obj__ = (come_save_stackframe("05function4.c", 1285), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value225=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value224=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1285))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value223=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value222=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1285)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value222;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
                        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value223;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value224;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value225;
                        __freed_obj__ = 0;
                        return __result82__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    pointer_num_173=0;
                    __freed_obj__ = 0;
                    while(_while_condtional33=*((struct sInfo*)come_null_check(info, "05function4.c", 1296))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional33) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1292))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        pointer_num_173++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj100=type_158;
                    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296)))),type_name_108,(_Bool)0,info))));
                    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value226;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value227);
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value227;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type_158, "05function4.c", 1298))->mPointerNum=pointer_num_173;
                    __freed_obj__ = 0;
                    if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __freed_obj__ = 0;
                    __result83__ = __result_obj__ = (come_save_stackframe("05function4.c", 1302), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value231=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value230=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1302))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value229=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value228=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1302)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value228;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value229;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value230);
                    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value230;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value231);
                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value231;
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional300=parse_variable_name,        __freed_obj__ = 0, 
        _if_conditional300) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional301=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1312))->p==40,            __freed_obj__ = 0, 
            _if_conditional301) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1308))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional302=*((struct sInfo*)come_null_check(info, "05function4.c", 1329))->p==58,            __freed_obj__ = 0, 
            _if_conditional302) {
                __dec_obj101=var_name_159;
                var_name_159=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(""))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value232;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional303=anonymous_name_128,                __freed_obj__ = 0, 
                _if_conditional303) {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_174++;
                    __freed_obj__ = 0;
                    __dec_obj102=var_name_159;
                    var_name_159=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_174))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value233;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional304=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1329))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1329))->p==95,                    __freed_obj__ = 0, 
                    _if_conditional304) {
                        __dec_obj103=var_name_159;
                        var_name_159=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1321),((struct optional$2charphbool*)(right_value234=parse_word(info))))));
                        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value234;
                        __freed_obj__ = 0;
                    }
                    else {
                        __freed_obj__ = 0;
                        num_anonymous_var_name_175++;
                        __freed_obj__ = 0;
                        __dec_obj104=var_name_159;
                        var_name_159=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_175))));
                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value235;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional305=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1334))->p==41,            __freed_obj__ = 0, 
            _if_conditional305) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1330))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional306=*((struct sInfo*)come_null_check(info, "05function4.c", 1345))->p==58,            __freed_obj__ = 0, 
            _if_conditional306) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1335))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_176=((struct sInfo*)come_null_check(info, "05function4.c", 1338))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1339))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value236;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1341))->no_comma=no_comma_176;
                __freed_obj__ = 0;
                __dec_obj105=((struct sType*)come_null_check(type_158, "05function4.c", 1343))->mSizeNum;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1343))->mSizeNum=(struct sNode*)come_increment_ref_count(node_177);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                if(node_177 && !__freed_obj__) { node_177 = come_decrement_ref_count(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional307=lambda_flag_155,        __freed_obj__ = 0, 
        _if_conditional307) {
            __freed_obj__ = 0;
            if(_if_conditional313=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1363),((struct optional$2sTypepbool*)(right_value246=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1363))->types,type_name_108))))),            come_pop_stackframe() ,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246),
            (right_value246 && right_value246 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value246, 
            __freed_obj__ = 0, 
            _if_conditional313) {
                __dec_obj106=result_type_178;
                result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1350),((struct optional$2sTypepbool*)(right_value247=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1350))->types,type_name_108)))))))));
                if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value247;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value248;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional319=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1363))->generics_type_names, "05function4.c", 1363)),(char*)come_increment_ref_count(type_name_108)),                __freed_obj__ = 0, 
                _if_conditional319) {
                    for(
                    i_188=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA4=                    i_188<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1358))->generics_type_names, "05function4.c", 1358))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA4;                    i_188++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional322=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1357),((struct optional$2charphbool*)(right_value253=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1357))->generics_type_names,i_188))))),type_name_108),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253),
                        (right_value253 && right_value253 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value253, 
                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            __dec_obj107=result_type_178;
                            result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value254=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1355)))),((char*)(right_value255=xsprintf("generics_type%d",i_188))),(_Bool)0,info))));
                            if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value254;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value255;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value256);
                            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value256;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj108=result_type_178;
                    result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1360)))),type_name_108,(_Bool)0,info))));
                    if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value258;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1363))->mConstant=((struct sType*)come_null_check(result_type_178, "05function4.c", 1363))->mConstant||constant_109;
            __freed_obj__ = 0;
            __dec_obj109=((struct sType*)come_null_check(result_type_178, "05function4.c", 1364))->mAlignas;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1364))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1365))->mComeMemCore=((struct sType*)come_null_check(result_type_178, "05function4.c", 1365))->mComeMemCore||come_mem_core__125;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1366))->mRegister=register__113;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1367))->mUnsigned=((struct sType*)come_null_check(result_type_178, "05function4.c", 1367))->mUnsigned||unsigned__114;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1368))->mVolatile=volatile__112;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1369))->mStatic=((struct sType*)come_null_check(result_type_178, "05function4.c", 1369))->mStatic||static__110;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1370))->mExtern=((struct sType*)come_null_check(result_type_178, "05function4.c", 1370))->mExtern||extern__123;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1371))->mInline=((struct sType*)come_null_check(result_type_178, "05function4.c", 1371))->mInline||inline__124;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1372))->mRestrict=((struct sType*)come_null_check(result_type_178, "05function4.c", 1372))->mRestrict||restrict__118;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1373))->mLongLong=((struct sType*)come_null_check(result_type_178, "05function4.c", 1373))->mLongLong||long_long_116;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1374))->mLong=((struct sType*)come_null_check(result_type_178, "05function4.c", 1374))->mLong||long__115;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1375))->mShort=((struct sType*)come_null_check(result_type_178, "05function4.c", 1375))->mShort||short__117;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_178, "05function4.c", 1376))->mPointerNum=pointer_num_154;
            __freed_obj__ = 0;
            __dec_obj110=var_name_159;
            var_name_159=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1378),((struct optional$2charphbool*)(right_value259=parse_word(info))))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value259;
            __freed_obj__ = 0;
            multiple_assgin_var2=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1380),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value260=parse_params(info)))));
            param_types_193=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_194=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_195=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_196=multiple_assgin_var2->v4;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value260;
            __freed_obj__ = 0;
            __dec_obj111=type_158;
            type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1382)))),"lambda",(_Bool)0,info))));
            if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value261);
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value261;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value262);
            if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value262;
            __freed_obj__ = 0;
            __dec_obj113=((struct sType*)come_null_check(type_158, "05function4.c", 1384))->mResultType;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1384))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value265=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value263=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1384)))),(struct sType*)come_increment_ref_count(result_type_178)))));
            if(__dec_obj113) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value263);
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value263;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value265;
            __freed_obj__ = 0;
            __dec_obj114=((struct sType*)come_null_check(type_158, "05function4.c", 1385))->mParamTypes;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1385))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_193);
            if(__dec_obj114) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj115=((struct sType*)come_null_check(type_158, "05function4.c", 1386))->mParamNames;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1386))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_194);
            if(__dec_obj115) { come_call_finalizer(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1387))->mVarArgs=var_args_196;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1388))->mExtern=extern__123;
            __freed_obj__ = 0;
            if(result_type_178 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_178, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_193 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_194 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_194, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_195 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional324=function_pointer_flag_160,            __freed_obj__ = 0, 
            _if_conditional324) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1391))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                if(_if_conditional325=*((struct sInfo*)come_null_check(info, "05function4.c", 1401))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1401))->p==94,                __freed_obj__ = 0, 
                _if_conditional325) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1397))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                if(_if_conditional326=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1419),__exception_result_var_b2=((struct optional$2sTypepbool*)(right_value266=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1419))->types,type_name_108))), come_pop_stackframe(), __exception_result_var_b2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266),
                (right_value266 && right_value266 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value266, 
                __freed_obj__ = 0, 
                _if_conditional326) {
                    __dec_obj116=result_type_197;
                    result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1405),((struct optional$2sTypepbool*)(right_value267=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1405))->types,type_name_108)))))))));
                    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value267;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value268;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional327=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1419))->generics_type_names, "05function4.c", 1419)),(char*)come_increment_ref_count(type_name_108)),                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        for(
                        i_198=0 ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA5=                        i_198<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1414))->generics_type_names, "05function4.c", 1414))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA5;                        i_198++ ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional328=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1413),__exception_result_var_b3=((struct optional$2charphbool*)(right_value269=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1413))->generics_type_names,i_198))), come_pop_stackframe(), __exception_result_var_b3)),type_name_108),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269),
                            (right_value269 && right_value269 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value269, 
                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                __dec_obj117=result_type_197;
                                result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1411)))),((char*)(right_value271=xsprintf("generics_type%d",i_198))),(_Bool)0,info))));
                                if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value270;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
                                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value271;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value272);
                                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value272;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj118=result_type_197;
                        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1416)))),type_name_108,(_Bool)0,info))));
                        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value273;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
                        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value274;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1419))->mConstant=((struct sType*)come_null_check(result_type_197, "05function4.c", 1419))->mConstant||constant_109;
                __freed_obj__ = 0;
                __dec_obj119=((struct sType*)come_null_check(result_type_197, "05function4.c", 1420))->mAlignas;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1420))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1421))->mComeMemCore=((struct sType*)come_null_check(result_type_197, "05function4.c", 1421))->mComeMemCore||come_mem_core__125;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1422))->mRegister=register__113;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1423))->mUnsigned=((struct sType*)come_null_check(result_type_197, "05function4.c", 1423))->mUnsigned||unsigned__114;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1424))->mVolatile=volatile__112;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1425))->mStatic=((struct sType*)come_null_check(result_type_197, "05function4.c", 1425))->mStatic||static__110;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1426))->mExtern=((struct sType*)come_null_check(result_type_197, "05function4.c", 1426))->mExtern||extern__123;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1427))->mInline=((struct sType*)come_null_check(result_type_197, "05function4.c", 1427))->mInline||inline__124;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1428))->mRestrict=((struct sType*)come_null_check(result_type_197, "05function4.c", 1428))->mRestrict||restrict__118;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1429))->mLongLong=((struct sType*)come_null_check(result_type_197, "05function4.c", 1429))->mLongLong||long_long_116;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1430))->mLong=((struct sType*)come_null_check(result_type_197, "05function4.c", 1430))->mLong||long__115;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1431))->mShort=((struct sType*)come_null_check(result_type_197, "05function4.c", 1431))->mShort||short__117;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_197, "05function4.c", 1432))->mPointerNum+=pointer_num_154;
                __freed_obj__ = 0;
                if(_if_conditional329=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1445))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1445))->p==95,                __freed_obj__ = 0, 
                _if_conditional329) {
                    __dec_obj120=var_name_159;
                    var_name_159=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1435),((struct optional$2charphbool*)(right_value275=parse_word(info))))));
                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value275;
                    __freed_obj__ = 0;
                    if(_if_conditional330=*((struct sInfo*)come_null_check(info, "05function4.c", 1439))->p==40,                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        __result106__ = __result_obj__ = (come_save_stackframe("05function4.c", 1437), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value279=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value278=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1437))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value277=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value276=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1437)))),(struct sType*)come_increment_ref_count(result_type_197),(char*)come_increment_ref_count(var_name_159),(_Bool)0)))),(_Bool)0))));
                        if(result_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value276;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
                        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value277;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value278);
                        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value278;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value279);
                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value279;
                        __freed_obj__ = 0;
                        return __result106__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_199++;
                    __freed_obj__ = 0;
                    __dec_obj121=var_name_159;
                    var_name_159=(char*)come_increment_ref_count(((char*)(right_value280=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_199))));
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value280;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                optional$2intbool_value((come_push_stackframe("05function4.c", 1445),((struct optional$2intbool*)(right_value281=expected_next_character(41,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value281;
                __freed_obj__ = 0;
                multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1447),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value282=parse_params(info)))));
                param_types_200=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_201=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_202=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_203=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value282;
                __freed_obj__ = 0;
                __dec_obj122=type_158;
                type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value283=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1449)))),"lambda",(_Bool)0,info))));
                if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value283;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value284);
                if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value284;
                __freed_obj__ = 0;
                __dec_obj123=((struct sType*)come_null_check(type_158, "05function4.c", 1451))->mResultType;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1451))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value286=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value285=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1451)))),(struct sType*)come_increment_ref_count(result_type_197)))));
                if(__dec_obj123) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value285);
                if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value285;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value286);
                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value286;
                __freed_obj__ = 0;
                __dec_obj124=((struct sType*)come_null_check(type_158, "05function4.c", 1452))->mParamTypes;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1452))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_200);
                if(__dec_obj124) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj125=((struct sType*)come_null_check(type_158, "05function4.c", 1453))->mParamNames;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1453))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_201);
                if(__dec_obj125) { come_call_finalizer(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1454))->mVarArgs=var_args_203;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_158, "05function4.c", 1455))->mExtern=extern__123;
                __freed_obj__ = 0;
                if(result_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_200 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_201 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_202 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional331=string_operator_equals(type_name_108,"__typeof__")&&*((struct sInfo*)come_null_check(info, "05function4.c", 1799))->p==40,                __freed_obj__ = 0, 
                _if_conditional331) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1458))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    exp_204=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value287;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 1463),((struct optional$2intbool*)(right_value288=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
                    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value288;
                    __freed_obj__ = 0;
                    if(_if_conditional332=!((struct sNode*)come_null_check(exp_204, "05function4.c", 1470))->compile(((struct sNode*)come_null_check(exp_204, "05function4.c", 1470))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        err_msg(info,"invalid __typeof__ expression");
                        __freed_obj__ = 0;
                        __result109__ = __result_obj__ = (come_save_stackframe("05function4.c", 1467), ((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value292=optional$2tuple3$3voidpvoidpboolphbool_initialize(((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value291=(struct optional$2tuple3$3voidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3voidpvoidpboolphbool)*(1), "05function4.c", 1467))),(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value290=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value289=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1467)))),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
                        if(exp_204 && !__freed_obj__) { exp_204 = come_decrement_ref_count(exp_204, ((struct sNode*)exp_204)->finalize, ((struct sNode*)exp_204)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value289;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
                        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value290;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
                        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value291;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value292;
                        __freed_obj__ = 0;
                        return __result109__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value293);
                    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value293;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    __dec_obj127=type_158;
                    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(((struct CVALUE*)come_null_check(come_value_205, "05function4.c", 1473))->type))));
                    if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value294);
                    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value294;
                    __freed_obj__ = 0;
                    if(_if_conditional336=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional336) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional337=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1484))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional337) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1480))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional338=*((struct sInfo*)come_null_check(info, "05function4.c", 1501))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            __dec_obj128=var_name_159;
                            var_name_159=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(""))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value295;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional339=anonymous_name_128,                            __freed_obj__ = 0, 
                            _if_conditional339) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_206++;
                                __freed_obj__ = 0;
                                __dec_obj129=var_name_159;
                                var_name_159=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_206))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value296;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional340=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1501))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1501))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    __dec_obj130=var_name_159;
                                    var_name_159=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1493),((struct optional$2charphbool*)(right_value297=parse_word(info))))));
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value297;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_207++;
                                    __freed_obj__ = 0;
                                    __dec_obj131=var_name_159;
                                    var_name_159=(char*)come_increment_ref_count(((char*)(right_value298=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_207))));
                                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                                    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value298;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional341=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1506))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional341) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1502))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional342=*((struct sInfo*)come_null_check(info, "05function4.c", 1517))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional342) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1507))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_208=((struct sInfo*)come_null_check(info, "05function4.c", 1510))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1511))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value299;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1513))->no_comma=no_comma_208;
                            __freed_obj__ = 0;
                            __dec_obj132=((struct sType*)come_null_check(type_158, "05function4.c", 1515))->mSizeNum;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1515))->mSizeNum=(struct sNode*)come_increment_ref_count(node_209);
                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_209 && !__freed_obj__) { node_209 = come_decrement_ref_count(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0); } 
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(exp_204 && !__freed_obj__) { exp_204 = come_decrement_ref_count(exp_204, ((struct sNode*)exp_204)->finalize, ((struct sNode*)exp_204)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional343=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1652),__exception_result_var_b4=((struct optional$2sTypepbool*)(right_value300=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1652))->types,type_name_108))), come_pop_stackframe(), __exception_result_var_b4)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300),
                    (right_value300 && right_value300 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value300, 
                    __freed_obj__ = 0, 
                    _if_conditional343) {
                        __dec_obj133=type_158;
                        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1521),((struct optional$2sTypepbool*)(right_value301=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1521))->types,type_name_108)))))))));
                        if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value301;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value302);
                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value302;
                        __freed_obj__ = 0;
                        __dec_obj134=((struct sType*)come_null_check(type_158, "05function4.c", 1522))->mOriginalTypeName;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1522))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(type_name_108))));
                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value303);
                        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value303;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1523))->mOriginalTypeNamePointerNum=pointer_num_154;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1525))->mConstant=((struct sType*)come_null_check(type_158, "05function4.c", 1525))->mConstant||constant_109;
                        __freed_obj__ = 0;
                        __dec_obj135=((struct sType*)come_null_check(type_158, "05function4.c", 1526))->mAlignas;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1526))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
                        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1527))->mComeMemCore=((struct sType*)come_null_check(type_158, "05function4.c", 1527))->mComeMemCore||come_mem_core__125;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1528))->mRegister=register__113;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1529))->mUnsigned=((struct sType*)come_null_check(type_158, "05function4.c", 1529))->mUnsigned||unsigned__114;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1530))->mVolatile=volatile__112;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1531))->mStatic=((struct sType*)come_null_check(type_158, "05function4.c", 1531))->mStatic||static__110;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1532))->mExtern=((struct sType*)come_null_check(type_158, "05function4.c", 1532))->mExtern||extern__123;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1533))->mInline=((struct sType*)come_null_check(type_158, "05function4.c", 1533))->mInline||inline__124;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1534))->mRestrict=((struct sType*)come_null_check(type_158, "05function4.c", 1534))->mRestrict||restrict__118;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1535))->mLongLong=((struct sType*)come_null_check(type_158, "05function4.c", 1535))->mLongLong||long_long_116;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1536))->mLong=((struct sType*)come_null_check(type_158, "05function4.c", 1536))->mLong||long__115;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1537))->mShort=((struct sType*)come_null_check(type_158, "05function4.c", 1537))->mShort||short__117;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1538))->mPointerNum+=pointer_num_154;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional344=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1652))->generics_type_names, "05function4.c", 1652)),(char*)come_increment_ref_count(type_name_108)),                        __freed_obj__ = 0, 
                        _if_conditional344) {
                            for(
                            i_210=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA6=                            i_210<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1547))->generics_type_names, "05function4.c", 1547))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA6;                            i_210++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional345=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1545),__exception_result_var_b5=((struct optional$2charphbool*)(right_value304=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1545))->generics_type_names,i_210))), come_pop_stackframe(), __exception_result_var_b5)),type_name_108),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304),
                                (right_value304 && right_value304 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value304, 
                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    __dec_obj136=type_158;
                                    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1543)))),((char*)(right_value306=xsprintf("generics_type%d",i_210))),(_Bool)0,info))));
                                    if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
                                    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value305;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value306);
                                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value306;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value307);
                                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value307;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1547))->mConstant=((struct sType*)come_null_check(type_158, "05function4.c", 1547))->mConstant||constant_109;
                            __freed_obj__ = 0;
                            __dec_obj137=((struct sType*)come_null_check(type_158, "05function4.c", 1548))->mAlignas;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1548))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1549))->mComeMemCore=((struct sType*)come_null_check(type_158, "05function4.c", 1549))->mComeMemCore||come_mem_core__125;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1550))->mRegister=register__113;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1551))->mUnsigned=((struct sType*)come_null_check(type_158, "05function4.c", 1551))->mUnsigned||unsigned__114;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1552))->mVolatile=volatile__112;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1553))->mStatic=((struct sType*)come_null_check(type_158, "05function4.c", 1553))->mStatic||static__110;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1554))->mExtern=((struct sType*)come_null_check(type_158, "05function4.c", 1554))->mExtern||extern__123;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1555))->mInline=((struct sType*)come_null_check(type_158, "05function4.c", 1555))->mInline||inline__124;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1556))->mRestrict=((struct sType*)come_null_check(type_158, "05function4.c", 1556))->mRestrict||restrict__118;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1557))->mLongLong=((struct sType*)come_null_check(type_158, "05function4.c", 1557))->mLongLong||long_long_116;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1558))->mLong=((struct sType*)come_null_check(type_158, "05function4.c", 1558))->mLong||long__115;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1559))->mShort=((struct sType*)come_null_check(type_158, "05function4.c", 1559))->mShort||short__117;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1560))->mPointerNum+=pointer_num_154;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional346=*((struct sInfo*)come_null_check(info, "05function4.c", 1652))->p==60,                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                ((struct sInfo*)come_null_check(info, "05function4.c", 1563))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                if(_if_conditional352=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1571),((struct optional$2sClasspbool*)(right_value317=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1571))->generics_classes,type_name_108)))))==((void*)0),                                come_pop_stackframe() ,                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317),
                                (right_value317 && right_value317 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sClasspboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value317, 
                                __freed_obj__ = 0, 
                                _if_conditional352) {
                                    __result117__ = __result_obj__ = (come_save_stackframe("05function4.c", 1568), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value321=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value320=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1568))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value319=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value318=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1568)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                    if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                                    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
                                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value318;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value319);
                                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value319;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value320);
                                    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value320;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value321);
                                    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value321;
                                    __freed_obj__ = 0;
                                    return __result117__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj138=type_158;
                                type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1571)))),type_name_108,(_Bool)0,info))));
                                if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value322);
                                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value322;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value323);
                                if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value323;
                                __freed_obj__ = 0;
                                while(_while_condtional37=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional37) {
                                    multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1576),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value324=parse_type(info,(_Bool)0,(_Bool)0)))));
                                    generics_type_215=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_216=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_217=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value324;
                                    __freed_obj__ = 0;
                                    if(_if_conditional353=!err_217,                                    __freed_obj__ = 0, 
                                    _if_conditional353) {
                                        __result118__ = __result_obj__ = (come_save_stackframe("05function4.c", 1577), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value328=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value327=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1577))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value326=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value325=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1577)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                        if(generics_type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_216 && !__freed_obj__) { var_name_216 = come_decrement_ref_count(var_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                                        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                                        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value325;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value326);
                                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value326;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value327);
                                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value327;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value328);
                                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[3] = right_value328;
                                        __freed_obj__ = 0;
                                        return __result118__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1580))->mGenericsTypes, "05function4.c", 1580)),(struct sType*)come_increment_ref_count(generics_type_215));
                                    __freed_obj__ = 0;
                                    if(_if_conditional354=*((struct sInfo*)come_null_check(info, "05function4.c", 1596))->p==44,                                    __freed_obj__ = 0, 
                                    _if_conditional354) {
                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1583))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional355=*((struct sInfo*)come_null_check(info, "05function4.c", 1596))->p==62,                                        __freed_obj__ = 0, 
                                        _if_conditional355) {
                                            ((struct sInfo*)come_null_check(info, "05function4.c", 1587))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            if(generics_type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_216 && !__freed_obj__) { var_name_216 = come_decrement_ref_count(var_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __freed_obj__ = 0;
                                            __result119__ = __result_obj__ = (come_save_stackframe("05function4.c", 1594), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value332=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value331=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1594))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value330=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value329=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1594)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                            if(generics_type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_216 && !__freed_obj__) { var_name_216 = come_decrement_ref_count(var_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                                            if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                                            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value329;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
                                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value330;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
                                            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value331;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value332);
                                            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value332;
                                            __freed_obj__ = 0;
                                            return __result119__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(generics_type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_216 && !__freed_obj__) { var_name_216 = come_decrement_ref_count(var_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional356=is_contained_generics_class(type_158,info),                                __freed_obj__ = 0, 
                                _if_conditional356) {
                                    __dec_obj139=type_158;
                                    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=solve_generics(type_158,((struct sInfo*)come_null_check(info, "05function4.c", 1599))->generics_type,info))));
                                    if(__dec_obj139) { come_call_finalizer(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value333;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional357=!output_generics_struct(type_158,type_158,info),                                    __freed_obj__ = 0, 
                                    _if_conditional357) {
                                        new_name_218=(char*)come_increment_ref_count(((char*)(right_value334=create_generics_name(type_158,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value334;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1605))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1605))->sline,new_name_218);
                                        __freed_obj__ = 0;
                                        exit(7);
                                        __freed_obj__ = 0;
                                        if(new_name_218 && !__freed_obj__) { new_name_218 = come_decrement_ref_count(new_name_218, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1610))->mConstant=((struct sType*)come_null_check(type_158, "05function4.c", 1610))->mConstant||constant_109;
                                __freed_obj__ = 0;
                                __dec_obj140=((struct sType*)come_null_check(type_158, "05function4.c", 1611))->mAlignas;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1611))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1612))->mComeMemCore=((struct sType*)come_null_check(type_158, "05function4.c", 1612))->mComeMemCore||come_mem_core__125;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1613))->mRegister=register__113;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1614))->mUnsigned=((struct sType*)come_null_check(type_158, "05function4.c", 1614))->mUnsigned||unsigned__114;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1615))->mVolatile=volatile__112;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1616))->mStatic=((struct sType*)come_null_check(type_158, "05function4.c", 1616))->mStatic||static__110;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1617))->mExtern=((struct sType*)come_null_check(type_158, "05function4.c", 1617))->mExtern||extern__123;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1618))->mInline=((struct sType*)come_null_check(type_158, "05function4.c", 1618))->mInline||inline__124;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1619))->mRestrict=((struct sType*)come_null_check(type_158, "05function4.c", 1619))->mRestrict||restrict__118;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1620))->mLongLong=((struct sType*)come_null_check(type_158, "05function4.c", 1620))->mLongLong||long_long_116;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1621))->mLong=((struct sType*)come_null_check(type_158, "05function4.c", 1621))->mLong||long__115;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1622))->mShort=((struct sType*)come_null_check(type_158, "05function4.c", 1622))->mShort||short__117;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1623))->mPointerNum+=pointer_num_154;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional358=struct__119,                                __freed_obj__ = 0, 
                                _if_conditional358) {
                                    klass_219=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1627),((struct optional$2sClasspbool*)(right_value335=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1627))->classes,type_name_108)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value335;
                                    __freed_obj__ = 0;
                                    if(_if_conditional359=klass_219==((void*)0)&&*((struct sInfo*)come_null_check(info, "05function4.c", 1632))->p!=60,                                    __freed_obj__ = 0, 
                                    _if_conditional359) {
                                        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1630))->classes, "05function4.c", 1630)),(char*)come_increment_ref_count(type_name_108),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value349=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value348=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1630)))),type_name_108,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                                        if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value348;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value349);
                                        if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value349;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj141=type_158;
                                type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1634)))),type_name_108,(_Bool)0,info))));
                                if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value350;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value351);
                                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value351;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1636))->mConstant=((struct sType*)come_null_check(type_158, "05function4.c", 1636))->mConstant||constant_109;
                                __freed_obj__ = 0;
                                __dec_obj142=((struct sType*)come_null_check(type_158, "05function4.c", 1637))->mAlignas;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1637))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__126);
                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1638))->mComeMemCore=((struct sType*)come_null_check(type_158, "05function4.c", 1638))->mComeMemCore||come_mem_core__125;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1639))->mRegister=register__113;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1640))->mUnsigned=((struct sType*)come_null_check(type_158, "05function4.c", 1640))->mUnsigned||unsigned__114;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1641))->mVolatile=volatile__112;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1642))->mStatic=((struct sType*)come_null_check(type_158, "05function4.c", 1642))->mStatic||static__110;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1643))->mExtern=((struct sType*)come_null_check(type_158, "05function4.c", 1643))->mExtern||extern__123;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1644))->mInline=((struct sType*)come_null_check(type_158, "05function4.c", 1644))->mInline||inline__124;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1645))->mRestrict=((struct sType*)come_null_check(type_158, "05function4.c", 1645))->mRestrict||restrict__118;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1646))->mLongLong=((struct sType*)come_null_check(type_158, "05function4.c", 1646))->mLongLong||long_long_116;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1647))->mLong=((struct sType*)come_null_check(type_158, "05function4.c", 1647))->mLong||long__115;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1648))->mShort=((struct sType*)come_null_check(type_158, "05function4.c", 1648))->mShort||short__117;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_158, "05function4.c", 1649))->mPointerNum+=pointer_num_154;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional47=*((struct sInfo*)come_null_check(info, "05function4.c", 1666))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional47) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1655))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1660))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional413=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1664))->mNoSolvedGenericsType, "05function4.c", 1664))->v1,                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1662))->mNoSolvedGenericsType, "05function4.c", 1662))->v1, "05function4.c", 1662))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional414=*((struct sInfo*)come_null_check(info, "05function4.c", 1676))->p==37,                    __freed_obj__ = 0, 
                    _if_conditional414) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1667))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1670))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional415=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1674))->mNoSolvedGenericsType, "05function4.c", 1674))->v1,                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1672))->mNoSolvedGenericsType, "05function4.c", 1672))->v1, "05function4.c", 1672))->mHeap=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional416=*((struct sInfo*)come_null_check(info, "05function4.c", 1687))->p==38,                    __freed_obj__ = 0, 
                    _if_conditional416) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1677))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1680))->mNoHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional417=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1685))->mNoSolvedGenericsType, "05function4.c", 1685))->v1,                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1683))->mNoSolvedGenericsType, "05function4.c", 1683))->v1, "05function4.c", 1683))->mHeap=(_Bool)0;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional418=*((struct sInfo*)come_null_check(info, "05function4.c", 1693))->p==63,                    __freed_obj__ = 0, 
                    _if_conditional418) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1688))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1691))->mNullValue=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional419=*((struct sInfo*)come_null_check(info, "05function4.c", 1700))->p==124,                    __freed_obj__ = 0, 
                    _if_conditional419) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1694))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1697))->mNoCallingDestructor=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional48=*((struct sInfo*)come_null_check(info, "05function4.c", 1715))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional48) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1703))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1708))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional420=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1713))->mNoSolvedGenericsType, "05function4.c", 1713))->v1,                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1711))->mNoSolvedGenericsType, "05function4.c", 1711))->v1, "05function4.c", 1711))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional421=parse_multiple_type&&*((struct sInfo*)come_null_check(info, "05function4.c", 1756))->p==44,                    __freed_obj__ = 0, 
                    _if_conditional421) {
                        types_266=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value353=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value352=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1716))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value352;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value353);
                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value353;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_266, "05function4.c", 1718)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value354=sType_clone(type_158)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value354);
                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value354;
                        __freed_obj__ = 0;
                        while(_while_condtional49=*((struct sInfo*)come_null_check(info, "05function4.c", 1733))->p==44,                        __freed_obj__ = 0, 
                        _while_condtional49) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1721))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1724),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value355=parse_type(info,(_Bool)0,(_Bool)0)))));
                            type2_267=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_268=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_269=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value355;
                            __freed_obj__ = 0;
                            if(_if_conditional422=!err_269,                            __freed_obj__ = 0, 
                            _if_conditional422) {
                                __result144__ = __result_obj__ = (come_save_stackframe("05function4.c", 1727), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value359=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value358=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1727))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value357=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value356=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1727)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                if(type2_267 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_268 && !__freed_obj__) { name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_266 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                                if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value356;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
                                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value357;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value358);
                                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value358;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value359);
                                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value359;
                                __freed_obj__ = 0;
                                return __result144__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_266, "05function4.c", 1730)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_clone(type2_267)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value360);
                            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value360;
                            __freed_obj__ = 0;
                            if(type2_267 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_268 && !__freed_obj__) { name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        num_tuples_270=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(types_266, "05function4.c", 1733)));
                        __freed_obj__ = 0;
                        __dec_obj143=type_158;
                        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735)))),((char*)(right_value362=xsprintf("tuple%d",num_tuples_270))),(_Bool)0,info))));
                        if(__dec_obj143) { come_call_finalizer(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value361);
                        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value361;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value362);
                        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value362;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value363);
                        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value363;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1736))->mPointerNum++;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_158, "05function4.c", 1737))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        for(
                        o2_saved_271=(struct list$1sTypeph*)come_increment_ref_count((types_266)),it_272=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_271), "05function4.c", 1743))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA9=                        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_271), "05function4.c", 1743))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA9;                        it_272=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_271), "05function4.c", 1743))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1740))->mGenericsTypes, "05function4.c", 1740)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(it_272)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value364;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_271 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional423=is_contained_generics_class(type_158,info),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            __dec_obj144=type_158;
                            type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value365=solve_generics(type_158,((struct sInfo*)come_null_check(info, "05function4.c", 1744))->generics_type,info))));
                            if(__dec_obj144) { come_call_finalizer(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value365;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional424=!output_generics_struct(type_158,type_158,info),                            __freed_obj__ = 0, 
                            _if_conditional424) {
                                new_name_273=(char*)come_increment_ref_count(((char*)(right_value366=create_generics_name(type_158,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value366;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_273);
                                __freed_obj__ = 0;
                                exit(9);
                                __freed_obj__ = 0;
                                if(new_name_273 && !__freed_obj__) { new_name_273 = come_decrement_ref_count(new_name_273, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(types_266 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional425=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional425) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional426=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1764))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1760))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional427=*((struct sInfo*)come_null_check(info, "05function4.c", 1781))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            __dec_obj145=var_name_159;
                            var_name_159=(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(""))));
                            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value367;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional428=anonymous_name_128,                            __freed_obj__ = 0, 
                            _if_conditional428) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_274++;
                                __freed_obj__ = 0;
                                __dec_obj146=var_name_159;
                                var_name_159=(char*)come_increment_ref_count(((char*)(right_value368=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_274))));
                                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value368;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional429=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1781))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1781))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional429) {
                                    __dec_obj147=var_name_159;
                                    var_name_159=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1773),((struct optional$2charphbool*)(right_value369=parse_word(info))))));
                                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value369;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_275++;
                                    __freed_obj__ = 0;
                                    __dec_obj148=var_name_159;
                                    var_name_159=(char*)come_increment_ref_count(((char*)(right_value370=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_275))));
                                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value370;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional430=var_name_between_brace_164&&*((struct sInfo*)come_null_check(info, "05function4.c", 1786))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1782))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional431=*((struct sInfo*)come_null_check(info, "05function4.c", 1797))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional431) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1787))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_276=((struct sInfo*)come_null_check(info, "05function4.c", 1790))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1791))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value371;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1793))->no_comma=no_comma_276;
                            __freed_obj__ = 0;
                            __dec_obj149=((struct sType*)come_null_check(type_158, "05function4.c", 1795))->mSizeNum;
                            ((struct sType*)come_null_check(type_158, "05function4.c", 1795))->mSizeNum=(struct sNode*)come_increment_ref_count(node_277);
                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_277 && !__freed_obj__) { node_277 = come_decrement_ref_count(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional50=*((struct sInfo*)come_null_check(info, "05function4.c", 1823))->p==91,    __freed_obj__ = 0, 
    _while_condtional50) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1802))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        if(_if_conditional432=*((struct sInfo*)come_null_check(info, "05function4.c", 1815))->p==93,        __freed_obj__ = 0, 
        _if_conditional432) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1809))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_158, "05function4.c", 1812))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value372;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_158, "05function4.c", 1818))->mArrayNum, "05function4.c", 1818)),(struct sNode*)come_increment_ref_count(node_278));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        optional$2intbool_value((come_push_stackframe("05function4.c", 1821),((struct optional$2intbool*)(right_value373=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value373);
        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value373;
        __freed_obj__ = 0;
        if(node_278 && !__freed_obj__) { node_278 = come_decrement_ref_count(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    asm_name_279=(char*)come_increment_ref_count(((char*)(right_value374=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value374;
    __freed_obj__ = 0;
    __dec_obj150=((struct sType*)come_null_check(type_158, "05function4.c", 1825))->mAsmName;
    ((struct sType*)come_null_check(type_158, "05function4.c", 1825))->mAsmName=(char*)come_increment_ref_count(asm_name_279);
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional433=exception__111,    __freed_obj__ = 0, 
    _if_conditional433) {
        type2_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value375=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1830)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value375;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value376);
        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value376;
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_280, "05function4.c", 1831))->mGenericsTypes, "05function4.c", 1831)),(struct sType*)come_increment_ref_count(type_158));
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_280, "05function4.c", 1832))->mGenericsTypes, "05function4.c", 1832)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value378=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value377=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1832)))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value377);
        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value377;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value378);
        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value378;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_280, "05function4.c", 1834))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_280, "05function4.c", 1835))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_280, "05function4.c", 1837))->mException=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional434=!is_contained_generics_class(type2_280,info),        __freed_obj__ = 0, 
        _if_conditional434) {
            if(_if_conditional435=!output_generics_struct(type2_280,type2_280,info),            __freed_obj__ = 0, 
            _if_conditional435) {
                err_msg(info,"invalid exception definition");
                __freed_obj__ = 0;
                __result145__ = __result_obj__ = (come_save_stackframe("05function4.c", 1842), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value382=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value381=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1842))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value380=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value379=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1842)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(type2_280 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
                if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_279 && !__freed_obj__) { asm_name_279 = come_decrement_ref_count(asm_name_279, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value379;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value380);
                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value380;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value381);
                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value381;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value382);
                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value382;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result146__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value386=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value385=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1846)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value384=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value383=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1846)))),(struct sType*)come_increment_ref_count(type2_280),(char*)come_increment_ref_count(var_name_159),(_Bool)1)))),(_Bool)1)));
        if(type2_280 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
        if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_279 && !__freed_obj__) { asm_name_279 = come_decrement_ref_count(asm_name_279, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value383);
        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value383;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value384);
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value384;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value385);
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value385;
        __freed_obj__ = 0;
        return __result146__;
        __freed_obj__ = 0;
        if(type2_280 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value390=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value389=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1849)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value388=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value387=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1849)))),(struct sType*)come_increment_ref_count(type_158),(char*)come_increment_ref_count(var_name_159),(_Bool)1)))),(_Bool)1)));
    if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_279 && !__freed_obj__) { asm_name_279 = come_decrement_ref_count(asm_name_279, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value387);
    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value387;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value388);
    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value388;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value389;
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(type_name_108 && !__freed_obj__) { type_name_108 = come_decrement_ref_count(type_name_108, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__126 && !__freed_obj__) { alignas__126 = come_decrement_ref_count(alignas__126, ((struct sNode*)alignas__126)->finalize, ((struct sNode*)alignas__126)->_protocol_obj, 0, 0, 0); } 
    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_159 && !__freed_obj__) { var_name_159 = come_decrement_ref_count(var_name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_279 && !__freed_obj__) { asm_name_279 = come_decrement_ref_count(asm_name_279, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
struct sType* __dec_obj56;
void* right_value138;
char* __dec_obj57;
struct tuple3$3sTypephcharphbool* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
                                __dec_obj56=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1841))->v1;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(v1))));
                                if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value137;
                                __freed_obj__ = 0;
                                __dec_obj57=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1842))->v2;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(v2))));
                                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
                                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value138;
                                __freed_obj__ = 0;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                                __freed_obj__ = 0;
                                __result73__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result73__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3sTypephcharphbool* __dec_obj58;
struct optional$2tuple3$3sTypephcharphboolphbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj58=((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(v1);
                                if(__dec_obj58) { come_call_finalizer(tuple3$3sTypephcharphbool_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result74__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result74__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional225=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional225) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional226=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional226) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_179;
unsigned int hash_180;
unsigned int it_181;
_Bool _while_condtional34;
_Bool _if_conditional308;
void* right_value237;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional309;
void* right_value238;
void* right_value239;
struct optional$2sTypepbool* __result85__;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value240;
void* right_value241;
struct optional$2sTypepbool* __result86__;
void* right_value242;
void* right_value243;
struct optional$2sTypepbool* __result87__;
void* right_value244;
void* right_value245;
struct optional$2sTypepbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_179, 0, sizeof(struct sType*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&it_181, 0, sizeof(unsigned int));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_179,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                hash_180=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_181=hash_180;
                __freed_obj__ = 0;
                while(_while_condtional34=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional34) {
                    if(_if_conditional308=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_181],                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        if(_if_conditional309=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value237=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_181], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237),
                        (right_value237 && right_value237 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value237, 
                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            __result85__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value239=optional$2sTypepbool_initialize((struct optional$2sTypepbool*)come_increment_ref_count(((struct optional$2sTypepbool*)(right_value238=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1592))->items[it_181],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value238;
                            __freed_obj__ = 0;
                            return __result85__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_181++;
                        __freed_obj__ = 0;
                        if(_if_conditional310=it_181>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional310) {
                            it_181=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional311=it_181==hash_180,                            __freed_obj__ = 0, 
                            _if_conditional311) {
                                __result86__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sTypepbool*)(right_value241=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value240=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1601))),default_value_179,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value240;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
                                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value241;
                                __freed_obj__ = 0;
                                return __result86__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result87__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sTypepbool*)(right_value243=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value242=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1605))),default_value_179,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value242;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value243;
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result88__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sTypepbool*)(right_value245=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value244=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1609))),default_value_179,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value244;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value245;
                __freed_obj__ = 0;
                return __result88__;
                __freed_obj__ = 0;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result84__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result84__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
struct sType* default_value_182;
struct sType* __result89__;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_182, 0, sizeof(struct sType*));
                if(_if_conditional312=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional312) {
                    __freed_obj__ = 0;
                    memset(&default_value_182,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result89__ = __result_obj__ = default_value_182;
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
                }
                else {
                    __result90__ = __result_obj__ = ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_185;
_Bool _for_condtionalA3;
_Bool _if_conditional318;
_Bool __result98__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_185, 0, sizeof(char*));
                    for(
                    it_185=list$1charph_begin(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA3=                    !list$1charph_end(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA3;                    it_185=list$1charph_next(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional318=string_operator_equals(it_185,item),                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            __result98__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result98__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result99__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result99__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional314;
char* result_183;
char* __result91__;
_Bool _if_conditional315;
char* __result92__;
char* result_184;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                        if(_if_conditional314=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional314) {
                            __freed_obj__ = 0;
                            memset(&result_183,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result91__ = __result_obj__ = result_183;
                            __freed_obj__ = 0;
                            return __result91__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional315=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional315) {
                            __result92__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_184,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = result_184;
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result94__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional316;
char* result_186;
char* __result95__;
_Bool _if_conditional317;
char* __result96__;
char* result_187;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                        if(_if_conditional316=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional316) {
                            __freed_obj__ = 0;
                            memset(&result_186,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result95__ = __result_obj__ = result_186;
                            __freed_obj__ = 0;
                            return __result95__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional317=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            __result96__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result96__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_187,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result97__ = __result_obj__ = result_187;
                        __freed_obj__ = 0;
                        return __result97__;
                        __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result100__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result100__;
                        __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
struct list_item$1charph* it_189;
int i_190;
_Bool _while_condtional35;
_Bool _if_conditional321;
void* right_value249;
void* right_value250;
struct optional$2charphbool* __result101__;
char* default_value_191;
void* right_value251;
void* right_value252;
struct optional$2charphbool* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_189, 0, sizeof(struct list_item$1charph*));
memset(&i_190, 0, sizeof(int));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&default_value_191, 0, sizeof(char*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
                            if(_if_conditional320=position<0,                            __freed_obj__ = 0, 
                            _if_conditional320) {
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_189=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                            __freed_obj__ = 0;
                            i_190=0;
                            __freed_obj__ = 0;
                            while(_while_condtional35=it_189!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional35) {
                                if(_if_conditional321=position==i_190,                                __freed_obj__ = 0, 
                                _if_conditional321) {
                                    __result101__ = __result_obj__ = ((struct optional$2charphbool*)(right_value250=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value249=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_189, "./comelang2.h", 742))->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value249;
                                    __freed_obj__ = 0;
                                    return __result101__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_189=((struct list_item$1charph*)come_null_check(it_189, "./comelang2.h", 744))->next;
                                __freed_obj__ = 0;
                                i_190++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_191,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result102__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value252=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value251=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_191),(_Bool)0))));
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value251;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
                            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value252;
                            __freed_obj__ = 0;
                            return __result102__;
                            __freed_obj__ = 0;
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional323;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_192;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result103__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_192, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                if(_if_conditional323=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional323) {
                    __freed_obj__ = 0;
                    memset(&default_value_192,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                    __freed_obj__ = 0;
                    __result103__ = __result_obj__ = default_value_192;
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
                }
                else {
                    __result104__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result104__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value264;
struct sType* __dec_obj112;
struct tuple1$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value264, 0, sizeof(void*));
                __dec_obj112=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(v1))));
                if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value264;
                __freed_obj__ = 0;
                __result105__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result105__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1841))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1842))->v2=v2;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                            __freed_obj__ = 0;
                            __result107__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result107__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __dec_obj126;
struct optional$2tuple3$3voidpvoidpboolphbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj126=((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(v1);
                            if(__dec_obj126) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result108__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result108__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional333=self!=((void*)0)&&((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional333) {
                                    if(((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional334=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional334) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional335=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional335) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_211;
unsigned int hash_212;
unsigned int it_213;
_Bool _while_condtional36;
_Bool _if_conditional347;
void* right_value308;
struct optional$2boolbool* __exception_result_var_b6;
_Bool _if_conditional348;
void* right_value309;
void* right_value310;
struct optional$2sClasspbool* __result111__;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value311;
void* right_value312;
struct optional$2sClasspbool* __result112__;
void* right_value313;
void* right_value314;
struct optional$2sClasspbool* __result113__;
void* right_value315;
void* right_value316;
struct optional$2sClasspbool* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_211, 0, sizeof(struct sClass*));
memset(&hash_212, 0, sizeof(unsigned int));
memset(&it_213, 0, sizeof(unsigned int));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
                                    __freed_obj__ = 0;
                                    memset(&default_value_211,0,sizeof(struct sClass*));
                                    __freed_obj__ = 0;
                                    hash_212=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
                                    __freed_obj__ = 0;
                                    it_213=hash_212;
                                    __freed_obj__ = 0;
                                    while(_while_condtional36=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional36) {
                                        if(_if_conditional347=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_213],                                        __freed_obj__ = 0, 
                                        _if_conditional347) {
                                            if(_if_conditional348=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b6=((struct optional$2boolbool*)(right_value308=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_213], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b6)),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308),
                                            (right_value308 && right_value308 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value308, 
                                            __freed_obj__ = 0, 
                                            _if_conditional348) {
                                                __result111__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value310=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value309=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_213],(_Bool)1)));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                                                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value309;
                                                __freed_obj__ = 0;
                                                return __result111__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            it_213++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional349=it_213>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional349) {
                                                it_213=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional350=it_213==hash_212,                                                __freed_obj__ = 0, 
                                                _if_conditional350) {
                                                    __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value312=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value311=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_211,(_Bool)0))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                                                    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value311;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
                                                    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value312;
                                                    __freed_obj__ = 0;
                                                    return __result112__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __result113__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value314=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value313=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_211,(_Bool)0))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                                            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value313;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
                                            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value314;
                                            __freed_obj__ = 0;
                                            return __result113__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result114__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value316=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value315=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_211,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value315;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value316);
                                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value316;
                                    __freed_obj__ = 0;
                                    return __result114__;
                                    __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                                    __freed_obj__ = 0;
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                                    __freed_obj__ = 0;
                                                    __result110__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result110__;
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
_Bool _if_conditional351;
struct sClass* default_value_214;
struct sClass* __result115__;
struct sClass* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_214, 0, sizeof(struct sClass*));
                                    if(_if_conditional351=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional351) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_214,0,sizeof(struct sClass*));
                                        __freed_obj__ = 0;
                                        __result115__ = __result_obj__ = default_value_214;
                                        __freed_obj__ = 0;
                                        return __result115__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result116__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result116__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional360;
unsigned int hash_239;
unsigned int it_240;
_Bool _while_condtional41;
_Bool _if_conditional378;
void* right_value342;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool same_key_exist_257;
char* it2_260;
_Bool _for_condtionalA8;
void* right_value344;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct map$2charphsClassph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_239, 0, sizeof(unsigned int));
memset(&it_240, 0, sizeof(unsigned int));
memset(&right_value342, 0, sizeof(void*));
memset(&same_key_exist_257, 0, sizeof(_Bool));
memset(&it2_260, 0, sizeof(char*));
memset(&right_value344, 0, sizeof(void*));
                                            if(_if_conditional360=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional360) {
                                                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            hash_239=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
                                            __freed_obj__ = 0;
                                            it_240=hash_239;
                                            __freed_obj__ = 0;
                                            while(_while_condtional41=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional41) {
                                                if(_if_conditional378=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_240],                                                __freed_obj__ = 0, 
                                                _if_conditional378) {
                                                    if(_if_conditional379=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a3=((struct optional$2boolbool*)(right_value342=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_240], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a3)),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342),
                                                    (right_value342 && right_value342 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value342, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional379) {
                                                        if(_if_conditional380=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional380) {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_240]);
                                                            __freed_obj__ = 0;
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_240] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_240] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_240], (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_240]=(char*)come_increment_ref_count(key);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_240]);
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_240]=key;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional400=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional400) {
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_240] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_240], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_240]=(struct sClass*)come_increment_ref_count(item);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_240]=item;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        break;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    it_240++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional401=it_240>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                                                    __freed_obj__ = 0, 
                                                    _if_conditional401) {
                                                        it_240=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional402=it_240==hash_239,                                                        __freed_obj__ = 0, 
                                                        _if_conditional402) {
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_240]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional403=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional403) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_240]=(char*)come_increment_ref_count(key);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_240]=key;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional404=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional404) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_240]=(struct sClass*)come_increment_ref_count(item);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_240]=item;
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
                                            same_key_exist_257=(_Bool)0;
                                            __freed_obj__ = 0;
                                            for(
                                            it2_260=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            _for_condtionalA8;                                            it2_260=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            0                                            ){
                                                if(_if_conditional409=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a5=((struct optional$2boolbool*)(right_value344=string_equals(((char*)come_null_check(it2_260, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344),
                                                (right_value344 && right_value344 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value344, 
                                                __freed_obj__ = 0, 
                                                _if_conditional409) {
                                                    same_key_exist_257=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional410=!same_key_exist_257,                                            __freed_obj__ = 0, 
                                            _if_conditional410) {
                                                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result143__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result143__;
                                            __freed_obj__ = 0;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_220;
void* right_value336;
char** keys_221;
void* right_value337;
struct sClass** items_222;
void* right_value338;
_Bool* item_existance_225;
int len_226;
char* it_229;
_Bool _for_condtionalA7;
struct sClass* default_value_232;
void* right_value340;
struct sClass* it2_235;
unsigned int hash_236;
int n_237;
_Bool _while_condtional40;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct sClass* default_value_238;
void* right_value341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_220, 0, sizeof(int));
memset(&right_value336, 0, sizeof(void*));
memset(&keys_221, 0, sizeof(char**));
memset(&right_value337, 0, sizeof(void*));
memset(&items_222, 0, sizeof(struct sClass**));
memset(&right_value338, 0, sizeof(void*));
memset(&item_existance_225, 0, sizeof(_Bool*));
memset(&len_226, 0, sizeof(int));
memset(&it_229, 0, sizeof(char*));
memset(&default_value_232, 0, sizeof(struct sClass*));
memset(&right_value340, 0, sizeof(void*));
memset(&it2_235, 0, sizeof(struct sClass*));
memset(&hash_236, 0, sizeof(unsigned int));
memset(&n_237, 0, sizeof(int));
memset(&default_value_238, 0, sizeof(struct sClass*));
memset(&right_value341, 0, sizeof(void*));
                                                    size_220=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                                    __freed_obj__ = 0;
                                                    keys_221=(char**)come_increment_ref_count(((char**)(right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_220)), "./comelang2.h", 1370))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                                                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value336;
                                                    __freed_obj__ = 0;
                                                    items_222=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value337=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_220)), "./comelang2.h", 1371))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value337);
                                                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value337;
                                                    __freed_obj__ = 0;
                                                    item_existance_225=(_Bool*)come_increment_ref_count(((_Bool*)(right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_220)), "./comelang2.h", 1372))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value338);
                                                    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value338;
                                                    __freed_obj__ = 0;
                                                    len_226=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    it_229=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA7;                                                    it_229=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        __freed_obj__ = 0;
                                                        memset(&default_value_232,0,sizeof(struct sClass*));
                                                        __freed_obj__ = 0;
                                                        it2_235=((struct sClass*)(right_value340=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_229,default_value_232)));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                                                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value340;
                                                        __freed_obj__ = 0;
                                                        hash_236=string_get_hash_key(((char*)come_null_check(it_229, "./comelang2.h", 1380)))%size_220;
                                                        __freed_obj__ = 0;
                                                        n_237=hash_236;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional40=(_Bool)1,                                                        __freed_obj__ = 0, 
                                                        _while_condtional40) {
                                                            if(_if_conditional375=item_existance_225[n_237],                                                            __freed_obj__ = 0, 
                                                            _if_conditional375) {
                                                                n_237++;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional376=n_237>=size_220,                                                                __freed_obj__ = 0, 
                                                                _if_conditional376) {
                                                                    n_237=0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional377=n_237==hash_236,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional377) {
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
                                                                item_existance_225[n_237]=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                keys_221[n_237]=it_229;
                                                                __freed_obj__ = 0;
                                                                __freed_obj__ = 0;
                                                                items_222[n_237]=((struct sClass*)(right_value341=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_229,default_value_238)));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                                                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value341;
                                                                __freed_obj__ = 0;
                                                                len_226++;
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_221;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_222;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_225;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_220;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_226;
                                                    __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional361=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional361) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional362=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional362) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional366=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional366) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_223;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_223=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional38=it_223!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional38) {
                                                                    prev_it_224=it_223;
                                                                    __freed_obj__ = 0;
                                                                    it_223=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_223, "./comelang2.h", 172))->next;
                                                                    __freed_obj__ = 0;
                                                                    if(prev_it_224 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_224, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional363=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional363) {
                                                                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional364=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional364) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional365=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional365) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional367;
char* result_227;
char* __result120__;
_Bool _if_conditional368;
char* __result121__;
char* result_228;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_227, 0, sizeof(char*));
memset(&result_228, 0, sizeof(char*));
                                                        if(_if_conditional367=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional367) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_227,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result120__ = __result_obj__ = result_227;
                                                            __freed_obj__ = 0;
                                                            return __result120__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional368=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional368) {
                                                            __result121__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                                            __freed_obj__ = 0;
                                                            return __result121__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_228,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result122__ = __result_obj__ = result_228;
                                                        __freed_obj__ = 0;
                                                        return __result122__;
                                                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result123__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result123__;
                                                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
char* result_230;
char* __result124__;
_Bool _if_conditional370;
char* __result125__;
char* result_231;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_230, 0, sizeof(char*));
memset(&result_231, 0, sizeof(char*));
                                                        if(_if_conditional369=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional369) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_230,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result124__ = __result_obj__ = result_230;
                                                            __freed_obj__ = 0;
                                                            return __result124__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional370=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional370) {
                                                            __result125__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                                            __freed_obj__ = 0;
                                                            return __result125__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_231,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result126__ = __result_obj__ = result_231;
                                                        __freed_obj__ = 0;
                                                        return __result126__;
                                                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_233;
unsigned int it_234;
_Bool _while_condtional39;
_Bool _if_conditional371;
void* right_value339;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional372;
struct sClass* __result127__;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct sClass* __result128__;
struct sClass* __result129__;
struct sClass* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_233, 0, sizeof(unsigned int));
memset(&it_234, 0, sizeof(unsigned int));
memset(&right_value339, 0, sizeof(void*));
                                                            hash_233=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                                            __freed_obj__ = 0;
                                                            it_234=hash_233;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional39=(_Bool)1,                                                            __freed_obj__ = 0, 
                                                            _while_condtional39) {
                                                                if(_if_conditional371=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_234],                                                                __freed_obj__ = 0, 
                                                                _if_conditional371) {
                                                                    if(_if_conditional372=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a2=((struct optional$2boolbool*)(right_value339=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_234], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339),
                                                                    (right_value339 && right_value339 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value339, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional372) {
                                                                        __result127__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_234];
                                                                        __freed_obj__ = 0;
                                                                        return __result127__;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it_234++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional373=it_234>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional373) {
                                                                        it_234=0;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional374=it_234==hash_233,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional374) {
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
void* __right_value_freed_obj[1024];
int it2_241;
struct list_item$1charp* it_242;
_Bool _while_condtional42;
void* right_value343;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional381;
struct list$1charp* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_241, 0, sizeof(int));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&right_value343, 0, sizeof(void*));
                                                                it2_241=0;
                                                                __freed_obj__ = 0;
                                                                it_242=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional42=it_242!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional42) {
                                                                    if(_if_conditional381=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a4=((struct optional$2boolbool*)(right_value343=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_242, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a4)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343),
                                                                    (right_value343 && right_value343 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value343, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional381) {
                                                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_241,it2_241+1);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it2_241++;
                                                                    __freed_obj__ = 0;
                                                                    it_242=((struct list_item$1charp*)come_null_check(it_242, "./comelang2.h", 500))->next;
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
int tmp_243;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
struct list$1charp* __result131__;
_Bool _if_conditional388;
_Bool _if_conditional389;
struct list_item$1charp* it_246;
int i_247;
_Bool _while_condtional44;
_Bool _if_conditional390;
struct list_item$1charp* prev_it_248;
_Bool _if_conditional391;
_Bool _if_conditional392;
struct list_item$1charp* it_249;
int i_250;
_Bool _while_condtional45;
_Bool _if_conditional393;
_Bool _if_conditional394;
struct list_item$1charp* prev_it_251;
struct list_item$1charp* it_252;
struct list_item$1charp* head_prev_it_253;
struct list_item$1charp* tail_it_254;
int i_255;
_Bool _while_condtional46;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct list_item$1charp* prev_it_256;
_Bool _if_conditional398;
_Bool _if_conditional399;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_243, 0, sizeof(int));
memset(&it_246, 0, sizeof(struct list_item$1charp*));
memset(&i_247, 0, sizeof(int));
memset(&prev_it_248, 0, sizeof(struct list_item$1charp*));
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&i_250, 0, sizeof(int));
memset(&prev_it_251, 0, sizeof(struct list_item$1charp*));
memset(&it_252, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_253, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_254, 0, sizeof(struct list_item$1charp*));
memset(&i_255, 0, sizeof(int));
memset(&prev_it_256, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional382=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional382) {
                                                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional383=tail<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional383) {
                                                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional384=head>tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional384) {
                                                                                tmp_243=tail;
                                                                                __freed_obj__ = 0;
                                                                                tail=head;
                                                                                __freed_obj__ = 0;
                                                                                head=tmp_243;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional385=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional385) {
                                                                                head=0;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional386=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional386) {
                                                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional387=head==tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional387) {
                                                                                __result131__ = __result_obj__ = self;
                                                                                __freed_obj__ = 0;
                                                                                return __result131__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional388=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional388) {
                                                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional389=head==0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional389) {
                                                                                    it_246=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    i_247=0;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional44=it_246!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional44) {
                                                                                        if(_if_conditional390=i_247<tail,                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional390) {
                                                                                            prev_it_248=it_246;
                                                                                            __freed_obj__ = 0;
                                                                                            it_246=((struct list_item$1charp*)come_null_check(it_246, "./comelang2.h", 543))->next;
                                                                                            __freed_obj__ = 0;
                                                                                            i_247++;
                                                                                            __freed_obj__ = 0;
                                                                                            if(prev_it_248 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional391=i_247==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional391) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_246;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_246=((struct list_item$1charp*)come_null_check(it_246, "./comelang2.h", 556))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_247++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional392=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional392) {
                                                                                        it_249=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        i_250=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional45=it_249!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional45) {
                                                                                            if(_if_conditional393=i_250==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional393) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_249, "./comelang2.h", 566))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional394=i_250>=head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional394) {
                                                                                                prev_it_251=it_249;
                                                                                                __freed_obj__ = 0;
                                                                                                it_249=((struct list_item$1charp*)come_null_check(it_249, "./comelang2.h", 573))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_250++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_249=((struct list_item$1charp*)come_null_check(it_249, "./comelang2.h", 581))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_250++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        it_252=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        head_prev_it_253=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        tail_it_254=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        i_255=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional46=it_252!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional46) {
                                                                                            if(_if_conditional395=i_255==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional395) {
                                                                                                head_prev_it_253=((struct list_item$1charp*)come_null_check(it_252, "./comelang2.h", 596))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional396=i_255==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional396) {
                                                                                                tail_it_254=it_252;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional397=i_255>=head&&i_255<tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional397) {
                                                                                                prev_it_256=it_252;
                                                                                                __freed_obj__ = 0;
                                                                                                it_252=((struct list_item$1charp*)come_null_check(it_252, "./comelang2.h", 606))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_255++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_256 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_252=((struct list_item$1charp*)come_null_check(it_252, "./comelang2.h", 614))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_255++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional398=head_prev_it_253!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional398) {
                                                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_253, "./comelang2.h", 620))->next=tail_it_254;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional399=tail_it_254!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional399) {
                                                                                            ((struct list_item$1charp*)come_null_check(tail_it_254, "./comelang2.h", 623))->prev=head_prev_it_253;
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
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_244;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_245;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_245, 0, sizeof(struct list_item$1charp*));
                                                                                    it_244=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional43=it_244!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional43) {
                                                                                        prev_it_245=it_244;
                                                                                        __freed_obj__ = 0;
                                                                                        it_244=((struct list_item$1charp*)come_null_check(it_244, "./comelang2.h", 479))->next;
                                                                                        __freed_obj__ = 0;
                                                                                        if(prev_it_245 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_245, (void*)0, (void*)0, 0, 0, 0, 0); }
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional405;
char* result_258;
char* __result135__;
_Bool _if_conditional406;
char* __result136__;
char* result_259;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_258, 0, sizeof(char*));
memset(&result_259, 0, sizeof(char*));
                                                if(_if_conditional405=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional405) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_258,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result135__ = __result_obj__ = result_258;
                                                    __freed_obj__ = 0;
                                                    return __result135__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                                                __freed_obj__ = 0;
                                                if(_if_conditional406=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional406) {
                                                    __result136__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                                    __freed_obj__ = 0;
                                                    return __result136__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_259,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result137__ = __result_obj__ = result_259;
                                                __freed_obj__ = 0;
                                                return __result137__;
                                                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional407;
char* result_261;
char* __result139__;
_Bool _if_conditional408;
char* __result140__;
char* result_262;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_261, 0, sizeof(char*));
memset(&result_262, 0, sizeof(char*));
                                                if(_if_conditional407=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional407) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_261,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result139__ = __result_obj__ = result_261;
                                                    __freed_obj__ = 0;
                                                    return __result139__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                                __freed_obj__ = 0;
                                                if(_if_conditional408=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional408) {
                                                    __result140__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                                    __freed_obj__ = 0;
                                                    return __result140__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_262,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result141__ = __result_obj__ = result_262;
                                                __freed_obj__ = 0;
                                                return __result141__;
                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional411;
void* right_value345;
struct list_item$1charp* litem_263;
_Bool _if_conditional412;
void* right_value346;
struct list_item$1charp* litem_264;
void* right_value347;
struct list_item$1charp* litem_265;
struct list$1charp* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value345, 0, sizeof(void*));
memset(&litem_263, 0, sizeof(struct list_item$1charp*));
memset(&right_value346, 0, sizeof(void*));
memset(&litem_264, 0, sizeof(struct list_item$1charp*));
memset(&right_value347, 0, sizeof(void*));
memset(&litem_265, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional411=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional411) {
                                                        litem_263=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value345=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value345;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 274))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 275))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 276))->item=item;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_263;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_263;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional412=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional412) {
                                                            litem_264=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value346=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                                                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value346;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_264, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_264, "./comelang2.h", 285))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_264, "./comelang2.h", 286))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_264;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_264;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_265=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value347=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                                                            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value347;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_265, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_265, "./comelang2.h", 295))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_265, "./comelang2.h", 296))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_265;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_265;
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

